#include<bits/stdc++.h>
#include<vector>
using namespace std;
// counting number of page faults
int page_faults(int n,int c,int pages[])
{
	vector<int> it;
	//initialize count to 0
	int count=0;
	//to store elements in menory os size c
	vector<int> v;
	int i;
	for(i = 0;i<n;i++){
		//find if element is present in memory or not
		auto it = find(v.begin(),v.end(),pages[i]);
		
		//if element is not present
		if(it == v.end()){
			
			//if memory size is full
			if(v.size()==c){
				//remove the first element as it is LEAST RECENTLY USED
				v.erase(v.begin());
			}
			
		}
		//add the recent element in memory
		v.push_back(pages[i]);
		
		count++
		else{
			//If element is present remove it
			// and add it to end as it is most recent used
			v.erase(it);
			v.push_back(pages[i]);
		}
		
	}
	//return total number of page faults
	return count;
}

int main()
{
	int pages[]={1,2,1,4,2,3,5}
	int n=7,c=3;
	
	cout<<"Page faults = "<<page_fault(n,c,pages);
	
	return 0;
}
