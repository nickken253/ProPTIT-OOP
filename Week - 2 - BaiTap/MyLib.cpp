// #pragma once
#include "MyLib.h"
Worker::Worker(){};
Engineer::Engineer(){};
Guard::Guard(){};
Employee::Employee(){};
Manager::Manager(){};

int Worker::NUMS = 0;
int Engineer::NUMS = 0;
int Guard::NUMS = 0;

Employee::Employee(string name, int age, string gender, string address, string phoneNumber, string homeTown, long long coeSalary, long long days)
{
    this->name = name;
    this->age = age;
    this->gender = gender;
    this->address = address;
    this->phoneNumber = phoneNumber;
    this->homeTown = homeTown;
    this->coeSalary = coeSalary;
    this->days = days;
}
void Employee::getInfo(string *name, int *age, string *gender, string *phoneNumber, string *homeTown, long long *salary)
{
    *name = this->name;
    *age = this->age;
    *gender = this->gender;
    *phoneNumber = this->phoneNumber;
    *homeTown = this->homeTown;
    *salary = this->coeSalary * this->days;
}
string Employee::getName()
{
    return this->name;
}
Worker::Worker(string name, int age, string gender, string address, string phoneNumber, string homeTown, long long coeSalary, long long days, int level)
{
    Employee(name, age, gender, address, phoneNumber, homeTown, coeSalary, days);
    this->level = level;
    NUMS++;
    string tmp;
    tmp = "CN" + string(3 - to_string(NUMS).size(), '0') + to_string(NUMS);
    this->ID = tmp;
}

Engineer::Engineer(string name, int age, string gender, string address, string phoneNumber, string homeTown, long long coeSalary, long long days, string major, string years)
{
    Employee(name, age, gender, address, phoneNumber, homeTown, coeSalary, days);
    this->major = major;
    this->years = years;
    NUMS++;
    string tmp;
    tmp = "KS" + string(3 - to_string(NUMS).size(), '0') + to_string(NUMS);
    this->ID = tmp;
}

Guard::Guard(string name, int age, string gender, string address, string phoneNumber, string homeTown, long long coeSalary, long long days, string area)
{
    Employee(name, age, gender, address, phoneNumber, homeTown, coeSalary, days);
    this->area = area;
    NUMS++;
    string tmp;
    tmp = "BV" + string(3 - to_string(NUMS).size(), '0') + to_string(NUMS);
    this->ID = tmp;
}

void Manager::addEmployee(Employee* employee)
{
    this->employees.push_back(employee);
}

vector<Employee*> Manager::findEmployee(string name)
{
    vector<Employee*> tmp;
    for(int i = 0; i < employees.size(); i++)
    {
        cout << i << ": " << employees[i]->getName() << endl;
        if(name == employees[i]->getName())
        {
            tmp.push_back(employees[i]);
        }
    }
    return tmp;
}
