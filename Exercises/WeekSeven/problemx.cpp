#include <string>
#include <vector>

class Student{
    private:
        int m_student_number;
        std::string m_name;

    public:
        Student(std::string name, int student_number){
            m_name = name;
            m_student_number = student_number;
        }

        /** 
         * A getter should be const, not able to change the class!
         * */
        std::string name() const{
            return m_name;
        }

        void set_name(std::string name){
            m_name = name;
        }

        int student_number() const {
            return m_student_number;
        }

        void set_student_number(int student_number){
            m_student_number = student_number;
        }


};

class SchoolClass{
    private:
        std::vector<Student> students;
    public:
        /**
         * Not specified in problem, but added functinality for creating a valid
         * student.
         */
        SchoolClass(){
        }

        void addStudent(Student s){
            students.push_back(s);
        }

        Student& getStudent(int indx){
            return students[indx];
        }

};
