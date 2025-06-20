#ifndef LIBGOOGAME_H_INCLUDED
#define LIBGOOGAME_H_INCLUDED

#include <iostream>
#include <sstream>
#include <limits>
#include <cstdlib>
#include <ctime>

using namespace std;

//these won't be necessary to call in the main.cpp since they are linked to the user defined library//

namespace GooSpace{

    typedef int* Onedarray; //creating a 1d array//
    typedef Onedarray* TwoDarray; //creating a 2d array//

    const char chGAMEFEATURES[5] = {'.','@','P','=',':'}; //Array to help with modular display of the game world//


    enum GameFeatint{

        //game features as enums//

        SPACE,
        GOO,
        PLAYER,
        OBSTACLE,
        EDGES,

    };//End ENUM//

    enum ProgrammeErrors{

        //program exit codes as enums//

        SUCCESS,
        ARGUMENT_ERROR,
        CONVERSION_ERROR,
        GAME_WON,
        GAME_LOST,

    };//End ENUM//

    TwoDarray CreateWorld( int intnumrows, int intnumcols); //Create a 2d array//

    int ConvStrToInt( string argv); //converts a given command line argument to integer//

    void Initializeworld(TwoDarray& Gameworld,int intnumrows, int intnumcols, int& numobstacles); //Initialize the gameworld with features//

    void displayworld(TwoDarray& Gameworld,int intnumrows,int intnummcols); //display the world//

    TwoDarray GameFunctionality(TwoDarray& Gameworld,int intnumrows, int intnumcols, char chInput); //function to add game functionality such as moving and update//

    void deallocatemem(TwoDarray Gameworld, int intnumrows); //deallocate memory from the heap//

}//End Namespace//

#endif // LIBGOOGAME_H_INCLUDED

