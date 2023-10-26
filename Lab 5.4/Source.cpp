// Лабораторна робота № 5.4
#include <iostream>
#include <cmath>
using namespace std;
double P0(const int N)
{
    double p = 1;
    for (int k = 1; k <= N; k++)
        p *= ((float(k) * k) / (N * N)) * cos((N * N) / (k * k));
    return p;
}
double P1(const int N, const int k)
{
    if (k > N)
        return 1;
    else
        return ((float(k) * k) / (N * N)) * cos((N * N) / (k * k)) * P1(N, k + 1);
}
double P2(const int N, const int k)
{
    if (k < 1)
        return 1;
    else
        return ((float(k) * k) / (N * N)) * cos((N * N) / (k * k)) * P2(N, k - 1);
}
double P3(const int N, const int k, double t)
{
    t = t * ((float(k) * k) / (N * N)) * cos((N * N) / (k * k));
    if (k >= N)
        return t;
    else
        return P3(N, k + 1, t);
}
double P4(const int N, const int k, double t)
{
    t = t * ((float(k) * k) / (N * N)) * cos((N * N) / (k * k));
    if (k <= 1)
        return t;
    else
        return P4(N, k - 1, t);
}

int main()
{
    int N;
    cout << "N = "; cin >> N;
    cout << "(iter) P0 = " << P0(N) << endl;
    cout << "(rec up ++) P1 = " << P1(N, 1) << endl;
    cout << "(rec up --) P2 = " << P2(N, N) << endl;
    cout << "(rec down ++) P3 = " << P3(N, 1, 1) << endl;
    cout << "(rec down --) P4 = " << P4(N, N, 1) << endl;
    return 0;
}