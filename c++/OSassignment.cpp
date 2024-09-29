// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     cout << "Enter the number of processes to be executed\n";
//     int n;
//     cin >> n;
    
//     vector<int> burst_time(n), arrival_time(n), process_id(n);
//     cout << "Enter the process id of each program\n";
//     for(int i = 0; i < n; i++) cin >> process_id[i];

    
//     cout << "Enter the arrival time of each program\n";
//     for(int i = 0; i < n; i++) cin >> arrival_time[i];
    
    
//     cout << "Enter the burst time of each program\n";
//     for(int i = 0; i < n; i++) cin >> burst_time[i];
    
    
//     vector<pair<int, int>> order(n);
//     for(int i = 0; i < n; i++) order[i] = {arrival_time[i], i};  
    
//     sort(order.begin(), order.end());  

//     vector<int> turn_around_time(n), waiting_time(n);
//     int current_time = 0;
    
//     cout << "The order in which processes will be executed is :\n";
//     for(int i = 0; i < n; i++){
//         int idx = order[i].second;
//         cout << process_id[idx] << ' ';
        
//         current_time = max(current_time, arrival_time[idx]) + burst_time[idx];
//         turn_around_time[idx] = current_time - arrival_time[idx];
//         waiting_time[idx] = turn_around_time[idx] - burst_time[idx];
//     }
//     cout << '\n';

//     cout << "Turnaround time:\n";
//     for(int i = 0; i < n; i++){
//         cout << "Process " << process_id[i] << " --> " << turn_around_time[i] << '\n';
//     }
    
//     cout << "\nWaiting time:\n";
//     int total_waiting_time = 0;
//     for(int i = 0; i < n; i++){
//         cout << "Process " << process_id[i] << " --> " << waiting_time[i] << '\n';
//         total_waiting_time += waiting_time[i];
//     }
    
//     cout << "\nAverage waiting time --> " << (float)total_waiting_time / n << '\n';
// }



// #include <bits/stdc++.h>
// using namespace std;

// struct Process {
//     int id;
//     int arrival_time;
//     int burst_time;
//     int remaining_time;
//     int completion_time;
//     int waiting_time;
//     int turn_around_time;
// };

// struct CompareRemainingTime {
//     bool operator()(const Process& p1, const Process& p2) {
//         if (p1.remaining_time == p2.remaining_time) {
//             if (p1.arrival_time == p2.arrival_time) {
//                 return p1.id > p2.id;
//             }
//             return p1.arrival_time > p2.arrival_time;
//         }
//         return p1.remaining_time > p2.remaining_time;
//     }
// };

// int main() {
//     cout << "Enter the number of processes to be executed\n";
//     int n;
//     cin >> n;

//     vector<Process> processes(n);

//     cout << "Enter the process ID of each program\n";
//     for (int i = 0; i < n; i++) {
//         cin >> processes[i].id;
//     }

//     cout << "Enter the arrival time of each program\n";
//     for (int i = 0; i < n; i++) {
//         cin >> processes[i].arrival_time;
//     }

//     cout << "Enter the burst time of each program\n";
//     for (int i = 0; i < n; i++) {
//         cin >> processes[i].burst_time;
//         processes[i].remaining_time = processes[i].burst_time;
//     }

//     priority_queue<Process, vector<Process>, CompareRemainingTime> pq;

//     int time_counter = 0, completed = 0;
//     vector<bool> in_queue(n, false);

//     while (completed != n) {
//         for (int i = 0; i < n; i++) {
//             if (processes[i].arrival_time <= time_counter && processes[i].remaining_time > 0 && !in_queue[i]) {
//                 pq.push(processes[i]);
//                 in_queue[i] = true;
//             }
//         }

//         if (!pq.empty()) {
//             Process current = pq.top();
//             pq.pop();

//             current.remaining_time--;
//             time_counter++;

//             if (current.remaining_time == 0) {
//                 completed++;
//                 current.completion_time = time_counter;
//                 current.turn_around_time = current.completion_time - current.arrival_time;
//                 current.waiting_time = current.turn_around_time - current.burst_time;

//                 processes[current.id - 1] = current; 
//             } else {
//                 processes[current.id - 1] = current; 
//                 pq.push(current); 
//             }
//         } else {
//             time_counter++;
//         }
//     }

