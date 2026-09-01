//
// buggy.cpp
//

#include <iostream>
#include <vector>
#include <cstring>

void leaky_function() 
{
    char* ptr = new char[100];
    std::strcpy(ptr, "This is a very long string that might overflow the buffer!!!");
    // No delete[] ptr;
}

int get_value() 
{
    return 42;
}

int main() 
{
    int* arr = new int[10];
    for (int i = 0; i <= 10; ++i) {        // off-by-one
        arr[i] = i * i;
    }

    std::vector<int> vec = {1, 2, 3};
    std::cout << vec[5] << std::endl;     // out of bounds

    if (get_value() = 42) {               // assignment instead of comparison
        std::cout << "Always true!\n";
    }

    int x = 10 / 0;                       // division by zero (static analysis can detect literal zero)

    leaky_function();

    delete [] arr;                         // OK, but we have other leaks

    return 0;
}


