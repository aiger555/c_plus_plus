#include <iostream>
using namespace std;
void display(int **a, int r, int c);
void input_ar(int **a, int r, int c);
double *avg(int **a, int r, int c);
int best_student(int **a, int r, int c);
void passed(int **a, int r, int c);
void input_(char **a, int r);
void uppercase(char **a, int r);


int main() {
    int student,exercise;
    cout<<"Enter quantity of students: "; cin>>student;
    cout<<"Enter quantity of exercises: "; cin>>exercise;
    if(student>0 && exercise>0) {
        int **Array = new int *[student];
        for(int s=0; s<student; ++s)
            Array[s] = new int[exercise];
        input_ar(Array, student, exercise);
        display(Array, student, exercise);
        avg(Array, student, exercise);
        cout<<"Best student has score "<<best_student(Array, student, exercise);
        passed(Array, student, exercise);
        for(int s=0; s<student; ++s)
            delete []Array[s];
        delete []Array;
        char **Arr = new char *[student];
        for(int s=0; s<student; ++s)
            Arr[s] = new char [20];

        input_(Arr, student);
        uppercase(Arr, student);
        for(int t=0; t<student; ++t)
            delete []Arr[t];
        delete []Arr;
      }

    return 0;
}

void input_ar(int **a, int r, int c){
    for (int i=0; i<r; ++i) {
        cout<<"Student "<<i+1<<" exercise "<<endl;
        for (int j = 0; j < c; ++j) {
            cin >> a[i][j];
        }

    }
}

void display(int **a,  int r, int c){
    for (int i=0; i<r; ++i){
        for (int j=0; j<c; ++j)
            cout<<" Student "<<i+1<<" points for exercise "<<j+1<<"="<<a[i][j];
        cout<<endl;
    }
}

double *avg(int **a, int r, int c){
    double *aver = new double [r]{};
    for (int i=0; i<r; ++i){
        for(int j=0; j<c; ++j)
            aver[i] += a[i][j];
        aver[i] /= c;
    }
    for (int i=0; i<r; ++i)
        cout<<"Average of points "<<aver[i]<<endl;
    return aver;
}

int best_student(int **a, int r, int c) {
    int max = 0;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j)
            if (a[i][j] > max) {
                max = a[i][j];
            }
    }
    return max;

}

void passed(int **a, int r, int c){
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j)
            if (a[j][i]>49) {
                int **new_ar = new int *[i];
                for(int ps=0; ps<i; ++ps) {
                    new_ar[ps] = new int[j];
                    cout << new_ar[ps][j];
                }
                for(int ps=0; ps<i; ++ps)
                    delete []new_ar[ps];
                delete []new_ar;
            }
    }
}
void input_(char **a, int r)
{
    for(int i=0; i<r; i++)
    {
        cout<<"\nEnter the name: ";
        cin>>a[i];
    }
}
void uppercase(char **a, int r) {
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<20; j++)
        {
            if(a[i][j] >= 97 && a[i][j] <= 122)
                a[i][j] -= 32;
        }
    }
    for(int i = 0; i<r && a[i][0]!='\0'; i++)
        cout<<a[i]<<" ";
}