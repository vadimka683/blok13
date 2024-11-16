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
void read_vector(vector<int> array) {
	for (int i = 0; i < array.size(); i++) {
		cout << array[i]<<" ";
	}
}
vector<int> delete_number(vector<int> array) {
	cout << "Input number to delete: ";
	int a;
	cin >> a;
	while (array[array.size() - 1] == a) {
		array.pop_back();
	}
	bool flag;
	do {
		flag = false;
		for (int i = 0; i < array.size(); i++) {
			if (array[i] == a && i != array.size() && !flag) {
				array[i] = array[i + 1];
				flag = true;
			}
			else if (flag && i<array.size() - 1) {
				array[i] = array[i + 1];
			}
		}
		if (flag) {
			array.pop_back();
		}
	}
	while (flag);
	return array;
}

int main() {
	vector<int> array = input_vector();
	array = delete_number(array);
	read_vector(array);
}