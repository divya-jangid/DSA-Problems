class Solution {
public:
    void moveZeroes(vector<int>& v) {
        vector<int>ans;
	
	int size = v.size();
	
	for(auto x:v) {
		if(x!=0) {
			ans.push_back(x);
		}
	}
	
	int i = 0;
	for(auto x: ans){
	    v[i] = x;
	    i++;
	}
	while(i < size){
	    v[i] = 0;
	    i++;
	}
	
    }
};