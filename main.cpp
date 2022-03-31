#include <iostream>
using namespace std;

class Student
{
  private:
    string name;
  protected:
    int rollNo, age;
  public:
    void getStudentData()
    {
      cout << "Enter the name, roll number and age respectively." << endl;
      cin >> name >> rollNo >> age;
    }
};

class Marks : public Student
{
  protected:
    int m[3];
  public:
    void getMarks()
    {
      cout << "Enter marks in three subjects." << endl;
      for (int i=0; i<3; i++)
        cin >> m[i];
    }
};

class Result : public Marks
{
  private:
    int smarks, minip, sum;
    public:
    void getdata()
    {
      getStudentData();
      getMarks();
      cout << "Enter marks in sports and mini-project." << endl;
      cin >> smarks >> minip;
    }
    void total()
    {
      sum = 0;
      for (int i=0; i<3; i++)
        sum = sum + m[i];
      sum = sum + smarks + minip;
    }
    void display()
    {
      cout << "Total marks: " << sum << endl;
      cout << "Roll number: " << rollNo << endl;
    }
};

int main()
{
  Result r;
  r.getdata();
  r.total();
  r.display();
}
