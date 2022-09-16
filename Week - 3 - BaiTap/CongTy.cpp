#pragma once
#include "NhanVienVanPhong.h"
#include "NhanVienSanXuat.h"
#include "CongTy.h"

CongTy::CongTy(){};
long long CongTy::SumSalary()
{
    long long sum = 0;
    for(int i = 0; i < nhanViens.size(); i++)
    {
        sum += nhanViens[i]->getSalary();
    }
    return sum;
}
void CongTy::addNhanVienVanPhong(string name, long long salary, long long days, long long basePay)
{
    nhanViens.push_back(new NhanVienVanPhong(name, salary, days, basePay));
}
void CongTy::addNhanVienSanXuat(string name, long long salary, long long product, long long wagePerProduct)
{
    nhanViens.push_back(new NhanVienSanXuat(name, salary, product, wagePerProduct));
}
void CongTy::findInfo(string ID)
{
    for(int i = 0; i < nhanViens.size(); i++)
    {
        if(nhanViens[i]->getID() == ID)
        {
            string tmp = nhanViens[i]->getID();
            cout << tmp << endl;
            nhanViens[i]->showInfo();
            return;
        }
    }
    cout << "ERROR: NOT FOUND" << endl;
}
void CongTy::editInfo(string ID, string name, long long salary, long long tmpInfo1, long long tmpInfo2)
{
    for(int i = 0; i < nhanViens.size(); i++)
    {
        if(nhanViens[i]->getID() == ID)
        {
            nhanViens[i]->editNhanVien(name, salary, tmpInfo1, tmpInfo2);
            cout << "DONE!" << endl;
            return;
        }
    }
    cout << "ERROR: NOT FOUND" << endl;
}
void CongTy::getSalary(string ID)
{
    for(int i = 0; i < nhanViens.size(); i++)
    {
        if(nhanViens[i]->getID() == ID)
        {
            cout << "LUONG CUA " << ID << " : " << nhanViens[i]->getSalary() << endl;
            return;
        }
    }
    cout << "ERROR: NOT FOUND" << endl;
}