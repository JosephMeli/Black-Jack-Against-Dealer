Joe Meli 
README FILE

Explantion On how my prgram works:
The Process of my Implementation is as follows. The Card Class is implemetned with two data types. A Suit and Face value both of type int, these values for a Card hold the representation for the rank two through Ace and the suit data type for the representation for hearts,spades,diamonds,clubs. The ranking of the suits has no meaning, due to the game of poker has no special meaning for the ranking. The Card Class has a set of getters and setter to get the data types. and then a toString fucntion which takes the values and matches them up with an array of strings that has the word values for the suits and faces.

After the Card class comes the DeckOfCards.
This class contains three  data types one being a vector that represetns the deck. One that is an into which represents the currentCard value on the top of the Deck. Then the last data type is another vector which holds the value of all the discarded cards in from play, or "already dealt". The Deck is intialized withe 52 different cards, that would be in a normal deck of playing cards. After that I implemented a print Deck fucntion which loops through the deck and uses the cardToSting to diplay the whole deck.The class also contain a Shuffle deck fucntion which iteratates through the deck and chooses a random value and a randome modulous value and swaps the two making it purely and truely random each time. The next function is a dealcard fucntion which deals onecard at a time from the top of the deck and then removes it from the deck vector. the last two fucntions are moreCards which return a bool value for if cards are left in the deck and a size fucntion which returns the size of a deck.

The class has implementation for hand. Hand has two data types one being a vector of 5 cards and then a integer for rank. Rank being rank of the possible hand. The fucntions  in Hand class are as follows a getHand() function which prints the hand on the screen. Then a get rank wihch returns the number of the rank and prints it to the screen. Then a DealNewHand which erases the values of the current hand and deals 5 new cards to the hand requesting a new one. then a sort funtion that will go through the vector using an iterator and using the sort vector fucntion from the vector STL it will sort it from lowest to highest value. after that an evaluate fucntion which manual checks every possible option for a winning hand in poker and then asignes a rank from 1-10 accordingly. then a DiplayFacedownCards fucntion which diplasys a vector and prints it with picture of the joker card making the player/user have no way to tell what the dealer has. Then a Rank to string which uses a static array and the rank from the hand to assign it a string value of the and prints it to the screen. then a whoWon fucntion which compares the two values and diplays the winner to the screen for the hand with the highest value. A dealer draw fucntion which randomly generates a numbr from 0 to three and then has the dealer swap out a randomly selected card in the hand. Then finally the user draw card fucntion which works the exact same as the dealer draw card fucntion, except the numbers are chosen by the user instead of being random.

 The results below show the output of the code for 20 hands.
 I attmpted to use the strategy of gettign more of the same
 or more of the same suit. This was the only stragtey given
 that a highcard hand is 94% more likeley than any other hand.

the driver code is basically the soltuion to problem one
then tthen a do while loop which contains one decks worth of hands
then that do while is called 5 more times with just a new deck each time.


BELOW IS THE OUT PUT FOR SOLUTIONS TO THE PROJECT
*******************************************************************
The deck has 52 cards left.
King  of ♡Heart♥
Nine  of ♢Diamonds♦
Ace   of ♢Diamonds♦
Ace   of ♤Spade♠
Ace   of ♧Club♣
Ace   of ♡Heart♥
King  of ♤Spade♠
Four  of ♢Diamonds♦
Two   of ♤Spade♠
Three of ♤Spade♠
Five  of ♢Diamonds♦
Jack  of ♤Spade♠
King  of ♢Diamonds♦
Five  of ♤Spade♠
Eight of ♤Spade♠
Seven of ♧Club♣
Queen of ♢Diamonds♦
Ten   of ♢Diamonds♦
Two   of ♢Diamonds♦
Queen of ♡Heart♥
Jack  of ♧Club♣
King  of ♧Club♣
Nine  of ♡Heart♥
Five  of ♡Heart♥
Eight of ♧Club♣
Jack  of ♡Heart♥
Six   of ♢Diamonds♦
Six   of ♧Club♣
Queen of ♧Club♣
Six   of ♡Heart♥
Queen of ♤Spade♠
Two   of ♡Heart♥
Seven of ♤Spade♠
Five  of ♧Club♣
Seven of ♢Diamonds♦
Nine  of ♧Club♣
Ten   of ♡Heart♥
Four  of ♤Spade♠
Three of ♢Diamonds♦
Nine  of ♤Spade♠
Ten   of ♤Spade♠
Two   of ♧Club♣
Three of ♡Heart♥
Six   of ♤Spade♠
Three of ♧Club♣
Eight of ♡Heart♥
Jack  of ♢Diamonds♦
Four  of ♧Club♣
Ten   of ♧Club♣
Four  of ♡Heart♥
Eight of ♢Diamonds♦
Seven of ♡Heart♥
The deck has 0 cards left.
********* END OF SOLUTION  to Problem 1*****

