//
//  GameObjects.cpp
//  
//
//  Created by Joe Meli on 4/29/16.
//  Copyright © 2016 Joe Meli. All rights reserved.
//

#include "GameObjects.hpp"
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include <random>
/**
 *  Implementation for The Card Class
 *
 *  Implemented Both Setters
 *
 *  Implemented cardToString
 */
const std::string SuitArray[4]={"♡Heart♥","♢Diamonds♦","♧Club♣","♤Spade♠"};
const std::string  FaceArray[13]={"Two  ","Three","Four ","Five ","Six  ","Seven","Eight","Nine ","Ten  ","Jack ","Queen","King ","Ace  "};
const std::string  PossibleHAnds[10]={"High Card","One Pair","Two Pair","Three of A Kind","Straight","Flush","Full House","Four of a Kind","Straight Flush","Royal Flush"};

bool Card::setsuitVal(int suitVal_){
    suitVal = suitVal_;
    return true;
}
bool Card::setfaceVal(int faceVal_){
    faceVal = faceVal_;
    return true;
}
std::string Card::cardToString(){
    std::string toReturn;
    int face = this->getfaceVal();
    int suit = this->getsuitVal();
    std::string tempSFace;
    std::string tempSSuit;

    for(int i =0; i <=4; i++){
        if (suit == i+1) {
            tempSSuit = SuitArray[i];
        }
    }
    for(int j=0; j <=13; j++){
        if (face == j+1) {
                tempSFace = FaceArray[j];

        }
    }
    toReturn = tempSFace + " of " + tempSSuit ;
     return toReturn;
}

//********* END of Card Implementation ***********///
/**
 *  Implementation for the Deck Class
 *
 *  Implementation for the Deck Construtor
 *
 *  Implementation for the printDeck Fucntion
 *
 *  Implementation for the Shuffle Fucntion
 *
 *  Implementation for the dealCard fucntion
 *
 *  Implementation for the moreCard Fucntion
 */
DeckOfCards::DeckOfCards(){

    for(int i = 1; i <= 4;i++){
        for(int j = 1; j<=13;j++){
            Card arg(i,j);
            deck.push_back(arg);
        }
    }
}
void DeckOfCards:: printDeck(){
    std::vector<Card>arg=this->deck;

    std::vector<Card>::iterator it;
    int i = 1;
    for(it = arg.begin(); it != arg.end(); ++it){
        Card arg = *it;
        std::cout<<i<<": "<< arg.cardToString()<< std::endl;
        i++;
    }

}
bool DeckOfCards:: shuffleDeck(){
    unsigned long size = this->deck.size();
        for (int k = 0; k < size; k++) {
            int r = k + rand() % (size - k);
            std::swap(this->deck[k], this->deck[r]);
        }
    return true;
}
std::string DeckOfCards:: dealCard(std::vector<Card>arg){
    Card toReturn;
    unsigned long size = this->deck.size();
    if (size <= 0){
        throw "Invalid Operation. Deck to Small";
    }else{
        toReturn = this->deck.front();
        arg.push_back(this->deck.front());
        this->deck.erase(this->deck.begin());

    }
    return toReturn.cardToString();
}

bool DeckOfCards:: moreCards(){
    bool toReturn;
    if(this->deck.empty()){
        std::cout<<"The deck has "<< this->deck.size()<< " cards left."<<std::endl;
        toReturn = false;
    }
    else{
        std::cout<<"The deck has "<< this->deck.size()<< " cards left."<<std::endl;
        toReturn = true;
    }

    return toReturn;
}
unsigned long DeckOfCards:: size(){
    return this->deck.size();
}
//**********END of DeckOfCards Implementation*********//

/**
 *  Implementation for the Hand Class
 *
 *  Implementation for the Hand Construtor
 *
 *  Implementation for the getHand Fucntion
 *
 *  Implementation for the DealNewHAnd Fucntion
 *
 *  Implementation for the sortHand fucntion
 *
 *  Impelemtation for the Evaluate hand
 *
 */
Hand::Hand(DeckOfCards *arg){
    Card temp;
    for(int i = 0; i < 5;i++){
        temp = arg->deck.front();
        myCards.push_back(temp);
        arg->deck.erase(arg->deck.begin());
    }
     this->sortHand();
    Rank = -1;
}
void Hand:: getHand(){
    std::vector<Card>temp = this->myCards;
     std::vector<Card>::iterator it;
    Card toReturn;
    for(it = this->myCards.begin(); it != this->myCards.end(); ++it){
        toReturn = *it;
        std::cout<< toReturn.cardToString() << std::endl;
    }
     this->sortHand();

}
void Hand:: DealNewHand(DeckOfCards *arg){
    Card temp;
    this->myCards.clear();

    for(int j= 0; j <5; j++){
        temp = arg->deck.front();
        myCards.push_back(temp);
        arg->deck.erase(arg->deck.begin());
    }
    this->sortHand();
}
// Comparison for the stable sort fucntion
bool usingfaceVal(Card i, Card j){

    return(i.getfaceVal() < j.getfaceVal());
}

