#include <iostream>

int bitWidth(int n) {
    int width = 0;
    while (n > 0) {
        n >>= 1;
        width++;
    }
    return width;
}

// int countSetBits(int n) {
//     int count = 0;
//     while (n > 0) {
//         int x = bitWidth(n) - 1;
//         count += x * (1 << (x - 1));
//         n -= 1 << x;
//         count += n + 1;
//     }
//     return count;
// }
int countSetBits(int n) {
        int count = 0;
        while (n > 0) {
            int x = bitWidth(n) - 1;
            count += x << (x - 1);
            n -= 1 << x;
            count += n + 1;
        }
        return count;
}

int main() {
    int n = 10; // Example number
    std::cout << "Total set bits from 1 to " << n << " is " << countSetBits(n) << std::endl;
    return 0;
}
