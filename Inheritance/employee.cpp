#include <iostream>
using namespace std;

class Employee
{
    private:
        int e_id;
        string e_name;

    public:
        Employee(int id, string name)
        {
            this->e_id = id;
            this->e_name = name;
        }

        int getID()
        {
            return this->e_id;
        }

        string getName()
        {
            return this->e_name;
        }
};

class FullTimeEmployee: public Employee
{
    private:
        int salary;

    public:
        FullTimeEmployee(int id, string name, int salary):Employee(id, name)
        {
            this->salary = salary;
        }

        int getSalary(){return this->salary;}        
};

class PartTimeemployee: public Employee
{
    private:
        int dailySalary;

    public:
        PartTimeemployee(int id, string name, int salary):Employee(id, name)
        {
            this->dailySalary = salary;
        }

        int getSalary(){return this->dailySalary;}
};

int main()
{
    FullTimeEmployee e1(1, "John", 20000);
    PartTimeemployee e2(2, "Jake", 5000);

    cout << "Salary of " << e1.getName() << " is " << e1.getSalary() << endl;
    cout << "Daily Wage of " << e2.getName() << " is " << e2.getSalary() << endl;
}