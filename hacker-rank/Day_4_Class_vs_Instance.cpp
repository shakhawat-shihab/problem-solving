#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    int age;
    Person(int initialAge)
    {
        if (initialAge < 0)
        {
            age = 0;
            cout << "Age is not valid, setting age to 0." << endl;
        }
        else
        {
            age = initialAge;
        }
    }
    void yearPasses()
    {
        age = age + 1;
    }
    void amIOld()
    {
        if (age < 13)
        {
            cout << "You are young." << endl;
        }
        else if (age < 18)
        {
            cout << "You are a teenager." << endl;
        }
        else
        {
            cout << "You are old." << endl;
        }
    }
};

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int age;
        cin >> age;
        Person p = Person(age);
        p.amIOld();
        for (int j = 0; j < 3; j++)
        {
            p.yearPasses();
        }
        p.amIOld();

        cout << '\n';
    }
    return 0;
}