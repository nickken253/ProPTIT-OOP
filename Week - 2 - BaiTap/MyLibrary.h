#pragma once
#include<bits/stdc++.h>
using namespace std;
class Employee
{
protected:
    string name, gender, address, phoneNumber, hometown, ID;
    long long coeSalary, days, age;
public:
    Employee();
    Employee(string name, long long age, string gender, string address, string phoneNumber, string hometown, long long coeSalary, long long days);
    string getName();
    
};

class Worker : public Employee
{
protected:
    long long level;
    static long long NUMS;
public:
    Worker();
    Worker(string name, long long age, string gender, string address, string phoneNumber, string hometown, long long coeSalary, long long days, long long level);
    string getName();
    void getInfo();
    void getInfo(string *name, long long *age, string *gender, string *address, string *phoneNumber, string *hometown, long long *coeSalary, long long *days, long long *level);
    long long Salary();
};

class Engineer : public Employee
{
protected:
    string major;
    long long years;
    static long long NUMS;
public:
    Engineer();
    Engineer(string name, long long age, string gender, string address, string phoneNumber, string hometown, long long coeSalary, long long days, string major, long long years);
    string getName();
    void getInfo();
    long long Salary();
};

class Guard : public Employee
{
protected:
    string area;
    static long long NUMS;
public:
    Guard();
    Guard(string name, long long age, string gender, string address, string phoneNumber, string hometown, long long coeSalary, long long days, string area);
    string getName();
    void getInfo();
    long long Salary();
};

class Manager : public Employee
{
private:
    vector<Worker> workers;
    vector<Engineer> engineers;
    vector<Guard> guards;
public:
    Manager();
    void addWorker(string name, long long age, string gender, string address, string phoneNumber, string hometown, long long coeSalary, long long days, long long level);
    void addEngineer(string name, long long age, string gender, string address, string phoneNumber, string hometown, long long coeSalary, long long days, string major, long long years);
    void addGuard(string name, long long age, string gender, string address, string phoneNumber, string hometown, long long coeSalary, long long days, string area);
    void FindInfo(string name);
    void SalaryCaculation(string name);
};
