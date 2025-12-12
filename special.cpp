#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, reason, promise;

    cout << "❤ Apology & Love Form ❤" << endl;
    cout << "--------------------------" << endl;

    cout << "Her Name: ";
    getline(cin, name);

    cout << "Why are you sorry? ";
    getline(cin, reason);

    cout << "What do you promise to do better? ";
    getline(cin, promise);

    cout << "\n\nDear " << name << "," << endl;
    cout << "I'm really sorry for " << reason<< endl;
    cout << "You mean so much to me, and I never want to hurt you." << endl;
    cout << "I promise to " << promise << "because you're worth it." << endl;
    cout << "I love you more than words can say." << endl;

    cout << "\nWith all my heart," << endl;
    cout << " Your Fool in Love" << endl;

    return 0;
}