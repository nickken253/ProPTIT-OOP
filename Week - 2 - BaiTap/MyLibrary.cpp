#pragma once
#include "MyLibrary.h"
Worker::Worker(){};
Engineer::Engineer(){};
Guard::Guard(){};
Employee::Employee(){};
Manager::Manager(){};

long long Worker::NUMS = 0;
long long Engineer::NUMS = 0;
long long Guard::NUMS = 0;

Employee::Employee(string name, long long age, string gender, string address, string phoneNumber, string hometown, long long coeSalary, long long days)
{
    this->name = name;
    this->age = age;
    this->gender = gender;
    this->address = address;
    this->phoneNumber = phoneNumber;
    this->hometown = hometown;
    this->coeSalary = coeSalary;
    this->days = days;
    
}
Worker::Worker(string name, long long age, string gender, string address, string phoneNumber, string hometown, long long coeSalary, long long days, long long level)
{
    this->name = name;
    this->age = age;
    this->gender = gender;
    this->address = address;
    this->phoneNumber = phoneNumber;
    this->hometown = hometown;
    this->coeSalary = coeSalary;
    this->days = days;
    this->level = level;
    string tmp = to_string(++NUMS);
    while(tmp.size() < 3) tmp = '0' + tmp;
    this->ID = "CN" + tmp; 
}
void Worker::getInfo()
{
    cout << "***************************\n";
    cout << "ID: " << this->ID << endl;
    cout << "NAME: " << this->name << endl;
    cout << "AGE: " << this->age << endl;
    cout << "GENDER: " << this->gender << endl;
    cout << "ADDRESS: " << this->address << endl;
    cout << "PHONE NUMBER: " << this->phoneNumber << endl;
    cout << "HOMETOWN: " << this->hometown << endl;
    cout << "COEFFICIENT SALARY: " << this->coeSalary << endl;
    cout << "WORKING DAY: " << this->days << endl;
    cout << "LEVEL: " << this->level << endl;
}
long long Worker::Salary()
{
    return this->level * this->coeSalary * this->days;
}
Engineer::Engineer(string name, long long age, string gender, string address, string phoneNumber, string hometown, long long coeSalary, long long days, string major, long long years)
{
    this->name = name;
    this->age = age;
    this->gender = gender;
    this->address = address;
    this->phoneNumber = phoneNumber;
    this->hometown = hometown;
    this->coeSalary = coeSalary;
    this->days = days;
    this->major = major;
    this->years = years;
    string tmp = to_string(++NUMS);
    while(tmp.size() < 3) tmp = '0' + tmp;
    this->ID = "KS" + tmp; 
}
void Engineer::getInfo()
{
    cout << "***************************\n";
    cout << "ID: " << this->ID << endl;
    cout << "NAME: " << this->name << endl;
    cout << "AGE: " << this->age << endl;
    cout << "GENDER: " << this->gender << endl;
    cout << "ADDRESS: " << this->address << endl;
    cout << "PHONE NUMBER: " << this->phoneNumber << endl;
    cout << "HOMETOWN: " << this->hometown << endl;
    cout << "COEFFICIENT SALARY: " << this->coeSalary << endl;
    cout << "WORKING DAY: " << this->days << endl;
    cout << "MAJOR: " << this->major << endl;
    cout << "YEARS OF WORK: " << this->years << endl;
}
long long Engineer::Salary()
{
    return this->years * this->coeSalary * this->days;
}
Guard::Guard(string name, long long age, string gender, string address, string phoneNumber, string hometown, long long coeSalary, long long days, string area)
{
    this->name = name;
    this->age = age;
    this->gender = gender;
    this->address = address;
    this->phoneNumber = phoneNumber;
    this->hometown = hometown;
    this->coeSalary = coeSalary;
    this->days = days;
    this->area = area;
    string tmp = to_string(++NUMS);
    while(tmp.size() < 3) tmp = '0' + tmp;
    this->ID = "BV" + tmp; 
}
void Guard::getInfo()
{
    cout << "ID: " << this->ID << endl;
    cout << "NAME: " << this->name << endl;
    cout << "AGE: " << this->age << endl;
    cout << "GENDER: " << this->gender << endl;
    cout << "ADDRESS: " << this->address << endl;
    cout << "PHONE NUMBER: " << this->phoneNumber << endl;
    cout << "HOMETOWN: " << this->hometown << endl;
    cout << "COEFFICIENT SALARY: " << this->coeSalary << endl;
    cout << "WORKING DAY: " << this->days << endl;
    cout << "AREA: " << this->area << endl;
    cout << "***************************\n";
}
long long Guard::Salary()
{
    return this->coeSalary * this->days;
}
void Manager::addWorker(string name, long long age, string gender, string address, string phoneNumber, string hometown, long long coeSalary, long long days, long long level)
{
    workers.push_back(Worker(name, age, gender, address, phoneNumber, hometown, coeSalary, days, level));
}
void Manager::addEngineer(string name, long long age, string gender, string address, string phoneNumber, string hometown, long long coeSalary, long long days, string major, long long years)
{
    engineers.push_back(Engineer(name, age, gender, address, phoneNumber, hometown, coeSalary, days, major, years));
}
void Manager::addGuard(string name, long long age, string gender, string address, string phoneNumber, string hometown, long long coeSalary, long long days, string area)
{
    guards.push_back(Guard(name, age, gender, address, phoneNumber, hometown, coeSalary, days, area));
}
void Manager::FindInfo(string name)
{
    long long cnt = 0;
    for(long long i = 0; i < workers.size(); i++)
    {
        if(workers[i].getName() == name)
        {
            workers[i].getInfo();
            cnt++;
        }
    }
    for(long long i = 0; i < engineers.size(); i++)
    {
        if(engineers[i].getName() == name)
        {
            engineers[i].getInfo();
            cnt++;
        }
    }
    for(long long i = 0; i < guards.size(); i++)
    {
        if(guards[i].getName() == name)
        {
            guards[i].getInfo();
            cnt++;
        }
    }
    cout << "THERE HAVE ALL " << cnt - 1 << "SEARCH RESULT(s)." << endl;
}
void Manager::SalaryCaculation(string name)
{
    long long cnt = 0;
    for(long long i = 0; i < workers.size(); i++)
    {
        if(workers[i].getName() == name)
        {
            cout << workers[i].Salary() << endl;
            cnt++;
        }
    }
    for(long long i = 0; i < engineers.size(); i++)
    {
        if(engineers[i].getName() == name)
        {
            cout << engineers[i].Salary() << endl;
            cnt++;
        }
    }
    for(long long i = 0; i < guards.size(); i++)
    {
        if(guards[i].getName() == name)
        {
            cout << guards[i].Salary() << endl;
            cnt++;
        }
    }
    cout << "THERE HAVE ALL " << cnt - 1 << "SEARCH RESULT(s)." << endl;
}
string Employee::getName()
{
    return this->name;
}
string Worker::getName()
{
    return this->name;
}
string Engineer::getName()
{
    return this->name;
}
string Guard::getName()
{
    return this->name;
}