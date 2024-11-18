#include<iostream>
#include<vector>
using namespace std;

float sum(vector<float> price, vector<int> items) {
	float sum_final = 0;
	for (int i = 0; i < items.size(); i++) {
		if (items[i] < price.size()) {
			sum_final += price[items[i]];
		}
	}
	return sum_final;
}

int main() {
	setlocale(LC_ALL, "Russian");
	vector<float> prices{ 2.5, 4.25, 3.0, 10.0 };
	vector<int> items{ 1, 1, 0, 3 };
	float sum_final = sum(prices, items);
	cout <<"Суммарная стоимость будет равна: "<< sum_final;
}