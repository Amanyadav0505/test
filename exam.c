#include <stdio.h>
#include<string.h>

struct student{	
	char address[100];
    int roll;
	char name[100];
	int age;
}std;

void studentinfo(struct student std);
int main(){
  struct student std[6];
  // input
  printf(" information for student 1 : ");
  scanf("%s",std[0].address );
  scanf("%d",&std[0].roll);
  scanf("%s",std[0].name);
  scanf("%d",&std[0].roll);
     
      printf(" information for student 2 : ");
    scanf("%s",std[1].address);
    scanf("%d",&std[1].roll);
    scanf("%s",std[1].name);
    scanf("%d",&std[1].age);
    
     printf(" information for student 3 : ");
      scanf("%s",std[2].address);
    scanf("%d",&std[2].roll);
    scanf("%s",std[2].name);
    scanf("%d",&std[2].age);
    
     printf(" information for student 4 : ");
      scanf("%s",std[3].address);
    scanf("%d",&std[3].roll);
    scanf("%s",std[3].name);
    scanf("%d",&std[3].age);
    
     printf(" information for student 5 : ");
      scanf("%s",std[4].address);
    scanf("%d",&std[4].roll);
    scanf("%s",std[4].name);
    scanf("%d",&std[4].age);
    
     printf(" information for student 6 : ");
      scanf("%s",std[5].address);
    scanf("%d",&std[5].roll);
    scanf("%s",std[5].name);
    scanf("%d",&std[5].age);
    
    studentinfo(std[0]);
    studentinfo(std[1]);
    studentinfo(std[2]);
    studentinfo(std[3]);
    studentinfo(std[4]);
    studentinfo(std[5]);
    
    
  
  	 return 0;
}

void studentinfo(struct student std){
	printf(" studend Address  is : %s\n", std.address);
	printf("student Roll no  : %d\n", std.roll);
	printf("student name is : %s\n",std.name);
	printf("student age is : %d\n",std.age );
	
}