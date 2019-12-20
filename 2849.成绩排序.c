#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
	char num[12];
	int grade;
};

int compare(const void *a,const void *b);

int main()
{
	int n;
	scanf("%d",&n);
	
	struct student stu[n];
	int i;
	for(i=0;i<n;i++){
		scanf("%s %d",stu[i].num,&stu[i].grade);
	}
	qsort(stu,n,sizeof(struct student),compare);
	for(i=0;i<n;i++){
		if(stu[i].grade>=60){
			printf("%s %d\n",stu[i].num,stu[i].grade);
		}
	}
	
	return 0;
}

int compare(const void *a,const void *b)
{
	struct student sa=*((struct student *)a);
	struct student sb=*((struct student *)b);
	
	if(sa.grade!=sb.grade){
		return sb.grade-sa.grade;
	}else{
		return strcmp(sa.num,sb.num);
	}
}
