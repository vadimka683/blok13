#include<iostream>
#include<vector>
using namespace std;

vector<int> input_vector() {
	cout << "Input vector size: ";
	int size;
	cin >> size;
	vector<int> new_vector(size);
	cout << "Input numbers: ";
	int a;
	for (int i = 0; i < new_vector.size(); i++) {
		cin >> a;
		new_vector[i] = a;
	}
	return new_vector;
}
void read_vector(vector<int>& array) {
	for (int i = 0; i < array.size(); i++) {
		cout << array[i]<<" ";
	}
}
void delete_number(vector<int>& array) {
	cout << "Input number to delete: ";
	int a;
	cin >> a;
	for (int i = 0; i < array.size(); i++) {
		if (array[i] == a) {
			for (int j = i; j < array.size() - 1; j++) {
				array[j] = array[j + 1];
			}
			array.pop_back();
			i--;
		}
	}
	return;
}

int main() {
	vector<int> array = input_vector();
	delete_number(array);
	read_vector(array);
}