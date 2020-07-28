#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
	FILE *fp;
	FILE*fd;
	char str[10],con[10],cont[10],ch;
	printf("enter the content in character format to write in files\n");
	scanf("%s",&str);
	fp=fopen("abc.txt","w");
	fprintf(fp,"%s",str);
	fclose(fp);
	fp=fopen("abc.txt","r");
	fscanf(fp,"%s",&con);
	printf("content of file is:%s\n",con);
	strrev(con);
	printf("content of file after reversing :%s",con);
	strrev(con);

	fclose(fp);
	fp=fopen("abc.txt","r");
	fd=fopen("xyz.txt","w");
	ch=fgetc(fp);
	while(ch!=EOF)
	{
		fputc(ch,fd);
		ch=fgetc(fp);
	}
	printf("\nfiles copied successfully\n");

	fclose(fp);
	fclose(fd);
	printf("content of copied file:");
	fd=fopen("xyz.txt","r");
	fscanf(fd,"%s",&cont);
	printf("%s",cont);
	fclose(fd);


	return 0;

}
