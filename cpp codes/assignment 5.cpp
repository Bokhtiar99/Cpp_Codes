#include<iostream>
using namespace std;
 int main (){
 char ch;
 cout<<"Enter a letter:";
 cin>>ch;
 ch=tolower(ch);
 switch(ch){
 case 'a':
 case 'e':
 case 'i':
 case 'o':
 case 'u':
 cout<<"The letter is vowel";
 break;
 case 'b':
 case 'c':
 case 'd':
 case 'f':
 case 'g':
 case 'h':
 case 'j':
 case 'k':
 case 'l':
 case 'm':
 case 'n':
 case 'p':
 case 'q':
 case 'r':
 case 's':
 case 't':
 case 'v':
 case 'w':
 case 'x':
 case 'y':
 case 'z':
 cout<<"The letter is a consonant";
 break;
 default:
    cout<<"Not a character";

   }

  return 0;
 }
