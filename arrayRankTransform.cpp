class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> ar;
        for(int i=0;i<arr.size();i++){
            int k=1;
             set<int> st;
            for(int j=0;j<arr.size();j++){
                if(arr[i]>arr[j]){
            st.insert(arr[j]);
                  }
            }
           ar.push_back(st.size()+1); 

        }
        
    return ar;}
};
