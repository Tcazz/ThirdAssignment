
#include"stdio.h"
#include "string.h"
int main(){
    int score[100],sum=0,average=0,subjects=6;
    int *ptr;
    int age=19;
    ptr=&age;
    char Username[50];
    printf("Enter user name::");
    scanf("%s",&Username);
    if (strcmp(Username,"Chloedu")==0){
        printf("Username is correct!!\n");

    }else{
        printf("Wrong!You've entered the invalid name\n");

    }

    int password=0;

    printf("Enter password ::");
    scanf("%d",&password);
    switch(password){

        case 125436:
                  printf("Correct password!!\n");
                  break;
        default:
                  printf("Wrong!Enter your password again\n");
    }
    printf("welcome Your age =%d\n",*ptr);
    printf("Test your average result in exam\n");
    printf("Enter your score in exam\n(1)Myanmar, (2)English, (3)Maths, (4)Chemistry, (5)Physics, (6)Biology(or)Ecology \n");
    for (int i=0; i<6; i++){


    printf("Enter the scores %d", i+1);
    scanf("%d",&score[i]);

    }
    for (int ii=0; ii<6; ii++){
        sum= sum+score[ii];

    }
    average= sum/subjects;
    printf("Average result(%d)\n",average);


    if (average==70){
        printf("Good!!");
    }else if(average<70){
        printf("Normal!!");

    }else if(average>70){
        printf("Excellent!!");
    }





 return 0;
 }




