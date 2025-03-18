#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        int k;
        cin >> k;  // Input k

        int count = 0;
        for (int i = 1; ; i++) {  // Infinite loop until we find k valid numbers
            if (i % 3 != 0 && i % 10 != 3) {
                count++;
                if (count == k) {
                    cout << i << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
