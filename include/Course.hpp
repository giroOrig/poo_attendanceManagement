#ifndef course_H
#define course_H

#include <iostream>

using namespace std;

class Course{
private:
    int identifier;
    string name;

public:
    Course();
    ~Course();
    void setIdentifier(int id);
    void setName(string n);
    int getIdentifier();
    string getName();
};

#endif