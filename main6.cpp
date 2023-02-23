#include <iostream>
using namespace std;
class AlRasheed;
class AlRafidain{
private:
    string name;
    int balance;
public:
    AlRafidain(string n,int b){
        name=n;
        balance=b;
    }
    void deposite(int money){
        balance+=money;
    }
    void withrow(int money){
        balance-=money;
    }
    int getbalance(){
        return balance;
    }
    friend class AlRasheed;
};
class AlRasheed{
private:
    string name;
    int balance;
public:
    AlRasheed(string n,int b){
        name=n;
        balance=b;
    }
    void deposite(int money){
        balance+=money;
    }
    void withrow(int money){
        balance-=money;
    }
    int getbalance(){
        return balance;
    }
void transfer(AlRafidain &khalid){
int money;
cout<<"how much to transfer? ";
cin>>money;
if(money<=khalid.balance){
    balance+=money;
    khalid.balance-=money;
} else
    cout<<"Not enough balance ";
    }
};
int main() {
AlRafidain khaled("khaled",1000);
khaled.deposite(500);
cout<<khaled.getbalance()<<endl;
khaled.withrow(1000);
cout<<khaled.getbalance()<<endl;

AlRasheed Aisel("Aisel",500);
cout<<Aisel.getbalance()<<endl;
Aisel.transfer(khaled);
    cout<<khaled.getbalance()<<endl;
    cout<<Aisel.getbalance();
}