bool Hand:: sortHand(){
    std::stable_sort(this->myCards.begin(), this->myCards.end(),usingfaceVal);
    return true;
}
void Hand:: DiplayFaceDownCards(){
    std::vector<Card>::iterator it;
    for(it = this->myCards.begin(); it != this->myCards.end(); ++it){
        std::cout<< "🃏"<< std::endl;
    }
}
int Hand:: evaluateHand(){
    int toReturn;
    Card Card1,Card2,Card3,Card4,Card5;
    int Hearts =1, Diamonds =2, Clubs=3, Spades =4;
    int StraightFlushCheck,fourOfAKindCheck, Fullhouse1Check, Fullhouse1Check2, Flush, ThreeOfaKindCheck, Pair1, Pair2, onePair, HighCard;
    unsigned long size = this->myCards.size();
    for(int i=0; i < size;i++){
        if(i == 0){Card1 = this->myCards[i];}
        if(i == 1){Card2 = this->myCards[i];}
        if(i == 2){Card3 = this->myCards[i];}
        if(i == 3){Card4 = this->myCards[i];}
        if(i == 4){Card5 = this->myCards[i];}
    }
    do{
    //Check Royal Flush
    // Needs to have a Ace King Queen Jack
        if(Card1.faceVal == 13 && Card2.faceVal==12 && Card3.faceVal ==11&& Card4.faceVal==10 && Card5.faceVal== 9){
            if(Card1.suitVal == Hearts && Card2.suitVal==Hearts && Card3.suitVal ==Hearts&& Card4.suitVal==Hearts && Card5.suitVal== Hearts){
               this->Rank = 10;
                break;
            }
            if(Card1.suitVal == Diamonds && Card2.suitVal==Diamonds && Card3.suitVal ==Diamonds&& Card4.suitVal==Diamonds && Card5.suitVal== Diamonds){
                this->Rank = 10;
                break;
            }
            if(Card1.suitVal == Clubs&& Card2.suitVal==Clubs && Card3.suitVal ==Clubs&& Card4.suitVal==Clubs && Card5.suitVal== Clubs){
                this->Rank = 10;
                break;
            }
            if(Card1.suitVal == Spades&& Card2.suitVal==Spades && Card3.suitVal ==Spades&& Card4.suitVal==Spades && Card5.suitVal== Spades){
                this->Rank = 10;
                break;
            }

        }
        // This checks for a Staight Flush any straight will all five cards of the same suit
        StraightFlushCheck = Card1.faceVal;
        if(Card1.faceVal == StraightFlushCheck && Card2.faceVal==StraightFlushCheck+1 && Card3.faceVal ==StraightFlushCheck+2 && Card4.faceVal==StraightFlushCheck+3 && Card5.faceVal== StraightFlushCheck+4){
            if(Card1.suitVal == Hearts && Card2.suitVal==Hearts && Card3.suitVal ==Hearts&& Card4.suitVal==Hearts && Card5.suitVal== Hearts){
                this->Rank = 9;
                break;
            }
            if(Card1.suitVal == Diamonds && Card2.suitVal==Diamonds && Card3.suitVal ==Diamonds&& Card4.suitVal==Diamonds && Card5.suitVal== Diamonds){
                this->Rank = 9;
                break;
            }
            if(Card1.suitVal == Clubs&& Card2.suitVal==Clubs && Card3.suitVal ==Clubs&& Card4.suitVal==Clubs && Card5.suitVal== Clubs){
                this->Rank = 9;
                break;
            }
            if(Card1.suitVal == Spades&& Card2.suitVal==Spades && Card3.suitVal ==Spades&& Card4.suitVal==Spades && Card5.suitVal== Spades){
                this->Rank = 9;
                break;
            }
        }
        // Check four of a kind
        fourOfAKindCheck =Card1.faceVal;
        if(Card1.faceVal == fourOfAKindCheck && Card2.faceVal==fourOfAKindCheck && Card3.faceVal ==fourOfAKindCheck && Card4.faceVal==fourOfAKindCheck){
            this->Rank = 8;
            break;
        }
        fourOfAKindCheck = Card2.faceVal;
        if(Card2.faceVal == fourOfAKindCheck && Card3.faceVal==fourOfAKindCheck && Card4.faceVal ==fourOfAKindCheck && Card5.faceVal==fourOfAKindCheck){
            this->Rank = 8;
            break;
        }
        // check full house
        Fullhouse1Check = Card1.faceVal;
        Fullhouse1Check2 = Card4.faceVal;
        if(Card1.faceVal == Fullhouse1Check && Card2.faceVal==Fullhouse1Check){
            if(Card3.faceVal == Fullhouse1Check){
                if(Card4.faceVal == Fullhouse1Check2 && Card5.faceVal==Fullhouse1Check2){
                   this->Rank =7;
                    break;
                }
            }
            if(Card3.faceVal == Fullhouse1Check2){
                if(Card4.faceVal == Fullhouse1Check2 && Card5.faceVal==Fullhouse1Check2){
                    this->Rank= 7;
                    break;
                }
            }
        }
        //Check Flush, All Cards have the Same Suit
        if(Card1.suitVal == Hearts && Card2.suitVal==Hearts && Card3.suitVal ==Hearts&& Card4.suitVal==Hearts && Card5.suitVal== Hearts){
            this->Rank = 6;
            break;
        }
        if(Card1.suitVal == Diamonds && Card2.suitVal==Diamonds && Card3.suitVal ==Diamonds&& Card4.suitVal==Diamonds && Card5.suitVal== Diamonds){
            this->Rank = 6;
            break;
        }
        if(Card1.suitVal == Clubs&& Card2.suitVal==Clubs && Card3.suitVal ==Clubs&& Card4.suitVal==Clubs && Card5.suitVal== Clubs){
            this->Rank = 6;
            break;
        }
        if(Card1.suitVal == Spades&& Card2.suitVal==Spades && Card3.suitVal ==Spades&& Card4.suitVal==Spades && Card5.suitVal== Spades){
            this->Rank = 6;
            break;
        }
        // Check if Straight all 5 cards are in order , dont need to be same suits
        Flush = Card1.faceVal;
        if(Card1.faceVal == Flush && Card2.faceVal==Flush+1 && Card3.faceVal ==Flush+2 && Card4.faceVal==Flush+3 && Card5.faceVal== Flush+4){
            this->Rank = 5;
            break;
        }
        //Check if three of a kind
        ThreeOfaKindCheck = Card1.faceVal;
        if(Card1.faceVal == ThreeOfaKindCheck && Card2.faceVal==ThreeOfaKindCheck && Card3.faceVal == ThreeOfaKindCheck){
            this->Rank = 4;
            break;
        }
        ThreeOfaKindCheck = Card2.faceVal;
        if(Card2.faceVal == ThreeOfaKindCheck && Card3.faceVal==ThreeOfaKindCheck && Card4.faceVal == ThreeOfaKindCheck){
            this->Rank = 4;
            break;
        }
        ThreeOfaKindCheck = Card3.faceVal;
        if(Card3.faceVal == ThreeOfaKindCheck && Card4.faceVal==ThreeOfaKindCheck && Card5.faceVal == ThreeOfaKindCheck){
            this->Rank = 4;
            break;
        }
        //Check if two pair
        Pair1 = Card1.faceVal;
        Pair2 = Card3.faceVal;
        if(Card1.faceVal == Pair1 && Card2.faceVal==Pair1&&Card3.faceVal == Pair2 && Card4.faceVal == Pair2){
                this->Rank = 3;
                break;
            }
        if(Card1.faceVal == Pair1 && Card2.faceVal==Pair1&&Card4.faceVal == Pair2 && Card5.faceVal == Pair2){
                this->Rank = 3;
                break;
            }
        Pair1 = Card2.faceVal;
        Pair2 = Card4.faceVal;
        if(Card2.faceVal == Pair1 && Card3.faceVal==Pair1 && Card4.faceVal == Pair2 && Card5.faceVal == Pair2){
            this->Rank = 3;
            break;
        }
        // Check one Pair
        onePair = Card1.faceVal;
        if(Card1.faceVal == onePair && Card2.faceVal==onePair){
            this->Rank = 2;
            break;
        }
        onePair=Card2.faceVal;
        if(Card2.faceVal == onePair && Card3.faceVal==onePair){
            this->Rank = 2;
            break;
        }
        onePair = Card3.faceVal;
        if(Card3.faceVal == onePair && Card4.faceVal==onePair){
            this->Rank = 2;
            break;
        }
        onePair = Card4.faceVal;
        if(Card4.faceVal == onePair && Card5.faceVal==onePair){
            this->Rank = 2;
            break;
        }else{
            HighCard = Card5.faceVal;
            this->Rank= HighCard+10;
            break;
        }
    }while(this->Rank == -1);
    toReturn = this->Rank;
    return toReturn;
}
// Converts the Ranks assigned to each to a String value to print in English
void Hand::RankToString(){
    int rank_ = this->Rank;
    if( this->Rank > 10){
        int temp = this->Rank - 10;
        std::string n;
            if(temp == 10){
                n ="Jack";
                std::cout<< "High Card of " << n << std::endl;
            }else if(temp == 11){
                n ="Queen";
                std::cout<< "High Card of " << n << std::endl;
            }else if(temp == 12){
                n ="King";
                std::cout<< "High Card of " << n << std::endl;
            }else if(temp == 12){
                n ="King";
                std::cout<< "High Card of " << n << std::endl;
            }else if(temp ==13){
                n="Ace";
                std::cout<< "High Card of " << n << std::endl;
            }else{
                std::cout<< "High Card of " << temp << std::endl;
            }
        }
    if(rank_ == 10){
        std::cout<< PossibleHAnds[9]<<std::endl;
    }else if (rank_== 9){
        std::cout<< PossibleHAnds[8]<<std::endl;
    }else if (rank_== 8){
        std::cout<< PossibleHAnds[7]<<std::endl;
    }else if (rank_== 7){
        std::cout<< PossibleHAnds[6]<<std::endl;
    }else if (rank_== 6){
        std::cout<< PossibleHAnds[5]<<std::endl;
    }else if (rank_== 5){
        std::cout<< PossibleHAnds[4]<<std::endl;
    }else if (rank_== 4){
        std::cout<< PossibleHAnds[3]<<std::endl;
    }else if (rank_== 3){
        std::cout<< PossibleHAnds[2]<<std::endl;
    }else if (rank_== 2){
        std::cout<< PossibleHAnds[1]<<std::endl;
    }

}
  void  Hand::  WhoWon(Hand Dealer, Hand Player){
    int DealerHand = Dealer.Rank;
    int PlayerHand = Player.Rank;
    if(DealerHand >10 || PlayerHand > 10){
        if(DealerHand >10 && PlayerHand >10 ){
            if(DealerHand > PlayerHand){
                std::cout<< "Dealer Won" << std:: endl;
            }
            else if(DealerHand < PlayerHand){
                std::cout<< "Player Won" << std::endl;
            }
        }
    if(DealerHand < 10 && PlayerHand > 10){
            std::cout<< "Dealer Won" << std:: endl;
        }
        if(PlayerHand <10 && DealerHand > 10){
            std::cout<< "Player Won" << std::endl;
        }
    }else if(DealerHand > PlayerHand){
        std::cout<< "Dealer Won" << std:: endl;

    }else if( PlayerHand > DealerHand){
        std::cout<< "Player Won" << std::endl;
    }

      if (PlayerHand == DealerHand){
        std:: cout<< "ITS A TIE"<< std::endl;
    }

}

