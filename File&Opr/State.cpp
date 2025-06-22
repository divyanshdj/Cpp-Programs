#include <iostream>
#include <string>
using namespace std;

struct State
{
    string st_name;
    long population;
    float lit_rate;
    int pci;
};

void read_data(State *, int);
void display(State &);
void highest_lr(State *, int);
void highest_pci(State *, int);

int main()
{
    int size;
    cout << "\nEnter number of States : \n";
    cin >> size;
    struct State s[size];
    read_data(s, size);
    cout << "\n\n\n-------------DETAILS OF STATE WITH HIGHEST LITERACY RATE---------------";
    highest_lr(s, size);
    cout << "\n\n\n----------DETAILS OF STATE WITH HIGHEST PER CAPITA INCOME---------";
    highest_pci(s, size);

    return 0;
}

void read_data(State *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "\n\nEnter details for State " << i + 1 << " :-\n";
        cin.ignore(); // Ignore any residual newline character
        cout << "\nName of State : ";
        getline(cin, (ptr + i)->st_name); // Use getline to safely read the state name
        cout << "\nPopulation : ";
        cin >> (ptr + i)->population;
        cout << "\nLiteracy Rate : ";
        cin >> (ptr + i)->lit_rate;
        cout << "\nPer Capita Income : ";
        cin >> (ptr + i)->pci;
    }
}

void display(State &state)
{
    cout << "\n\nNAME OF STATE: " << state.st_name;
    cout << "\n\nPOPULATION OF STATE: " << state.population;
    cout << "\n\nLITERACY RATE OF STATE: " << state.lit_rate;
    cout << "\n\nPER CAPITA INCOME OF STATE: " << state.pci;
}

void highest_lr(State *ptr, int size)
{
    float hlr = ptr->lit_rate;
    int pos = 0;
    for (int i = 1; i < size; i++)
    {
        if ((ptr + i)->lit_rate > hlr)
        {
            hlr = (ptr + i)->lit_rate;
            pos = i;
        }
    }
    // Find and display all states with the highest literacy rate
    cout << "\nStates with the highest literacy rate:\n";
    for (int i = 0; i < size; i++)
    {
        if ((ptr + i)->lit_rate == hlr)
        {
            display(*(ptr + i));
        }
    }
}

void highest_pci(State *ptr, int size)
{
    int h_pci = ptr->pci;
    int pos = 0;
    for (int i = 1; i < size; i++)
    {
        if ((ptr + i)->pci > h_pci)
        {
            h_pci = (ptr + i)->pci;
            pos = i;
        }
    }
    // Find and display all states with the highest per capita income
    cout << "\nStates with the highest per capita income:\n";
    for (int i = 0; i < size; i++)
    {
        if ((ptr + i)->pci == h_pci)
        {
            display(*(ptr + i));
        }
    }
}
