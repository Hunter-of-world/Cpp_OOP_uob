#include <cmath>
#include <iostream>
using namespace std;
class Employee {
        private:int id;float salary;string name;
        public:
public:
        void setId(int _id) {
                if (_id > 0) {
                        id = _id;
                } else {
                        cout << "Id out of range" << endl;
                }
        }

        void setSalary(float _salary) {
                if (_salary > 0) {
                        salary = _salary;
                } else {
                        cout << "Salary out of range" << endl;
                }
        }

        void setName(string _name) {
                name = _name;
        }
        int getid() {return id;}
        float getsalary() {return salary;}
        string getname() {return name;}\

        Employee(int _id,float _salary, string _name)
        {
                id=_id;salary=_salary;name=_name;
        }
        Employee()
        {
                id=100;
                salary=1000;
                name="Un known";
        }
};
int main(){
        Employee emp1(100,-2,"zaid");
        cout<<"ID: "<<emp1.getid()<<endl;
        cout<<"Salary: "<<emp1.getsalary()<<endl;
        cout<<"Name: "<<emp1.getname()<<endl;

}