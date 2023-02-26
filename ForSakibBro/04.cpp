#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    string name;
    int id;
    float cgpa;

public:
    Student(string n, int i, float c)
    {
        name = n;
        id = i;
        cgpa = c;
    }

    string getName()
    {
        return name;
    }

    int getId()
    {
        return id;
    }

    float getCgpa()
    {
        return cgpa;
    }
};
int main()
{
    Student s1("John", 1001, 3.5);
    Student s2("Jane", 1002, 3.7);

    float avg_cgpa = (s1.getCgpa() + s2.getCgpa()) / 2.0;

    cout << "Average CGPA: " << avg_cgpa << endl;

    return 0;
}
