#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

// Function prototypes
void getTeams(const string& filename, vector<string>& teams);
void getWinners(const string& filename, vector<string>& winners);
int findWinner(const string& team, const vector<string>& winners);