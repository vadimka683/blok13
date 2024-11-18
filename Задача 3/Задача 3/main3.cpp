#include<iostream>
#include<vector>
using namespace std;

void input_numbers(vector<int>& number) {
	int old_number_id = 0;
	int num;
	int count = 0;
	bool flag = false;
	do {
		if (count < 20) {
			for (int i = 0; i < 20; i++) {
				cout << "input number: ";
				cin >> num;
				if (num == -1) {
					flag = true;
					break;
				}
				number[i] = num;
				count++;
			}
		}if (flag) {
			break;
		}
		else {
			cout << "input number: ";
			cin >> num;
			if (num == -1) {
				break;
			}
			number[old_number_id] = num;
			old_number_id = (old_number_id + 1) % 20;
		}
	} while (true);

	if (old_number_id == 0) {
		for (int i = 0; i < 20; i++) {
			cout << number[i] << " ";
		}
	}else {
		for (int i = 0; i < 20; i++) {
			cout << number[old_number_id] << " ";
			old_number_id = (old_number_id + 1) % 20;
		}
	}
	return;
}

int main() {
	vector<int> numbers(20);
	input_numbers(numbers);
}