#include <iostream>

using namespace std;
class Complex
{
    int real, imaginary;

public:
    void getData()
    {
        cout << "your real data is " << real << endl;
        cout << "your imaginary data is " << imaginary << endl;
    }
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};
int main()
{
    // Complex c1;
    // c1->setData(1, 34);
    // c1->getData();
    Complex *ptr = new Complex;
    // (*ptr).setData(56, 67);
    // (*ptr).getData();
    ptr->setData(90, 98);
    ptr->getData();
    return 0;
}