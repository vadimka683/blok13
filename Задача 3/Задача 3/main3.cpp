#include<iostream>
#include<vector>
using namespace std;

vector<int> input_numbers(vector<int> number) {
	int old_number_id = 0;
	int num;
	int count = 0;
	do {
		if (count < 20) {
			for (int i = 0; i < 20; i++) {
				cout << "input number: ";
				cin >> num;
				number[i] = num;
				count++;
			}
		}
		else {
			if (old_number_id == 20) {
				old_number_id = 0;
			}
			cout << "input number: ";
			cin >> num;
			if (num == -1) {
				break;
			}
			number[old_number_id] = num;
			old_number_id++;
		}
	} while (true);

	if (old_number_id == 0) {
		for (int i = 0; i < 20; i++) {
			cout << number[i] << " ";
		}
	}else {
		for (int i = 0; i < 20; i++) {
			cout << number[old_number_id] << " ";
			if (old_number_id == 19) {
				old_number_id = 0;
			}
			else{
				old_number_id++; 
			}
		}
	}
	return number;
}

int main() {
	vector<int> numbers(20);
	numbers = input_numbers(numbers);
}