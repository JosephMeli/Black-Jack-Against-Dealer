//
//  Driver.cpp
//  Final_Project_Jmeli
//
//  Created by Joe Meli on 4/29/16.
//  Copyright © 2016 Joe Meli. All rights reserved.
//

#include <stdio.h>
#include "GameObjects.hpp"
#include <vector>

int main(){
    std::vector<Card>forProblem1;
//********* Probelem 1 Solution **************//
    //Create one Deck
    DeckOfCards myDeck;
    //Shuffle Deck
    myDeck.shuffleDeck();
    // Deal all of the Cards in the Deck
    myDeck.moreCards();
    for(int i =0; i <52; i++){
        std::cout<<myDeck.dealCard(forProblem1)<<std::endl;
    }
    // Show there are no Cards left in the Deck
    myDeck.moreCards();
    std::cout<< "********* END OF SOLUTION  to Problem 1*****" << std::endl<<std:: endl;
    
    
    std::cout<< "*********  SOLUTION  to Problem 2-5 *****" <<std:: endl;
    int NumberOfHands = 0;
    DeckOfCards gameDeck1;
    gameDeck1.shuffleDeck();
    Hand Player(&gameDeck1);
    Hand Dealer(&gameDeck1);
    do{
        std:: cout << "***NEW HAND***" << std:: endl;
        std:: cout << "Dealers Hand:" << std:: endl;
        Dealer.DiplayFaceDownCards();
        Dealer.evaluateHand();
        Dealer.DealerDraw(&gameDeck1);
        Dealer.evaluateHand();
        std:: cout << "Players Hand" << std:: endl;
        Player.getHand();
        Player.UserDraw(&gameDeck1);
        Player.evaluateHand();
        Player.getHand();
        std::cout<< "Dealer Had ";
        Dealer.RankToString();
        std::cout<< "Player Had ";
        Player.RankToString();
        Player.WhoWon(Dealer,Player);
        NumberOfHands++;
        std::cout<< "Have played "<< NumberOfHands<< " number of Hands"<<std::endl;
        if(gameDeck1.size() < 10){
            break;
        }
        gameDeck1.shuffleDeck();
        Player.DealNewHand(&gameDeck1);
        Dealer.DealNewHand(&gameDeck1);
        if(gameDeck1.size() < 6){
            break;
        }
    }while( gameDeck1.moreCards());
    
    std:: cout << "***NEW DECK***" << std:: endl;
    DeckOfCards gameDeck2;
    gameDeck2.shuffleDeck();
    Player.DealNewHand(&gameDeck2);
    Dealer.DealNewHand(&gameDeck2);
    do{
        std:: cout << "***NEW HAND***" << std:: endl;
        std:: cout << "Dealers Hand:" << std:: endl;
        Dealer.DiplayFaceDownCards();
        Dealer.evaluateHand();
        Dealer.DealerDraw(&gameDeck2);
        Dealer.evaluateHand();
        std:: cout << "Players Hand" << std:: endl;
        Player.getHand();
        Player.UserDraw(&gameDeck2);
        Player.evaluateHand();
        Player.getHand();
        std::cout<< "Dealer Had ";
        Dealer.RankToString();
        std::cout<< "Player Had ";
        Player.RankToString();
        Player.WhoWon(Dealer,Player);
        NumberOfHands++;
        std::cout<< "Have played "<< NumberOfHands<< " number of Hands"<<std::endl;
        if(gameDeck2.size() < 10){
            break;
        }
        gameDeck2.shuffleDeck();
        Player.DealNewHand(&gameDeck2);
        Dealer.DealNewHand(&gameDeck2);
        
        if(gameDeck2.size() < 6){
            break;
        }
    }while( gameDeck2.moreCards());
    
    std:: cout << "***NEW DECK***" << std:: endl;
    DeckOfCards gameDeck3;
    gameDeck3.shuffleDeck();
    Player.DealNewHand(&gameDeck3);
    Dealer.DealNewHand(&gameDeck3);
    do{
        std:: cout << "***NEW HAND***" << std:: endl;
        std:: cout << "Dealers Hand:" << std:: endl;
        Dealer.DiplayFaceDownCards();
        Dealer.evaluateHand();
        Dealer.DealerDraw(&gameDeck3);
        Dealer.evaluateHand();
        std:: cout << "Players Hand" << std:: endl;
        Player.getHand();
        Player.UserDraw(&gameDeck3);
        Player.evaluateHand();
        Player.getHand();
        std::cout<< "Dealer Had ";
        Dealer.RankToString();
        std::cout<< "Player Had ";
        Player.RankToString();
        Player.WhoWon(Dealer,Player);
        NumberOfHands++;
        std::cout<< "Have played "<< NumberOfHands<< " Hand(s)"<<std::endl;
        if(gameDeck3.size() < 10){
            break;
        }
        gameDeck3.shuffleDeck();
        Player.DealNewHand(&gameDeck3);
        Dealer.DealNewHand(&gameDeck3);
        if(gameDeck3.size() < 6){
            break;
        }
        
    }while( gameDeck3.moreCards());
    
    std:: cout << "***NEW DECK***" << std:: endl;
    DeckOfCards gameDeck4;
    gameDeck4.shuffleDeck();
    Player.DealNewHand(&gameDeck4);
    Dealer.DealNewHand(&gameDeck4);
    do{
        std:: cout << "***NEW HAND***" << std:: endl;
        std:: cout << "Dealers Hand:" << std:: endl;
        Dealer.DiplayFaceDownCards();
        Dealer.evaluateHand();
        Dealer.DealerDraw(&gameDeck4);
        Dealer.evaluateHand();
        std:: cout << "Players Hand" << std:: endl;
        Player.getHand();
        Player.UserDraw(&gameDeck4);
        Player.evaluateHand();
        Player.getHand();
        std::cout<< "Dealer Had ";
        Dealer.RankToString();
        std::cout<< "Player Had ";
        Player.RankToString();
        Player.WhoWon(Dealer,Player);
        NumberOfHands++;
        std::cout<< "Have played "<< NumberOfHands<< " number of Hands"<<std::endl;
        if(gameDeck4.size() < 10){
            break;
        }
        gameDeck4.shuffleDeck();
        Player.DealNewHand(&gameDeck4);
        Dealer.DealNewHand(&gameDeck4);
        if(gameDeck4.size() < 6){
            break;
        }
        
    }while( gameDeck4.moreCards());
    
    std:: cout << "***NEW DECK***" << std:: endl;
    DeckOfCards gameDeck5;
    gameDeck5.shuffleDeck();
    Player.DealNewHand(&gameDeck5);
    Dealer.DealNewHand(&gameDeck5);
    do{
        std:: cout << "***NEW HAND***" << std:: endl;
        std:: cout << "Dealers Hand:" << std:: endl;
        Dealer.DiplayFaceDownCards();
        Dealer.evaluateHand();
        Dealer.DealerDraw(&gameDeck5);
        Dealer.evaluateHand();
        std:: cout << "Players Hand" << std:: endl;
        Player.getHand();
        Player.UserDraw(&gameDeck5);
        Player.evaluateHand();
        Player.getHand();
        std::cout<< "Dealer Had ";
        Dealer.RankToString();
        std::cout<< "Player Had ";
        Player.RankToString();
        Player.WhoWon(Dealer,Player);
        NumberOfHands++;
        std::cout<< "Have played "<< NumberOfHands<< " number of Hands"<<std::endl;
        if(gameDeck5.size() < 10){
            break;
        }
        gameDeck5.shuffleDeck();
        Player.DealNewHand(&gameDeck5);
        Dealer.DealNewHand(&gameDeck5);
        if(gameDeck5.size() < 6){
            break;
        }
        
    }while( gameDeck5.moreCards());
    
    std:: cout << "***NEW DECK***" << std:: endl;
    DeckOfCards gameDeck6;
    gameDeck6.shuffleDeck();
    Player.DealNewHand(&gameDeck6);
    Dealer.DealNewHand(&gameDeck6);
    do{
        std:: cout << "***NEW HAND***" << std:: endl;
        std:: cout << "Dealers Hand:" << std:: endl;
        Dealer.DiplayFaceDownCards();
        Dealer.evaluateHand();
        Dealer.DealerDraw(&gameDeck6);
        Dealer.evaluateHand();
        std:: cout << "Players Hand" << std:: endl;
        Player.getHand();
        Player.UserDraw(&gameDeck6);
        Player.evaluateHand();
        Player.getHand();
        std::cout<< "Dealer Had ";
        Dealer.RankToString();
        std::cout<< "Player Had ";
        Player.RankToString();
        Player.WhoWon(Dealer,Player);
        NumberOfHands++;
        std::cout<< "Have played "<< NumberOfHands<< " number of Hands"<<std::endl;
        if(gameDeck6.size() < 10){
            break;
        }
        gameDeck6.shuffleDeck();
        Player.DealNewHand(&gameDeck6);
        Dealer.DealNewHand(&gameDeck6);
        if(gameDeck6.size() < 6){
            break;
        }
        
    }while(gameDeck6.moreCards());
    
    std:: cout << "***NEW DECK***" << std:: endl;
    DeckOfCards gameDeck7;
    gameDeck7.shuffleDeck();
    Player.DealNewHand(&gameDeck7);
    Dealer.DealNewHand(&gameDeck7);
    do{
        std:: cout << "***NEW HAND***" << std:: endl;
        std:: cout << "Dealers Hand:" << std:: endl;
        Dealer.DiplayFaceDownCards();
        Dealer.evaluateHand();
        Dealer.DealerDraw(&gameDeck7);
        Dealer.evaluateHand();
        std:: cout << "Players Hand" << std:: endl;
        Player.getHand();
        Player.UserDraw(&gameDeck7);
        Player.evaluateHand();
        Player.getHand();
        std::cout<< "Dealer Had ";
        Dealer.RankToString();
        std::cout<< "Player Had ";
        Player.RankToString();
        Player.WhoWon(Dealer,Player);
        NumberOfHands++;
        std::cout<< "Have played "<< NumberOfHands<< " number of Hands"<<std::endl;
        if(NumberOfHands ==20){
            return 0;
        }
        if(gameDeck7.size() < 10){
            break;
        }
        gameDeck7.shuffleDeck();
        Player.DealNewHand(&gameDeck7);
        Dealer.DealNewHand(&gameDeck7);
        if(gameDeck7.size() < 6){
            break;
        }
        
    }while(gameDeck7.moreCards());
    

    return 0;
}