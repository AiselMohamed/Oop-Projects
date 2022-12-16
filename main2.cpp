
#include <iostream>
using namespace std;
class engineer;
class teacher{
private:
    int *id;
    string *name;
    int *age;
    int *sal;

public:
    teacher(int i , string n , int a , int s){
        id =new int;
        name=new string ;
        age=new int;
        sal=new int;
        *id =i;
        *name=n ;
        *age=a;
        *sal=s;
    }
    ~teacher(){
        delete id;
        delete name;
        delete age;
        delete sal;

    }
    void print(){
        cout<<*id<<endl;
        cout<<*name<<endl;
        cout<<*age<<endl;
        cout<<*sal<<endl;

    }
    friend void bonus( teacher& , engineer& );
};
class engineer{
private:
    int *id;
    string *name;
    int *age;
    int *sal;

public:
    engineer(int i , string n , int a , int s){
        id =new int;
        name=new string ;
        age=new int;
        sal=new int;
        *id =i;
        *name=n ;
        *age=a;
        *sal=s;
    }
    ~engineer(){
        delete id;
        delete name;
        delete age;
        delete sal;

    }
    void print(){
        cout<<*id<<endl;
        cout<<*name<<endl;
        cout<<*age<<endl;
        cout<<*sal<<endl;

    }
    friend void bonus(teacher& , engineer& );
};
void bonus( teacher & t1 , engineer &e1){
    *t1.sal=*t1.sal+100;
    *e1.sal=*e1.sal+100;
}

int main() {
    teacher t1(2000275,"abdullah",20,5000);
    engineer e1(2000275,"Aisel",20,6000);
    t1.print();
    e1.print();
    bonus(t1,e1);
    t1.print();
    e1.print();
}

















