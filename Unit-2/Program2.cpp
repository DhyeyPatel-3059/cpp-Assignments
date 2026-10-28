#include <iostream>
using namespace std;

class Box
{
public:
    // Member function defined inside the class
    int square(int x)
    {
        return x * x; // Moved inside the function body
    }
};

int main()
{
    Box b1;
    int result = b1.square(5);
    cout << "Square = " << result << endl;
    return 0;
}