

#include <iostream>

using namespace std;

int main(){

class Solution {
public:
    string getHint(string secret, string guess) {
        int secretFre[10] = {0}; 
        int guessFre[10] = {0}; 
int bulls = 0, cows = 0;
for(int i = 0; i< secret.size(); i++){
if(secret[i]== guess[i]){
bulls++;
}else{
secretFre[secret[i]-'0']++; 
guessFre[guess[i]-'0']++;
}
    }
    for(int i=0; i<10; i++)
    cows += min(secretFre[i], guessFre[i]);

    return to_string(bulls )+ "A" + to_string(cows) + "B";
    }
};
}