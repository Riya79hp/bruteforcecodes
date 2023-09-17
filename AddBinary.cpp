class Solution {
public:
    long long convertbintonum(string a) {
        long long sum = 0;
        for (int i = 0; i < a.size(); i++) {
            sum = sum * 2 + (a[i] - '0'); 
        }
        return sum;
    }

    string converttonumtobin(long long t) {
        if (t == 0) return "0";
        string a;
        int i=t;
        while (i >= 1) {
            a.push_back((i% 2) + '0');
            i = i / 2;
        }
        reverse(a.begin(), a.end());
        return a;
    }

    string addBinary(string a, string b) {
        long long k = convertbintonum(a);
        long long m = convertbintonum(b);
        long long t = k + m;
        if (t == 0) {
            return "0";
        }
        string y = converttonumtobin(t);
        return y;
    }
};
int main(){
string a="101101";
string b="101";
string res=addBinary(a,b);
cout<<res;



}
