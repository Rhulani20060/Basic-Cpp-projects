#include <iostream>
#include <string>
#include "EncryptLib.h"

using namespace std;
using namespace Encryption;

        //Developed by R.A Baloyi//
        //Under C++ Basics//
        //Date started : 2025/04/02//
        //Date completed : 2025/04/03//
        //Duration: 2hours, 32 min //

int main(){

    int intshiftval =0;
    string strinput ="";
    char chmenuchoice = '\0';
    //bool blnmenulooper = true;
    char chcontinuetomenu = '\0';

    do{

        cout<<"Welcome to the Basic Encryption tool, Select one of the options below"<<endl<<"A: Encrypt data."<<endl<<"B: Decrypt data"<<endl<<"X: Exit App"<<endl;
        cin>>chmenuchoice;
        chmenuchoice= toupper(chmenuchoice);//forcing the choice to be upper case//

    switch(chmenuchoice){

        case 'A':{
            cout<<"You selected the encryption tool, Enter the Text you want to encrypt!"<<endl;
            cin.ignore(1000,'\n');//this is used for avoiding errors when using the getline function//
            getline(cin,strinput);//getting the whole sentence instead of a word//
            cout<<"Enter the Encryption shifting value to use for this encryption!"<<endl;
            cin>>intshiftval;

            intshiftval = validateinput(intshiftval);//validate user input//

            encryptdata(strinput,intshiftval);//encrypt data using the encryption function//

            cout<<""<<endl;

            cout<<"______________________________________________________"<<endl;

            cout<<"Do you want to continue back to the menu?"<<" Y / N "<<endl;
            cin>>chcontinuetomenu;

            chcontinuetomenu = toupper(chcontinuetomenu);

            break;

        }//end case A//

        case 'B':{

            cout<<"You selected the decryption tool, Enter the Text you want to decrypt!"<<endl;
            cin.ignore(1000,'\n');
            getline(cin,strinput);
            cout<<"Enter the decryption shifting value to use for this decryption!"<<endl;
            cin>>intshiftval;

            intshiftval = validateinput(intshiftval);//validate user input//

            decryptdata(strinput,intshiftval);//decrypt data using the decrypt function//

            cout<<""<<endl;

            cout<<"______________________________________________________"<<endl;

            cout<<"Do you want to continue back to the menu?"<<" Y / N "<<endl;
            cin>>chcontinuetomenu;

            chcontinuetomenu = toupper(chcontinuetomenu);

            break;

        }//End Case B//

        case 'X': {

            //user chooses to exit app//

            cout<<"Program terminated successfully"<<endl;
            break;
        }

        default: {

            //user selects a choice which is not available in the menu//

            system("cls");
            cout<<"choice invalid, Select a valid option"<<endl;
            chcontinuetomenu ='Y';

        }//end case default//

    }//end switch//


    } while (chmenuchoice != 'X' && chcontinuetomenu == 'Y');


return 0;
}
