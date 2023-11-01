#include <iostream>
#include <vector>
#include <queue>
#include <cstdlib>
using namespace std;

struct node {
    int data;
    int weight;
    struct node *next;
};

priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > pq;

bool vg(vector<int> v, int n) {
    int h = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == 1) {
            h++;
        }
    }
    if (h == n) {
        return true;
    }
    return false;
}

void algo(struct node *arr[], int n, vector<int> &visited) {
    visited[arr[0]->data] = 1;
    int r = 0;
    while (!vg(visited, n)) {
        struct node *t = arr[r]->next;
        while (t != NULL) {
            if (visited[t->data] != 1) {
                pq.push(make_pair(t->weight, t->data));
            }
            t = t->next;
        }
       
            pair<int, int> top = pq.top();
            while(visited[top.second]==1){
                pq.pop();
                top=pq.top();
            }
            cout << "(" << top.second << " " << top.first << ")" << " ";
            r = top.second;
            visited[top.second] = 1;
            pq.pop();
           
        }
    }


int main() {
    struct node *arr[100];
    int n;
    cin >> n;
    vector<int> visited(n, 0);
    for (int i = 0; i < n; i++) {
        arr[i] = (struct node *)malloc(sizeof(struct node));
    }
    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        arr[i]->data = data;
    }

    int i = 0;
    while (i < n) {
        int nei;
        cout << "How many neighbors of " << arr[i]->data << "? ";
        cin >> nei;
        int y = 0;
        struct node *t = arr[i];
        while (y < nei) {
            struct node *new_p;
            int d, w;
            cout << "Enter neighbor " << y + 1 << " data and weight: ";
            cin >> d >> w;
            new_p = (struct node *)malloc(sizeof(struct node));
            new_p->data = d;
            new_p->weight = w;
            t->next = new_p;
            t = new_p;
            y++;
        }
        i++;
    }

    algo(arr, n, visited);

    return 0;
}
