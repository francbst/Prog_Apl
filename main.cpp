#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

/*
struct palavra{
  string nome;

};
*/
char trocaletra(char letra);

int main()
{
  char palavra;
  int i;

  cout<<"Digite a palavra: "<<endl;
  cin>>palavra;

 
  while(palavra!= '\0')
  {
    palavra=trocaletra(palavra);
    
  }

  cout<<palavra<<endl;

  cout<<("\n\n");
  return 0;
}

char trocaletra(char letra)
{
  char novaletra;

  switch (letra)
  {
    case 'a':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
      novaletra = 'A';
      break;

    default:
      novaletra = letra;
      break;
  }
  return novaletra;
}