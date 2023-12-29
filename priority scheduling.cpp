#include <stdio.h>
int main()
{
int n,total_wt=0,total_tat=0,avg_tat,avg_wt;
printf("Enter the no. of processor you want:- ");
scanf("%d",&n);

int pr[n],at[n-1],bt[n-1],pt[n-1],wt[n-1],tat[n-1],ct[n-1];

//processes
for(int i=0;i<n;i++){
    pr[i]=i;
}

//arrival time
printf("Enter the arrival time of each processes:- ");
for(int a=0;a<n;a++){
scanf("%d",&at[a]);
}

//burst time
printf("Enter the burst time of each processes:- ");
for(int b=0;b<n;b++){
scanf("%d",&bt[b]);
}

//priority
printf("Enter the priority of each processes:- ");
for(int i=0;i<n;i++){
    scanf("%d",&pt[i]);
}

//for sorting
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(pt[i]>pt[j]){
            //priority sorting
            int tempPt=pt[i];
            pt[i]=pt[j];
            pt[j]=tempPt;
            
            //processes sorting
            int tempPr=pr[i];
            pr[i]=pr[j];
            pr[j]=tempPr;
            
            //arrival time sorting
            int tempAt=at[i];
            at[i]=at[j];
            at[j]=tempAt;
            
            //burst time sorting
            int tempBt=bt[i];
            bt[i]=bt[j];
            bt[j]=tempBt;
        }
    }
}
//for completion time
ct[0]=0;
for(int e=0;e<n;e++){
ct[0]=bt[0]+at[0];
ct[e]=bt[e]+ct[e-1];
}

//for turnaround time
for(int d=0;d<n;d++){
tat[d]=ct[d]-at[d];
total_tat=total_tat+tat[d];
}

//for waiting time
for(int c=0;c<n;c++){
wt[c]=tat[c]-bt[c];
total_wt=total_wt+wt[c];
}

printf("\nProcesses\t Arrival Time\t Burst Time\tPriority\t Completion Time\t Waiting Time\tTurnaround Time\n");
for(int i=0;i<n;i++){
printf("P%d\t\t\t%d\t\t%d\t%d\t\t\t%d\t\t\t%d\t\t%d\n",pr[i],at[i],bt[i],pt[i],ct[i],wt[i],tat[i]);
}

avg_tat=total_tat/n;
printf("Average turn around time:-%d ",avg_tat);
avg_wt=total_wt/n;
printf("\nAverage waiting time:-%d ",avg_wt);

return 0;
}
