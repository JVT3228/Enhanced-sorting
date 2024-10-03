#include <iostream>

void runBinaryInsertionSortTests();
void runShakerSortTests();

int main() {
    std::cout << "Running Binary Insertion Sort Tests:" << std::endl;
    runBinaryInsertionSortTests();

    std::cout << "\nRunning Shaker Sort Tests:" << std::endl;
    runShakerSortTests();

    return 0;
}