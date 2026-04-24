// Last updated: 4/24/2026, 4:34:50 PM
class Solution {
public:
    int compress(vector<char>& chars) {
        int index = 0;
        int i = 0;

        while(i<chars.size()){
            int count = 0;
            int curr = chars[i];
            while(i<chars.size() && chars[i] == curr){
                i++;
                count++;
            }
            chars[index++] = curr;

            if(count>1){
                string ct = to_string(count);
                for(char c:ct){
                    chars[index++] = c;
                }
            }
        }
        return index;
    }
};