*********  SOLUTION  to Problem 2-5 *****
***NEW HAND***
Dealers Hand:
ð
ð
ð
ð
ð
Dealer drew 3 card(s)
Players Hand
Four  of ♡Heart♥
Five  of ♢Diamonds♦
Six   of ♡Heart♥
Nine  of ♢Diamonds♦
King  of ♤Spade♠
Please Just Type a number 0-3
How many cards would you like to exchange?: 0

Player Drew 0 card(s)
Four  of ♡Heart♥
Five  of ♢Diamonds♦
Six   of ♡Heart♥
Nine  of ♢Diamonds♦
King  of ♤Spade♠
Dealer Had One Pair
Player Had High Card of King
Dealer Won
Have played 1 number of Hands
The deck has 29 cards left.
***NEW HAND***
Dealers Hand:
ð
ð
ð
ð
ð
Dealer drew 2 card(s)
Players Hand
Eight of ♤Spade♠
Nine  of ♤Spade♠
Ten   of ♤Spade♠
King  of ♡Heart♥
Ace   of ♤Spade♠
Please Just Type a number 0-3
How many cards would you like to exchange?: 0

Player Drew 0 card(s)
Eight of ♤Spade♠
Nine  of ♤Spade♠
Ten   of ♤Spade♠
King  of ♡Heart♥
Ace   of ♤Spade♠
Dealer Had One Pair
Player Had High Card of Ace
Dealer Won
Have played 2 number of Hands
The deck has 17 cards left.
***NEW HAND***
Dealers Hand:
ð
ð
ð
ð
ð
Dealer drew 1 card(s)
Players Hand
Eight of ♧Club♣
Queen of ♢Diamonds♦
Queen of ♧Club♣
King  of ♧Club♣
Ace   of ♢Diamonds♦
Please Just Type a number 0-3
How many cards would you like to exchange?: 2

Please Just Type a number 1-5 on the Cards you would like to select
Which card would you like to get rid of?: 1

Please Just Type a number 1-5 on the Cards you would like to select
Which card would you like to get rid of?: 2

Player Drew 2 card(s)
Nine  of ♡Heart♥
Six   of ♢Diamonds♦
Queen of ♧Club♣
King  of ♧Club♣
Ace   of ♢Diamonds♦
Dealer Had One Pair
Player Had High Card of Ace
Dealer Won
Have played 3 number of Hands
***NEW DECK***
***NEW HAND***
Dealers Hand:
ð
ð
ð
ð
ð
Dealer drew 2 card(s)
Players Hand
Four  of ♧Club♣
Four  of ♢Diamonds♦
Ten   of ♤Spade♠
Queen of ♧Club♣
Ace   of ♡Heart♥
Please Just Type a number 0-3
How many cards would you like to exchange?: 3

Please Just Type a number 1-5 on the Cards you would like to select
Which card would you like to get rid of?: 1

Please Just Type a number 1-5 on the Cards you would like to select
Which card would you like to get rid of?: 4

Please Just Type a number 1-5 on the Cards you would like to select
Which card would you like to get rid of?: 5

Player Drew 3 card(s)
Three of ♧Club♣
Four  of ♢Diamonds♦
Ten   of ♤Spade♠
Seven of ♤Spade♠
Eight of ♡Heart♥
Dealer Had High Card of 1
Player Had High Card of 7
Player Won
Have played 4 number of Hands
The deck has 27 cards left.
***NEW HAND***
Dealers Hand:
ð
ð
ð
ð
ð
Dealer drew 3 card(s)
Players Hand
Seven of ♡Heart♥
Ten   of ♧Club♣
Queen of ♡Heart♥
Queen of ♢Diamonds♦
King  of ♧Club♣
Please Just Type a number 0-3
How many cards would you like to exchange?: 2

Please Just Type a number 1-5 on the Cards you would like to select
Which card would you like to get rid of?: 1

