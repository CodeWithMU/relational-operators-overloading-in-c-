#include <iostream>
using namespace std;
class student
{
    int age;

public:
    student(int a)
    {
        age = a;
    }
    bool operator>(student &obj)
    {
        if (age > obj.age)
        {
            return true;
        }
        else
            return false;
    }
    bool operator<(student &obj)
    {
        if (age < obj.age)
        {
            return true;
        }
        else
            return false;
    }
};
int main()
{
    student obj1(10);
    student obj2(20);
    if (obj1 > obj2)
    {
        cout << "obj1 is greater than object 2";
    }
    if (obj1 < obj2)
        cout << "The obj2 is greater than obj 1" << endl;
    return 0;
}