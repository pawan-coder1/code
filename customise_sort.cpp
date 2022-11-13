#include<bits/stdc++.h>
using namespace std;
    
    void swap(int &a,int &b)
    {
    	int temp=a;
    	a=b;
    	b=temp;
    }
bool cmp(int a,int b)
{
	
	if(a>9||b>9)
		return a<b;
	else 
		return a>b;
}
 



int main()
{  
	vector<int> nums;
	int n,num;
	cin>>n;
	for (int k=0;k<n;++k)
	{
		cin>>num;
		nums.push_back(num);
	}
	
	 int i=0,j=nums.size();
        while(i<j)
        {
        	if(nums[i]==1&&nums[j]==0)
        	{
        		
        		
        			int temp=nums[i];
        			nums[i]=nums[j];
        			nums[j]=temp;
        			i++;j--;
        			
        			
        	}
        	
        	 if(nums[i]==0&&i<j)
        	i++;
        	
        	 if(nums[j]==1&&i<j)
        	j--;
        			
        		
       } 		
        
	
	
	for(int p=0;p<n;p++)
	{
		cout<<nums[p]<<" ";
		
	}

	
		
	return 0;
		
	
}      