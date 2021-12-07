#include<iostream>
using namespace std;
int main()
{
	int head, d[20],n,i,pos,t;
	float seek=0,avg;
	cout<<"Enter the number of disks: ";
	cin>>n;
	cout<<"Enter the head: ";
	cin>>head;
	d[0]=head;
	
	cout<<"Enter the position: ";
	for(i=1;i<=n;i++){
		
		cin>>d[i];
	}
	d[n+1]=d[n];
	cout<<"Order of FCFS: ";
	for(i=0;i<=n;i++){
		t = d[i+1]-d[i];
		if(t<0){
			t = t*(-1);
		}
		seek+=t;
		cout<<"\t"<<d[i];
	}
	cout<<"\n";
	avg = seek/n;
	cout<<"Total seek time= "<<seek<<endl;
	cout<<"Average seek time= "<<avg;
	return 0;
}
