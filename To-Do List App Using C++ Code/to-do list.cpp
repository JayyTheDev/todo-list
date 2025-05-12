#include <iostream>
#include <vector>
#include <string>

using namespace std;

void showMenu() {
    cout << "\n=== To-Do List Menu ===\n";
    cout << "1. Add Task\n";
    cout << "2. View Tasks\n";
    cout << "3. Exit\n";
    cout << "Choose an option: ";
}

void addTask(vector<string>& tasks) {
    cout << "Enter a new task: ";
    string task;
    cin.ignore(); // To clear input buffer
    getline(cin, task);
    tasks.push_back(task);
    cout << "Task added successfully!\n";
}

void viewTasks(const vector<string>& tasks) {
    cout << "\n=== Current Tasks ===\n";
    if (tasks.empty()) {
        cout << "No tasks found.\n";
    } else {
        for (size_t i = 0; i < tasks.size(); ++i) {
            cout << i + 1 << ". " << tasks[i] << endl;
        }
    }
}

int main() {
    vector<string> tasks;
    int choice;

    while (true) {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                addTask(tasks);
                break;
            case 2:
                viewTasks(tasks);
                break;
            case 3:
                cout << "Goodbye!\n";
                return 0;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    }
}