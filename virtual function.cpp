// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class PaymentSystem{
    public:
 
    virtual void pay(int total)=0;
    virtual void refund(int total)=0;
    virtual ~PaymentSystem(){
       
    }
};
class Easypaisa:public PaymentSystem {
    public:
    void pay(int total){
        int atotal=0;
        int service=total*.2;
          atotal=total+service;
          cout<<"JAZZCASH"<<endl<<endl;
        cout<<"original amount:"<<total<<endl;
        cout<<"SERVICE FEE :"<<service<<endl;
        cout<<"total after SERVICE FEE is:"<<atotal<<endl;
    }
    void refund(int total){
        cout<<"this amount is refund "<<total<<endl<<endl;
    }
    
};
class JazzCash:public PaymentSystem{
    public:
    void pay(int total){
        int atotal=0;
        int discount=total*.5;
         atotal=total-discount;
        cout<<"Easypaisa"<<endl<<endl;
        cout<<"original amount:"<<total<<endl;
        cout<<"discount :"<<discount<<endl;
        cout<<"total after discount is:"<<atotal<<endl;
    }
    void refund(int total){
        cout<<"total refund for your account is "<<total<<endl;
    }
};

int main() {
    int total;
    cout<<"enter total amount you have"<<endl;
    cin>>total;;
    
  PaymentSystem *p;
  Easypaisa e;
  JazzCash j;
  p=&e;
  p->pay(total);
  p->refund(total);
  
  p=&j;
  p->pay(total);
  p->refund(total);
 
    return 0;
}