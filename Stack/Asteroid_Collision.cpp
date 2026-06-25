// LeetCode 735
// Asteroid Collision
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
       vector<int> s;
       for(int i=0;i<size(asteroids);i++){
        bool destroyed =false;
        while(!s.empty()&& s.back()>0 && asteroids[i]<0){
            if(s.back()<abs(asteroids[i])){
                s.pop_back();
                continue;
            }
            else if(s.back()==abs(asteroids[i])){
                s.pop_back();
                destroyed=true;
                break;
            }
            else{
                destroyed=true;
                break;
            }
        }
        if(!destroyed){
            s.push_back(asteroids[i]);
        }
       } 
       return s;
    }
};
