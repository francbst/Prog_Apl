#include <iostream>
#include <string.h>

using namespace std;

string pala;
char x, y;

int main()
{

  do{
    cout<<"Digite uma palavra: "<<endl;
    getline(cin, pala);
  }
  while(pala.size() >12 );
  cout<<"Digitar letra"<<endl;
  cin>>x;
  cout<<"Digitar letra"<<endl;
  cin>>y;
  cout<<pala<<endl;
  for (int i = 0; i < pala.size(); i++ ){
  
  if (pala[i] == x)
    pala[i] = y;
  }
    
  cout <<pala<<endl;
  return 0;
}