Please Just Type a number 1-5 on the Cards you would like to select
Which card would you like to get rid of?: 5

Player Drew 2 card(s)
Jack  of ♧Club♣
Ten   of ♧Club♣
Queen of ♡Heart♥
Queen of ♢Diamonds♦
King  of ♤Spade♠
Dealer Had High Card of 7
Player Had One Pair
Player Won
Have played 5 number of Hands
The deck has 12 cards left.
***NEW HAND***
Dealers Hand:
ð
ð
ð
ð
ð
Dealer drew 1 card(s)
Players Hand
Three of ♡Heart♥
Five  of ♤Spade♠
Seven of ♢Diamonds♦
Seven of ♧Club♣
Eight of ♧Club♣
Please Just Type a number 0-3
How many cards would you like to exchange?: 2

Please Just Type a number 1-5 on the Cards you would like to select
Which card would you like to get rid of?: 1

Please Just Type a number 1-5 on the Cards you would like to select
Which card would you like to get rid of?: 5

Player Drew 2 card(s)
Jack  of ♢Diamonds♦
Five  of ♤Spade♠
Seven of ♢Diamonds♦
Seven of ♧Club♣
Ace   of ♢Diamonds♦
Dealer Had One Pair
Player Had One Pair
ITS A TIE
Have played 6 number of Hands
***NEW DECK***
***NEW HAND***
Dealers Hand:
ð
ð
ð
ð
ð
Dealer drew 1 card(s)
Players Hand
Two   of ♤Spade♠
Seven of ♢Diamonds♦
Eight of ♤Spade♠
Jack  of ♧Club♣
King  of ♢Diamonds♦
Please Just Type a number 0-3
How many cards would you like to exchange?: 2

Please Just Type a number 1-5 on the Cards you would like to select
Which card would you like to get rid of?: 2

Please Just Type a number 1-5 on the Cards you would like to select
Which card would you like to get rid of?: 1

Player Drew 2 card(s)
Three of ♢Diamonds♦
Four  of ♧Club♣
Eight of ♤Spade♠
Jack  of ♧Club♣
King  of ♢Diamonds♦
Dealer Had One Pair
Player Had High Card of King
Dealer Won
Have played 7 Hand(s)
The deck has 29 cards left.
***NEW HAND***
Dealers Hand:
ð
ð
ð
ð
ð
Dealer drew 2 card(s)
Players Hand
Two   of ♢Diamonds♦
Four  of ♡Heart♥
Jack  of ♡Heart♥
Queen of ♡Heart♥
Ace   of ♤Spade♠
Please Just Type a number 0-3
How many cards would you like to exchange?: 3

Please Just Type a number 1-5 on the Cards you would like to select
Which card would you like to get rid of?: 2

Please Just Type a number 1-5 on the Cards you would like to select
Which card would you like to get rid of?: 1

Please Just Type a number 1-5 on the Cards you would like to select
Which card would you like to get rid of?: 5

Player Drew 3 card(s)
Five  of ♡Heart♥
King  of ♤Spade♠
Jack  of ♡Heart♥
Queen of ♡Heart♥
Queen of ♧Club♣
Dealer Had Two Pair
Player Had One Pair
Dealer Won
Have played 8 Hand(s)
The deck has 14 cards left.
***NEW HAND***
Dealers Hand:
ð
ð
ð
ð
ð
Dealer drew 1 card(s)
Players Hand
Two   of ♧Club♣
Eight of ♡Heart♥
Eight of ♧Club♣
Ten   of ♧Club♣
Queen of ♤Spade♠
Please Just Type a number 0-3
How many cards would you like to exchange?: 1

Please Just Type a number 1-5 on the Cards you would like to select
Which card would you like to get rid of?: 4

Player Drew 1 card(s)
Two   of ♧Club♣
Eight of ♡Heart♥
Eight of ♧Club♣
Jack  of ♤Spade♠
Queen of ♤Spade♠
Dealer Had High Card of 9
Player Had One Pair
Player Won
Have played 9 Hand(s)
***NEW DECK***
***NEW HAND***
Dealers Hand:
ð
ð
ð
ð
ð
Dealer drew 1 card(s)
Players Hand
Two   of ♢Diamonds♦
Five  of ♤Spade♠
Nine  of ♡Heart♥
Nine  of ♤Spade♠
Ten   of ♤Spade♠
Please Just Type a number 0-3
How many cards would you like to exchange?: 2

