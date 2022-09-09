// #pragma once
#include <bits/stdc++.h>

using namespace std;
class Employee
{
protected:
    string name, gender, address, phoneNumber, homeTown, ID;
    long long age, coeSalary, days;
public:
    Employee();
    Employee(string name, int age, string gender, string address, string phoneNumber, string homeTown, long long coeSalary, long long days);
    string getName();
    void getInfo(string *name, int *age, string *gender, string *phoneNumber, string *homeTown, long long *salary);
};
 
class Worker : public Employee
{
protected:
    int level;
    static int NUMS;
public:
    Worker();
    Worker(string name, int age, string gender, string address, string phoneNumber, string homeTown, long long coeSalary, long long days, int level);
    
};

class Engineer : public Employee
{
protected:
    string major, years;
    static int NUMS;
public:
    Engineer();
    Engineer(string name, int age, string gender, string address, string phoneNumber, string homeTown, long long coeSalary, long long days, string major, string years);
};

class Guard : public Employee
{
protected:
    string area;
    static int NUMS;
public:
    Guard();
    Guard(string name, int age, string gender, string address, string phoneNumber, string homeTown, long long coeSalary, long long days, string area);
};

class Manager : public Employee
{
private:
    vector<Employee*> employees;
public:
    Manager();
    void addEmployee(Employee* employee);
    vector<Employee*> findEmployee(string name);
    Employee* getInfo(Employee* employee);
};
