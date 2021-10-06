#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void s(int *pa)
{
(*pa) +=100;
cout<<"CODE:"<<(*pa)<<endl<<endl;
}
 
int main()
{
int quan, a=0;
char ch;
string word;
s(&a); //1

ifstream fin;
s(&a); //2

fin.open("OutFile.txt");
s(&a); //3

  if (!fin.is_open())
  {
    a++;
    s(&a); //401
    return 0;
  }
  else
  {
    s(&a); /* 4
     метод считывания посимвольно 
    while (fin.get(ch))
    {
     cout<< ch;
    } 
   // fin.get

    считывание пословно)
    while(!fin.eof())
    {
     word = "";
     fin >> word;
     cout << word << endl;
    }
    */

    // считывание построчно.
    while(!fin.eof())
    {    
      getline(fin,word);
      cout<<word<<endl;
    }  
    cout<<"\nDone)\n";
  }
fin.close();
return 0;
}


