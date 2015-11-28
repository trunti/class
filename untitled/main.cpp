#include <iostream>
#include <fstream>
#include "group.h"
using namespace std;
int main()
{
    ofstream myfile;
      myfile.open ("Persons.txt");
      if(myfile.fail())
      {
          cout << "Hallo!";
      }
      myfile << "Writing this to a file.\n";
      myfile.close();
    return 0;
}

