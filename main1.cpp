#include <iostream>
using namespace std;
class car{
    string *name;
    int *model;
    int *price;
    int *speed;
    string *color;
public:
    car(){
        name= new string ;
        model= new int;
        price = new int ;
        speed = new int;
        color = new string ;
        cout<<"enter car info :  "<<endl;
        cout<<"car name :"; cin>>*name;
        cout<<"car model :"; cin>>*model;
        cout<<"car price :"; cin>>*price;
        cout<<"car speed :"; cin>>*speed;
        cout<<"car color :"; cin>>*color;
    }
    ~car(){
        delete name;
        delete model;
        delete price;
        delete speed;
        delete color;
    }
    void price_display();
    friend int increment_price(const car&);
};
void car::price_display(){
    cout<<*price;
}
int increment_price( const car& c){
    int new_price;
    new_price= *c.price+1000;
    return new_price;
}

int main() {
    car c1;
    cout<<"car old price :";
    c1.price_display();
    cout<<"car new price"<<increment_price(c1);
}
