#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
	char fname[30];
	int fd = 0;    // file Discripter
	
	printf("Enter the file name that you want to create\n");
	scanf("%s",fname);
	
	fd = creat(fname,0777);
	if(fd==-1)
	{
		printf("Unable to create file\n");
	}
	else
	{
		printf("File is succesfully created with fd : %d\n",fd); 
	}
	
	return 0;
}

// User
// Owner   // 4+2+1
// Group
// Other

// Operations
// Read        4
// Write       2
// Execute     1