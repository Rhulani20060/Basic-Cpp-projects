#include "EncryptLib.h"
#include <iostream>
#include <limits>
#include <ctime>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

namespace Encryption{

void encryptdata(string strinputdata,int intshiftval){

   int intresizeval = 0;
   int inttrackindex = 0;


    for (char c: strinputdata){
        //getting the data size to allow array resizing//
        intresizeval = intresizeval+1;
    }//end for each//

    cout<<"Word size detected = "<<intresizeval<<" ."<<endl;

    char strarray[intresizeval];

    for (int i=0; i<intresizeval; i++){

        //instantiating the array//
        strarray[i]='\0';
    }//next i//


    for (char c: strinputdata){

        //encrypting data//
       strarray[inttrackindex]= c + intshiftval;
       inttrackindex= inttrackindex +1;
    }//end for each//

    for (int i=0; i<intresizeval;i++){

            //displaying data//
        cout<<strarray[i];
    }//next i//

}//end encryption function//

void decryptdata(string strinputdata,int intshiftval){

   int intresizeval = 0;
   int inttrackindex = 0;


    for (char c: strinputdata){
       intresizeval = intresizeval+1;
    }//end for each//

    cout<<"Word size detected = "<<intresizeval<<" ."<<endl;

    char strarray[intresizeval];

    for (int i=0; i<intresizeval; i++){

        strarray[i]='\0';
    }//next i//

    for (char c: strinputdata){
       strarray[inttrackindex]= c - intshiftval;
       inttrackindex= inttrackindex +1;
    }//end for each//

    for (int i=0; i<intresizeval;i++){
        cout<<strarray[i];
    }//next i//


}//end decryption function//

int validateinput(int& value){

    while(cin.fail()){

        cin.clear();//clears input stream//
        cin.ignore(1000,'\n');
        cout<<"Enter a valid integer"<<endl;
        cin>>value;
    }//end while
    return value;
}//end function//


}//end namespace//
