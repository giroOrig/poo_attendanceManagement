#include "Student.hpp"
#include <iostream>

void Student::setIdentifier(int id){
    identifier = id;        
}
void Student::setName(string n){
    name = n;
}
void Student::setSurname(string sn){
    surname = sn;
}
int Student::getIdentifier(){
    return identifier;
}
string Student::getName(){
    return name;
}
string Student::getSurname(){
    return surname;
}