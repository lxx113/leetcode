class Solution {
public:
    // O(n), space O(n)
    vector<int> twoSum(vector<int> &numbers, int target) {
        unordered_map<int, int> mapping;
        vector<int> res;
        
        for (int i= 0; i< numbers.size(); i++)
            mapping[numbers[i]] = i;
        
        for (int i = 0; i< numbers.size(); i++) {
            const int gap = target-numbers[i];
            if (mapping.find(gap) != mapping.end()) {
                    if (i != mapping[gap]) {
                    //cout << i+1 << mapping[gap]+1;    
                    res.push_back(i);
                    res.push_back(mapping[gap]);
                    break;
                    }
            }
        }
        return res;
    }
};
