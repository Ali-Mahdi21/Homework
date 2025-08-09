#include <iostream>
using namespace std;

class person
{
protected:
    string name;
    int age;
    int ID;

public:
    void GetInfo()
    {
        cout << "name: ";
        cin >> name;
        cout << "age: ";
        cin >> age;
        cout << "ID: ";
        cin >> ID;
    }

    void ShowInfo()
    {
        cout << "Name:" << name << "\t";
        cout << "Age:" << age << "\t";
        cout << "ID:" << ID << "\t";
    }
};

class teacher : public person
{
private:
    double salary;

public:
    void GetTeacher()
    {
        GetInfo();
        cout << "salary: ";
        cin >> salary;
    }

    void ShowTeacher()
    {
        ShowInfo();
        cout << "Salary:" << salary << endl;
    }
};

class student : public person
{
private:
    double average;

public:
    void GetStudent()
    {
        GetInfo();
        cout << "average:";
        cin >> average;
    }

    void ShowStudent()
    {
        ShowInfo();
        cout << "Average: " << average << endl;
    }
};

int main()
{
    teacher t;
    student s;

    cout << "Enter Teacher info:" << endl;
    t.GetTeacher();
    cout << endl;
    

    cout << "Enter Student info:" << endl;
    s.GetStudent();
    cout << endl;

    cout << "Teacher information:" << endl;
    t.ShowTeacher();
    cout << endl;

    cout << "Student information:" << endl;
    s.ShowStudent();

    return 0;
}
