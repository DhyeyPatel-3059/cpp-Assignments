#include <iostream>
using namespace std;

class Student
{
public:
    void display(); // Function declaration
};

// Function definition outside the class
void Student::display()
{
    cout << "Hello"; // Moved inside the function body
}

int main()
{
    Student s;
    s.display();
    return 0;
}