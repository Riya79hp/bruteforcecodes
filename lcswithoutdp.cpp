class Solution {
public:
int find(string text1, string text2,int index1,int index2){
if(index1<0 || index2<0){
    return 0;
}
if(text1[index1]==text2[index2]){
    return 1+find(text1,text2,index1-1,index2-1);
}
return 0+max(find(text1,text2,index1-1,index2),find(text1,text2,index1,index2-1));

}

    int longestCommonSubsequence(string text1, string text2) {
        return find(text1,text2,text1.size()-1,text2.size()-1);
    }
};
