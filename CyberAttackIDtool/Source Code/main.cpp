#include "Lib_AttackType.h"

using namespace AttackType;

    //Developed by R.A Baloyi//
    //Under C++ Basic projects//
    //Date Started: 2025/04/05//
    //Date Completed: 2025/04/06//
    //Duration: 3hours, 41 min for both programming and research//

int main(){

    //declare the necessary variables for the app//
    char chmenuchoice ='\0';
    char chreturntomenu = '\0';

    do{

        //Greet and prompt the user to select one of the options from the app below//
        cout<<"Welcome to the Cyberattack Identification Tool v1.0, This is an attack-type prediction tool based on the signs observed in your PC, please run an antivirus software to check if you have an ongoing cyberattack targeting your PC."<< '\n'<< '\n'<<"This app was developed to help you identify and guard against potential cyberattacks. As technology advances at lightning speed, so do the tactics of cybercriminals. Artificial Intelligence, while an incredible tool for innovation, is also being harnessed to power more sophisticated and deceptive attacks.From highly personalized phishing messages to deepfake scams and AI-generated malware, the threats are evolving quickly. It's now more important than ever to stay alert and informed. Scams are no longer just clumsy emails full of typos, they're smart, convincing, and often powered by AI.Even though this app is basic, it might still help you spot the warning signs and make more secure choices. It is a simple step, but sometimes that's all it takes to stay one step ahead"<<endl;

        cout<<""<<endl;

        system("pause");
        system("cls");

        cout<< "Please select one of the signs or symptoms you are observing on your computer to identify potential cyberattack methods and provide possible solutions."<<endl;

        cout<<""<<endl;

        cout<<"A : Slow System Perfomance."<<endl;
        cout<<"B : Frequent Crashes."<<endl;
        cout<<"C : Unusual Pop-ups."<<endl;
        cout<<"D : Unexpected Changes to browser settings."<<endl;
        cout<<"E : Diminished Storage Space."<<endl;
        cout<<"F : Emails with unfamiliar greetings, Urgent requests, Suspicious links or Unexpected attachments."<<endl;
        cout<<"G : Unexplained Spikes in Web Traffic, Slow loading times, Frequent timeouts, or complete Inaccessibility."<<endl;
        cout<<"H : Abnormal disk activity."<<endl;
        cout<<"I : Unusual file extensions."<<endl;
        cout<<"J : Ransom messages demanding payment."<<endl;
        cout<<"K : Unusual Disconnections."<<endl;
        cout<<"L : Strange URLs."<<endl;
        cout<<"M : Unexpected login prompts."<<endl;
        cout<<"N : Unusual database error messages."<<endl;
        cout<<"O : Unexpected data changes."<<endl;
        cout<<"P : Slow application response."<<endl;
        cout<<"Q : Unexpected requests."<<endl;
        cout<<"R : Unfamiliar sender behaviour."<<endl;
        cout<<"S : Actions requiring urgency."<<endl;
        cout<<"T : Sudden system crashes."<<endl;
        cout<<"U : Unexplained Errors."<<endl;
        cout<<"V : Unusual network activity."<<endl;
        cout<<"X : Unusual access patterns."<<endl;
        cout<<"Y : Unauthorized data transfers."<<endl;
        cout<<"Z : Irritated Employee bahaviour."<<endl;
        cout<<"1 : Overheating."<<endl;
        cout<<"2 : Increased CPU usage."<<endl;
        cout<<"3 : Exit App."<<endl;

        cout<<""<<endl;
        cin>>chmenuchoice;

        chmenuchoice = toupper(chmenuchoice);

        switch(chmenuchoice){

            case 'A':{

                //User selects sign A//
                system("cls");

                cout<<"___________________________________________________________________________________________________________________________"<<endl;
                cout<<"You have selected : Slow System Perfomance."<<endl;
                cout<<""<<endl;
                //function//
                MalwareCryptoAttack();
                cout<<""<<endl;

                cout<<"Do you want to Continue to menu? Y/N "<<endl;
                cin>>chreturntomenu;
                chreturntomenu = toupper(chreturntomenu);

                break;
            }//end of case A;

            case 'B':{

                //user selects sign B//
                system("cls");

                cout<<"___________________________________________________________________________________________________________________________"<<endl;
                cout<<"You have selected : Frequent Crashes."<<endl;
                cout<<""<<endl;
                //function//
                MalwareAttack();
                cout<<""<<endl;

                cout<<"Do you want to Continue to menu? Y/N "<<endl;
                cin>>chreturntomenu;
                chreturntomenu = toupper(chreturntomenu);

                break;
            }//end of case B;

            case 'C':{

                //user selects sign C//
                system("cls");

                cout<<"___________________________________________________________________________________________________________________________"<<endl;

                cout<<"You have selected : Unusual Pop-ups."<<endl;
                cout<<""<<endl;
                //function//
                MalwareAttack();
                cout<<""<<endl;

                cout<<"Do you want to Continue to menu? Y/N "<<endl;
                cin>>chreturntomenu;
                chreturntomenu = toupper(chreturntomenu);

                break;
            }//end of case C;

            case 'D':{

                //user selects sign D//
                system("cls");
                cout<<"___________________________________________________________________________________________________________________________"<<endl;

                cout<<"You have selected : Unexpected Changes to browser settings."<<endl;
                cout<<""<<endl;
                //function//
                MalwareAttack();
                cout<<""<<endl;


                cout<<"Do you want to Continue to menu? Y/N "<<endl;
                cin>>chreturntomenu;
                chreturntomenu = toupper(chreturntomenu);

                break;
            }//end of case D;

            case 'E':{

                //user selects sign E//
                system("cls");
                cout<<"___________________________________________________________________________________________________________________________"<<endl;

                cout<<"You have selected : Diminished Storage Space."<<endl;
                cout<<""<<endl;
                //function//
                MalwareAttack();
                cout<<""<<endl;


                cout<<"Do you want to Continue to menu? Y/N "<<endl;
                cin>>chreturntomenu;
                chreturntomenu = toupper(chreturntomenu);

                break;
            }//end of case E;

            case 'F':{

                //user selects sign F//
                system("cls");
                cout<<"___________________________________________________________________________________________________________________________"<<endl;

                cout<<"You have selected : Emails with unfamiliar greetings, Urgent requests, Suspicious links or Unexpected attachments."<<endl;
                cout<<""<<endl;
                //Function//
                PhishingAttack();
                cout<<""<<endl;


                cout<<"Do you want to Continue to menu? Y/N "<<endl;
                cin>>chreturntomenu;
                chreturntomenu = toupper(chreturntomenu);

                break;
            }//end of case F;

            case 'G':{

                //user selects sign G//
                system("cls");
                cout<<"___________________________________________________________________________________________________________________________"<<endl;

                cout<<"You have selected : Unexplained Spikes in Web Traffic, Slow loading times, Frequent timeouts, or complete Inaccessibility."<<endl;
                cout<<""<<endl;
                //function//
                DenialOfServiceAttack();
                cout<<""<<endl;

                cout<<"Do you want to Continue to menu? Y/N "<<endl;
                cin>>chreturntomenu;
                chreturntomenu = toupper(chreturntomenu);

                break;
            }//end of case G;

            case 'H':{

                //user selects sign H//
                system("cls");
                cout<<"___________________________________________________________________________________________________________________________"<<endl;

                cout<<"You have selected : Abnormal disk activity."<<endl;
                cout<<""<<endl;
                //Function//
                RansomWareAttack();
                cout<<""<<endl;


                cout<<"Do you want to Continue to menu? Y/N "<<endl;
                cin>>chreturntomenu;
                chreturntomenu = toupper(chreturntomenu);

                break;
            }//end of case H;

            case 'I':{

                //user selects sign I//
                system("cls");
                cout<<"___________________________________________________________________________________________________________________________"<<endl;

                cout<<"You have selected : Unusual file extensions."<<endl;
                cout<<""<<endl;
                //Function//
                RansomWareAttack();
                cout<<""<<endl;
                MalwareAttack();
                cout<<""<<endl;


                cout<<"Do you want to Continue to menu? Y/N "<<endl;
                cin>>chreturntomenu;
                chreturntomenu = toupper(chreturntomenu);

                break;
            }//end of case I;

            case 'J':{

                //user selects sign J//
                system("cls");
                cout<<"___________________________________________________________________________________________________________________________"<<endl;

                cout<<"You have selected : Ransom messages demanding payment."<<endl;
                cout<<""<<endl;
                //Function//
                RansomWareAttack();
                cout<<""<<endl;

                cout<<"Do you want to Continue to menu? Y/N "<<endl;
                cin>>chreturntomenu;
                chreturntomenu = toupper(chreturntomenu);

                break;
            }//end of case J;

            case 'K':{

                //user selects sign K//
                system("cls");
                cout<<"___________________________________________________________________________________________________________________________"<<endl;

                cout<<"You have selected : Unusual Disconnections."<<endl;
                cout<<""<<endl;
                //function//
                ManInTheMiddleAttack();
                cout<<""<<endl;

                cout<<"Do you want to Continue to menu? Y/N "<<endl;
                cin>>chreturntomenu;
                chreturntomenu = toupper(chreturntomenu);

                break;
            }//end of case K;

            case 'L':{

                //user selects sign L//
                system("cls");
                cout<<"___________________________________________________________________________________________________________________________"<<endl;

                cout<<"You have selected : Strange URLs."<<endl;
                cout<<""<<endl;
                //function//
                ManInTheMiddleAttack();
                cout<<""<<endl;

                cout<<"Do you want to Continue to menu? Y/N "<<endl;
                cin>>chreturntomenu;
                chreturntomenu = toupper(chreturntomenu);

                break;
            }//end of case L;

            case 'M':{

                //user selects sign M//
                system("cls");
                cout<<"___________________________________________________________________________________________________________________________"<<endl;

                cout<<"You have selected : Unexpected login prompts."<<endl;
                cout<<""<<endl;
                //function//
                ManInTheMiddleAttack();
                cout<<""<<endl;

                cout<<"Do you want to Continue to menu? Y/N "<<endl;
                cin>>chreturntomenu;
                chreturntomenu = toupper(chreturntomenu);

                break;
            }//end of case M;

            case 'N':{

                //user selects sign N//
                system("cls");
                cout<<"___________________________________________________________________________________________________________________________"<<endl;

                cout<<"You have selected : Unusual database error messages."<<endl;
                cout<<""<<endl;
                //Function//
                SQL_InjectionAttack();
                cout<<""<<endl;

                cout<<"Do you want to Continue to menu? Y/N "<<endl;
                cin>>chreturntomenu;
                chreturntomenu = toupper(chreturntomenu);

                break;
            }//end of case N;

            case 'O':{

                //user selects sign O//
                system("cls");
                cout<<"___________________________________________________________________________________________________________________________"<<endl;

                cout<<"You have selected : Unexpected data changes."<<endl;
                cout<<""<<endl;
                //Function//
                SQL_InjectionAttack();
                cout<<""<<endl;

                cout<<"Do you want to Continue to menu? Y/N "<<endl;
                cin>>chreturntomenu;
                chreturntomenu = toupper(chreturntomenu);

                break;
            }//end of case O;

            case 'P':{

                //user selects sign P//
                system("cls");
                cout<<"___________________________________________________________________________________________________________________________"<<endl;

                cout<<"You have selected : Slow application response."<<endl;
                cout<<""<<endl;
                //Function//
                SQL_InjectionAttack();
                cout<<""<<endl;

                cout<<"Do you want to Continue to menu? Y/N "<<endl;
                cin>>chreturntomenu;
                chreturntomenu = toupper(chreturntomenu);

                break;
            }//end of case P;

            case 'Q':{

                //user selects sign Q//
                system("cls");
                cout<<"___________________________________________________________________________________________________________________________"<<endl;

                cout<<"You have selected : Unexpected requests."<<endl;
                cout<<""<<endl;
                //function//
                SocialEngineeringAttack();
                cout<<""<<endl;


                cout<<"Do you want to Continue to menu? Y/N "<<endl;
                cin>>chreturntomenu;
                chreturntomenu = toupper(chreturntomenu);

                break;
            }//end of case Q;

            case 'R':{

                //user selects sign R//
                system("cls");
                cout<<"___________________________________________________________________________________________________________________________"<<endl;

                cout<<"You have selected : Unfamiliar sender behaviour."<<endl;
                cout<<""<<endl;
                //function//
                SocialEngineeringAttack();
                cout<<""<<endl;

                cout<<"Do you want to Continue to menu? Y/N "<<endl;
                cin>>chreturntomenu;
                chreturntomenu = toupper(chreturntomenu);

                break;
            }//end of case R;

            case 'S':{

                //user selects sign S//
                system("cls");
                cout<<"___________________________________________________________________________________________________________________________"<<endl;

                cout<<"You have selected : Actions requiring urgency."<<endl;
                cout<<""<<endl;
                //function//
                SocialEngineeringAttack();
                cout<<""<<endl;


                cout<<"Do you want to Continue to menu? Y/N "<<endl;
                cin>>chreturntomenu;
                chreturntomenu = toupper(chreturntomenu);

                break;
            }//end of case S;

            case 'T':{

                //user selects sign T//
                system("cls");
                cout<<"___________________________________________________________________________________________________________________________"<<endl;

                cout<<"You have selected : Sudden system crashes."<<endl;
                cout<<""<<endl;
                //Function//
                ZeroDayExploitsAttack();
                cout<<""<<endl;
                MalwareAttack();
                cout<<""<<endl;

                cout<<"Do you want to Continue to menu? Y/N "<<endl;
                cin>>chreturntomenu;
                chreturntomenu = toupper(chreturntomenu);

                break;
            }//end of case T;

            case 'U':{

                //user selects sign U//
                system("cls");
                cout<<"___________________________________________________________________________________________________________________________"<<endl;

                cout<<"You have selected : Unexplained Errors."<<endl;
                cout<<""<<endl;
                //Function//
                ZeroDayExploitsAttack();
                cout<<""<<endl;
                MalwareAttack();
                cout<<""<<endl;


                cout<<"Do you want to Continue to menu? Y/N "<<endl;
                cin>>chreturntomenu;
                chreturntomenu = toupper(chreturntomenu);

                break;
            }//end of case U;

            case 'V':{

                //user selects sign V//
                system("cls");
                cout<<"___________________________________________________________________________________________________________________________"<<endl;

                cout<<"You have selected : Unusual network activity."<<endl;
                cout<<""<<endl;
                //Function//
                ZeroDayExploitsAttack();
                cout<<""<<endl;

                cout<<"Do you want to Continue to menu? Y/N "<<endl;
                cin>>chreturntomenu;
                chreturntomenu = toupper(chreturntomenu);

                break;
            }//end of case V;

            case 'X':{

                //user selects sign X//
                system("cls");
                cout<<"___________________________________________________________________________________________________________________________"<<endl;

                cout<<"You have selected : Unusual access patterns."<<endl;
                cout<<""<<endl;
                //function//
                InsiderThreatAttack();
                cout<<""<<endl;

                cout<<"Do you want to Continue to menu? Y/N "<<endl;
                cin>>chreturntomenu;
                chreturntomenu = toupper(chreturntomenu);

                break;
            }//end of case X;

            case 'Y':{

                //user selects sign Y//
                system("cls");
                cout<<"___________________________________________________________________________________________________________________________"<<endl;

                cout<<"You have selected : Unauthorized data transfers."<<endl;
                cout<<""<<endl;
                //function//
                InsiderThreatAttack();
                cout<<""<<endl;


                cout<<"Do you want to Continue to menu? Y/N "<<endl;
                cin>>chreturntomenu;
                chreturntomenu = toupper(chreturntomenu);

                break;
            }//end of case Y;

            case 'Z':{

                //user selects sign Z//
                system("cls");
                cout<<"___________________________________________________________________________________________________________________________"<<endl;

                cout<<"You have selected : Irritated Employee bahaviour."<<endl;
                cout<<""<<endl;
                //function//
                InsiderThreatAttack();
                cout<<""<<endl;


                cout<<"Do you want to Continue to menu? Y/N "<<endl;
                cin>>chreturntomenu;
                chreturntomenu = toupper(chreturntomenu);

                break;
            }//end of case Z;

            case '1':{

                //user selects sign 1//
                system("cls");
                cout<<"___________________________________________________________________________________________________________________________"<<endl;

                cout<<"You have selected : Overheating."<<endl;
                cout<<""<<endl;
                //Function//
                MalwareCryptoAttack();
                cout<<""<<endl;


                cout<<"Do you want to Continue to menu? Y/N "<<endl;
                cin>>chreturntomenu;
                chreturntomenu = toupper(chreturntomenu);

                break;
            }//end of case 1;

            case '2':{

                //user selects sign 2//
                system("cls");
                cout<<"___________________________________________________________________________________________________________________________"<<endl;

                cout<<"You have selected : Increased CPU usage."<<endl;
                cout<<""<<endl;
                //Function//
                MalwareCryptoAttack();
                cout<<""<<endl;


                cout<<"Do you want to Continue to menu? Y/N "<<endl;
                cin>>chreturntomenu;
                chreturntomenu = toupper(chreturntomenu);

                break;
            }//end of case 2;

            case '3':{

                system("cls");
                cout<<"App terminated successfully, Remember to be CYBERSAFE!"<<endl;
                cout<<"App developed by R.A Baloyi, New Version to be deployed soon!"<<endl;
                system("pause");

                break;

            }//end of case 3;



        }//end Switch//

        system("cls");//clears the screen for modular UI//

    }while(chmenuchoice != '3' && chreturntomenu != 'N');


    return 0;
}//end int main//

