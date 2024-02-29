#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    int n_cls,at_cls;
    float per;
    cout<<"Pleade enter the number of classes held: ";
    cin>>n_cls;
    cout<<"Please enter the number of classes you have attend: ";
    cin>>at_cls;
    per = float(at_cls)/n_cls;
    if(0.8<=per){
        cout<<"You are allowed to attend the exam\n";
        cout<<"Because your attendence percentage is "<<setprecision(3)<<per<<"%\n";
    }else{
        cout<<"You are not allowed to attend the exam\n";
        cout<<"Because your attendence percentage is "<<setprecision(3)<<per<<"%\n";
    }
    return 0;
}