#include "sum.h"

// sum(n) = 1 + (1+2)*2^1 + (1+2+3)*2^2 + ... + (1+2+3+...+n)*2^(n-1)
long long int sum(int n) {
	if(n == 0) return 1;
	if(n == 1) return 2;
	int sum = 1;
	long long int result = 1;
	for(int i = 2; i <= n; ++i) {
		sum += i;
		result += sum * pow(2, i - 1);
	}
	return result;
}

int main() {
    int n;
    std::cout << "Введите n: ";
    std::cin >> n;
	std::cout << sum(n) << std::endl;
}
