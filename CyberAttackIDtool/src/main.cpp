#include <iostream>

using namespace std;

    //Developed by R.A Baloyi//
    //Under C++ Basic projects//
    //Date Started: 2025/04/05//
    //Date Completed: 2025/04/06//
    //Duration: 4hours, 41 min for both programming and research//

int main(){

    //declare the necessary variables for the app//
    char chmenuchoice ='\0';
    char chreturntomenu = '\0';

    do{

        //Greet and prompt the user to select one of the options from the app below//
        cout<<"Welcome to the Cyberattack Identification Tool v1.0, This is an attack-type prediction tool based on the signs observed in your PC, please run an antivirus software to check if you have an ongoing cyberattack targeting your PC."<< '\n'<< '\n'<< "Please select one of the signs or symptoms you are observing on your computer to identify potential cyberattack methods and provide possible solutions."<<endl;

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
                cout<<"Possible Attack types: Malware Attack / CryptoJacking Attack."<<endl;
                cout<<""<<endl;
                cout<<"Possible Causes: Downloading Malicious files, Visiting Compromised websites, or opening phishing emails - Malware Attack."<<endl;
                cout<<"Possible Causes: Utilized a resource which had malware installed in it for cryptocurrency mining - CryptoJacking Attack."<<endl;
                cout<<""<<endl;
                cout<<"Motives For Malware Attack: Financial gain, Data theft, System disruption."<<endl;
                cout<<"Motives For CryptoJacking Attack: Financial gain through unauthorized mining."<<endl;
                cout<<""<<endl;
                cout<<"Possible solutions for these attack: Use Anti-malware Software, Monitor system perfomance, Update PC's System, avoid suspicious links and downloads. "<<endl;
                cout<<"___________________________________________________________________________________________________________________________"<<endl;
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
                cout<<"Possible Attack type: Malware Attack."<<endl;
                cout<<"Possible Causes: Downloading Malicious files, Visiting Compromised websites, or opening phishing emails."<<endl;
                cout<<"Motives For the Malware Attack: Financial gain, Data theft, System disruption."<<endl;
                cout<<"Possible solutions for the attack: Use Anti-malware Software, Update PC's System, avoid suspicious links and downloads. "<<endl;
                cout<<"___________________________________________________________________________________________________________________________"<<endl;

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
                cout<<"Possible Attack type : Malware Attack."<<endl;
                cout<<"Possible Causes: Downloading Malicious files, Visiting Compromised websites, or opening phishing emails."<<endl;
                cout<<"Motives For the Malware Attack: Financial gain, Data theft, System disruption."<<endl;
                cout<<"Possible solutions for the attack: Use Anti-malware Software, Update PC's System, avoid suspicious links and downloads. "<<endl;
                cout<<"___________________________________________________________________________________________________________________________"<<endl;

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
                cout<<"Possible Attack type : Malware Attack."<<endl;
                cout<<"Possible Causes: Downloading Malicious files, Visiting Compromised websites, or opening phishing emails."<<endl;
                cout<<"Motives For the Malware Attack: Financial gain, Data theft, System disruption."<<endl;
                cout<<"Possible solutions for the attack: Use Anti-malware Software, Update PC's System, avoid suspicious links and downloads. "<<endl;
                cout<<"___________________________________________________________________________________________________________________________"<<endl;

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
                cout<<"Possible Attack type : Malware Attack."<<endl;
                cout<<"Possible Causes: Downloading Malicious files, Visiting Compromised websites, or opening phishing emails."<<endl;
                cout<<"Motives For the Malware Attack: Financial gain, Data theft, System disruption."<<endl;
                cout<<"Possible solutions for the attack: Use Anti-malware Software, Update PC's System, avoid suspicious links and downloads. "<<endl;
                cout<<"___________________________________________________________________________________________________________________________"<<endl;

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
                cout<<"Possible Attack type : Phishing Attack."<<endl;
                cout<<"Possible Causes: Fraudulent emails or messages tricking users into revealing sensitive information."<<endl;
                cout<<"Motives For the Phishing Attack: Stealing Credentials, Financial Fraud, or Identity Theft."<<endl;
                cout<<"Possible solutions for the attack: Use Email filters and verify email authenticity. "<<endl;
                cout<<"___________________________________________________________________________________________________________________________"<<endl;

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
                cout<<"Possible Attack type : Denial Of Service / Distributed Denial Of Service Attack."<<endl;
                cout<<"Possible Causes: The system is overloaded with traffic to make it unavailable."<<endl;
                cout<<"Motives For the Denial Of Service Attack: Disruption of services, extortion, or competitive sabotage."<<endl;
                cout<<"Possible solutions for the attack: Use firewalls, implement traffic monitoring, and deploy DDoS protection services. "<<endl;
                cout<<"___________________________________________________________________________________________________________________________"<<endl;

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
                cout<<"Possible Attack type : Ransomware Attack."<<endl;
                cout<<"Possible Causes: Clicking on malicious links or downloading infected files."<<endl;
                cout<<"Motive For the Ransomware Attack: Extorting money by encrypting data and demanding payment for decryption."<<endl;
                cout<<"Possible solutions for the attack: Regularly back up data, use endpoint protection, and avoid paying ransoms."<<endl;
                cout<<"___________________________________________________________________________________________________________________________"<<endl;

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
                cout<<"Possible Attack type : Ransomware Attack."<<endl;
                cout<<"Possible Causes: Clicking on malicious links or downloading infected files."<<endl;
                cout<<"Motive For the Ransomware Attack: Extorting money by encrypting data and demanding payment for decryption."<<endl;
                cout<<"Possible solutions for the attack: Regularly back up data, use endpoint protection, and avoid paying ransoms."<<endl;
                cout<<"___________________________________________________________________________________________________________________________"<<endl;

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
                cout<<"Possible Attack type : Ransomware Attack."<<endl;
                cout<<"Possible Causes: Clicking on malicious links or downloading infected files."<<endl;
                cout<<"Motive For the Ransomware Attack: Extorting money by encrypting data and demanding payment for decryption."<<endl;
                cout<<"Possible solutions for the attack: Regularly back up data, use endpoint protection, and avoid paying ransoms."<<endl;
                cout<<"___________________________________________________________________________________________________________________________"<<endl;

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
                cout<<"Possible Attack type : Man-in-the-Middle (MITM) Attacks."<<endl;
                cout<<"Possible Causes: Intercepted communication between two parties, often on unsecured networks."<<endl;
                cout<<"Motives For the MITM Attack: Eavesdropping, stealing sensitive data, or altering communication."<<endl;
                cout<<"Possible solutions for the attack: Use encryption (e.g., HTTPS), avoid public Wi-Fi, and implement VPNs."<<endl;
                cout<<"___________________________________________________________________________________________________________________________"<<endl;

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
                cout<<"Possible Attack type : Man-in-the-Middle (MITM) Attacks."<<endl;
                cout<<"Possible Causes: Intercepted communication between two parties, often on unsecured networks."<<endl;
                cout<<"Motives For the MITM Attack: Eavesdropping, stealing sensitive data, or altering communication."<<endl;
                cout<<"Possible solutions for the attack: Use encryption (e.g., HTTPS), avoid public Wi-Fi, and implement VPNs."<<endl;
                cout<<"___________________________________________________________________________________________________________________________"<<endl;

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
                cout<<"Possible Attack type : Man-in-the-Middle (MITM) Attacks."<<endl;
                cout<<"Possible Causes: Intercepted communication between two parties, often on unsecured networks."<<endl;
                cout<<"Motives For the MITM Attack: Eavesdropping, stealing sensitive data, or altering communication."<<endl;
                cout<<"Possible solutions for the attack: Use encryption (e.g., HTTPS), avoid public Wi-Fi, and implement VPNs."<<endl;
                cout<<"___________________________________________________________________________________________________________________________"<<endl;

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
                cout<<"Possible Attack type : SQL Injection Attack."<<endl;
                cout<<"Possible Causes: Exploiting vulnerabilities in web applications to inject malicious SQL code."<<endl;
                cout<<"Motives For the SQL Injection Attack: Accessing or manipulating databases to steal or alter data."<<endl;
                cout<<"Possible solutions for the attack: Validate input fields, use parameterized queries, and update software."<<endl;
                cout<<"___________________________________________________________________________________________________________________________"<<endl;

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
                cout<<"Possible Attack type : SQL Injection Attack."<<endl;
                cout<<"Possible Causes: Exploiting vulnerabilities in web applications to inject malicious SQL code."<<endl;
                cout<<"Motives For the SQL Injection Attack: Accessing or manipulating databases to steal or alter data."<<endl;
                cout<<"Possible solutions for the attack: Validate input fields, use parameterized queries, and update software."<<endl;
                cout<<"___________________________________________________________________________________________________________________________"<<endl;

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
                cout<<"Possible Attack type : SQL Injection Attack."<<endl;
                cout<<"Possible Causes: Exploiting vulnerabilities in web applications to inject malicious SQL code."<<endl;
                cout<<"Motives For the SQL Injection Attack: Accessing or manipulating databases to steal or alter data."<<endl;
                cout<<"Possible solutions for the attack: Validate input fields, use parameterized queries, and update software."<<endl;
                cout<<"___________________________________________________________________________________________________________________________"<<endl;

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
                cout<<"Possible Attack type : Social Engineering Attack."<<endl;
                cout<<"Possible Causes: Manipulating individuals into divulging confidential information."<<endl;
                cout<<"Motives For the Social Engineering Attack: Gaining unauthorized access or stealing sensitive data."<<endl;
                cout<<"Possible solutions for the attack: Conduct security awareness training and verify requests for sensitive information."<<endl;
                cout<<"___________________________________________________________________________________________________________________________"<<endl;

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
                cout<<"Possible Attack type : Social Engineering Attack."<<endl;
                cout<<"Possible Causes: Manipulating individuals into divulging confidential information."<<endl;
                cout<<"Motives For the Social Engineering Attack: Gaining unauthorized access or stealing sensitive data."<<endl;
                cout<<"Possible solutions for the attack: Conduct security awareness training and verify requests for sensitive information."<<endl;
                cout<<"___________________________________________________________________________________________________________________________"<<endl;

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
                cout<<"Possible Attack type : Social Engineering Attack."<<endl;
                cout<<"Possible Causes: Manipulating individuals into divulging confidential information."<<endl;
                cout<<"Motives For the Social Engineering Attack: Gaining unauthorized access or stealing sensitive data."<<endl;
                cout<<"Possible solutions for the attack: Conduct security awareness training and verify requests for sensitive information."<<endl;
                cout<<"___________________________________________________________________________________________________________________________"<<endl;

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
                cout<<"Possible Attack type : Zero-Day Exploits Attack."<<endl;
                cout<<"Possible Causes: Exploiting unknown vulnerabilities in software or hardware."<<endl;
                cout<<"Motives For the Zero-Day Exploits Attack: Gaining unauthorized access or causing disruption."<<endl;
                cout<<"Possible solutions for the attack: Apply patches promptly and use threat detection systems."<<endl;
                cout<<"___________________________________________________________________________________________________________________________"<<endl;

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
                cout<<"Possible Attack type : Zero-Day Exploits Attack."<<endl;
                cout<<"Possible Causes: Exploiting unknown vulnerabilities in software or hardware."<<endl;
                cout<<"Motives For the Zero-Day Exploits Attack: Gaining unauthorized access or causing disruption."<<endl;
                cout<<"Possible solutions for the attack: Apply patches promptly and use threat detection systems."<<endl;
                cout<<"___________________________________________________________________________________________________________________________"<<endl;

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
                cout<<"Possible Attack type : Zero-Day Exploits Attack."<<endl;
                cout<<"Possible Causes: Exploiting unknown vulnerabilities in software or hardware."<<endl;
                cout<<"Motives For the Zero-Day Exploits Attack: Gaining unauthorized access or causing disruption."<<endl;
                cout<<"Possible solutions for the attack: Apply patches promptly and use threat detection systems."<<endl;
                cout<<"___________________________________________________________________________________________________________________________"<<endl;

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
                cout<<"Possible Attack type : Insider Threats Attack."<<endl;
                cout<<"Possible Causes: Malicious or negligent actions by employees or contractors."<<endl;
                cout<<"Motives For the Insider Threats Attack: Revenge, financial gain, or espionage."<<endl;
                cout<<"Possible solutions for the attack: Monitor user activity, enforce access controls, and conduct background checks."<<endl;
                cout<<"___________________________________________________________________________________________________________________________"<<endl;

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
                cout<<"Possible Attack type : Insider Threats Attack."<<endl;
                cout<<"Possible Causes: Malicious or negligent actions by employees or contractors."<<endl;
                cout<<"Motives For the Insider Threats Attack: Revenge, financial gain, or espionage."<<endl;
                cout<<"Possible solutions for the attack: Monitor user activity, enforce access controls, and conduct background checks."<<endl;
                cout<<"___________________________________________________________________________________________________________________________"<<endl;

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
                cout<<"Possible Attack type : Insider Threats Attack."<<endl;
                cout<<"Possible Causes: Malicious or negligent actions by employees or contractors."<<endl;
                cout<<"Motives For the Insider Threats Attack: Revenge, financial gain, or espionage."<<endl;
                cout<<"Possible solutions for the attack: Monitor user activity, enforce access controls, and conduct background checks."<<endl;
                cout<<"___________________________________________________________________________________________________________________________"<<endl;

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
                cout<<"Possible Attack type : Cryptojacking Attack."<<endl;
                cout<<"Possible Causes: Installing malware to use a victim’s resources for cryptocurrency mining."<<endl;
                cout<<"Motives For the Cryptojacking Attack: Financial gain through unauthorized mining."<<endl;
                cout<<"Possible solutions for the attack: : Use anti-malware tools and monitor system performance."<<endl;
                cout<<"___________________________________________________________________________________________________________________________"<<endl;

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
                cout<<"Possible Attack type : Cryptojacking Attack."<<endl;
                cout<<"Possible Causes: Installing malware to use a victim’s resources for cryptocurrency mining."<<endl;
                cout<<"Motives For the Cryptojacking Attack: Financial gain through unauthorized mining."<<endl;
                cout<<"Possible solutions for the attack: : Use anti-malware tools and monitor system performance."<<endl;
                cout<<"___________________________________________________________________________________________________________________________"<<endl;

                cout<<""<<endl;


                cout<<"Do you want to Continue to menu? Y/N "<<endl;
                cin>>chreturntomenu;
                chreturntomenu = toupper(chreturntomenu);

                break;
            }//end of case 2;

            case '3':{


                cout<<"App terminated successfully, Remember to be CYBERSAFE!"<<endl;
                cout<<"App developed by R.A Baloyi, New Version to be deployed soon!"<<endl;

                    break;
            }//end of case 3;



        }//end Switch//

        system("cls");//clears the screen for modular UI//

    }while(chmenuchoice != '3' && chreturntomenu != 'N');


    return 0;
}//end int main//
