#include<iostream>
using namespace std;
int s=1, full=0, empty=10, i=0;
int wait(int s)
{
    return(--s);
}
int signal(int s)
{
    return(++s);
}
void producer()
{
    empty = wait(empty);
    s = wait(s);
    i++;
    cout<<"\n Producer produces item X";
    s = signal(s);
    full = signal(full);
}
void consumer()
{
    full = wait(full);
    s = wait(s);
    i--;
    cout<<"\n Consumer consumes item X";
    s = signal(s);
    empty = wait(empty);
}
int main()
{
    int n;
    void producer();
    void consumer();
    int wait(int);
    int signal(int);
    cout<<"\n1. Producer \n2. Consumer \n3. Exit";
    while(1)
    {
        cout<<"\nEnter your choice";
        cin>>n;
        switch (n)
        {
        case 1:  if((s==1)&& (empty!=0)){
            producer();
        }
                 else{
                cout<<"Buffer is full";
            }
            break;
        
        case 2: if((s==1)&&(full!=0)){
            consumer();
        }
                else{
                    cout<<"Buffer is empty";
                }
            break;
        case 3: 
            exit(0);
            break;
        }
    }
    return 0;
}
