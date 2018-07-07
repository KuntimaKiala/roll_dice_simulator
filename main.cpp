
/*
Author : Kuntima
Description : An AI that simulates a roll dice between two persons, the first person first have ten six's is the winer
Date : 7/7/2018

*/


// importing the necessary libraries
#include <iostream>
#include <random>
#include <string>



using namespace std ;



int main(){


        //Initialization of necessary varibles
        string player1  ;       // the variable that will keep the name of the player 1
        int hit_player1  =  0; // the variable thas stores the number of hits of player 1
        string player2  ;      // the variable that will keep the name of the player 2
        int hit_player2 = 0 ;  // the variable thas stores the number of hits of player 2
        int dicevalue ;        // the value of the dice
        int conter = 0 ;      // the counter

        random_device device ;  // generate the seed
        mt19937_64 generator(device()) ; // generate the PseudoRandoNumberGenerator
        uniform_int_distribution<int> diceroll(1,6) ; //the distibuition that we will extract the random value



        cout << "Player 1, type your name Sir :" ; // Asking the name of player 1
        cin >> player1 ; // printing on the screen

        cout << "\nPlayer 2, type your name Sir :" ; //Asking thee name of player 2
        cin >> player2 ; // printing on the screen



        while ((hit_player1 < 2) and (hit_player2 < 2 ))  { // when hit_player1 or hit_player2 get biger than 2 break the loop



                if (conter%2==0) { // if the module is 0, player 2 plays
                	dicevalue = diceroll(generator) ; // the value of the dice roll for player 2
                	cout << player2 <<" rolled :" << dicevalue << endl ; // print the value played
                    if (dicevalue == 6){ // hit for player 6
                    hit_player2++ ; // stock the number of hits



                    }
                }
                if (conter%2!=0){ // if the module is 1, player 1 plays
                    dicevalue = diceroll(generator) ; // the value of the dice roll for player 1
                    cout << player1 <<" rolled :" << dicevalue << endl ; // print the value played
                    if (dicevalue == 6){ // hit for player
                    hit_player1++ ; 	// stock the number of hits

                }
            }

                conter++ ; // keep counting till we will have a winer

            } ;



        // tell us who won the game
        if (hit_player1 == 2){
            cout << player1<<" is the Winer\n" ;
            cout <<"Congrats :" ;
            cout <<player1<< endl ;
        }

       if (hit_player2 == 2) {

            cout << player2<<" is the Winer\n" ;
            cout <<"Congrats :" ;
            cout <<player2 << endl;
        }
        if ((hit_player1 != 2) and (hit_player2 != 2)){

        cout << "something went wrong" ;
        return -1 ;


        }

return 0 ;

}
