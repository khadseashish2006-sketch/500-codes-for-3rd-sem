#include<stdio.h>

void main() 
{
    float threshold=80,critical=100,sensor_temp ;
     printf("Enter patient body temp:\n");
     scanf("%f",&sensor_temp);
{
    if (sensor_temp<=threshold)
        {
         printf("Patient condition:NORMAL\n");
        }
     
    else if (sensor_temp >threshold && sensor_temp<critical)
        {
         printf("Patient condition:WARNING\n");
        }

    else
         {
         printf("Patient condition:CRITICAL\n");
         }
    } 

    // This program checks patient body temperature and categorizes the condition.
    
  
