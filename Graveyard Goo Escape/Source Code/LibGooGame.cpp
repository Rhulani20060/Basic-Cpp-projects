#include "LibGooGame.h"

namespace GooSpace{

    TwoDarray CreateWorld( int intnumrows, int intnumcols){
        //Create a 2d array//

        TwoDarray Gameworld = new Onedarray[intnumrows]; //create an array of pointers//

        for (int r= 0; r<intnumrows;r++){
            Gameworld[r] = new int[intnumcols]; //create an array of integers at each pointer//

        }//Next r//

        return Gameworld; //return the array//

    }//End Function//

    int ConvStrToInt( string argv){

        //convert the string inputs of the command line arguments to int, using the stringstream//

        int IntValue = 0;
        stringstream strargv {argv};
        strargv >> IntValue;

        if ( cin.fail()){

            cout<<"conversion from string to integer = unsuccessful"<<endl;
            exit(CONVERSION_ERROR);
        }

        return IntValue;

    }//End Function//

    void PlacePlayer(TwoDarray& Gameworld,int intnumrows,int intnumcols){

        int randomposition = rand() % 4;

        int inttemprow =0;
        int inttempcol =0;

        if(randomposition == 0){

            inttemprow = ((static_cast<double>(intnumrows/2) ) - 3);
            inttempcol = ((static_cast<double>(intnumcols/2) ));

        }else if(randomposition ==1){

            inttemprow = ((static_cast<double>(intnumrows/2) ) + 3);
            inttempcol = ((static_cast<double>(intnumcols/2) ));

        }else if(randomposition ==2){

            inttemprow = ((static_cast<double>(intnumrows/2) ));
            inttempcol = ((static_cast<double>(intnumcols/2) ) + 3);

        }else if(randomposition ==3){

            inttemprow = ((static_cast<double>(intnumrows/2) ));
            inttempcol = ((static_cast<double>(intnumcols/2) ) - 3);

        }//End If//

        Gameworld[inttemprow][inttempcol] = PLAYER;


    }//End Function//

    void PlaceGoo(TwoDarray& Gameworld,int intnumrows,int intnumcols){

        int inttemprow = ((static_cast<double>(intnumrows/2) + 0));
        int inttempcol = ((static_cast<double>(intnumcols/2) + 0));

        Gameworld[inttemprow][inttempcol] = GOO;

    }//End Function//

    void IsAlive(TwoDarray Gameworld,int intnumrows,int intnumcols){

        bool blnPlayerAvail = false;
        int inttemprow = 0;
        int inttempcol = 0;

        for ( int r=0;r<intnumrows;r++){

            for( int c=0;c<intnumcols;c++){

                    if (Gameworld[r][c]==PLAYER){

                        inttemprow = r;
                        inttempcol = c;

                        blnPlayerAvail = true;

                    }

            }//next c//
        }//Next r//

        if( blnPlayerAvail == false){

            Gameworld[inttemprow][inttempcol]=GOO;

            system("cls");
            displayworld(Gameworld,intnumrows,intnumcols);

            cout<<""<<endl;

            cout<<"You failed to escape: WASTED :("<<endl;
            cout<<"Restart the game to try again"<<endl;
            cout<<"FOCUS PLAYER, FOCUS :("<<endl;
            cout<<"LOSER :( /// AURA: - 1 MILLION! /// LOSER /// -1000 GOO EXP /// LOSER :("<<endl;

            exit(GAME_LOST);
        }

    }//End utility function//

    void PlaceObstacle(TwoDarray& Gameworld,int intnumrows,int intnumcols, int intNumObstacles){

        int IntobsCounter = 0;

            while(intNumObstacles>0){

                int intChance = rand() % 100;//generate a random number from 0 to 100//

                int inttemprow = rand() & intnumrows -1;
                int inttempcol = rand() & intnumcols -1;

                if(Gameworld[inttemprow][inttempcol]== SPACE){

                    if ( intChance < 12){

                        Gameworld[inttemprow][inttempcol] = OBSTACLE;
                        IntobsCounter++;

                    }

                }
                 intNumObstacles--;
            }

            cout<<"number of obstacles given by the 12% probability: " <<IntobsCounter<<endl;
            system("pause");

    }//End Function//

    void Initializeworld(TwoDarray& Gameworld,int intnumrows, int intnumcols,int& numobstacles){

        //place spaces inside the gameworld//
        for(int r=0; r<intnumrows;r++){

            for(int c=0; c<intnumcols;c++){
               //fill the array with zeros//
               Gameworld[r][c] = SPACE;

            }//Next c//

        }//Next r//

        for (int r=0; r<intnumrows; r++){

            //place the edges for winning//

                Gameworld[r][intnumcols-1] =EDGES;
                Gameworld[r][0]=EDGES;

        }//next r//

        for (int c=0; c<intnumcols; c++){

            //place the edges for winning//

                Gameworld[intnumrows-1][c] =EDGES;
                Gameworld[0][c]=EDGES;

        }//next r//

        PlacePlayer(Gameworld, intnumrows, intnumcols);
        PlaceGoo(Gameworld, intnumrows, intnumcols);//place the goo at the center//
        PlaceObstacle(Gameworld, intnumrows, intnumcols, numobstacles);


    }//End Function//

    void displayworld(TwoDarray& Gameworld,int intnumrows,int intnummcols){

        cout<<" Move your player to safety (:) - the world edges. Good luck!"<<endl;
        cout<<""<<endl;

        for(int r=0; r<intnumrows;r++){

            for(int c=0; c<intnummcols;c++){

               cout<<chGAMEFEATURES[Gameworld[r][c]]<<" ";

            }//Next c//

            cout<<" "<<endl;

        }//Next r//

    }//end function//

