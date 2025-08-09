#include <iostream>
using namespace std;

int Max(int a[], int length)
{
    int maximum = a[0];
    for (int i=1 ; i<length ; i++)
    {
        if (a[i] > maximum)
            maximum = a[i];
    }
    return maximum;
}

int Min(int a[], int length)
{
    int minimum = a[0];
    for (int i=1 ; i<length ; i++)
    {
        if (a[i] < minimum)
            minimum = a[i];
    }
    return minimum;
}

int main()
{
    int number[]={2, 7, 14, 20, 12, 9};
    int length = sizeof(number) / sizeof(number[0]);

    cout<<"maximum= "<<Max(number , length)<<endl;
    cout<<"minimum= "<<Min(number , length);

    return 0;
}
