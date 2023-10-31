#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main()
{	
	vector<int> numbers = {23, 56, 78, 89, 90};
	cout << "Original Vector" << endl;
	for (int i = 0; i < numbers.size(); i++) {
		cout << numbers[i] << endl;
	}
	numbers.insert(numbers.begin() +1, 100);
	cout << "\nCurrent Vector" << endl;

	for (int i = 0; i < numbers.size(); i++) {
		cout << numbers[i] << endl;
	}

	numbers.erase(numbers.end() - 2);
	cout << "\nCurrent Vector" << endl;
	for (int i = 0; i < numbers.size(); i++) {
		cout << numbers[i] << endl;
	}
}



//
//std::string name;
//double g;
//std::vector<double> grades;
//
//double totalgrades = 0;
//double average;
//
//std::cout << "Enter Student Name ==> ";
//std::getline(std::cin, name);
//
//for (int i = 0; i < 5; i++) {
//	std::cout << "Enter grade #" << i + 1 << " ==> ";
//	std::cin >> g;
//	grades.push_back(g);
//	totalgrades += g;
//}
//
//average = totalgrades / grades.size();
//grades.push_back(average);
//std::cout << "Student Name ==> " << name << std::endl;
//for (int x = 0; x < grades.size(); x++) {
//	std::cout << grades[x] << "\n";
//}