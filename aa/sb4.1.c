# include <stdio.h>
int main()
{
	char name[5][20];
	char no[5][10];
	int score[5];
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%s%s%d",name[i],no[i],&score[i]);
		
	}
	for(i=0;i<5;i++){
			if (score[i]>=80)
		printf("%s   %s\n",name[i],no[i]);}
	return 0;
	
}