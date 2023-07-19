#include <iostream>

using namespace std;

class Solution
{
    // Write your code here
public:
    int st = 0, qu = 0;
    string s = "";

    void pushCharacter(char c)
    {
        st++;
    }
    void enqueueCharacter(char c)
    {
        s += c;
    }

    char popCharacter()
    {
        st--;
        return s[st];
    }

    char dequeueCharacter()
    {
        int crnt = qu;
        qu++;
        return s[crnt];
    }
};

int main()
{
    // read the string s.
    string s;
    getline(cin, s);

    // create the Solution class object p.
    Solution obj;

    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++)
    {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }

    // cout << obj.s << endl;
    // cout << obj.st << endl;

    bool isPalindrome = true;

    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++)
    {
        // cout << obj.popCharacter() << " " << obj.dequeueCharacter() << endl;
        if (obj.popCharacter() != obj.dequeueCharacter())
        {
            isPalindrome = false;
            break;
        }
    }

    // finally print whether string s is palindrome or not.
    if (isPalindrome)
    {
        cout << "The word, " << s << ", is a palindrome.";
    }
    else
    {
        cout << "The word, " << s << ", is not a palindrome.";
    }

    return 0;
}