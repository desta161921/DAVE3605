#include "schoolclass.hpp"

SchoolClass::SchoolClass(){
}

void SchoolClass::add_student(Student& s){
    students.push_back(s);
}

inline Student SchoolClass::get_student(int indx) const{
    return students[indx];
}
