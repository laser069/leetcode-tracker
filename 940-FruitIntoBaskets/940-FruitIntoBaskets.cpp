// Last updated: 3/26/2026, 1:26:10 PM
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l = 0;
        int maxfruits = 0;
        unordered_map<int,int> basket;
        for(int r = 0;r<fruits.size();r++){
            basket[fruits[r]]++;//collecting fruits

            while(basket.size()>2){
                basket[fruits[l]]--;
                if(basket[fruits[l]] == 0)basket.erase(fruits[l]);
                l++;
            }
            maxfruits = max(maxfruits,r-l+1);
        }
        return maxfruits;
        
    }
};