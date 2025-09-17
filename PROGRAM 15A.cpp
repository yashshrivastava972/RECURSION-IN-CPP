// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: FACTORIAL (EXPERIMENT: 15A)

// CODE: 

#include <iostream>
using namespace std;

int fact(int n)
{
    if (n <= 1)
        return 1;
    else
        return (n * fact(n - 1));
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Factorial of " << num << " is " << fact(num);
    return 0;
}

// OUTPUT:

// Enter a number: 3
// Factorial of 3 is 6
