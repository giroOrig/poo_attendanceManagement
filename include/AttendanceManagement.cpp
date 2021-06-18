#include "AttendanceManagement.hpp"
#include <iostream>
#include <fstream>

using namespace std;

void AttendanceManagement::takeAttendance(Student* stu, Course* cou, string dat, bool sta){

    ofstream outputFile;

    outputFile.open("Attendance.csv");

    outputFile << "Id de Estudiante" <<	"Nombre/s"<< "Apellido/s" 
    << "Id de Materia"<<"Nombre de Materia"<<	"Marca temporal"<<"Presente"<<endl;
    
    
}
