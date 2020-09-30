class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        std::sort(people.begin() , people.end());
        right = people.size() -1;
        while(left < right){
            if(people[right] + people[left] <= limit){
                ++left;
                right--;
                count++;
            }else{
                right--;
                count++;
            }
            if(left == right){
                count++;
                break;
            }
        }
        return count;        
    }
    int left{0};
    int right{0};
    int count{0};
};