void Hand:: DealerDraw(DeckOfCards *arg){
    int temp = rand() % 3+1;
    for(int i=0; i<temp; i++){
        int temp2 = rand()%5+1;
        std::swap(arg->deck.front(),this->myCards[temp2]);

        arg->deck.erase(arg->deck.begin());
    }
    std::cout<< "Dealer drew " << temp << " card(s)" << std::endl;
}
void Hand::UserDraw(DeckOfCards *arg){
    int temp = 0;
    std::cout<< "Please Just Type a number 0-3"<<std::endl;
    std::cout<< "How many cards would you like to exchange?: ";
    std::cin >> temp;
    if(temp > 3 || temp < 0){
        std::cout<< "Only a number 0-3 of Cards to draw "<<std::endl;
    	std::cout<< "How many cards would you like to exchange?: ";
    	std::cin >> temp;
    }
    std::cout<<std::endl;
        for(int i=0; i<temp; i++){
            int temp2= 0;
            std::cout<< "Please Just Type a number 1-5 on the Cards you would like to select"<<std::endl;
            std::cout<< "Which card would you like to get rid of?: ";
            std::cin>> temp2;
          	if(temp2 > 5 || temp2 < 1){
        		std::cout<< "Only a number 1-5 of Cards to draw "<<std::endl;
    			std::cout<< "Which Card would you like to select to exchange?: ";
    			std::cin >>temp2;
    		}
    	std::cout<<std::endl;
    	std::swap(arg->deck.front(),this->myCards[temp2-1]);
        arg->deck.erase(arg->deck.begin());
        }
    std::cout<< "Player Drew " << temp << " card(s)" << std::endl;
}

//**********END of HAND Implementation*********//
