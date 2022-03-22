#include <iostream>
#include <fstream>

using namespace std;
/*
1. fstreambase
2. ifstream
3. ofstream
*/

int main()
{
    string st = "Hamid bhai";
    // Opening files using constructor and writing it
    ofstream outtt("sample60.txt"); // Write operation
    outtt << st;

    string st2;
    // Opening files using constructor and reading it
    ifstream on("sample60b.txt"); // Read operation
    // on >> st2;
    getline(on, st2);
    cout << st2;

    return 0;
}