#include <iostream>
using namespace std;
class Student
{
private:
    int Roll;
    string Name;
    int mathMarks;
    int phyMarks;
    int chemMarks;

public:
    Student(int r, string n, int m, int p, int c)
    {
        Roll = r;
        Name = n;
        mathMarks = m;
        phyMarks = p;
        chemMarks = c;
    }
    int total()
    {
        return mathMarks + chemMarks + phyMarks;
    }
    char grade()
    {
        float average = total() / 3;
        if (average > 60)
            return 'A';
        else if (average >= 40 && average < 60)
            return 'B';
        else
            return 'C';
    }
};
int main()
{
    int Roll;
    string Name;
    int m, p, c;
    cout << "Enter the roll of the student ";
    cin >> Roll;
    cout << "Enter the name of the student ";
    cin >> Name;
    cout << "Enter marks in three subjects ";
    cin >> m >> p >> c;
    Student S(Roll, Name, m, p, c);
    cout << "Total marks : " << S.total() << endl;
    cout << "Grade of the student : " << S.grade() << endl;
}