Please Just Type a number 1-5 on the Cards you would like to select
Which card would you like to get rid of?: 1

Please Just Type a number 1-5 on the Cards you would like to select
Which card would you like to get rid of?: 5

Player Drew 2 card(s)
Queen of ♡Heart♥
Five  of ♤Spade♠
Nine  of ♡Heart♥
Nine  of ♤Spade♠
Seven of ♤Spade♠
Dealer Had High Card of Ace
Player Had One Pair
Player Won
Have played 10 number of Hands
The deck has 29 cards left.
***NEW HAND***
Dealers Hand:
ð
ð
ð
ð
ð
Dealer drew 2 card(s)
Players Hand
Three of ♢Diamonds♦
Three of ♡Heart♥
Four  of ♧Club♣
Six   of ♤Spade♠
Eight of ♢Diamonds♦
Please Just Type a number 0-3
How many cards would you like to exchange?: 3

Please Just Type a number 1-5 on the Cards you would like to select
Which card would you like to get rid of?: 2

Please Just Type a number 1-5 on the Cards you would like to select
Which card would you like to get rid of?: 3

Please Just Type a number 1-5 on the Cards you would like to select
Which card would you like to get rid of?: 4

Player Drew 3 card(s)
Three of ♢Diamonds♦
Ace   of ♡Heart♥
Four  of ♢Diamonds♦
Five  of ♢Diamonds♦
Eight of ♢Diamonds♦
Dealer Had One Pair
Player Had High Card of 7
Dealer Won
Have played 11 number of Hands
The deck has 14 cards left.
***NEW HAND***
Dealers Hand:
ð
ð
ð
ð
ð
Dealer drew 2 card(s)
Players Hand
Two   of ♤Spade♠
Nine  of ♢Diamonds♦
Queen of ♧Club♣
Queen of ♢Diamonds♦
King  of ♢Diamonds♦
Please Just Type a number 0-3
How many cards would you like to exchange?: 1

Please Just Type a number 1-5 on the Cards you would like to select
Which card would you like to get rid of?: 1

Player Drew 1 card(s)
Ace   of ♤Spade♠
Nine  of ♢Diamonds♦
Queen of ♧Club♣
Queen of ♢Diamonds♦
King  of ♢Diamonds♦
Dealer Had High Card of King
Player Had One Pair
Player Won
Have played 12 number of Hands
***NEW DECK***
***NEW HAND***
Dealers Hand:
ð
ð
ð
ð
ð
Dealer drew 3 card(s)
Players Hand
Six   of ♤Spade♠
Ten   of ♢Diamonds♦
Jack  of ♧Club♣
King  of ♢Diamonds♦
King  of ♧Club♣
Please Just Type a number 0-3
How many cards would you like to exchange?: 1

Please Just Type a number 1-5 on the Cards you would like to select
Which card would you like to get rid of?: 2

Player Drew 1 card(s)
Six   of ♤Spade♠
Four  of ♧Club♣
Jack  of ♧Club♣
King  of ♢Diamonds♦
King  of ♧Club♣
Dealer Had High Card of Ace
Player Had One Pair
Player Won
Have played 13 number of Hands
The deck has 28 cards left.
***NEW HAND***
Dealers Hand:
ð
ð
ð
ð
ð
Dealer drew 3 card(s)
Players Hand
Two   of ♧Club♣
Eight of ♢Diamonds♦
Eight of ♧Club♣
Nine  of ♡Heart♥
Ten   of ♧Club♣
Please Just Type a number 0-3
How many cards would you like to exchange?: 0

Player Drew 0 card(s)
Two   of ♧Club♣
Eight of ♢Diamonds♦
Eight of ♧Club♣
Nine  of ♡Heart♥
Ten   of ♧Club♣
Dealer Had High Card of Queen
Player Had One Pair
Player Won
Have played 14 number of Hands
The deck has 15 cards left.
***NEW HAND***
Dealers Hand:
ð
ð
ð
ð
ð
Dealer drew 3 card(s)
Players Hand
Three of ♡Heart♥
Seven of ♤Spade♠
Eight of ♡Heart♥
Queen of ♧Club♣
King  of ♡Heart♥
Please Just Type a number 0-3
How many cards would you like to exchange?: 0

