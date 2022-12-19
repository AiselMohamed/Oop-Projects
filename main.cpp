#include <iostream>
using namespace std;
class triangle{
private:
    int *W,*L;
public:
    triangle(int w,int l){
        W=new int ;
        L=new int;

         *W=w;
         *L=l;
    }
    triangle(){
        W=new int ;
        L=new int;
        cout<<"enter W:";cin>>*W;
        cout<<"enter L:";cin>>*L;


    }
    ~triangle(){

        delete W;
        delete L;
    }
    int area(){
        return *W * *L;
    }
    void print();
    friend void largeArea(triangle r[],int);
};
void triangle:: print(){
cout<<*W<<*L;
}
void largeArea(triangle r[],int size){
    int max=r[0].area();
    for (int i = 1; i < size; ++i) {
        if(r[i].area()>max)
            max=r[i].area();


    }
    cout<<max;
}
int main(){
const int size=4;
triangle r[size];

    largeArea(r,size);

}































