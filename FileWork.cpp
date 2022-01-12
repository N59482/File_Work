#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
  {
    int quan, a=0;
    char ch;
    string word;
    ifstream file;

    file.open("OutFile.txt");//добавить trycatch

    if (!file.is_open())
      {
        cout<<"Не удалось открыть файл"<<endl;
        return 0;
      }
      else
      {
        while (file.get(ch)) // метод считывания посимвольно 
          {
            cout<<ch;
          };

        while(!file.eof())// считывание по слову
          {
            word = "";
            file>>word;
            cout<<word<<endl;
          };

        while(!file.eof())// считывание построчно.
          {    
            getline(file,word);
            cout<<word<<endl;
          };  
      }
    
    file.close();
    return 0;
  }


