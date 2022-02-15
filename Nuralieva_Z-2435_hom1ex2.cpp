#include <iostream>
using namespace std;

int main()
{
double salary, rate, hours, counter;
cout << "Enter the number of hours worked: ";
cin >> hours;
cout << "Enter the employee's hourly rate(0.00 PLN): ";
cin >> rate;

for (counter=0; counter<=hours; counter++)
{
    if (hours>0)
    {
        salary=hours*rate;
        cout<<"The salary is "<<salary<<" PLN "<< endl;
        break;
    }
    else if(hours>40)
    {
        salary = salary + rate * 1.5;
        cout<<"The salary is "<<salary<<" PLN "<< endl;
        break;
    }
    else if(hours<=0)
        break;

}

return 0;
}
