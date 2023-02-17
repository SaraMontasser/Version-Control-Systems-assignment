#include <iostream>
#include <vector>

using namespace std;

int getSum(vector<int> &v) {
    int vectorSize = v.size(), totalSum = 0;
    for (int i = 0; i < vectorSize; ++i) {
        totalSum += v[i];
    }
    return totalSum;
}

int main() {

    return 0;
}
