#ifndef attendanceManagement_H
#define attendanceManagement_H

#include "Course.hpp"
#include "Student.hpp"
#include <iostream>

using namespace std;

class AttendanceManagement: public Student, public Course {
private:
string student, course, datetime;
bool state;

public:
AttendanceManagement();
~AttendanceManagement();
string getStudent();
string getName();
void takeAttendance(Student* stu, Course* cou, string dat, bool sta);
};

#endif