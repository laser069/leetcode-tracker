// Last updated: 3/26/2026, 1:26:29 PM
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size = flowerbed.size();
        flowerbed.insert(flowerbed.begin(),0);
        flowerbed.push_back(0);

        for(int i =1;i<=size;i++){
            if(flowerbed[i] == 0){
                if(flowerbed[i-1]==0 && flowerbed[i+1] == 0){
                    n--;
                    flowerbed[i] = 1;
                }
            }
        }
    return n<=0;
    }
};