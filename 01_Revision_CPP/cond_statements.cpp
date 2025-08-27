#include <bits/stdc++.h>
using namespace std;
int main()
{
    int age;
    cin >> age;
    if (age >= 18)
    {
        cout << "You are an adult" << "\n";
    }
    else if (age < 18 && age>=0)
    {
        cout << "You are a kid" << "\n";
    }
    else
    {
        cout << "Incorrect Age" << "\n";
    }
    return 0;
}