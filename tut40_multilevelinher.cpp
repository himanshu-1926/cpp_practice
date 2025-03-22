#include <iostream>
using namespace std;
class student
{
protected:
    int rollno;

public:
    void setrollno(int);
    void getrollno(void);
};
void student::setrollno(int r)
{
    rollno = r;
}
void student::getrollno()
{
    cout << "the roll no. is : " << rollno << endl;
}
class exam : public student
{
protected:
    float maths;
    float physics;

public:
    void setmarks(float, float);
    void getmarks(void);
};
void exam::setmarks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void exam::getmarks()
{
    cout << "marks obtained in maths is : " << maths << endl;
    cout << "marks obtained in physics is : " << physics << endl;
}
class result : public exam
{
    float percentage;

public:
    void display()
    {
        getrollno();
        getmarks();
        cout << "your percentage is " << (maths + physics) / 2<<"%" << endl; 
    }
};

int main()
{
    result him;
    him.setrollno(79);
    him.setmarks(92, 59);
    him.display();

    return 0;
}