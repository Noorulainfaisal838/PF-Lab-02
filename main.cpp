 #include<iostream>
 using namespace std;
 int main(){
    float ini_bal,dep_cash,withdrw_cash;
    cout<<"enter  the initial balance:";
    cin>>ini_bal;
    cout<<"enter the deposit amount:";
    cin>>dep_cash;
    cout<<"enter the withdrawal amount:"; 
    cin>>withdrw_cash;
    ini_bal+=dep_cash;
    cout<<"balance after deposit:"<<ini_bal<<endl;
    ini_bal-=withdrw_cash;
    cout<<"balance after withdrawal:"<<ini_bal<<endl;
    return 0;
 }
