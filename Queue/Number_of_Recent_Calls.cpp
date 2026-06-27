// LeetCode 933
// Number of Recent Calls
class RecentCounter {
public:
    queue<int> q;
    RecentCounter() {
    }
    
    int ping(int t) {
        q.push(t);
        while(!q.empty()&& q.front()<t-3000){
            q.pop();
        }
        return q.size();
        
    }
};
