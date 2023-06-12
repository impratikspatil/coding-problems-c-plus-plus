#include <iostream>
#include <string>
using namespace std;

int main()
{
    string m1, m2, m3, e1, e2, e3;

    cout << "--------Manager------" << endl;
    cout << "Did the employee meet goals? (yes/no): ";
    cin >> m1;

    cout << "Acquired new skills? (yes/no): ";
    cin >> m2;

    cout << "Contributes positively to team? (yes/no): ";
    cin >> m3;

    cout << "-----------Employee-----------" << endl;
    cout << "Consistently met deadlines? (yes/no): ";
    cin >> e1;

    cout << "Maintained professional attitude? (yes/no): ";
    cin >> e2;

    cout << "Adapted to changes? (yes/no): ";
    cin >> e3;

    // Assessing the overall employee performance
    cout << "--------Performance Evaluation--------" << endl;
    cout << "Based on the evaluation:" << endl;

    if (m1 == "yes" && m2 == "yes" && m3 == "yes" && e1 == "yes" && e2 == "yes" && e3 == "yes") {
        cout << "Employee's performance is excellent." << endl;
    }
    else if ((m1 == "yes" && m2 == "yes" && e1 == "yes") || (m1 == "yes" && m3 == "yes" && e1 == "yes" && e2 == "yes") ||
             (m1 == "yes" && m2 == "yes" && e2 == "yes" && e3 == "yes")) {
        cout << "Employee's performance is good." << endl;
    }
    else {
        cout << "Employee's performance needs improvement." << endl;
    }

    return 0;
}