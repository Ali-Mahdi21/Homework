#include <iostream>
using namespace std;

double Avg(double a[], int count)
{
    double sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum += a[i];
    }
    return sum / count;
}

int main()
{
    double numbers[] = {1,2,3,4,5};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    cout << "Average is: " << Avg(numbers, size) << endl;
    return 0;
}
