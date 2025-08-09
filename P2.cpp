#include <iostream>
using namespace std;
struct person
{
    string name;
    int age;
};

double Avg(person p[], int count)
{
    double sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum += p[i].age;
    }
    return sum / count;
}

int main()
{
    int n = 10;
    person p[n];
    
    for(int i=0 ; i<n ; i++)
    {
        cout<<"enter name:";
        cin>>p[i].name;
        cout<<"enter age:";
        cin>>p[i].age;
        cout<<endl;
    }
    
    cout<<"average age:"<<Avg(p , n);
}
