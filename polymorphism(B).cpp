#include<iostream>
using namespace std;

class person{
    string name;
    int age;
    public:
    virtual void input(){
        cout<<"enter the name of person"<<endl;
        cin>>name;
        cout<<"enter the age of person"<<endl;
        cin>>age;
    }
    virtual void display(){
        cout<<"NAME:"<<name<<endl;
        cout<<"AGE:"<<age<<endl;
    }
    virtual void calculateRole()=0;
    virtual ~person(){
        cout<<"person destroyed"<<endl;
    }
};
class student:public person{
    int roll;
    int marks;
    public:
    void input(){
        cout<<"STUDENT INPUT"<<endl;
        person::input();
        cout<<"enter the roll no of student"<<endl;
        cin>>roll;
        cout<<"enter the marks of student"<<endl;
        cin>>marks;
    }
    void display(){
        cout<<"STUDENT INFORMATION"<<endl;
        person::display();
        cout<<"roll no:"<<roll<<endl;
        cout<<"MARKS:"<<marks<<endl;
    }
    void calculateRole(){
        if(marks>=50){
            cout<<"pass"<<endl;
            return;
        }
        cout<<"fail"<<endl;
    }
    ~student(){
        cout<<"student destroyed"<<endl;
    }
};
class Teacher:public person{
    string subject;
    double salary;
    public:
    void input(){
        cout<<"TEACHER INPUT"<<endl;
        person::input();
        cout<<"enter subject of teacher"<<endl;
        cin>>subject;
        cout<<"enter salary of teacher"<<endl;
        cin>>salary;
    }
    void display(){
        cout<<"teacher display"<<endl;
        person::display();
        cout<<"SUBJECT:"<<subject<<endl;
        cout<<"salary:"<<salary<<endl;
    }
    void calculateRole(){
        if(salary>10000){
            cout<<"senior teacher"<<endl;
            return;
        }
        cout<<"junior teacher"<<endl;
    }
    ~Teacher(){
        cout<<"teacher destroyed"<<endl;
    }
};
int main(){
    person *p[2];
    p[0]=new student();
    p[1]=new Teacher();
    for(int i=0;i<2;i++){
        
    
    p[i]->input();
    p[i]->display();
    p[i]->calculateRole();

}
for(int i=0;i<2;i++){
    delete p[i];
}
return 0;
}