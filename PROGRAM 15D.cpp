// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: PRINT AN INTEGER IN REVERSE (EXPERIMENT: 15D)

// CODE: 

#include <iostream>
using namespace std;

void print_rev(int i)
{
    if (i > 0)
    {
        cout << (i % 10);
        print_rev(i / 10);
    }
}

int main()
{
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    cout << "Reversed integer: ";
    print_rev(num);

    return 0;
}

// OUTPUT:

// Enter an integer: 137
// Reversed integer: 731
