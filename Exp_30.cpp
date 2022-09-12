#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a[5];
    cout << "Please enter the students name: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    float arr[5][4];
    float total = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the mark of student no: " << i + 1 << endl;
        float sum = 0;
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
            sum += arr[i][j];
        }
        arr[i][3] = sum / 3;
        total += arr[i][3];
    }
    cout << "Name \t Subject 1\tSubject 2\tsubject 3\tAverage" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << a[i];
        for (int j = 0; j < 4; j++)
        {
            cout << "\t  "
                 << "  " << arr[i][j];
        }
        cout << endl;
    }
    cout << "The average of all student averages is " << total / 5 << endl;
}
