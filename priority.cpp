// PRIORITY SCHEDULING
// 1819541

#include<bits/stdc++.h> 
using namespace std; 
  
struct Process 
{ 
    string course;
    int burst;
    int arrival;    
    int priority;
    
}; 
  
// choose process with higher priority
bool compare(Process a, Process b) 
{ 
    return (a.priority > b.priority); 
} 
  
// calculate the waiting time
void WaitTime(Process proc[], int n, int wait[]) 
{ 
    // waiting time for first process is 0 
    wait[0] = 0; 
  
    for (int  i = 1; i < n ; i++ ) 
        wait[i] =  proc[i-1].burst + wait[i-1] ; 
} 
  
// calculate turn around time 
void TurnAroundTime( Process proc[], int n, 
                         int wt[], int tat[]) 
{ 
    
    // turnaround time = burst time + waiting time
    for (int  i = 0; i < n ; i++) 
        tat[i] = proc[i].burst + wt[i]; 
} 
  
//Function to calculate average time 
void findavgTime(Process proc[], int n) 
{ 
    int wt[n], tat[n], total_wt = 0, total_tat = 0; 
  
    //Find waiting time
    WaitTime(proc, n, wt); 
  
    //Find turn around time
    TurnAroundTime(proc, n, wt, tat); 
  
    
    cout << "\nCourse Code  "<< " Priority " << " Burst time  " << " Waiting time  " << " Turn around time\n"; 
  
    // Calculate total waiting time and total turn 
    // around time 
    for (int  i=0; i<n; i++) 
    { 
        total_wt = total_wt + wt[i]; 
        total_tat = total_tat + tat[i]; 
        cout << "   " << proc[i].course << "\t\t" << proc[i].priority << "\t\t" << proc[i].burst << "\t    " << wt[i] << "\t\t  " << tat[i] <<endl; 
    } 
  
    cout << "\nAverage waiting time = " << (float)total_wt / (float)n; 
    cout << "\nAverage turn around time = " << (float)total_tat / (float)n; 
} 
  
void priorityScheduling(Process proc[], int n) 
{ 
    // Sort processes by priority 
    sort(proc, proc + n, compare); 
  
    cout<< "Order in which processes gets executed \n"; 
    for (int  i = 0 ; i <  n; i++) 
        cout << proc[i].course <<" " ; 
  
    findavgTime(proc, n); 
} 
  
// Driver code 
int main() 
{   
    // elements : {course code, burst time, arrival, priority}
    Process proc[] = {{"CSC 3401", 10, 2, 1}, {"CSC 1105", 5, 1, 0}, {"CSC 4101", 8, 3, 2}, {"CSC 4501", 4, 4, 2}}; 
    int size = sizeof proc / sizeof proc[0]; 
    priorityScheduling(proc, size); 
    return 0; 
} 