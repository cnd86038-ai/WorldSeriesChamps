#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

// Function prototypes
void getTeams(const string& filename, vector<string>& teams);
void getWinners(const string& filename, vector<string>& winners);
int findWinner(const string& team, const vector<string>& winners);

int main()
{
    vector<string> teams;
    vector<string> winners;

    // Load data from files
    getTeams("Teams.txt", teams);
    getWinners("WorldSeriesWinners.txt", winners);

    // Display teams
    cout << "Teams that have won the World Series:\n";
    cout << "--------------------------------------\n";
    for (const string& team : teams)
    {
        cout << team << endl;
    }

    cout << "\nEnter a team name to search (or type 'quit' to exit)\n";

    string input;

    // Sentinel-controlled loop
    while (true)
    {
        cout << "\nTeam: ";
        getline(cin, input);

        if (input == "quit")
        {
            break;
        }

        int wins = findWinner(input, winners);

        cout << input << " has won the World Series "
            << wins << " time(s) between 1903 and 2012.\n";
    }

    cout << "Program ended.\n";

    return 0;
}