//     cout << "PID\tArrival\tBurst\tCompletion\tTurnaround\tWaiting\n";
//     for (const auto& p : processes) {
//         cout << p.id << "\t\t" << p.arrival_time << "\t\t" << p.burst_time << "\t\t" 
//              << p.completion_time << "\t\t" << p.turn_around_time << "\t\t" << p.waiting_time << "\n";
//     }

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// struct Process {
//     int id;
//     int arrival_time;
//     int burst_time;
//     int priority;
//     int remaining_time;
//     int completion_time;
//     int waiting_time;
//     int turn_around_time;
// };

// struct ComparePriority {
//     bool operator()(const Process& p1, const Process& p2) {
//         if (p1.priority == p2.priority) {
//             return p1.arrival_time > p2.arrival_time;
//         }
//         return p1.priority > p2.priority; // Higher priority value means lower actual priority
//     }
// };

// int main() {
//     cout << "Enter the number of processes to be executed\n";
//     int n;
//     cin >> n;

//     vector<Process> processes(n);

//     cout << "Enter the process ID of each program\n";
//     for (int i = 0; i < n; i++) {
//         cin >> processes[i].id;
//     }

//     cout << "Enter the arrival time of each program\n";
//     for (int i = 0; i < n; i++) {
//         cin >> processes[i].arrival_time;
//     }

//     cout << "Enter the burst time of each program\n";
//     for (int i = 0; i < n; i++) {
//         cin >> processes[i].burst_time;
//         processes[i].remaining_time = processes[i].burst_time;
//     }

//     cout << "Enter the priority of each program (lower number means higher priority)\n";
//     for (int i = 0; i < n; i++) {
//         cin >> processes[i].priority;
//     }

//     priority_queue<Process, vector<Process>, ComparePriority> pq;
//     vector<bool> in_queue(n, false);
//     int time_counter = 0, completed = 0;

//     while (completed < n) {
//         for (int i = 0; i < n; i++) {
//             if (processes[i].arrival_time <= time_counter && processes[i].remaining_time > 0 && !in_queue[i]) {
//                 pq.push(processes[i]);
//                 in_queue[i] = true;
//             }
//         }
//         if (!pq.empty()) {
//             Process current = pq.top();
//             pq.pop();
//             int index = current.id - 1;  // Assume process IDs are 1-based
//             current.remaining_time--;
//             time_counter++;

//             if (current.remaining_time == 0) {
//                 completed++;
//                 current.completion_time = time_counter;
//                 current.turn_around_time = current.completion_time - current.arrival_time;
//                 current.waiting_time = current.turn_around_time - current.burst_time;

//                 processes[index] = current;  // Update the process in the vector
//             } else {
//                 pq.push(current);  // Reinsert with updated remaining time
//             }
//         } else {
//             time_counter++;
//         }
//     }

//     cout << "COMPLETION TIME : \n";
//     for (const auto& process : processes) {
//         cout << process.completion_time << ' ';
//     }
//     cout << "\nTURN_AROUND TIME : \n";
//     for (const auto& process : processes) {
//         cout << process.turn_around_time << ' ';
//     }
//     cout << "\nWAITING TIME : \n";
//     int total_waiting_time = 0;
//     for (const auto& process : processes) {
//         total_waiting_time += process.waiting_time;
//         cout << process.waiting_time << ' ';
//     }
//     cout << "\nAverage waiting time = " << static_cast<double>(total_waiting_time) / n << '\n';
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// struct Process {
//     int id;
//     int arrival_time;
//     int burst_time;
//     int completion_time;
//     int waiting_time;
//     int turn_around_time;
// };

// bool compareArrival(Process p1, Process p2) {
//     return p1.arrival_time < p2.arrival_time;
// }

// int main() {
//     cout << "Enter the number of processes to be executed\n";
//     int n;
//     cin >> n;

//     vector<Process> processes(n);
//     vector<Process> completedProcesses;

//     cout << "Enter the process ID of each program\n";
//     for (int i = 0; i < n; i++) {
//         cin >> processes[i].id;
//     }

//     cout << "Enter the arrival time of each program\n";
//     for (int i = 0; i < n; i++) {
//         cin >> processes[i].arrival_time;
//     }

