/* Employee Record System
    Author: Mahim Hossain
    Date: 22/01/2020
*/

#include <stdio.h>

int main() {
    
    char n;
    char option;
    
    int id; 
    int w;
    int p;
    
    printf("Employee Record System \n \n");
    
    printf("Name of Employee: ");
    scanf("%1s", &n);
    
    
    printf("Continue? (Y/N) \n");
    scanf("%1s", &option);
    
    if (option == 'Y') {
        
        printf("Employee ID Number: ");
        scanf("%d", &id);
        
    }
    
    else {
        
        printf("Program shutting down......");
        
    }
    
    printf("Continue? (Y/N) \n");
    scanf("%1s", &option);
    flushall();
    
    if (option == 'Y') {
        
        printf("Log Work Hours: ");
        scanf("%d", &w);
        flushall();
        
        printf("Calculating hourly pay...\n");
        p = w*20;
        printf("This is the employee's pay for the hours they are working: %d", p);
        
    }
    
    else {
        
        printf("Program is shutting down......");
        
    }
        
    
    
    getchar();
    return 0;
    
}
    
    