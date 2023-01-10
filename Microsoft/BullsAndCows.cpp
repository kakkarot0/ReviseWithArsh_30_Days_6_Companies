class Solution {

public:
    string getHint(string secret, string guess) {
        map<char, int> m1, m2;
        int bulls = 0, cows = 0;
        
        // Find bulls
        for (int i = 0 ; i < secret.size() ; i++) {
            if (secret[i] == guess[i]) {
                bulls++;
            }
        }
        
        // Preprocessing for cows
        for (int i = 0 ; i < secret.size() ; i++) {
            if (secret[i] != guess[i]) {
                m1[secret[i]]++;
                m2[guess[i]]++;
            }
        }
        
        // Find cows
        for (char c = '0' ; c <= '9' ; c++) {
            cows += min(m1[c], m2[c]);
        }
        
        return to_string(bulls) + "A" + to_string(cows) + "B";
    }
};
