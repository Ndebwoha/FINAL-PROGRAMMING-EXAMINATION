#include <iostream>
using namespace std;

int main() {
    float sum = 0.0;

    for (int i = 1; i <= 95; i += 2) {
        sum += static_cast<float>(i) / (i + 2);
        cout << i << "/" << i + 2 << endl;
        if(i < 95) {
            cout << "+\n";
        }
    }

    cout << "The sum of the series is: " << sum << endl;

    return 0;
}
