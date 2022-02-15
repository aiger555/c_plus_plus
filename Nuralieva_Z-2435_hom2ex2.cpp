#include <iostream>
#include <ctime>

using namespace std;
void display_array(int *a, int n);
void average_oddv(int *a, int n);

int main()
{
    int a, n, b;
    cout<<"Enter the length of the array: "; cin>>n;
    if (n>0)
    {
        cout<<"Enter the range: "; cin>>a>>b;
        int *five = new int[n];
        if (a>b)
        {
            int tm = a;
            a=b;
            b=tm;
        }
        int randval = b-a+1;
        for (int i=0; i<n; ++i)
            five[i] = a + rand() % randval;
        display_array(five, n);
        average_oddv(five, n);
    }

    return 0;
}

void display_array(int *a, int n){
    for (int i=0; i < n; i++)
        cout<<a[i];
}

void average_oddv(int *a, int n){
    int sum = 0;
    for (int i=0; i < n; i++){
        if(a[i] % 2 != 0)
            sum += a[i];
    }
    sum /= n;
    cout<<"\nAverage of odd numbers is: "<< sum;
}
