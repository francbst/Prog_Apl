#include <iostream>
#include <string>
using namespace std;
int main()
{
  string pala, x , y;
  do{
    cout<<"Digite uma palavra: "<<endl;
    getline(cin, pala);
  }
  while(pala.size() >12 );
  for (int i = 0; i < pala.size(); i++ ){
    cout<<"Digitar letra"<<endl;
    cin>>x;
    cout<<"Digitar letra"<<endl;
    cin>>y;
    for ( i = x ){
    x=y;
  }
  }
    cout<<x<<y;
    cout<<pala<<endl;
   
    
  
  
  return 0;
}
  