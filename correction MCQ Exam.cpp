#include <iostream>
#include <string>
using namespace std;
int main()
{
    string stu_name[100][100];
    char key[100][100], answers[100][100];
    int student_name, number_question, sum = 0;

    cout << "Enter the number of students : " << endl;
    cin >> student_name;
    cout << "Enter number of questions : " << endl;
    cin >> number_question;

    cout << "Enter the students name : ";
    for (int i = 0; i < student_name; i++)
    {
        cin >> stu_name[i][0];
    }

    cout << "Enter the model answer : ";
    for (int i = 0; i < number_question; i++)
    {
        cin >> key[i][0];
    }

    for (int i = 0; i < student_name; i++)
    {
        cout << "Enter the student answers :" << endl;
        for (int j = 0; j < number_question; j++)
        {
            cin >> answers[i][j];
        }
    }

    for (int i = 0; i < student_name; i++)
    {
        for (int j = 0; j < number_question; j++)
        {
            if (answers[i][j] == key[j][0])
                sum = sum + 1;

            else if (answers[i][j] != key[j][0])
                sum = sum + 0;
        }
        cout << "The student " << stu_name[i][0] << " is " << sum << endl;
        sum = 0;
    }
}