#include <iostream>
using namespace std;

// 합계를 구하는 함수
int getSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }
    return sum;
}

// 평균을 구하는 함수
double getAverage(int arr[], int size) {
    int sum = getSum(arr, size);
    double avg = (double)sum / size;
    return avg;
}

int main() {
    int numbers[5];
    int i;

    cout << "숫자 5개를 입력하세요:" << endl;

    for (i = 0; i < 5; i++) {
        cin >> numbers[i];
    }

    int total = getSum(numbers, 5);
    double average = getAverage(numbers, 5);

    cout << "합계는: " << total << endl;
    cout << "평균은: " << average << endl;

    return 0;
}
