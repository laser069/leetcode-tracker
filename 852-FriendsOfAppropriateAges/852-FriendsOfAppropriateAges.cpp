// Last updated: 3/26/2026, 1:26:19 PM
class Solution {
public:
    bool req(int ageX,int ageY){
        return !(ageY<=0.5*ageX+7 || ageY>ageX || (ageY>100 && ageX<100));
    }
    int numFriendRequests(vector<int>& ages) {
        unordered_map<int,int> hash;
        for(auto age:ages){
            hash[age]++;
        }
        int ans=0;
        for(auto [ageX,countX]:hash){
            for(auto [ageY,countY]:hash){
                if(req(ageX,ageY)){
                    if(ageX==ageY){
                        ans+=countX * (countY - 1);
                    }else{
                        ans+= countX*countY;
                    }
                }
            }
        }
            return ans;
    }
};