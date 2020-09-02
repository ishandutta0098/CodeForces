#include <bits/stdc++.h>
using namespace std;

class Words
{
public:
    void abbreviation(string word)
    {
        int len;

        len = word.length();

        if (len <= 10)
            cout << word << endl;
        else
        {
            cout << word[0] << len - 2 << word.back() << endl;
        }
    }
};

int main()
{
    int n;
    string word;

    Words obj;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> word;
        obj.abbreviation(word);
    }
    return 0;
}