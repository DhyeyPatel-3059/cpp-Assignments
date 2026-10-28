#include <iostream>
using namespace std;

class Animal
{
protected:
    int age;
};

class Dog : public Animal
{
public:
    void setAge(int a)
    {
        age = a; // Moved inside function body
    }

    void displayAge()
    {
        cout << "Dog's Age = " << age << " years" << endl; // Moved inside function body
    }
};

int main()
{
    Dog d1;
    // Setting age using derived class member function
    d1.setAge(5);
    // Displaying age
    d1.displayAge();
    return 0;
}