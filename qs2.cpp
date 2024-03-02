#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float cg;
    float arr[5];
    for(int i=0;i<5;i++){
        cout<<"Please enter course "<<i+1<<" number: ";
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        if(arr[i]>=90 && arr[i]<=100){
            cout<<"Your grade for course "<<i+1<<" is A+\n";
            cg=cg+4.00*3;
        }
        else if(arr[i]>=85 && arr[i]<=89.99){
            cout<<"Your grade for course "<<i+1<<" is A+\n";
            cg=cg+3.75*3;
        }
        else if(arr[i]>=80 && arr[i]<=84.99){
            cout<<"Your grade for course "<<i+1<<" is A+\n";
            cg=cg+3.50*3;
        }
        else if(arr[i]>=75 && arr[i]<=100){
            cout<<"Your grade for course "<<i+1<<" is A+\n";
            cg=cg+3.25*3;
        }
        else if(arr[i]>=90 && arr[i]<=100){
            cout<<"Your grade for course "<<i+1<<" is A+\n";
            cg=cg*3.00;
        }
        else if(arr[i]>=90 && arr[i]<=100){
            cout<<"Your grade for course "<<i+1<<" is A+\n";
            cg=cg*2.75;
        }
        else if(arr[i]>=90 && arr[i]<=100){
            cout<<"Your grade for course "<<i+1<<" is A+\n";
            cg=cg+cg*2.50;
        }
        else if(arr[i]>=90 && arr[i]<=100){
            cout<<"Your grade for course "<<i+1<<" is A+\n";
            cg=cg*2.25;
        }
        else{
            cout<<"Your grade for course "<<i+1<<" is A+\n";
            cg=cg+cg*0;
        }
    }
    cout<<"Your total CGPA: "<<setprecision(4)<<(cg/15);
    return 0;
}