#include <iostream>

int main()
{
    std::cout << "Enter the amount of bytes:";
    int64_t x;
    std::cin >> x;
    std::cout << std::endl;

    bool *arr = new bool[x];

    for(int i = 0; i < x; i++)
    {
        arr[i] = true;
    }

    std::cout << "Added sucessfully " << x << " bytes to ram on heap\n";
    std::cout << "Press random stuff on keyboard to enter\n";
    std::cin.get();
    std::cin.get();

    return 0;
}
