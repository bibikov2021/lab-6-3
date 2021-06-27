#include <iostream>
using namespace std;


void v_sort(int* arr, int n) {
	int counter = 0;
	for (int i = 1; i < n; i++) {
		for (int j = i; j > 0 && arr[j - 1] > arr[j]; j--) {
			swap(arr[j], arr[j - 1]);
		}
	}
}

int main() {
	setlocale(LC_ALL, "ru");
	
	int size;
	cout << "Введите размер массива: ";
	cin >> size;
	int* array = new int[size];

	cout << "Заполните массив через пробел: ";
	for (int i = 0; i < size; i++)
		cin >> array[i];

	cout << endl;
	v_sort(array, size);
	cout << "Массив после сортировки: " << endl;
	for (int i = 0; i < size; i++)
		cout << array[i] << " ";

	return 0;
}