#include <iostream>
#include <ctime>
#include <cstdlib>

//developed by R.A Baloyi//
//under C++ basics//
//March 2025//

using namespace std;
//____________________________________Function prototypes_______________________________________________//

int randomnumber();

//_______________________________________________________________________________________________________//

int main(){



    int intguessed = 0;
    int intrandomresult = 0;
    bool blnisgame = true;
    int counter = 1;




        do{

            srand(0);

            cout<<"Guess a number between 1 and 100"<<endl;
            cin>>intguessed;

            intrandomresult = randomnumber();

            if (intguessed < intrandomresult){
                cout<<"The number you guessed is lower than the random number, try again!"<<endl;
            }
            else if (intguessed > intrandomresult){
                cout<<"The number you guessed is higher than the random number, try again!"<<endl;
            }
            else if (intguessed == intrandomresult){
                cout<<"Congratulations, you have passed the game in "<< counter<<" moves"<<endl;
            blnisgame = false;
            }

            counter++;

        } while (blnisgame);

        return 0;
}

//_____________________________________function definition_______________________________________________//

 int randomnumber(){

        int intupperb = 100;
        int intLowerb = 1;

      int range = (intupperb - intLowerb) +1 ;
      int result = rand() % range + intLowerb;
      return result;
 }
