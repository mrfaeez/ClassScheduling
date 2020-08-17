// SJF (non-preemptive)
// 1819541

#include<iostream> 
using namespace std; 
  
int main() {

    int proc[4][4] = {{3401, 10, 2, 1}, {1105, 5, 1, 0}, {4101, 8, 3, 2}, {4501, 4, 4, 2}};
    int i,j,pos, temp, wait[4], turn[4], total=0;
    float averageWait, averageTurn;

    //sort burst time
    for(i=0; i<4; i++){
        pos = i;

        for(j=i+1; j<4 ;j++){
            if(proc[j][1] < proc[pos][1])
                pos = j;
        }

        temp = proc[i][1];
        proc[i][1] = proc[pos][1];
        proc[pos][1] = temp;

         temp = proc[i][3];
        proc[i][3] = proc[pos][3];
        proc[pos][3] = temp;
    }

    wait[0] = 0;

    for(i=1; i<4; i++){

        wait[i]=0;
        for(j=0; j<i; j++){
            wait[i] += proc[j][1];
        }

        total+=wait[i];
    }

    averageWait = (float)total/4;
    total = 0;

    cout << "\nCourse Code\t\tBurst Time\t\tWaiting Time\t\tTurnaround Time\n";

    for(i=0; i<4; i++){
        turn[i] = proc[i][1] + wait[i];
        total += turn[i];
        cout << proc[i][0] << "\t\t" << proc[i][1] << "\t\t" << wait[i] << "\t\t" << turn[i] << "\n";
    }

    averageTurn = (float)total/4;
    cout << "\nAverage Waiting Time : " << averageWait;
    cout << "\nAverage Turnaround Time : " << averageTurn;

    return 0;
}