#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    srand(time(NULL));
    int user = 0;
    int cpu = 0;
    cout<<"ROCK PAPER SCISSORS"<<endl;
    cout<<"1) Rock"<<endl;
    cout<<"2) Paper"<<endl;
    cout<<"3) Scissors"<<endl;
    cin>>user;
    if(user==1)
    {
        cout<<"You choose Rock"<<endl;

    }
    else if(user==2)
    {
        cout<<"you choose Paper"<<endl;
    }
    else{
        cout<<"You choose Scissors"<<endl;
    }
    cpu = rand() % 3 + 1;
     if(cpu==1)
    {
        cout<<"CPU choose Rock"<<endl;

    }
    else if(cpu==2)
    {
        cout<<"CPU choose Paper"<<endl;
    }
    else{
        cout<<"CPU choose Scissors"<<endl;
    }
    if(user==cpu)
    {
        cout<<"It's a Tie"<<endl;
    }
    else if(user==1)
    {
      if(cpu==2)
      {
        cout<<"You lose"<<endl;
      }
      if(cpu==3)
      {
        cout<<"You win"<<endl;
      }
    }
    else if(user==2)
    {
        if(cpu==1)
        {

            cout<<"You win"<<endl;
        }
        if(cpu==3)
        {
            cout<<"You lose"<<endl;
        }
    }
    else if(user==3)
    {
        if(cpu==1)
        {
            cout<<"you lose"<<endl;
        }
        if(cpu==2)
        {
            cout<<"you win"<<endl;
        }
    }
    return 0;
}