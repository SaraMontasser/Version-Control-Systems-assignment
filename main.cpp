#include <iostream>
#include <vector>
#include <algorithm>

#define vectorSize 10
using namespace std;

int getSum(vector<int> &v) {
    int totalSum = 0;
    for (int i = 0; i < vectorSize; ++i) {
        totalSum += v[i];
    }
    return totalSum;
}

int getMin(vector<int> &v) {
    int min_number = v.front();
    for (int i = 1; i < vectorSize; ++i) {
        min_number = min(min_number, v[i]);
    }
    return min_number;
}

int main() {
    vector<int> v(vectorSize);
    for (int i = 0; i < vectorSize; i++) {
        v[i] = i + 1;
    }
    int answer = getSum(v), min_number = getMin(v);
    cout << "The sum is " << answer << endl << "The minimum number is " << min_number;
    return 0;
}
