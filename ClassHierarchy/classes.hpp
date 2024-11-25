#ifndef CLASSES_HPP
#define CLASSES_HPP

#include <iostream>
using namespace std;
/*
 * @author Matthew Washburn
 */
class ClassSchedule {
    public:
        int ncourses;
        int courseIDs[10];
};

class BethelPerson {
    public:
        string address;
        string name;
        string email;
        string phonenumber;
};

class Student : public BethelPerson {
    public:
        double gpa;
        int swipes;
        ClassSchedule schedule;
};

class Staff : public BethelPerson {
    public:
        string officeID;
};

class Teacher : public Staff {
    public:
        string department;
        ClassSchedule schedule;
};

#endif
