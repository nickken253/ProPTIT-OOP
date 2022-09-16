#pragma once
#include "NhanVien.h"
class NhanVienSanXuat : public NhanVien
{
protected:
    long long product;
    long long wagePerProduct;
public:
    static int NUMS;
    NhanVienSanXuat();
    NhanVienSanXuat(string name, long long salary, long long product, long long wagePerProduct);
    void editNhanVien(string name, long long salary, long long product, long long wagePerProduct);
    long long getSalary();
    void showInfo();
    string getID();
};