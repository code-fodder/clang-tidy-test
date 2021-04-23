#include "myheader.hpp"


int main()
{

    for (int i; i < 4; i++)
    {
       std::cout << "value is: " << std::to_string(i) << std::endl;
    }

    int ar[1] = {1};
    ar[11] = 1;
    std::cout << "value is: " << std::to_string(ar[0]) << std::endl;

    std::cout << "value is: " << std::to_string(silly_function()) << std::endl;
    std::cout << "value is: " << std::to_string(silly_function2()) << std::endl;

    testing::bob b;
    std::cout << "value is: " << std::to_string(b.func1(2)) << std::endl;
    std::cout << "value is: " << std::to_string(b.x) << std::endl;

    return 0;
}
