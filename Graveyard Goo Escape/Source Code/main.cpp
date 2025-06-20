#include "LibGooGame.h"

//Project name: Graveyard Goo Escape 2d game//
//Developed by R.A Baloyi//
//Duration: 4hours...//
//Escape the self replicating goo by escaping the graveyard!//

using namespace GooSpace;

int main(int argc, char** argv)
{

        /*check the number of command line arguments to avoid errors and force exit if the errors are found*/

        if (argc != 4){
            cout<<"The number of arguments is not correct, the number of arguments must be 4 including the filename"<<endl;

            cout<<"1: World number of rows."<<endl;
            cout<<"2: World number of cols."<<endl;
            cout<<"3: number of obstacles limit."<<endl;

            cout<<"Num arguments: "<<argc<<endl;
            cout<<"App will now terminate!"<<endl;
            exit(ARGUMENT_ERROR);
        }
        //time seeding function//

        srand(time(NULL));

        //gameplay variables//

        int intnumrows = ConvStrToInt(argv[1]);//command line argument 1//
        int intnumcols = ConvStrToInt(argv[2]);//command line argument 2//
        int intnumobstacles = ConvStrToInt(argv[3]);//command line argument 3//
        char chGameChoice = '\n'; //variable to store movement choice//
        bool blnIsNotGame = true; //variable for checking the game state//

        //game initializing functions//

        TwoDarray Gameworld = CreateWorld(intnumrows,intnumcols);//create the gameworld;//
        Initializeworld(Gameworld,intnumrows,intnumcols,intnumobstacles);//place them every game feature in the world map//

        do{
            system("cls");
            displayworld( Gameworld, intnumrows, intnumcols);// display the game world //

            cout<<""<<endl;
            cout<<"Move your player to safety!"<<endl;
            cout<<""<<endl;
            cout<<"Move Up: W       "<<'\t'<<"key -- Goo: @"<<'\n'<<"Move Down: S       "<<'\t'<<"key -- Player: P"<<'\n'<<"Move Left: A       "<<'\t'<<"key -- obstacle: ="<<'\n'<<"Move Right: D"<<'\n'<<"EXIT: X"<<endl;
            cin>>chGameChoice;

            chGameChoice = toupper(chGameChoice);// force the movement choice to CAPS //

            switch(chGameChoice){

                case 'W':
                case 'S':
                case 'A':
                case 'D':{

                    //move the player,goo and check game//
                    Gameworld = GameFunctionality( Gameworld, intnumrows, intnumcols, chGameChoice);

                    break;

                }// End Case //
                case 'X':{

                    system("cls");
                    cout<<"OHH, Come on!, You can't cave now!"<<'\n'<<"So you just gonna run away?"<<'\n'<<"Hey! come back here!"<<endl;
                    cout<<"Okay...RUN AWAY SIMBA!"<<endl;
                    cout<<""<<endl;
                    cout<<"APP TERMINATED SUCCESSFULLY"<<endl;
                    blnIsNotGame = false;
                    break;
                }// End case X //
                default:{

                    system("cls");
                    cout<<"ID10T ERROR"<<endl;
                    cout<<"Enter a valid input, choose from those available"<<endl;
                    system("pause");

                }//End Default//

            }//End Switch//


        }while(blnIsNotGame);//End Do-while//

    return SUCCESS;
}
