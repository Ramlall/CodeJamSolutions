// OB3LISK's C++ template for Google Code Jam.
// g++ -std=c++11 template.cpp -o main 
#include <iostream>
#include <iomanip>
#include <fstream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <set>
#include <map>
#include <unordered_map>
#include <cstdio>
#include <queue>

using namespace std;
typedef long long ll;
typedef long double ld;

// Do all the work for the code jam problem here.
// Write the answer to a test case.
///////////////////////////////////////////////////
#define filein "test.in"
#define fileout "A.out"
void solve(int t)
    {

    }
///////////////////////////////////////////////////

// Program begins here. Handles writing "Case #: "
int main()
    {
    // Handle reading and writing to file.
    //freopen("C-small-practice.in", "r", stdin);
    freopen(filein, "r", stdin);
    freopen(fileout, "w", stdout);

    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++)
        {
        cout << "Case #" << t << ": ";
        solve(t);
        if(t != tt) { cout << "\n"; }
        }
    return 0;
    }