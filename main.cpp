#include <iostream>
using namespace std;

int main()
{
   int x=0;
   
  cout<<"enter your score\n";
  cin>>x;
 
 if(x>=85)
 {
    if(x==100)
    {
        cout<<"your gradis AA";
    }
    else if(x>=85 && x<=99)
    {
        cout<<"your grade is AB \n";
    }
 }
 else if(x>=60)
 {
    if(x==84)
    {
        cout<<("your grade is BB \n");
    }
    else if(x>=60 && x<=83)
    {
        cout<<("your grade is BC \n");
    }
}
else if(x>=50)
 {
    if(x==59)
    {
        cout<<("your grade is CC \n");
    }
    else if(x>=50 && x<=58)
    {
        cout<<("your grade is CB \n");
    }
 }
 else if(x>=40)
 {
    if(x==49)
    {
        cout<<("your grade is DD \n");
    }
    else if(x>=40 && x<=48)
    {
        cout<<("your grade is FF \n");
    }
 } 
 else
 {
     cout<<"never mind for next time insallah\n";
 }
    
    

 
 
return 0;
}