#ifndef student_H
#define student_H

#include <iostream>
using namespace std;

class Student{
private:
    int identifier;
    string name, surname;

public:
    Student(){};
    ~Student();
    void setIdentifier(int id);
    void setName(string n);
    void setSurname(string sn);
    int getIdentifier();
    string getName();
    string getSurname();
};

#endif