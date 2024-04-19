#include <iostream>
#include <vector>
#include <ctime>
#include <iomanip>
#include <string>
#include <numeric>
#include <limits>

using namespace std;

struct HeartRateRecord {
    int rate;
    time_t timestamp;
};

vector<HeartRateRecord> heart_rates;

void recordHeartRate() {
    HeartRateRecord record;
    cout << "Enter your heart rate (bpm): ";
    cin >> record.rate;
    time(&record.timestamp);
    heart_rates.push_back(record);
    cout << "Recorded heart rate: " << record.rate << " bpm at " << ctime(&record.timestamp);
}

void calculateAverage() {
    if (heart_rates.empty()) {
        cout << "No data to calculate average." << endl;
        return;
    }
    double sum = 0;
    for (const auto& record : heart_rates) {
        sum += record.rate;
    }
    double average = sum / heart_rates.size();
    cout << fixed << setprecision(2);
    cout << "Average heart rate: " << average << " bpm" << endl;
}

void showHistory() {
    if (heart_rates.empty()) {
        cout << "No records available." << endl;
        return;
    }
    for (const auto& record : heart_rates) {
        cout << "Heart rate: " << record.rate << " bpm at " << ctime(&record.timestamp);
    }
}

int main() {
    while (true) {
        cout << "\nOptions:\n";
        cout << "1. Record Heart Rate\n";
        cout << "2. Show Average Heart Rate\n";
        cout << "3. Show History\n";
        cout << "4. Exit\n";
        cout << "Enter your choice (1-4): ";
        int choice;
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer

        switch (choice) {
            case 1:
                recordHeartRate();
                break;
            case 2:
                calculateAverage();
                break;
            case 3:
                showHistory();
                break;
            case 4:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
        }
    }

    return 0;
}
