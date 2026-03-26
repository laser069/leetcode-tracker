// Last updated: 3/26/2026, 1:26:00 PM
class Solution {
    public int canBeTypedWords(String text, String brokenLetters) {
        String[] words = text.split(" ");
        int count = 0;
        for(String word:words){
            
            boolean yes = true;
        for(int i = 0;i<brokenLetters.length();i++){
            if(word.contains(String.valueOf(brokenLetters.charAt(i)))){
                yes = false;
                break;
            }
        }
        if(yes){
            count++;
        }
        }
        return count;
    }
}