class Solution {
public:
    int tribonacci(int n) {
    
      long a = 0,b = 1, c = 1,d;

    if(n==0) return 0;
    if(n==1) return 1;
    
	for(int i = 1; i<=n; i++) {
		d = a+b+c;
		a = b;
		b = c;
        c = d;
	}
    return a;
    }
};