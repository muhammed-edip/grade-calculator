#include <iostream>
using namespace std;

int main()
{
   int score=0;
   
  cout<<"enter your score\n";
  cin>>score;
 
 if(score>=85)
 {
    if(score==100)
    {
        cout<<"your gradis AA";
    }
    else if(score>=85 && score<=99)
    {
        cout<<"your grade is AB \n";
    }
 }
 else if(score>=60)
 {
    if(score==84)
    {
        cout<<("your grade is BB \n");
    }
    else if(score>=60 && score<=83)
    {
        cout<<("your grade is BC \n");
    }
}
else if(score>=50)
 {
    if(score==59)
    {
        cout<<("your grade is CC \n");
    }
    else if(score>=50 && score<=58)
    {
        cout<<("your grade is CB \n");
    }
 }
 else if(score>=40)
 {
    if(score==49)
    {
        cout<<("your grade is DD \n");
    }
    else if(score>=40 && score<=48)
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
