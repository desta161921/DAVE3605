#include "student.hpp"

Student::Student(std::string& name, int student_number)
    :m_student_number(student_number),
    m_name(name){

}

void Student::set_name(std::string& name){
    m_name = name;
}

void Student::set_student_number(int student_number){
    m_student_number = student_number;
}

inline int Student::student_number() const{
    return m_student_number;
}

inline std::string Student::name() const {
    return m_name;
}

/**
 * Definition of static class member
 **/
int Student::m_count = 0;

/**
 * Getter for static class member
 * */

int Student::count(){
    return Student::m_count;
}