    void checkmove( TwoDarray& Gameworld,int inttemprow, int inttempcol,int intdestrow,int intdestcol,int intnumrows, int intnumcols){

        if(Gameworld[intdestrow][intdestcol]== SPACE){

            Gameworld[intdestrow][intdestcol]= PLAYER;
            Gameworld[inttemprow][inttempcol]=SPACE;

        }
        else if( Gameworld[intdestrow][intdestcol]== OBSTACLE ){

            Gameworld[intdestrow][intdestcol]= OBSTACLE;
            Gameworld[inttemprow][inttempcol]=PLAYER;

        }
        else if( Gameworld[intdestrow][intdestcol]== GOO ){

            Gameworld[intdestrow][intdestcol]= GOO;
            Gameworld[inttemprow][inttempcol]=SPACE;

            system("cls");
            cout<<"Really Player? ... did you just commit suicide :("<<'\n'<<"Why did you move into the GOO? "<<'\n'<<"What happened to escaping?"<<'\n'<<"As a developer of this game, if you did this while i was watching...i would definitely beat you up!"<<endl;
            cout<<"DISAPPOINTED :("<<endl;
            cout<<""<<endl;
            cout<<"LOSER :( /// AURA: - 1 MILLION! /// LOSER /// -1000 GOO EXP /// LOSER :("<<endl;
            exit(GAME_LOST);
        }
        else if( Gameworld[intdestrow][intdestcol]== EDGES){

            Gameworld[intdestrow][intdestcol]= PLAYER;
            Gameworld[inttemprow][inttempcol]=SPACE;
            system("cls");
            cout<<"So you are quite good with this escaping thing :)"<<'\n'<<"I think you have somehow watched some few episodes of Prison Break!"<<'\n'<<"You also kinda took that RUN SIMBA thing too serious.. :)"<<'\n'<<"Now tell everyone in the room to give you a standing ovation :)"<<'\n'<<"You should also consider getting into E-SPORTS!"<<endl;
            cout<<""<<endl;
            cout<<"Winner /// Escape Master... :)  ///Winner /// 1 MILLION GOO BUCKS... :) "<<endl;
            int intrank=rand() % 10;
            cout<<"Leaderboard Rank NO: "<< intrank<<endl;
            exit(GAME_WON);
        }



    }//End utility function//

    void MoveGoo(TwoDarray& Gameworld, int intnumrows,int intnumcols){

        //you should add a counter to count the num moves so they can change in turns//
        for (int r=0; r<intnumrows;r++){
            for (int c=0; c<intnumcols;c++){

                    int probability = rand() % 99;

            if ( probability < 20){

                if(Gameworld[r][c]==OBSTACLE){
                    //randoms spawn goo every 3 moves//

                }
                else if(Gameworld[r][c]==GOO){

                    //create a random number between 1 and 4 to spawn goo next to the already present goo//
                        int randnumber = rand() % 4;

                        if(randnumber == 0){

                                if( r+1 < intnumrows){

                                    Gameworld[r+1][c] =GOO;//spawn goo in the row below the goo//

                                }

                        }//end rand 0//
                        else if( randnumber == 1){

                                if ( r-1 >= 0){

                                   Gameworld[r-1][c] =GOO;//spawn goo in the row above the goo//

                                }

                        }//end rand 1//
                        else if( randnumber == 2){

                                if (c+1 < intnumcols){

                                    Gameworld[r][c+1] =GOO;//spawn goo in the column to the right of the goo//

                                }

                        }//end rand 2//
                        else if( randnumber == 3){

                                if ( c-1 >= 0){

                                    Gameworld[r][c-1] =GOO;//spawn goo in the column to the left of the goo//
                                }
                        }//end rand 3//

                    }//end goo replication by itself//

                }//End probability IF//

            }//Next c//

        }//NEXT r//

    }//End Function//


    TwoDarray GameFunctionality(TwoDarray& Gameworld,int intnumrows, int intnumcols, char chInput){

        //first focus on moving the player//
        //we have to find the player location//

        int inttempcol = 0;
        int inttemprow = 0;

        for (int r=0; r<intnumrows;r++){
            //loop inside the array of pointers//
            for(int c=0 ; c<intnumcols;c++){
            //loop inside the array of integers at each pointer//

                if(Gameworld[r][c]==PLAYER){

                    inttemprow =r;//find the player row//
                    inttempcol =c;//find the player col//

                }//End If//

            }//Next c//

        }//Next r//

        //move player//

        switch(chInput){

            case 'W':{

                checkmove(Gameworld, inttemprow,inttempcol,inttemprow-1,inttempcol,intnumrows,intnumcols);

                break;
            }//end case W//
            case 'S':{

                checkmove(Gameworld, inttemprow,inttempcol,inttemprow+1,inttempcol,intnumrows,intnumcols);

                break;
            }//end case S//
            case 'A':{

                checkmove(Gameworld, inttemprow,inttempcol,inttemprow,inttempcol-1,intnumrows,intnumcols);

                break;
            }//end case A//
            case 'D':{

                checkmove(Gameworld, inttemprow,inttempcol,inttemprow,inttempcol+1,intnumrows,intnumcols);

                break;
            }//End case D//

        }//End switch//

        MoveGoo(Gameworld, intnumrows, intnumcols);
        IsAlive(Gameworld, intnumrows, intnumcols);

        return Gameworld;

    }//End Function//


    void deallocatemem(TwoDarray& Gameworld, int intnumrows){

        for(int r=0; r<intnumrows;r++){

                delete[] Gameworld[r];

        }//next r//

        delete [] Gameworld;
        Gameworld = nullptr;

    }//End Function//


}//End Namespace//
