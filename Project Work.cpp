/*	10689771
	Abdul-Aziz Abdul-Sherif*/

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iomanip>
using namespace std;
void Students();
void Courses();
void Workers();


struct Student
{
string name;
vector<string> Scourses;
int year;
int level;
};

struct Staff
{
    string name;
    string job;
    int year;
};



int main()
{

vector<Staff> workers;
vector<string> courses;
vector<Student> Stud;
vector<char> grades;
vector<string> coursesS;
courses.push_back("English Language");
courses.push_back("Mathematics");
courses.push_back("Science");
courses.push_back("Social Studies");

    cout<<"                      SCHOOL MANAGEMENT SYSTEM           "<<endl;
    cout<<"========================================================================"<<endl;
    cout<<"Enter a record you would like to work on."<<endl;
    cout<<"1 : Student"<<endl;
    cout<<"2 : Workers/Staff"<<endl;
    cout<<"3 : Courses"<<endl;
    cout<<":";
    int c;

    cin>>c;
    cout<<"========================================================================"<<endl;
while(c!='q')
{
     if(c == 1)
    {
        int op;
        cout<< "\t\t  STUDENT MANAGEMENT "<< endl;
        cout<<"====================================================================="<<endl;
        cout<<"1 : Add To Record."<<endl;
        cout<<"2 : Edit An Item In Existing Record."<<endl;
        cout<<"3 : Delete An Item In The Record."<<endl;
        cout<<"4 : Add Grades To A Student's course."<<endl;
        cout<<"5 : Print Out A Student's Academic Record."<<endl;
        cout<<":";
        cin>>op;
        cout<<"========================================================================"<<endl;
        if(op==1)
        {   
		    cout<<  "\t\t  NEW RECORD"<<endl;
       		cout<<"====================================================================="<<endl;	
			char reply;
            string sname,sfname,slname;
            int syearr;
            int slvl;
            cout<<"Enter First Name: ";
            cin>>sfname;
            cout<<endl;
            cout<<"Enter Last Name: ";
            cin>>slname;
            cout<<endl;
            sname=sfname+" "+slname;
            cout<<"Enter Year Of Admission: ";
            cin>>syearr;
            cout<<endl;
            cout<<"Enter Level: ";
            cin>>slvl;
            cout<<endl;
            for(int i=0;i<courses.size();i++)
                {cout<<i+1<<". "<<courses[i]<<endl;}
            int number;
            cout<<"Enter the position of the course you wish to add the student to: ";
            cin>>number;
            cout<<endl;
            number=number-1;
            coursesS.push_back(courses[number]);
            cout<<"Do you want to add more courses?Input 'Y' or 'y' for yes and 'N' or 'n' for no: ";
            cin>>reply;
            while(reply=='y'||reply=='Y')
                {
                cout<<"Enter the position of the course you wish to add the student to: ";
                cin>>number;
                cout<<endl; //if condition
                number=number-1;
                coursesS.push_back(courses[number]);
                cout<<"Do you want to add more courses?Input 'Y' or 'y' for yes and 'N' or 'n' for no: ";
                cin>>reply;
                }

            Student info={sname,coursesS,syearr,slvl};
            Stud.push_back(info);
            cout<<Stud[0].name<<endl;

            for(int i=0;i<Stud.size();i++)
            {
                    cout<<i<<". "<<Stud[i].name<<"    L"<<Stud[i].level<<endl;
            }
        }
        else
        {

  
            if(op== 4)
       		cout<< "\t\t  STUDENT'S GRADES "<<endl;
        	cout<<"====================================================================="<<endl;
            {
            int snumber;
            for(int i=0;i<Stud.size();i++)
            {
                    cout<<i<<". "<<Stud[i].name<<"    L"<<Stud[i].level<<endl;
            }
            cout<<"Enter the position of the Student whose grades you want to record: "<<endl;
            cin>>snumber;
            cout<<endl;
            if(Stud[snumber].Scourses.empty()==true)
            {
                cout<<"There are no courses available to this student."<<endl;
            }
            else
            {
                char g;
                for(int i=0;i<Stud[snumber].Scourses.size();i++)
                {
                    cout<<"Enter the grades for "<<Stud[snumber].Scourses[i]<<":";
                    cin>>g;
                    grades.push_back(g);
                    cout<<endl;
                }
                cout<<endl;

            }
            }
        	}
            else
            {
            int op;
                if(op== 5)
                {
             int no;
                for(int i=0;i<Stud.size();i++)
             {
                    cout<<i<<". "<<Stud[i].name<<"  L"<<Stud[i].level<<endl;
             }
             cout<<"Enter the Student's number: "<<endl;
             cin>>no;
             ofstream outfile;
             outfile.open("Studentfile.txt");


             outfile<<"ID:00"<<no<<endl;
             outfile<<"Name: "<<Stud[no].name<<setw(20)<<"Year:L"<<Stud[no].level<<endl;
             outfile<<"Subject"<<setw(20)<<"Grade"<<endl;
             outfile<<"--------------------------------------------------------------------------------"<<endl;
              for(int i=0;i<Stud[0].Scourses.size();i++)
            {
                outfile<<Stud[0].Scourses[i]<<setw(20)<<grades[i]<<endl;
            }
             outfile<<"--------------------------------------------------------------------------------"<<endl;
             outfile.close();
                }
                 else
                 {
                     if(op==2)
                     {
                          int input;
            string first,last,nam;
            int lvl;
            int yearr2;
            char reply;
              for(int i=1;i<Stud.size();i++)
            {
                    cout<<i<<". "<<Stud[i].name<<"    L"<<Stud[i].level<<endl;
            }
       		cout<< "\t\t  EDIT STUDENT'S RECORDS "<<endl;
        	cout<<"====================================================================="<<endl;
            cout<<"Enter the position of the Student you want to edit: ";
            cin>>input;
            cout<<endl;
            cout<<"Enter First Name: ";
            cin>>first;
            cout<<endl;
            cout<<"Enter Last Name: ";
            cin>>last;
            cout<<endl;
            nam=first+" "+last;
            cout<<"Enter Year of Admission: ";
            cin>>yearr2;
            cout<<endl;
            cout<<"Enter Level:";
            cin>>lvl;
            cout<<endl;
            for(int i=0;i<courses.size();i++)
                {cout<<i+1<<". "<<courses[i]<<endl;}
            int number;
            cout<<"Enter the position of the course you wish to add the student to: ";
            cin>>number;
            cout<<endl;
            number=number-1;
            coursesS.push_back(courses[number]);
            cout<<"Do you want to add more courses?Input 'Y' or 'y' for yes and 'N' or 'n' for no: ";
            cin>>reply;
            while(reply=='y'||reply=='Y')
                {
                cout<<"Enter the position of the course you wish to add the student to: ";
                cin>>number;
                cout<<endl; 
                number=number-1;
                coursesS.push_back(courses[number]);
                cout<<"Do you want to add more courses?Input 'Y' or 'y' for yes and 'N' or 'n' for no: ";
                cin>>reply;
                }
            Stud[input].name=nam;
            Stud[input].year=yearr2;
            Stud[input].level=lvl;
            for(int i=0;i<Stud[input].Scourses.size();i++)
            {
                Stud[input].Scourses[i]=coursesS[i];
            }
                     }
                     else
                     {
                         if(op==3)
                         {
                             for(int i=0;i<Stud.size();i++)
                {
                    cout<<i<<". "<<Stud[i].name<<"  L"<<Stud[i].level<<endl;
            }
       		cout<<  "\t\t  DELETE STUDENT'S RECORDS "<<endl;
        	cout<<"====================================================================="<<endl;
            int number;
            cout<<"Enter the number of the Student you want to delete: ";
            cin>>number;
            cout<<endl;
            Stud.erase(Stud.begin() + number);
                         }
                         else
                         {
                             cout<<"Invalid Input"<<endl;
                         }
                     }
                 }

            }
        }
    }
      else
      {
          if(c==2)
          {
               int op;
        cout<<"\t\t  STAFF MANAGEMENT "<<endl;
        cout<<"====================================================================="<<endl;
        cout<<"1 : Add Record."<<endl;
        cout<<"2 : Edit An Item In Existing Record."<<endl;
        cout<<"3 : Delete An Item In The Record."<<endl;
        cout<<":";
        cin>>op;
        cout<<"========================================================================"<<endl;
              if(op==1)
{


    cout<< "\t\t NEW STAFF RECORD "<<endl;
    cout<<"====================================================================="<<endl;
    string namee,fname,lname;
           string jobb;
           int yearr;
           workers.push_back(Staff());
           cout<<"Enter First Name: ";
          cin>>fname;
           cout<<endl;
           cout<<"Enter Last Name: ";
           cin>>lname;
           cout<<endl;
           namee=fname+" "+lname;
           cout<<"Enter Job: ";
           cin>>jobb;
           cout<<endl;
           cout<<"Enter Year Of Employment: ";
           cin>>yearr;
           cout<<endl;
           Staff info={namee,jobb,yearr};
           workers.push_back(info);
           for(int i=1;i<workers.size();i++)
           {
                cout<<i<<". "<<workers[i].name<<" "<<workers[i].job<<" "<<workers[i].year<<endl;
           }

}
else
{
    if(op==2)
    {
         int input;
            string first,last,nam;
            string jobb2;
            int yearr2;
            for(int i=1;i<workers.size();i++)
            {
                    cout<<i<<". "<<workers[i].name<<" "<<workers[i].job<<" "<<workers[i].year<<endl;
            }
            cout<<"\t\t EDIT STAFF RECORD "<<endl;
            cout<<"======================================================================================================================"<<endl;
            cout<<"Enter Position Of Staff Member: ";
            cin>>input;

            cout<<endl;
            cout<<"Enter First Name: ";
            cin>>first;
            cout<<endl;
            cout<<"Enter Last Name: ";
            cin>>last;
            cout<<endl;
            nam=first+" "+last;
            cout<<"Enter Job: ";
            cin>>jobb2;
            cout<<endl;
            cout<<"Enter Year Of Employment: ";
            cin>>yearr2;
            cout<<endl;
            workers[input].name=nam;
            workers[input].job=jobb2;
            workers[input].year=yearr2;
            for(int i=1;i<workers.size();i++)
           {
               cout<<i<<". "<<workers[i].name<<" "<<workers[i].job<<" "<<workers[i].year<<endl;
           }

    }
    else{
        if(op==3)
    {
           for(int i=1;i<workers.size();i++)
            {
                    cout<<i<<". "<<workers[i].name<<" "<<workers[i].job<<" "<<workers[i].year<<endl;
            }
            cout<<"\t\t DELETE STAFF RECORD "<<endl;
            cout<<"======================================================================================================================"<<endl;
            int number;
            cout<<"Enter ID Number: ";
            cin>>number;
            cout<<endl;
            workers.erase(workers.begin() + number);
             for(int i=1;i<workers.size();i++)
           {
               cout<<i<<". "<<workers[i].name<<" "<<workers[i].job<<" "<<workers[i].year<<endl;
           }
    }
    else
    {
        cout<<"Invalid Input"<<endl;
    }
    }

}
          }
          else
          {
              if(c==3)
              {   int op;
        cout<<"\t\t  STUDENT'S COURSES "<<endl;
        cout<<"====================================================================="<<endl;
        cout<<"1 : Add Record."<<endl;
        cout<<"2 : Edit Existing Record."<<endl;
        cout<<"3 : Delete Record."<<endl;
        cout<<":";
        cin>>op;
        cout<<"========================================================================"<<endl;
if(op==1)
{
    string input;
       		cout<<"\t\t  ADD STUDENT'S COURSES "<<endl;
        	cout<<"====================================================================="<<endl;    
            cout<<"Enter Course Name: ";
            cin>>input;
            courses.push_back(input);
            cout<<endl;
            cout<<"Student's Courses: "<<endl;
            for(int i=0;i<courses.size();i++)
            {
                cout<<i+1<<". "<<courses[i]<<endl;
            }
}
else
{
    if(op==2)
    {
        int input;
            string input2;
            for(int i=0;i<courses.size();i++)
                {
                    cout<<i+1<<". "<<courses[i]<<endl;
                }
            cout<< "\t\t  EDIT COURSES "<<endl;
       		cout<<"====================================================================="<<endl;
            cout<<"Enter The Position 0f The Course You Want To Edit: ";
            cin>>input;
            input=input-1;
            cout<<endl;
            cout<<"Enter The Name Of The Course You Wish To Replace: "<<courses[input]<<" with:";
            cin>>input2;
            cout<<endl;
            courses[input]=input2;
               cout<<"New Course List: "<<endl;
            for(int i=0;i<courses.size();i++)
            {
                cout<<i+1<<". "<<courses[i]<<endl;
            }
    }
    else
    {
        if(op==3)
        {
             for(int i=0;i<courses.size();i++)
                {
                    cout<<i+1<<". "<<courses[i]<<endl;
                }
                cout<< "\t\t  DELETE COURSES "<<endl;
        		cout<<"====================================================================="<<endl;
                int number;
                cout<<"Enter Position Of Course You Want To Delete: ";
                cin>>number;
                cout<<endl;
                number=number-1;
                courses.erase(courses.begin() + number);
            cout<<"New Course List: "<<endl;
            for(int i=0;i<courses.size();i++)
            {
                cout<<i+1<<". "<<courses[i]<<endl;
            }
        }
        else
        {
            cout<<"Invalid Input."<<endl;
        }
    }
}
              }
          }
      }
      cout<<endl;
      cout<<"========================================================================"<<endl;
 cout<<"Enter a record you would like to work on."<<endl;
    cout<<"1 : Student"<<endl;
    cout<<"2 : Workers/Staff"<<endl;
    cout<<"3 : Courses"<<endl;
    cout<<":";
    int c;
    cout<< "Enter Ctrl + Z To Exit"<<endl;
    

    cin>>c;
    cout<<"========================================================================"<<endl;
}
cout<<"Exiting..."<<endl;
}

