#include<iostream>

int main() {
	system("chcp 1251>nul");
	int n, m;
	std::cout << "Введите два числа: ";
	std::cin >> n, m;
	int* pn = &n;
	int* pm = &m;
	int result = (*pn + *pm) / 2;
	std::cout << "Среднее арифметическое = " << result << std::endl;




	return 0;
}