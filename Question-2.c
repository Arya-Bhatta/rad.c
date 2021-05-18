#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	
	char str[255];
	
#ifndef ONLINE_JUDGE
freopen("C:\\Users\\ARYA\\Documents\\code\\input.c", "r", stdin);
freopen("C:\\Users\\ARYA\\Documents\\code\\output.c", "w", stdout);
#endif

	printf("Enter a search string:\n");
	scanf("%s",str);
	FILE *fp;
	int line_num = 1;
	int find_result = 0;
	char temp[512];
	fp=fopen("C:\\Users\\ARYA\\Downloads\\Rustduino-master\\Rustduino-master\\courses.txt","r");
	if(fp  == NULL) {
		return(-1);
	}
	while(fgets(temp, 512, fp) != NULL) {
		if((strstr(temp, str)) != NULL) {
			find_result++;
		}
		line_num++;
	}

	if(find_result == 0) {
		printf("\nSorry, couldn't find a match.\n");
	}
	else
	{
		printf("Results: %d\n",find_result);
	}
	//Close the file if still open.
	if(fp) {
		fclose(fp);
	}
	
}
