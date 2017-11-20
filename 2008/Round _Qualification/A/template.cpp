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
#define filein "A-large-practice.in"
#define fileout "A.out"
void solve(int t)
    {
	/*
		Split the queries into partitions where we keep going until
		we find all of the search engines.
		When this happens, increment our switch counter,
		and set this latest query as part of the next partition list.
	*/
		
	string ss;
	getline(cin, ss);
	int s = stoi(ss);
	
	unordered_map<string, bool> m;
	
	for(int i = 0; i < s; i++)
		{
		string name; 
		getline(cin, name);
		
		m[name] = false;
		}
		
	string qq;
	getline(cin, qq);
	int q = stoi(qq);
	
	int lowest = 0;
	int numsearches = 0;
	for(int i = 0; i < q; i++)
		{
		string query; 
		getline(cin, query);
		bool alreadyused = m[query];
		
		// If alreadyused is false then we need to update stuff
		if(alreadyused == false)
			{
			// Update this search engine in the map
			m[query] = true;
			// Say that we're using one more search engine
			numsearches += 1;
			
			// If this means we need to perform a new set...
			if(numsearches == s)
				{
				// Reset stuff
				lowest += 1;
				numsearches = 0;
				
				// Set hash map to all false
				m.clear();
				
				// Set this query as part of the new list.
				m[query] = true;
				numsearches += 1;
				}
			}
		
		}
		
	cout << lowest;
    }
///////////////////////////////////////////////////

// Program begins here. Handles writing "Case #: "
int main()
    {
    // Handle reading and writing to file.
    //freopen("C-small-practice.in", "r", stdin);
    freopen(filein, "r", stdin);
    freopen(fileout, "w", stdout);

	string ttt;
	getline(cin, ttt);
	int tt = stoi(ttt);
    for(int t = 1; t <= tt; t++)
        {
        cout << "Case #" << t << ": ";
        solve(t);
        if(t != tt) { cout << "\n"; }
        }
    return 0;
    }