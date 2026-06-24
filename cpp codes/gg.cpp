#include <iostream>
using namespace std;
int main() {
  int i=0, j=2;
  do{
    cout<<++i<<endl;
    cout<<j++<<endl;
  }while (i<2);
  cout<<(i!=j)<<endl;
  cout<<i<<endl<<j<<endl;
  if(++i==--j){
    cout<<i%j<<endl;
    cout<<i/j<<endl;
    cout<<(double)i/2<<endl;

  }
  return 0;
}
