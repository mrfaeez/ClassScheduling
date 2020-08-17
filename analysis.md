# Introduction

CPU scheduling is a process which allows one process to use the CPU while other processes are on hold. Choosing an appropiate algorithm, to decide which process should be executed first is important, to get the best execution running time.

In this project, three algorithms will be chosen for comparison and analysis. The algorithms chosen are all non-preemptive (as asked by the question)

1. **First Come First Serve (FCFS) Scheduling**

    FCFS chooses the first process that come in the queue

    
2. **Priority Scheduling**

   Priority scheduling executes process which has high priority among the processes 

3. **Shortest Job First (SJF) Scheduling**
    
    SJF prioritised process with shortest burts time 




# Consideration

Few considerations need to be made, as different algorithms require different requirements, on deciding which should be prioritized.

- FCFS doesnt require anything since it's based on which process come first
- Priority scheduling require the process priority
- SJF require burst time, since it choose process with shortest burst time

*arrival time are included due to the question. it is not used since the algorithms chosen are all non-preemptive

# DATA

| Course Code | Burst Time | Arrival Time | Priority  |
|-------------|------------|--------------|-----------|
| CSC 3401    | 10         | 2            | 1         |
| CSC 1105    | 5          | 1            | 0         |
| CSC 4101    | 8          | 3            | 2         |
| CSC 4501    | 4          | 4            | 2         |

*same data are used to analyze all algorithms

# Analysis

## FCFS

Result after FCFS:

| Course Code | Burst Time | Waiting Time | Turnaround Time |
|-------------|------------|--------------|-----------------|
| CSC 3401    | 10         | 0            | 10              |
| CSC 1105    | 5          | 10           | 15              |
| CSC 4101    | 8          | 15           | 23              |
| CSC 4501    | 4          | 23           | 27              |

**Average waiting time : 12 <br />
**Average turnaround time : 18.75

## Priority Scheduling

Result after Priority Scheduling:

| Course Code | Burst Time | Waiting Time | Priority | Turnaround Time |
|-------------|------------|--------------|----------|-----------------|
| CSC 3401    | 8          | 0            | 2        | 8               |
| CSC 1105    | 4          | 8            | 2        | 12              |
| CSC 4101    | 10         | 12           | 1        | 22              |
| CSC 4501    | 5          | 22           | 0        | 27              |

**Average waiting time : 10.5 <br />
**Average turnaround time : 17.25

## SJF

Result after SJF Scheduling: 

| Course Code | Burst Time | Waiting Time | Turnaround Time |
|-------------|------------|--------------|-----------------|
| CSC 3401    | 4          | 0            | 4               |
| CSC 1105    | 5          | 4            | 9               |
| CSC 4101    | 8          | 9            | 17              |
| CSC 4501    | 10         | 17           | 27              |

**Average waiting time : 7.5 <br />
**Average turnaround time : 14.25

# Conclusion

Based on the averages (waiting and turnaround time) shown by each of the algorithms chosen, **Shortest Job First (SJF)** can be considered as the most effiecient algorithm among those three. This is because the average waiting time and turnaround time are the shortest because it chooses the shortest burst time, resulting each processes have a low waiting time.

# Group Members:

1. Faeez Zimam bin Feizal (1819541)
