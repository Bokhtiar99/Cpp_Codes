#include<iostream>
#include<cstring>
using namespace std;
int main () {
char word1[] = { 'a', 's', 't', 'e', 'r', '\0' };
char word2[] = { 'a', 't', '\0' };
char word3[] = { 'a', 'w', 'e', '\0' };
cout<<strlen(word1)<<endl;
cout<<strlen(word2)<<endl;
cout<<strlen(word3)<<endl;
return 0;
}
