// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: PRINT A STRING IN REVERESE (EXPERIMENT: 15C)

// CODE: 

#include <iostream>
using namespace std;

void print_rev(char *str)
{
    if (*str != '\0')
    {
        print_rev(str + 1);
        cout << *str;
    }
}

int main()
{
    char str[100];
    cout << "Enter a string: ";
    cin >> str;

    cout << "Reversed string: ";
    print_rev(str);

    return 0;
}

// OUTPUT:

// Enter a string: YASH
// Reversed string: HSAY
