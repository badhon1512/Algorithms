#include <iostream>

using namespace std;

class StudentId
{
    protected:
        int student[5] = {353,41187,87777,59999,39347};

};

class GPA : public StudentId
{
    int sub, id, i, j;
    float total = 0, gpa, subject[];
public:
    void getStudentID()
    {
        cout<<"Enter your student id: ";
        cin>>id;
    }

    void getSubVal()
    {
        cout<<"Enter the number of subject this semester: ";
        cin>>sub;
    }

    void getSubGP()
    {
        for(j=0; j<sub; j++)
        {
            cout<<"Enter your subject (" << j + 1 << ")  numb: ";
            cin>> subject[j];
            if(subject[j]>=90)
            {
                cout<<"A+"<<endl;
                total+=3*4;
            }
            else if(subject[j]<90&&subject[j]>=85)
            {
                cout<<"A"<<endl;
                total+=(3*3.75);
            }
             else if(subject[j]<85&&subject[j]>=80)
            {
                cout<<"B+"<<endl;
                total+=(3*3.50);
            }
            else if(subject[j]<80&&subject[j]>=75)
            {
                cout<<"B"<<endl;
                total+=(3*3.25);
            }
            else if(subject[j]<75&&subject[j]>=70)
            {
                cout<<"c+"<<endl;
                total+=(3*3.00);
            }
            else if(subject[j]<70&&subject[j]>=65)
            {
                cout<<"c"<<endl;
                total+=(3*2.75);
            }
            else if(subject[j]<65&&subject[j]>=60)
            {
                cout<<"D+"<<endl;
                total+=(3*2.50);
            }
            else if(subject[j]<60&&subject[j]>=50)
            {
                cout<<"D"<<endl;
                total+=(3*2.25);
            }
            else if(subject[j]<50)
            {
                cout<<"F"<<endl;
                total+=0;
            }
            else
                cout<<"wrong input"<<endl;

        }
    }

    void gpaCalculation()
    {
        getStudentID();

        for( i=0; i < 5; i++ )
        {
            if( id == student[i] )
            {

                getSubVal();
                getSubGP();

                gpa = total /(3*sub);
                cout<<"Your  GPA is:"<< gpa << endl << endl;
            }
        }

    }


};

int main()
{
    GPA zisan,badhon;

    zisan.gpaCalculation();
    badhon.gpaCalculation();

    return 0;
}