//     cout << "Enter the burst time of each program\n";
//     for (int i = 0; i < n; i++) {
//         cin >> processes[i].burst_time;
//     }

//     sort(processes.begin(), processes.end(), compareArrival);

//     priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
//     int time_counter = 0;
//     int index = 0;
//     int completed = 0;

//     while (completed < n) {
//         while (index < n && processes[index].arrival_time <= time_counter) {
//             pq.push({processes[index].burst_time, index});
//             index++;
//         }

//         if (!pq.empty()) {
//             int process_index = pq.top().second;
//             pq.pop();

//             Process &current = processes[process_index];
//             current.completion_time = time_counter + current.burst_time;
//             current.turn_around_time = current.completion_time - current.arrival_time;
//             current.waiting_time = current.turn_around_time - current.burst_time;

//             time_counter = current.completion_time;
//             completed++;
//         } else {
//             time_counter++;
//         }
//     }

//     cout << "COMPLETION TIME : \n";
//     for (const auto& p : processes) {
//         cout << p.completion_time << ' ';
//     }
//     cout << "\nTURNAROUND TIME : \n";
//     for (const auto& p : processes) {
//         cout << p.turn_around_time << ' ';
//     }
//     cout << "\nWAITING TIME : \n";
//     int avg_waiting_time = 0;
//     for (const auto& p : processes) {
//         avg_waiting_time += p.waiting_time;
//         cout << p.waiting_time << ' ';
//     }
//     cout << "\nAverage waiting time = " << (double)avg_waiting_time / n << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

struct Process {
    int id;
    int arrival_time;
    int burst_time;
    int priority;
    int completion_time;
    int waiting_time;
    int turn_around_time;
};

struct Compare {
    bool operator()(const Process& p1, const Process& p2) {
        if (p1.burst_time == p2.burst_time) {
            return p1.priority > p2.priority; 
        }
        return p1.burst_time > p2.burst_time; 
    }
};

int main() {
    cout << "Enter the number of processes to be executed\n";
    int n;
    cin >> n;

    vector<Process> processes(n);

    cout << "Enter the process ID of each program\n";
    for (int i = 0; i < n; i++) {
        cin >> processes[i].id;
    }

    cout << "Enter the arrival time of each program\n";
    for (int i = 0; i < n; i++) {
        cin >> processes[i].arrival_time;
    }

    cout << "Enter the burst time of each program\n";
    for (int i = 0; i < n; i++) {
        cin >> processes[i].burst_time;
    }
    
    cout << "Enter the priority of each program\n";
    for (int i = 0; i < n; i++) {
        cin >> processes[i].priority;
    }

    sort(processes.begin(), processes.end(), [](const Process& p1, const Process& p2) {
        return p1.arrival_time < p2.arrival_time;
    });

    priority_queue<Process, vector<Process>, Compare> pq;

    int time_counter = 0;
    int index = 0;
    int completed = 0;

    while (completed < n) {
        // Add all processes that have arrived by the current time
        while (index < n && processes[index].arrival_time <= time_counter) {
            pq.push(processes[index]);
            index++;
        }

        if (!pq.empty()) {
            Process current = pq.top();
            pq.pop();

            current.completion_time = time_counter + current.burst_time;
            current.turn_around_time = current.completion_time - current.arrival_time;
            current.waiting_time = current.turn_around_time - current.burst_time;

            for (int i = 0; i < n; i++) {
                if (processes[i].id == current.id) {
                    processes[i] = current;
                    break;
                }
            }

            time_counter = current.completion_time;
            completed++;
        } else {
            time_counter++;
        }
    }

    cout << "COMPLETION TIME : \n";
    for (const auto& p : processes) {
        cout << p.completion_time << ' ';
    }
    cout << "\nTURNAROUND TIME : \n";
    for (const auto& p : processes) {
        cout << p.turn_around_time << ' ';
    }
    cout << "\nWAITING TIME : \n";
    int avg_waiting_time = 0;
    for (const auto& p : processes) {
        avg_waiting_time += p.waiting_time;
        cout << p.waiting_time << ' ';
    }
    cout << "\nAverage waiting time = " << (double)avg_waiting_time / n << endl;

    return 0;
}

