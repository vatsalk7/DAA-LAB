#include <iostream>
#include <string>
#include <chrono>
using namespace std::chrono;
using namespace std;

int Fact(int n);

main()
{
    cout << "Enter number : ";
    int n;
    cin >> n;

    auto start = high_resolution_clock::now();
    Fact(n);
    auto elapsed = high_resolution_clock::now() - start;
    long long time_taken = duration_cast<nanoseconds>(elapsed).count();
    cout << endl
         << "Time taken by algorithm is :" << time_taken << endl;
    return 0;
}

int Fact(int n)
{
    if (n == 1 || n == 0)
        return 1;

    return n * Fact(n - 1);
}