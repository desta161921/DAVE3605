#ifndef SCHOOLCLASS_HPP
#define SCHOOLCLASS_HPP

#include <vector>
#include "student.hpp"

class SchoolClass{
    private:
        std::vector<Student> students;

    public:
        SchoolClass();
        void add_student(Student& s);
        Student get_student(int indx) const;

};

#endif
