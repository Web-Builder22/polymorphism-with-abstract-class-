#include<iostream>
using namespace std;

class shape{
    public:
    shape(){
        cout<<"shape constructor runs"<<endl;
    }
    virtual void area()=0;
    virtual void display()=0;
    virtual ~shape(){
        cout<<"shape destroyed"<<endl;
    }
};
class circle:public shape{
    public:
    circle(){
        cout<<"circle constructor runs"<<endl;
    }
    void area() override{
        cout<<"area of circle"<<endl;
    }
    void display() override{
        cout<<"circle"<<endl;
    }
    ~circle(){
        cout<<"circle destroyed"<<endl<<endl;
    }
};
class Rectangle:public shape{
    public:
    Rectangle(){
        cout<<"rectangle constructor runs"<<endl;
    }
    void area() override{
        cout<<"area of rectangle"<<endl;
    }
    void display(){
        cout<<"rectangle"<<endl;
    }
    ~Rectangle(){
        cout<<"rectangle destroyed"<<endl;
    }
};
int main(){
    shape *s=new circle();
   
    
    s->area();
    s->display();
     delete s;
     s=new Rectangle();
    s->area();
    s->display();
    delete s;
}