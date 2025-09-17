// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: ADDITION OF ALL INTEGERS UP TO N (EXPERIMENT: 15B)

// CODE: 

#include <iostream>
using namespace std;

int sumup(int n)
{
    if (n <= 0)
        return 0;
    else
        return (n + sumup(n - 1));
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Sum of integers up to " << num << " is " << sumup(num);
    return 0;
}

// OUTPUT:

// Enter a number: 3
// Sum of integers up to 3 is 6

