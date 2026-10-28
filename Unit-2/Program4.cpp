#include <iostream>
using namespace std;

class Math
{
public:
    inline int cube(int x)
    {
        return x * x * x; // Moved inside the function body
    }
};

int main()
{
    Math m; // Added space between Math and m
    int result = m.cube(5);
    cout << "Cube of 5 = " << result << endl;
    return 0;
}