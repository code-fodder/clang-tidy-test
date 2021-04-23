#include <iostream>
#include <vector>


namespace testing
{

struct bob
{
    int x;
    int func1(int i)
    {
        if (i < 1)
        {
            return i + 1;
        }
        else
        {
            return i + 2;
        }
    }
};


}


inline int silly_function()
{
    int test;

    return test + 1;
}

int silly_function2()
{
    int test;

    return test + 1;
}
