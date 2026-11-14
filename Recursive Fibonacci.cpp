#include <iostream>
using namespace std;

long long Fibonacci(int n) {
    if (n == 1 || n == 0)
        return n;
    return Fibonacci(n - 1) + Fibonacci(n - 2);

}

int main()
{
    int n;
    
    cout << "Enter n: ";
    cin >> n;

    long long result = Fibonacci(n);

    cout << "Fibonacci(" << n << ") = " << result << endl;

    return 0;
}
