
#include <iostream>
#include <cstdlib>
#include <ctime>

// Homework 7 — Hussain Zahidi
// CIS 5 Week 07 · Odd and Even

int main() {
    using std::cout;
    using std::endl;

    const int N = 20;
    int values[N];
    int evens[N];
    int odds[N];

    int even_nums = 0;
    int odd_nums = 0;

    // Build values array
    srand(static_cast<unsigned>(time(nullptr)));
    for (int i = 0; i < N; ++i) {
        values[i] = rand() % 100;
    }

    // build evens and odds array by seperating values
    for (int i = 0; i < N; ++i) {
        cout << "[" << i << "] " << values[i] << endl;

        if (values[i] % 2 == 0) {
            evens[even_nums] = values[i];
            ++even_nums;

        }
        else {
            odds[odd_nums] = values[i];
            ++odd_nums;
        }
    }

    // Print even numbers
    cout << "Even:";
    for (int i = 0; i < even_nums; ++i) {
        cout << " " << evens[i];
    }
    cout << endl;

    // Print odd numbers
    cout << "Odd:";
    for (int i = 0; i < odd_nums; ++i) {
        cout << " " << odds[i];
    }
    cout << endl;

    return 0;
}
