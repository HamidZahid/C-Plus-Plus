#include <iostream>

using namespace std;

// void swapPointer(int *a, int *b) // this Will swap the value Pointers
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int &swapReferenceVar(int &a, int &b) // this Will swap the value Reference Variable
// {
// int temp = a;
// a = b;
// b = temp;
// return a, b;
// }

// int swap(int a, int b) This Will Not Swap
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

class Hamid
{
private:
    int a, b, c;

public:
    int e, r;
    void setData(int a1, int b1, int c1)
    {
        a = a1;
        b = b1;
        c = c1;
    }
    void getData()
    {
        cout << "this is the value of a " << a << endl;
        cout << "this is the value of b " << b << endl;
        cout << "this is the value of c " << c << endl;
        cout << "this is the value of e " << e << endl;
        cout << "this is the value of r " << r << endl;
    }
};

// void Hamid ::setData(int a1, int b1, int c1)
// {
//     a = a1;
//     b = b1;
//     c = c1;
// };

int main()
{

    Hamid zahid;
    zahid.e = 67;
    zahid.r = 89;
    zahid.setData(67, 67, 67);
    zahid.getData();
    // int x = 44, y = 46;
    // cout << "The Value OF x " << x << " the value of y " << y << endl;
    // swapReferenceVar(x, y) = 789;
    // swapReferenceVar(x, y) = 900;
    // swapPointer(&x, &y);
    // swap(x, y);
    // cout << "The Value OF x " << x << " the value of y " << y << endl;
    // for (int i = 0; i <= 10; i++)
    // {
    //     /* code */

    //     if (i == 5)
    //     {
    //         continue;
    //     }
    //     cout << i << endl;
    // }
    // int a = 23;
    // int *b = &a;
    // int **c = &b;
    // cout << "This is Value of A " << a << endl;
    // cout << "This is Value of *b " << b << endl;
    // cout << "This is Value of c " << **c << endl;
    // int a;
    // cin >> a;
    // cout << a - 56;

    // int marks[] = {22, 22, 26, 24, 233, 23, 25, 4};

    // for (int i = 0; i <= 7; i++)
    // {
    //     cout << "this is me " << marks[i] << endl;
    // }
    // int i = 0;
    // do
    // {
    //     cout << "this is me " << marks[i] << endl;
    //     i++;
    // } while (i <= 7);
    // while (i <= 7)
    // {
    //     cout << "wah wah wah " << marks[i] << endl;
    //     i++;
    // }

    return 0;
}