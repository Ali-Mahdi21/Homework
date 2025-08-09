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
    double numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    cout << "Average is: " << Avg(numbers, size) << endl;
    return 0;
}
