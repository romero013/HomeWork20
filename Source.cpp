#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

template <typename T> void showArr(T arr[], int length) {
	cout << "[";
	for (int i = 0; i < length; i++) {
		arr[i] = rand() % (100 + 100) - 100;
		cout << arr[i] << ", ";
	}
	cout << "\b\b]\n";
}
template <typename T> int searchIndex(T arr[], int length, T key, int begin = 0) {
	for (int i = begin; i < length; i++)
		if (arr[i] == key)
			return i;
	return -1;
}
template <typename T> int searchLastIndex(T arr[], int length, T key, int begin = -1) {
	if (begin == -1)
		begin = length - 1;
	for (int i = begin; i > 0; i--)
		if (arr[i] == key)
			return i;
	return -1;
}
template <typename T> T maxElement(T arr[], int length) {
	int max = arr[0];
	for (int i = 1; i < length; i++)
		if (arr[i] > max)
			max = arr[i];
	return max;
}
template <typename T> T minElement(T arr[], int length) {
	int min = arr[0];
	for (int i = 1; i < length; i++)
		if (arr[i] < min)
			min = arr[i];
	return min;
}
template <typename T> double meanValue(T arr[], int length) {
	double sum = 0;
	for (int i = 0; i < length; i++)
		sum += arr[i];
	return sum / length;
}
template <typename T> void range(T arr[], int length, T a, T b) {
	cout << "[";
	for (int i = 0; i < length; i++) {
		if (arr[i] >= a && arr[i] <= b)
			cout << arr[i] << ", ";
	}
	cout << "\b\b]\n";
}
template <typename T> int counter(T arr[], int length, T a) {
	int count = 0;
	for (int i = 0; i < length; i++)
		if (arr[i] == a)
			count++;
	return count;
}


int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int n, m;

	// �������
	cout << "�������.\n����������� ������:\n";
	int z[100];
	showArr(z, 100);
	cout << "������� ������� ������� ��� ������: ";
	cin >> n;
	cout << "������ ������� ��������� �������� � ������ = " << searchIndex(z, 100, n) << ".\n";

	cout << "������� ������� ������� ��� ������: ";
	cin >> n;
	cout << "������ ������� ��������� �������� � ������ = " << searchLastIndex(z, 100, n) << ".\n";

	cout << "������������ ������� ���� ��������� ������� = " << maxElement(z, 100) << ".\n";
	cout << "����������� ������� ���� ��������� ������� = " << minElement(z, 100) << ".\n";
	cout << "������� �������������� ���� ��������� ������� = " << meanValue(z, 100) << endl;

	cout << "������� ������ � ����� ���������: ";
	cin >> n >> m;
	cout << "�������� �������� � ��������:\n";
	range(z, 100, n, m);

	cout << "������� ������� �������: ";
	cin >> n;
	cout << "���������� ��������� ����������� �������� � ������ = " << counter(z, 100, n) << ".\n";
	cout << endl;

	return 0;
}
