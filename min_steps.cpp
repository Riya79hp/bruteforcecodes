class Solution {
public:
    int minSteps(string s, string t) {
   vector<int> v(t.size(),0);
   int k=0;
   for(int i=0;i<s.size();i++){
       for(int j=0;j<t.size();j++){
           if(s[i]==t[j] && v[j]!=1){
               k++;
               v[j]=1;
               break;
           }
       }
   }


   return (s.size()-k); }
};
