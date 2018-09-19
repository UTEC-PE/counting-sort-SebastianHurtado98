#include <cstdlib>
#include <vector>
#include <iostream>

using namespace std;

void print(int numbers[], int size);
void countingSort(const int numbers[], int size);

int main(int argc, char *argv[]) {
    int numbers[] = {1, 4, 1, 2, 7, 5, 2};
    int size = sizeof(numbers) / sizeof(*numbers);

    //print(numbers, size);
    countingSort(numbers, size);
    //print(numbers, size);

    system("pause");

    return EXIT_SUCCESS;

}

void print(int numbers[], int size) {
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << ' ';
    }
    cout << endl;
}

void countingSort(const int* numbers, int size) {
    int max= 0;
    for (int i=0; i<size; i++){
        if (max<numbers[i]){
            max=numbers[i];
        }
    }

    int * numbers2;
    numbers2 = new int [max];

    for (int i=0; i<max; i++){
        numbers2[i]= 0;
    }

    for (int i=0; i<size; i++){
        numbers2[numbers[i]-1]++;
    }

    for (int i=0; i<max; i++){
        while(numbers2[i]!=0){
            cout << numbers[i] << " ";
            numbers2[i]--;
        }
    }


}