//
//  GameObjects.hpp
//  
//
//  Created by Joe Meli on 4/29/16.
//  Copyright © 2016 Joe Meli. All rights reserved.
//

#ifndef GameObjects_hpp
#define GameObjects_hpp

#include <stdio.h>
#include "GameObjects.hpp"
#include <vector>
#include <iostream>
#include <string>

//*********** CARD CLASS **************//
class Card{
    friend class DeckOfCards; // The DOC(DeckOfCards) class needs to access Card but Card does not need to access DOC
    friend class Hand;
protected:
    //  two Data Members of Type to Represent Each Card
    int suitVal;
    int faceVal;
public:
    Card(){
        suitVal =1;
        faceVal =13;
    }
    /*Constructor:
        Takes in two ints reprsenting the face and suit values
        and uses them ti intialize the data memebers. */
    Card(int suitVal_, int faceVal_){
        suitVal = suitVal_;
        faceVal = faceVal_;
    }
    //Getters
    int getsuitVal()const{return suitVal;}
    int getfaceVal()const{return faceVal;}
        //Setter
    bool setsuitVal(int suitVal_);
    bool setfaceVal(int faceVal_);

    // Static Arrays
    //static const std::string SuitArray[4];
   // static const std::string  FaceArray[13];

    //ToString method to turn the Cards into Words like (Ace of Clubs)
    std::string cardToString();
};
//**************END OF CARD CLASS ****************//

//************** DECK OF CARDS CLASS ***************//
class DeckOfCards{
    friend class Game;// The Game class needs to access DOC(DeckOfCards) but DOC does not need to access Game
    friend class Hand;
protected:
    std::vector<Card>deck;
    int currentCard;
    //this is when a player wants a differnt card or the turn is over
    std::vector<Card>discardedCards;

public:
    // Default Constructor that will intilize all 52 for the Deck
    DeckOfCards();

    // This will print out all the cards in the Deck using the Card To string fucntion
    void printDeck();

    //shuffle fucntion thats shuffles the Cards  in the Deck. The shuffle algorithm will iterate through the vecror of Cards. For each Card, randomly selcts another in the decks and swaps the two Cards
    bool shuffleDeck();

    //Deal card function that deals the next Card from the Deck
    std::string dealCard(std::vector<Card>arg);
    //More cArds fucntion returns a bool if there are more cards in the Deck
    // will return true if there is still 1 card of the 52 left to Deal
    // will return false when all cards have been dealt
    bool moreCards();

    unsigned long size();
};
//*************** END OF DECK OF CARD CLASS *************//

//************** HAND CLASS **************//
class Hand{
protected:
    std::vector<Card>myCards;
    int Rank;
public:
    Hand(DeckOfCards *arg);
    // Getter
    void getHand();


    int getRank(){return Rank;}

    // setter
    void DealNewHand(DeckOfCards *arg);

    // sorts the hand first by Value of the face and then by the Suit
    bool sortHand();

   //static std::string const PossibleHAnds[10];

    int evaluateHand();

    void DiplayFaceDownCards();

    void RankToString();

  static  void  WhoWon(Hand Dealer,Hand Player);

    void DealerDraw(DeckOfCards *arg);
    void UserDraw(DeckOfCards *arg);

};

/************** END OF HAND CLASS ************/

#endif /* GameObjects_hpp */
