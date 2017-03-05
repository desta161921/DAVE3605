#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>

class Student{
    private:
        static int m_count;
        int m_student_number;
        std::string m_name;

    public:
        Student(std::string& name, int student_number);

        void set_name(std::string& name);
        void set_student_number(int student_number);
        static int count();
        int student_number() const;
        std::string name() const;
};

#endif
