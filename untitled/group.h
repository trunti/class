#ifndef GROUP_H
#define GROUP_H
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Group
{
public:
    Group();
private:
    string name;
    string sex;
    int birth;
    int death;
};

#endif // GROUP_H
