#include<iostream>
using namespace std;
int main()
{
   float t[5],h[5],x=0,y=0,avgt,avgh;
   cout<<"Temperature : ";
   for(int i=0;i<5;i++)
   {
      cin>>t[i];
      x=x+t[i];
   }
   avgt=x/5;
   cout<<"Humidity : ";
    for(int i=0;i<5;i++)
   {
      cin>>h[i];
      y=y+h[i];
   }
   avgh=y/5;
   if(avgt >=13 && avgt<=18 && avgh>=30 && avgh<=45)
   {
       cout<<"The weather is DRY";
   }
   else if(avgt>=19 && avgt<=25 && avgh>=50 && avgh<=70)
   {
       cout<<"The weather is CLOUDY";
   }
   else if(avgt>=19 && avgt<=25 && avgh==100)
   {
       cout<<"The weather is RAINY";
   }
   else if(avgt>=25 && avgh>=60 && avgh<=70)
   {
       cout<<"The weather is SUNNY";
   }
   return 0;
}
