#include <iostream>
#include <string>

/**
 * Part I / II
 * */
struct Person{
	private:
		std::string name;
		std::string lastname;
		int age;
	public:
		Person(std::string name, std::string lastname, int age)
			:name{name},lastname{lastname},age{age}{
			}
		void print(){
			std::cout<<"Hi, my name is: "<<name<<" "<<lastname<<", age "<<age<<std::endl;
		}

		void setAge(int age){
			this->age = age;
		}
		int getAge() const{
			return age;
		}
		void setName(std::string name){
			this->name = name;
		}
		void setLastName(std::string lastname){
			this->lastname = lastname;
		}

		std::string getName() const{
			return name;
		}
		std::string getLastName() const{
			return lastname;
		}
};

int main(){
	Person aryan{"Aryan", "Naqid", 28};
	aryan.print();
	aryan.setName("Aaryan");
	aryan.setLastName("Naqqid");
	aryan.setAge(14);
	aryan.print();

	Person* p = new Person{"Aryan", "Naqid", 28};
	p->print();

    std::cout<<"Bare minimum space for a person with uninitialied name (since it can vary):"<<std::endl;
    std::cout<<sizeof(Person)<<std::endl;

	return 0;
}
