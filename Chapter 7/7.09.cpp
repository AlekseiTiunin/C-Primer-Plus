#include <iostream>
using namespace std;

const int SLEN = 30;
struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student * ps);
void display3(const student pa[], int n);

int main()
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;
    student * ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete [] ptr_stu;
    cout << "Done\n";
    return 0;
}

int getinfo(student pa[], int n)
{
    int i = 0;
    cout << "Enter student #" << i + 1 << " full name (empty line to stop):" << endl;
    while (i < n && (cin.getline(pa[i].fullname, SLEN)))
    {
        cout << "Enter student hobby:" << endl;
        while (!(cin.getline(pa[i].hobby, SLEN)))
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Enter student hobby:" << endl;
        }
        cout << "Enter student oop level:" << endl;
        while (!(cin >> pa[i].ooplevel))
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Enter student hobby:" << endl;
        }
        while (cin.get() != '\n')
            continue;
        i++;
        if (i < n)
            cout << "Enter student #" << i + 1<< " full name (empty line to stop):" << endl;
        else
            cout << "Max size reached.\n";
    }
    return i;
}

void display1(student st)
{
    cout << "Display 1\n";
    cout << "Student full name: " << st.fullname << endl;
    cout << "Student hobby: " << st.hobby << endl;
    cout << "Student oop level: " << st.ooplevel << endl;
}

void display2(const student * ps)
{
    cout << "Display 2\n";
    cout << "Student full name: " << ps->fullname << endl;
    cout << "Student hobby: " << ps->hobby << endl;
    cout << "Student oop level: " << ps->ooplevel << endl;
}

void display3(const student pa[], int n)
{
    cout << "Display 3\n";
    for (int i = 0; i < n; i++)
    {
        display1(pa[i]);
    }
}
