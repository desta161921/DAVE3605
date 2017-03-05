#include <string>
#include <vector>


class Student{
    private:
        static int m_count;
        int m_student_number;
        std::string m_name;

    public:
        Student(std::string name, int student_number){
            m_student_number = student_number;
            m_name = name;
            ++m_count;
        }

        /** Alternative, preferred:
         Student(std::string name, int student_number)
            :m_student_number(student,number),
            m_name(name){
            ++m_count;
            }

            **/
        int student_number() const{
            return m_student_number;
        }
        void set_student_number(int student_number){
            m_student_number = student_number;
        }

        std::string name() const{
            return m_name;
        }

        void set_name(std::string& name){
            m_name = name;
        }
        static int count(){
            return m_count;
        }

};

int Student::m_count=0;
