#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
   string line;
   ifstream fin;
   ofstream fout;
   
   fin.open("read.txt");
   fout.open("output.txt");

   while(!fin.eof())
   {
      getline(fin, line);
      fout<<line<<endl;
   }

   fin.close();
   fout.close();

   return 0;
}
