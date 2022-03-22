#include <iostream>

using namespace std;

int main()
{
    int a = 4;
    int *ptr = &a;
    cout << "Hello i am Int A " << *ptr << endl;

    int *p = new int(30);
    delete p;
    cout << "THe value of this is " << *(p) << endl;

    int *arr = new int[6];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    arr[5] = 60;
    cout << "THe value of OF Arr AT 0 " << arr[0] << endl;
    cout << "THe value of OF Arr AT 1 " << arr[1] << endl;
    cout << "THe value of OF Arr AT 2 " << arr[2] << endl;
    cout << "THe value of OF Arr AT 3 " << arr[3] << endl;
    cout << "THe value of OF Arr AT 4 " << arr[4] << endl;
    cout << "THe value of OF Arr AT 5 " << arr[5] << endl;
    return 0;
}