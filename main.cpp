/*
Author : Kuntima
Description : An AI rolls the dice, for 2 payer the first to have two 6 wins
data : 7/7/2017
*/
/*
Author : Kuntima
Description : An AI that simulates a roll dice between two persons, the first person first have ten six's is the winer
Date : 7/7/2017



*/


#include <iostream>
#include <random>
#include <string>



using namespace std ;



int main(){


        //Initialization
        string player1  ;
        int hit_player1  =  0;
        string player2  ;
        int hit_player2 = 0 ;
        int dicevalue ;
        int conter = 1 ;

        random_device device ;  // generate the seed
        mt19937_64 generator(device()) ; // generate the PseudoRandoNumberGenerator
        uniform_int_distribution<int> diceroll(1,6) ; //the distibuition that we will extract the random value



        cout << "Player 1, type your name Sir :" ; // Asking the name of player 1
        cin >> player1 ; // printing on the screen

        cout << "\nPlayer 2, type your name Sir :" ; //Asking thee name of player 2
        cin >> player2 ; // printing on the screen



        while ((hit_player1 < 2) and (hit_player2 < 2 ))  { // when hit_player1 or hit_player2 get biger than 2 break the loop



                if (conter%2==0) { // if the module is 0, player 2 plays
                dicevalue = diceroll(generator) ;
                cout << player2 <<" rolled :" << dicevalue << endl ;
                    if (dicevalue == 6){
                    hit_player2++ ;



                    }
                }
                if (conter%2!=0){ // if the module is 1, player 1 plays
                    dicevalue = diceroll(generator) ;
                    cout << player1 <<" rolled :" << dicevalue << endl ;


                    if(dicevalue == 6){
                    hit_player1++ ;

                    }

                }

                conter++ ;

            } ;


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

        cout << "We have a tigh" ;
        cout <<hit_player1 << endl;
        cout <<hit_player2 ;

        }

return 0 ;

}
