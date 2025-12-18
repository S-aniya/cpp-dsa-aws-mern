//this program uses all the basic concepts of c++
//project:Student Performance Manager
/*A menu-driven program that:

Takes student details

Stores marks

Calculates grade

Allows viewing grades

Analyzes performance */
#include<iostream>
#include<string>
using namespace std;

class Student
{
    public:
    int roll_number;
    string name;
    int marks[3];
    float average;
    char grade;
};


Student students[50];
int StudentCount=0;

void EnterDetails(string name,int roll_number)
{
    students[StudentCount].name = name;
    students[StudentCount].roll_number = roll_number;

    cout<<"Enter marks in 3 subjects(Phy,Chem,Maths): \n";
    for(int i=0;i<3;i++)
    {
        cin>>students[StudentCount].marks[i];
    }

    int sum=0;
    for(int i=0;i<3;i++)
    {
        sum+=students[StudentCount].marks[i];
    }

    students[StudentCount].average = sum / 3.0;
    
    if(students[StudentCount].average>80)
    {
        students[StudentCount].grade='A';
    }
    else if(students[StudentCount].average>70 && students[StudentCount].average<80)
    {
        students[StudentCount].grade='B';
    }
    else if(students[StudentCount].average>50 && students[StudentCount].average<70)
    {
        students[StudentCount].grade='C';
    }
    else 
    {
        students[StudentCount].grade='F';
    }
    StudentCount++;
    return ;
}

void viewstudent(int roll_number)
{
    cout<<"Details for Roll number: "<<roll_number<<" are: "<<endl;
       for(int i=0;i<StudentCount;i++)
       {
        if(students[i].roll_number=roll_number)
        {
            cout<<"Name: "<<students[i].name<<endl;
            cout<<"Roll Number: "<<students[i].roll_number<<endl;
            cout<<"Average: "<<students[i].average<<endl;
            cout<<"Grade: "<<students[i].grade<<endl;
        }
       }
    return;
}

void viewdatabase()
{
    cout<<"S.NO\tNAME\tROLL NUMBER\tAVERAGE\tGRADE"<<endl;
    for(int i=0;i<StudentCount;i++)
    {
        cout<<i+1<<"\t"<<students[i].name<<"\t"<<students[i].roll_number<<"\t\t"<<students[i].average<<"\t"<<students[i].grade<<endl;
    }
}



int main()
{
    int option=0;
    while(option!=4)
    {
        cout<<"******** Menu********* "<<endl; //Menu to select action
    cout<<"1.Enter Details"<<endl;
    cout<<"2.View Student"<<endl;
    cout<<"3.View whole database"<<endl;
    cout<<"4.EXIT"<<endl;
    cin>>option;

    
    switch(option)
    {
        case 1:
        {
            int roll_number;
            string name;
            cout<<"Enter Name: ";
            cin.ignore();
            getline(cin,name);
            cout<<"Enter Roll Number: ";
            cin>>roll_number;
            EnterDetails(name,roll_number);
            break;
        }

        case 2:
        {
            int roll_number;
            cout<<"Enter student roll number you want to view: ";
            cin>>roll_number;
            viewstudent(roll_number);
            break;
        }

        case 3:
        {
              viewdatabase();
              break; 
        }

        case 4:
        {
            cout<<"Exiting...."<<endl;
            break;
        }

        default:
        {
            cout<<"Invalid...."<<endl;
        }
    }
    }
    return 0;
}
