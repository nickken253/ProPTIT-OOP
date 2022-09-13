# OOP - POLYMORPHISM THEORY
Câu hỏi kì này:
- Đặt vấn đề cần sử dụng `Đa Hình`?
- Phương thức ảo? Từ khóa virtual?
- Lớp ảo? Phương thức thuần ảo?
- Thực hành một số ví dụ.

## 1. Tổng quan về tính Đa Hình.
- Khi tìm hiểu về 4 tính chất của OOP, đọc đến tên `Đa Hình`, ta có thể hình dung được phần nào đó ý nghĩa và mục đích của cái tên này.
- Tính `Đa Hình` chính là việc một biến, một hàm hoặc một phương thức có thể tồn tại ở nhiều dạng khác nhau. Tức là nhiều hàm hoặc phương thức có thể cùng một tên nhưng chức năng thực sự của chúng lại khác nhau.
- Giải thích cách khác, một Object tại mỗi tình huống khác nhau thì thể hiện hành vi khác nhau thì được xem là tính `Đa hình`. Ví dụ: bạn A trên trường là một *sinh viên* giỏi, ở CLB thì là một *thành viên* tích cực, về nhà lại là một *người con* ngoan.
- Tính `Đa Hình` rất quan trọng để xác định một ngôn ngữ là Hướng đối tượng hay không. Vì ngôn ngữ hỗ trợ Class mà không có tính `Đa hình` thì chỉ là ngôn ngữ `Dựa trên đối tượng` (Objects-Based).
### 1.1. Tại sao cần sử dụng tính Đa hình ?
- Tính `Đa hình` ta có thể vận dụng để giải quyết một số trường hợp:
  - Các Class con cần sử dụng phương thức của Class cha để bổ sung cho 1 phương thức khác của nó.
  - Khi trong cùng 1 Class có nhiều phương thức cùng tên nhưng khác tham số. (Ghi đè).
- Có thể dùng một tên duy nhất để lưu trữ biến của nhiều kiểu dữ liệu khác nhau.
- Ta không phải viết lại mã hoặc lớp đã có sẵn. Sau khi một đoạn mã hoặc lớp được khởi tạo thành công, ta có thể tái sử dụng chúng nhờ vào Tính `Đa hình`.
```CPP
class Test
{
public:
    void polyExam(int x)
    {
        cout << x << endl;
    }  
    void polyExam(int x, int y)
    {
        cout << x << " " << y << endl;
    }
};
  
int main() {
      
    Test p;
    p.polyExam(7);
    p.polyExam(85,64);
} 
```
### 1.2. Phân loại Đa hình.
- Có 2 loại `Đa hình`: Compile-time Polymorphism và Runtime Polymorphism. 
  - Compile-time Polymorphism: Chính là Nạp chồng hàm và Nạp chồng toán tử.
  - Runtime Polymorphism: là bao gồm Ghi đè và Hàm ảo.
