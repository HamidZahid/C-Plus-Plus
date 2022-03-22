#include <iostream>

using namespace std;
template <class T1 = int, class T2 = char, class T3 = float>
class MyClass
{
public:
    T1 Data1;
    T2 Data2;
    T3 Data3;
    MyClass(T1 x, T2 y, T3 z)
    {
        Data1 = x;
        Data2 = y;
        Data3 = z;
    }
    void display()
    {
        cout << "The Value OF DATA1 IS " << Data1 << endl;
        cout << "The Value OF DATA2 IS " << Data2 << endl;
        cout << "The Value OF DATA3 IS " << Data3 << endl;
    }
};
int main()
{
    MyClass<> hamid(45, 'F', 69.69);
    hamid.display();
    cout << endl;
    MyClass<int, float, double> amid(45, 69.9, 6969);
    amid.display();

    return 0;
}