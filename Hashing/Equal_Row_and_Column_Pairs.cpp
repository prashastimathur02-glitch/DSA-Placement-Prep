// LeetCode 2352
// Equal Row and Column Pairs
class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int s=grid.size();
        int pairs=0;
        map<vector<int>,int> row;
        for(int i=0;i<s;i++){
            row[grid[i]]++;
        }
        for(int i=0;i<s;i++){
            vector<int> column;
            for(int j=0;j<s;j++){
                column.push_back(grid[j][i]);
            }
            if(row.find(column)!=row.end()){
                pairs=pairs+row[column];
            }
        }
        return pairs;
    }
};
