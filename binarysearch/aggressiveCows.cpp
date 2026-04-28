#include <iostream>
using namespace std;

// check karte hain ki cows place ho sakti hain ya nahi

bool canPlaceCows(int stalls[], int n, int k, int mid) {

    int cowCount = 1;  // pehli cow ko pehle stall mein place karte hain
    int lastPosition = stalls[0];  // pehli cow ki position

    for(int i = 1; i < n; i++) {
        if(stalls[i] - lastPosition >= mid) {  // agar current stall aur last position ke beech ka distance mid se bada ya barabar hai
            cowCount++;  // ek aur cow place karte hain
            lastPosition = stalls[i];  // last position update karte hain

            if(cowCount == k) {  // agar sari cows place ho gayi hain
                return true;
            }
        }
    }
    return false;
}
int aggressiveCows(int stalls[], int n, int k) {


    int s = 0;  // minimum distance
    int e = stalls[n - 1];  // maximum distance
  

    while(s <= e) {
        int mid = (s + e) / 2;  // mid distance calculate karte hain

        if(canPlaceCows(stalls, n, k, mid)) {  // agar cows place ho sakti hain
            
            s = mid + 1;  // aur bada distance try karte hain
        } else {
            e = mid - 1;  // chhota distance try karte hain
        }
    }
    return e;  // e mein maximum minimum distance hoga jab loop khatam hoga
}

int main() {

    int stalls[] = {1, 2, 4, 8, 9};
    int n = 5;
    int k = 3;
    cout << "Maximum minimum distance between cows is: " << aggressiveCows(stalls, n, k);


}