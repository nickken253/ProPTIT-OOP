#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
const ll big = 1e6;
class Hinh
{
public:
    Hinh(){};
    void in()
    {
        cout << "in...";
    }
};
class ChuNhat : virtual public Hinh
{
public:
    // ChuNhat(){};
    // void in()
    // {
    //     cout << "in hinh ChuNhat\n";
    // }
};
class Thoi : virtual public Hinh
{
public:
    // Thoi(){};
    // void in()
    // {
    //     cout << "in hinh Thoi\n";
    // }
};
class Vuong : public ChuNhat, public Thoi
{
public:
    // Vuong(){};
    // void in()
    // {
    //     cout << "in hinh tam giac\n";
    // }
};
int main()
{
    system("cls");
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    // Hinh* a;
    // ChuNhat b;
    // Hinh *a1 = &b;
    // a1->in();
    // a = new ChuNhat();
    // a->in();
    // // ((ChuNhat*)a)->in();
    // a = new Thoi();
    // a->in();
    // // ((Thoi*)a)->in();
    // a = new Vuong();
    // a->in();
    // // ((Vuong*)a)->in();
    Vuong a;
    a.in();
}