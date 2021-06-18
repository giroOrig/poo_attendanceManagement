#include "./Student.hpp"
#include "./Course.hpp"
//#include "../include/AttendanceManagement.hpp"
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class AttendanceManagement{
public:
        void takeAttendance(Student* student, Course* course, string fecha, bool state){
            ofstream outputFile;
            ifstream outputFileExists;
            outputFileExists.open("attendance.csv");

            if(!outputFileExists){
                outputFile.open("attendance.csv",fstream::in | fstream::out | fstream::trunc);
                outputFile <<  "Id de Estudiante;Nombre/s;Apellido/s;Id de Materia;Nombre de Materia;Marca temporal;Presente" ;
                outputFile << "\n";
                outputFile << student->getIdentifier();
                outputFile << ";"+student->getName()+";";
                outputFile << student->getSurname()+";";
                outputFile << course->getIdentifier();
                outputFile << ";"+course->getName()+";";
                outputFile << fecha+";";
                outputFile << state;
                outputFile.close();
            }else{
                outputFile.open("attendance.csv",fstream::in | fstream::out | fstream::app);
                outputFile << "\n";
                outputFile << student->getIdentifier();
                outputFile << ";"+student->getName()+";";
                outputFile << student->getSurname()+";";
                outputFile << course->getIdentifier();
                outputFile << ";"+course->getName()+";";
                outputFile << fecha+";";
                outputFile << state;
                outputFile.close();
            }


        }

};