So sánh 2 loại và `Nạp chồng`, `Ghi đè` đã được đề cập trong buổi học trước nên ta không đi vào tìm hiểu chi tiết.
>[*Tham khảo __Nạp chồng & Ghi đè__ tại đây.*](https://github.com/nickken253/ProPTIT-OOP/blob/main/OOP%20-%202%20-%203%20-%20THEORY%20%232.md#ii-n%E1%BA%A1p-ch%E1%BB%93ng-v%C3%A0-ghi-%C4%91%C3%A8)

## 2. Hàm ảo / Phương thức ảo.
### 2.1. Định nghĩa:
- Là Hàm thành viên và được khai báo trong Class Cha với từ khóa `virtual` ở đầu, nhưng lại được tái định nghĩa trong Class Con.
- Khi chạy code, trình biên dịch sẽ tự tìm tới Hàm/Phương thức cụ thể của Class Con đang cần dùng, thay vì phải Ép kiểu như trước.
### 2.2. Cú pháp:
```CPP
class <ClassName>
{
public:
    virtual <returnType> <methodName>([<params>]) {}
};
```
### 2.3. Ví dụ so sánh:
>Cho bài toán gồm 4 Class: Hình, Vuông, Tròn, Tam Giác với Hình là Class Cha, 3 Class còn lại là Class Con. Yêu cầu in ra thông báo đặc điểm từng hình khi được gọi tới.

- Như ở bài kế thừa, khi khai báo ta sẽ khai báo như sau:
```CPP
class Hinh
{
public:
    Hinh(){};
    void in()
    {
        cout << "in...";
    }
};
class Vuong : public Hinh
{
public:
    Vuong(){};
    void in()
    {
        cout << "in hinh vuong\n";
    }
};
class Tron : public Hinh
{
public:
    Tron(){};
    void in()
    {
        cout << "in hinh tron\n";
    }
};
class TamGiac : public Hinh
{
public:
    TamGiac(){};
    void in()
    {
        cout << "in hinh tam giac\n";
    }
};
```
- Khi sử dụng bình thường, để tối ưu ta sẽ sử dụng Con trỏ và tiến hành ép kiểu khi gọi tới phương thức `in()` và sử dụng.
```CPP
int main()
{
    Hinh* a;
    a = new Vuong();
    ((Vuong*)a)->in();
    a = new Tron();
    ((Tron*)a)->in();
    a = new TamGiac();
    ((TamGiac*)a)->in();
}
```
- Nhưng nếu ta khai báo từ đầu, phương thức `in()` ở Class Hinh là phương thức ảo, ta sẽ dễ dàng hơn khi sử dụng lại phương thức `in()` ở các Class con.
```CPP
//...
class Hinh
{
public:
    Hinh(){};
    virtual void in()
    {
        cout << "in...";
    }
};
//...
```
```CPP
int main()
{
    Hinh* a;
    a = new Vuong();
    a->in();
    a = new Tron();
    a->in();
    a = new TamGiac();
    a->in();
}
```
### 2.4. Lưu ý:
Tính `đa hình` chỉ sử dụng được thông qua tham số là `tham chiếu` hoặc `con trỏ`, nếu bạn sử dụng một tham số bình thường, phương thức của class Cha sẽ được gọi vì về bản chất nó là một đối tượng thuộc kiểu class Cha thay vì gọi tới phương thức của Class Con.

## 3. Lớp ảo (Virtual Class / Virtual Base Class)
### 3.1. Bài toán đặt ra:
> Cho 4 Class: Hình, Chữ Nhật, Thoi, Vuông. Class Hình là Cha của Class Chữ Nhật và Thoi. Class Vuông là Class con của 2 Class Chữ Nhật và Thoi. Chỉ duy Class Hình có phương thức. Làm thế nào để Class Vuông kế thừa được phương thức này ?
- Cách giải quyết là sử dụng Virtual Class. Chính là thêm từ khóa `virtual` đằng trước Modifier Mode khi khai báo Class Con.
```CPP
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
};
class Thoi : virtual public Hinh
{
};
class Vuong : public ChuNhat, public Thoi
{
};
int main()
{
    Vuong a;
    a.in();
}  
```
### 3.2. Constructor và Destructor
- Tương tự như kiến thức ở Phần kế thừa đã tìm hiểu. Bản chất Class ảo vẫn là của Class Cha ban đầu. Cho nên Constructor của virtual class vẫn sẽ là Constructor được chạy sớm nhất và Destructor là hàm hủy được chạy muộn nhất.
## 4. Phương thức thuần ảo (Virtual Method)
### 4.1. Định nghĩa:
- Là phương thức ảo, được khởi tạo ngay tại Class Cha các method chỉ có trong Class Con bằng từ khóa virtual ở đằng trước. Để khai báo thì ta cũng làm tương tự như Phương thức ảo thông thường, tuy nhiên có đổi đi ở thân hàm.
### 4.2. Cú pháp:
- Như đã đề cập bên trên, ở phần thân hàm sẽ khác đi. Đó là, thay vì sử dụng thân hàm với cấu trúc thông thường, ta sẽ cho hàm bằng 0 luôn.
```CPP
class <ClassName>
{
public:
    virtual <returnType> <methodName>([<params>]) = 0;
};
```
### 4.3. Ví dụ:
> Ta có Class NhanVienVanPhong và Class NhanVienXuong là 2 class con của Class NhanVien. Trong Class NhanVienVanPhong và NhanVienXuong chứa một Virtual Method là `getSalary()`.
- Ban đầu, khi khởi tạo, trong Class NhanVien sẽ không có `getSalary()`, tại sẽ không biết là nhân viên nào để tính số ngày làm.
- Cho nên, ta tạo Virtual Method `getSalary()` tại Class Cha và cho nó bằng 0.
```CPP
class NhanVien
{
public:
    NhanVien(){};
    virtual int getSalary() = 0;
};
class NhanVienVanPhong : public NhanVien
{
private:
    int days;
    float coeSalary;
public:
    NhanVienVanPhong(){};
    int getSalary()
    {
        return days * coeSalary;
    }
};
class NhanVienXuong : public NhanVien
{
private:
    int days;
    float coeSalary;
public:
    NhanVienXuong(){};
    int getSalary()
    {
        return days * coeSalary;
    }
};
```
### 4.4. Lớp trừu tượng (Abstract Class):
- Là một Class chứa ít nhất một Virtual Method, và ta không thể tạo được Object thuộc Class này.
- Các Method này vẫn thao tác được như Method bình thường, vẫn có thể gọi bên ngoài Class được, ...
```CPP
class NhanVien
{
public:
    virtual int getSalary() = 0;
};
```
#
Có phải là, mình đã làm sai rồi không ? Tại sao, mọi thứ, không như mình tưởng tượng. Các bạn làm chung với nhau, đáng lẽ... phải tốt chứ.

(Trầm tư)

Có lẽ, mình đã sai thật rồi. Phải chăng, lúc đó mình không cứng đầu, thì bây giờ, mọi người đã làm được nhiều việc hơn rồi. Mình... thật có lỗi quá.
