// Demonstration of std::set
// Reads a file of drink sales, and generates a
// set (deduplicated, ordered list)
#include <iostream>
#include <fstream>
#include <iomanip>
#include <set>
using namespace std;

const int SZ = 200;
const int W1 = 12;

int main() {
    // create the set to hold the drink sales
    set<string> drinks;

    // read drinks file into set
    ifstream fin("drinks.txt");
    string nm;
    int count = 0;  // counts input file size
    while (getline(fin, nm)) {
        drinks.insert(nm);
        count++;
    }
    fin.close();

    cout << "Input file had " << count << " drinks sold.\n";
    cout << drinks.size() << " set elements, unique and ordered:\n";
    for (string nm : drinks) {
        cout << nm << endl;
    }

    // another method of printing using an iterator
    cout << "\n\nAnother method of printing this set using an interator\n";
    for (auto it = drinks.begin(); it != drinks.end(); it++) {
        cout << *it << endl;
    }

    return 0;
}

/*
Common <set> member functions:
.begin()            // returns an iterator to the first element in the set
.clear()            // removes all elements from the set
.count(value)       // returns the number of elements matching the specified value
.emplace(args)      // constructs an element in-place and inserts it into the set
.empty()            // returns whether the set is empty
.end()              // returns an iterator to the theoretical element that follows the last element in the set
.equal_range(value) // returns a range containing all elements equal to the specified value
.erase(it)          // erases the element pointed to by the iterator
.erase(value)       // erases the element with the specified value
.find(value)        // finds an element with the specified value
.insert(value)      // inserts an element or a range of elements into the set
.lower_bound(value) // returns an iterator to the first element not less than the specified value
.max_size()         // returns the maximum number of elements that the set can hold
.size()             // returns the number of elements in the set
.swap(set)          // exchanges the contents of the set with another set
.upper_bound(value) // returns an iterator to the first element greater than the specified value
*/