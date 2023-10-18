#include <iostream>
#include<vector>
using namespace std;
int max(int a,int b){
    if(a>b){
        return a;
    }
    return b;
}
int min(int a,int b){
    if(a<b){
        return a;
    }
    return b;
}
pair<int, int> min_max(int arr[], int i, int j) {
    pair<int, int> o;
    if (j - i == 0) {
        o.first = arr[i];
        o.second = arr[i];
        return o;
    } else if (j - i == 1) {
        if (arr[j] > arr[i]) {
            o.first = arr[j];
            o.second = arr[i];
        } else {
            o.first = arr[i];
            o.second = arr[j];
        }
        return o;
    }
    int mid = (i + j) / 2;
    pair<int, int> left_min_max = min_max(arr, i, mid);
    pair<int, int> right_min_max = min_max(arr, mid + 1, j);
    o.first = max(left_min_max.first, right_min_max.first);
    o.second = min(left_min_max.second, right_min_max.second);
    return o;
}





int main()
{
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    pair<int,int> o;
    o=min_max(arr,0,n-1);
    cout<<"Max is:"<<o.first<<endl;
    cout<<"Min is:"<<o.second;

    return 0;
}
