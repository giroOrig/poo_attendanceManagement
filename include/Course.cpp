#include "Course.hpp"
#include <iostream>

void Course::setIdentifier(int id){
    identifier = id;        
}
void Course::setName(string n){
    name = n;
}
int Course::getIdentifier(){
    return identifier;
}
string Course::getName(){
    return name;
}
