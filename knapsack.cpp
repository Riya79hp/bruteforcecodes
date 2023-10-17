#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(const pair<float, int> &a, const pair<float, int> &b) {
    return a.first > b.first;
}
 int max_weight(vector<int> p, vector<int> w, int n, int max) {
    vector<pair<float, int> > q;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        pair<float, int> l;
        l.first = (float)p[i] / w[i];
        l.second = i;
        q.push_back(l);
    }

    sort(q.begin(), q.end(), compare);

    for (int i = 0; i < n; i++) {
        if (max > 0 && w[q[i].second] <= max) {
            max -= w[q[i].second];
            sum += p[q[i].second];
        } else if (max > 0 && w[q[i].second] > max) {
            sum += (float)(max * p[q[i].second]) / w[q[i].second];
            max = 0;
        }
    }

    return sum;
}


int main()
{
    vector<int> weight;
    vector<int>profit;
    int data;
    int p;
    int n;
    int max;
    cin>>n;
    cin>>max;
    for(int i=0;i<n;i++){
        cin>>data;
       weight.push_back(data);
    }
    for(int i=0;i<n;i++){
        cin>>p;
      profit.push_back(p);
    }
  int y=  max_weight(profit,weight,n,max);
cout<<y;



    return 0;
}
