#include <iostream>
#include <fstream>
#include <vector>
#include "group.h"
using namespace std;
int main()
{
    vector<string> v;
    ifstream in_stream;
        in_stream.open("person.txt");
        if(in_stream.fail())
        {
            cout << "What the hell you suck";
        }
        string next;
        while(in_stream >> next)
        {
            v.push_back(next);
        }
        in_stream.close();
        for(unsigned int i = 0;i < v.size();i++)
        {
            cout << v[i] << " " << endl;
        }
    return 0;
}

