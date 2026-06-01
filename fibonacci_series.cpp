#include <iostream>
using namespace std;

int main()
{
    int n;
    int a = 0, b = 1, c;

    // Taking input from user
    cout << "Enter number of terms: ";
    cin >> n;

    // Printing Fibonacci series
    cout << "Fibonacci Series: ";

    // Loop runs n times
    for(int i = 1; i <= n; i++)
    {
        cout << a << " ";

        // Calculate next term
        c = a + b;

        // Update values
        a = b;
        b = c;
    }

    return 0;
}
