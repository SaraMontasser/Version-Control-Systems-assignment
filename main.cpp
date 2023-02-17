#include <iostream>
#include <vector>

#define vectorSize 10
using namespace std;

int getSum(vector<int> &v) {
    int totalSum = 0;
    for (int i = 0; i < vectorSize; ++i) {
        totalSum += v[i];
    }
    return totalSum;
}

int main() {
    vector<int> v(vectorSize);
    for (int i = 0; i < vectorSize; i++) {
        v[i] = i + 1;
    }
    int answer = getSum(v);
    cout << "The sum is " << answer;
    return 0;
}
