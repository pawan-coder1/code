#include<bits/stdc++.h>
using namespace std;

const int M=1e9+7;
class Solution {
public:
    double myPow(double x, int n) {
        
        if(n==0)
            return 1;
        if(n==1)
            return x;
          double R=(myPow(x,n>>1));
        if(n&1)
            return(x*((R*R)%M));
        else
            return((R*R)%M);
        
        
    }
    void int main()
    {
    	/* code */
    	
    	double base;
    	int pow;
    	cin>>base>>pow;
    	cout<<myPow(base,pow);
    	
    	
    	return 0;
    }
};