Player Drew 0 card(s)
Three of ♡Heart♥
Seven of ♤Spade♠
Eight of ♡Heart♥
Queen of ♧Club♣
King  of ♡Heart♥
Dealer Had High Card of Ace
Player Had High Card of King
Dealer Won
Have played 15 number of Hands
***NEW DECK***
***NEW HAND***
Dealers Hand:
ð
ð
ð
ð
ð
Dealer drew 3 card(s)
Players Hand
Five  of ♡Heart♥
Seven of ♤Spade♠
Ten   of ♤Spade♠
Queen of ♢Diamonds♦
King  of ♤Spade♠
Please Just Type a number 0-3
How many cards would you like to exchange?: 1

Please Just Type a number 1-5 on the Cards you would like to select
Which card would you like to get rid of?: 2

Player Drew 1 card(s)
Five  of ♡Heart♥
Two   of ♢Diamonds♦
Ten   of ♤Spade♠
Queen of ♢Diamonds♦
King  of ♤Spade♠
Dealer Had High Card of Jack
Player Had High Card of King
Player Won
Have played 16 number of Hands
The deck has 28 cards left.
***NEW HAND***
Dealers Hand:
ð
ð
ð
ð
ð
Dealer drew 3 card(s)
Players Hand
Seven of ♡Heart♥
Ten   of ♧Club♣
Ten   of ♢Diamonds♦
Jack  of ♤Spade♠
Queen of ♧Club♣
Please Just Type a number 0-3
How many cards would you like to exchange?: 3

Please Just Type a number 1-5 on the Cards you would like to select
Which card would you like to get rid of?: 1

Please Just Type a number 1-5 on the Cards you would like to select
Which card would you like to get rid of?: 2

Please Just Type a number 1-5 on the Cards you would like to select
Which card would you like to get rid of?: 2

Player Drew 3 card(s)
Eight of ♧Club♣
Jack  of ♧Club♣
Ten   of ♢Diamonds♦
Jack  of ♤Spade♠
Queen of ♧Club♣
Dealer Had Three of A Kind
Player Had High Card of Queen
Dealer Won
Have played 17 number of Hands
The deck has 12 cards left.
***NEW HAND***
Dealers Hand:
ð
ð
ð
ð
ð
Dealer drew 1 card(s)
Players Hand
Four  of ♡Heart♥
Five  of ♧Club♣
Nine  of ♤Spade♠
Queen of ♤Spade♠
Ace   of ♡Heart♥
Please Just Type a number 0-3
How many cards would you like to exchange?: 1

Please Just Type a number 1-5 on the Cards you would like to select
Which card would you like to get rid of?: 3

Player Drew 1 card(s)
Four  of ♡Heart♥
Five  of ♧Club♣
Eight of ♡Heart♥
Queen of ♤Spade♠
Ace   of ♡Heart♥
Dealer Had One Pair
Player Had High Card of Ace
Dealer Won
Have played 18 number of Hands
***NEW DECK***
***NEW HAND***
Dealers Hand:
ð
ð
ð
ð
ð
Dealer drew 3 card(s)
Players Hand
Two   of ♡Heart♥
Three of ♤Spade♠
Six   of ♡Heart♥
Eight of ♤Spade♠
Nine  of ♧Club♣
Please Just Type a number 0-3
How many cards would you like to exchange?: 0

Player Drew 0 card(s)
Two   of ♡Heart♥
Three of ♤Spade♠
Six   of ♡Heart♥
Eight of ♤Spade♠
Nine  of ♧Club♣
Dealer Had One Pair
Player Had High Card of 8
Dealer Won
Have played 19 number of Hands
The deck has 29 cards left.
***NEW HAND***
Dealers Hand:
ð
ð
ð
ð
ð
Dealer drew 3 card(s)
Players Hand
Three of ♡Heart♥
Seven of ♢Diamonds♦
Nine  of ♡Heart♥
Ten   of ♡Heart♥
King  of ♧Club♣
Please Just Type a number 0-3
How many cards would you like to exchange?: 1

Please Just Type a number 1-5 on the Cards you would like to select
Which card would you like to get rid of?: 2

Player Drew 1 card(s)
Three of ♡Heart♥
Seven of ♡Heart♥
Nine  of ♡Heart♥
Ten   of ♡Heart♥
King  of ♧Club♣
Dealer Had One Pair
Player Had High Card of King
Dealer Won
Have played 20 number of Hands
****************************************************************************
