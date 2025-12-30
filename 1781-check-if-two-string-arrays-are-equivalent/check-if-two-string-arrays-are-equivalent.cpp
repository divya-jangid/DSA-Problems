class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& str1, vector<string>& str2) {

       string s1 = "";
       string s2 = "";

       for(int i = 0;i<str1.size();i++){
        s1+=str1[i];
       } 

       for(int i = 0;i<str2.size();i++){
        s2+=str2[i];
       }

       return s1==s2;
	
   }
};