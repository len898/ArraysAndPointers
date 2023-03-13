#include <iostream>
void elementAndAddress(const int nums[], const int size);
void elementAndAddressWithPointer(const int nums[], const int size);

int main() {
	//int nums[] = { 1,2,3,4,5,6,7,8,9,10 };
	int size;
	std::cout << "Enter the size of your array: ";
	std::cin >> size;
	int* nums = new int[size];

	for (int i = 0; i < size; i++) {
		int temp;
		std::cin >> temp;
		nums[i] = temp;
	}



	elementAndAddress(nums, size);
	elementAndAddressWithPointer(nums, size);
	delete[] nums;
}

void elementAndAddress(const int nums[], const int size) {
	for (auto i = 0; i < size; i++) {
		std::cout << "VAL:" << nums[i] << "ADR:" << &nums[i] << std::endl;
	}
}

void elementAndAddressWithPointer(const int nums[], const int size) {
	int* begPtr = (int*)&nums[0];
	int* endPtr = (int*)&nums[size - 1];
	while (begPtr <= endPtr) {
		std::cout << "VAL:" << *begPtr << "ADR:" << &begPtr << std::endl;
		begPtr++;
	}
}