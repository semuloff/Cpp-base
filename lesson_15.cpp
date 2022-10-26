#include <iostream>

using namespace std;

struct Human
{
    string firstName;
    string lastName;
    string post;
    int age;
    float growth;
};

// nested structures.
struct Team
{
    Human teamLeader;
    Human frontendDeveloper;
    Human backendDeveloper;
};

int main() {
    // create an instance of the structure.
    Team hyperColor;

    // fill in the data for a specific team member
    hyperColor.teamLeader.age = 26;
    hyperColor.teamLeader.growth = 176.45F;
    hyperColor.teamLeader.firstName = "Mark";
    hyperColor.teamLeader.lastName = "Menson";

    cout << hyperColor.teamLeader.firstName << "'s age: ";
    cout << hyperColor.teamLeader.age << endl;
}