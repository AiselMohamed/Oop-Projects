#include <iostream>
using namespace std;
class student{
private:
    int *id;
    int *age;
    string *name;
    string *address;
    int *mark;
public:
    student(int i,int a,string n,string d,int m){
        id=new int ;
        age=new int;
        name=new string ;
        address=new string ;
        mark=new int;

        *id=i;
        *age=a;
        *name=n;
        *address=d;
        *mark=m;
    }
    student(){
        id=new int ;
        age=new int;
        name=new string ;
        address=new string ;
        mark=new int;

        cout<<"enter id:"; cin>>*id;
        cout<<"enter age:"; cin>>*age;
        cout<<"enter name:"; cin>>*name;
        cout<<"enter address:"; cin>>*address;
        cout<<"enter mark:"; cin>>*mark;

    }
    ~student(){
     delete   id;
     delete  age;
     delete  name;
     delete address;
     delete  mark;
    }

    friend void pass(student s[],int);
};
void pass(student s[],int size){
    int c=0;
    for (int i = 0; i < size; ++i) {
        if(*s[i].mark>=50)
            c++;
    }
    cout<<"passing student"<<c<<endl;
}
int main() {
const int size=5;
student s[size];
    pass(s,size);


}
