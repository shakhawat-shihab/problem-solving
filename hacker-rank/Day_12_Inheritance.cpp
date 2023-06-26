#include <bits/stdc++.h>
using namespace std;

class Person
{
protected:
    string firstName;
    string lastName;
    int id;

public:
    Person(string firstName, string lastName, int identification)
    {
        this->firstName = firstName;
        this->lastName = lastName;
        this->id = identification;
    }
    void printPerson()
    {
        cout << "Name: " << lastName << ", " << firstName << "\nID: " << id << "\n";
    }
};

class Student : public Person
{
private:
    vector<int> testScores;

public:
    Student(string firstName, string lastName, int id, vector<int> testScores) : Person(firstName, lastName, id)
    {
        this->testScores = testScores;
    }
    char calculate()
    {
        double sum = 0;
        for (auto score : testScores)
        {
            sum += score;
        }
        double avg = sum / testScores.size();
        char ch;
        if (avg >= 90)
        {
            ch = 'O';
        }
        else if (avg >= 80)
        {
            ch = 'E';
        }
        else if (avg >= 70)
        {
            ch = 'A';
        }
        else if (avg >= 55)
        {
            ch = 'P';
        }
        else if (avg >= 40)
        {
            ch = 'D';
        }
        else
        {
            ch = 'T';
        }
        return ch;
    }
};

int main()
{
    string firstName;
    string lastName;
    int id;
    cin >> firstName >> lastName >> id;
    int n;
    cin >> n;
    vector<int> testScores;
    while (n--)
    {
        int x;
        cin >> x;
        testScores.push_back(x);
    }
    Student *s = new Student(firstName, lastName, id, testScores);
    s->printPerson();
    cout << "Grade: " << s->calculate() << "\n";
    return 0;
}