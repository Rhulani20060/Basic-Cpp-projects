#ifndef ENCRYPTLIB_H_INCLUDED
#define ENCRYPTLIB_H_INCLUDED
#include <string>
using namespace std;


namespace Encryption{

void encryptdata(string strinputdata,int intshiftval);
void decryptdata(string strinputdata,int intshiftval);
int validateinput(int& value);
}

#endif // ENCRYPTLIB_H_INCLUDED
