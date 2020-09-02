#include <bits/stdc++.h>
using namespace std;

class Team
{
    int count = 0;

public:
    int problems(int sol1, int sol2, int sol3)
    {
        if (sol1 + sol2 + sol3 >= 2) //To check if atleast two members have solution
            count++;
        return count;
    }
};

int main()
{
    int n, sol1, sol2, sol3, solved_count;
    Team obj;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> sol1 >> sol2 >> sol3;
        solved_count = obj.problems(sol1, sol2, sol3);
    }

    cout << solved_count;
    return 0;
}