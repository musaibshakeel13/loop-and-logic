#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    // Outer loop controls rows
    for(int i = 1; i <= n; i++)
    {
        // Inner loop prints stars
        for(int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
