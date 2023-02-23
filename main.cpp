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

int getAverage(vector<int> &v) {
    int totalSum = getSum(v);
    return totalSum / vectorSize;
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

    int sum_answer = getSum(v), average_answer = getAverage(v), min_answer = getMin(v);

    cout << "The sum is " << sum_answer << endl << "The average is " << average_answer << endl
         << "The minimum number is " << min_answer;
    return 0;
}
