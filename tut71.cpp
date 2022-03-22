#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        // cout << v.at(i) << " ";
    }
    cout << endl;
}

int main()
{
    // vector<int> obj1;

    // int element, i;
    // for (i = 0; i < 4; i++)
    // {
    //     cout << "Enter an Element Below " << endl;
    //     cin >> element;
    //     obj1.push_back(element);
    // }
    // display(obj1);
    // vector<int>::iterator hamid = obj1.begin();
    //  obj1.insert(hamid + 4, 3867);
    // display(obj1);

    vector<int> obj2(15, 12);

    display(obj2);

    return 0;
}