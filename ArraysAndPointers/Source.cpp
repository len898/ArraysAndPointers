#include <iostream>
void elementAndAddress(const int nums[], int size);
void elementAndAddressWithPointer(const int nums[]);

int main() {
	int nums[] = { 1,2,3,4,5,6,7,8,9,10 };
	elementAndAddress(nums, 10);
	elementAndAddressWithPointer(nums);

}

void elementAndAddress(const int nums[], int size) {
	for (int i = 0; i < size; i++) {
		std::cout << "VAL:" << nums[i] << "ADR:" << &nums[i] << std::endl;
	}
}

void elementAndAddressWithPointer(const int nums[]) {
	int* begPtr = (int*)&nums[0];
	int* endPtr = (int*)&nums[9];
	while (begPtr <= endPtr) {
		std::cout << "VAL:" << *begPtr << "ADR:" << &begPtr << std::endl;
		begPtr++;
	}
}