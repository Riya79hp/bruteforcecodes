class SnapshotArray {
public:
vector<int> v;
 int snap_id;
vector<pair<vector<int>, int>> p;

    SnapshotArray(int length) {
       v.resize(length);
        snap_id = -1;

    }
    
    void set(int index, int val) {
        v[index]=val;
    }
    
    int snap() {
      snap_id++;
      pair<vector<int>, int> temp;
temp.first=v;
temp.second=snap_id;
      p.push_back(temp);
        
        return snap_id;
    }
    
    int get(int index, int snap_id) {
       return p[snap_id].first[index];
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */
