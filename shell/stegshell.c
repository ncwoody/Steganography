// Just a shell program I made for fun and to experiment with calling other programs from a program and in having a program be able to modify itself
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <process.h>
#include <unistd.h>

// decided to implement most messages in functions, so that a functionality for multiple inputs for the same output could be acheived
void help();
void alat();
void edit();

int main() {

	char cmd[1024];

	printf("You are now using the Steg Shell.  Type help if you wish to learn the commands you can use\n");

	while (1) // always true loop- will go through a list of if else statements to decide what to do then repeat 
	{
		printf("\nSteg Shell > ");  // the initial prompt
		scanf("%s", cmd);

		if (strncmp(cmd, "exit", 4) == 0) // we want to be able to exit the shell
		{
			return 0;
		} 
		else if (strncmp(cmd, "help", 4) == 0) // to display the help data for the tool, if you don't know what commands do
		{
			help();
		} 
		else if (strncmp(cmd, "alat", 4) == 0) // if the user wants to run the latitude program
		{
			alat();
		}
		else if (strncmp(cmd, "edit", 4) == 0) // if the user wants to edit this shell
		{
			edit();
		}
		else // if the user types a command that is not recognized
		{
			printf("\nInvalid command, please try again (type help if you need help).\n");
		}
	}
}

void help()
{
	printf("\nThis Steg Shell is used to run the various steganography tools created by Noah Woodman\n");
	printf("The commands that you can use in this shell are:\n");
	printf(" - exit:  This is used to exit the shell\n");
	printf(" - alat:  This is used to run the album latitude program\n");
	printf(" - edit:  This is used to add a function to this shell\n");
	printf(" - help:  This is used to display the help text (what is being shown right now)\n");
}

void alat()
{
	//system("../album_latitude/lat.exe"); origional implementation

	//spawnl( P_WAIT, "../album_latitude/lat.exe", "../album_latitude/lat.exe", "Using spawnl", "Arg1", "Arg2", NULL);
	//fails currently :(
	
	char *exec_args[4];
	exec_args[0] = "../album_latitude/lat.exe";
	exec_args[1] = "arg1";
	exec_args[2] = "arg2";
	exec_args[3] = NULL;
	execv("../album_latitude/lat.exe", exec_args);
}

void edit()
{
	FILE *fpr, *fpw;  // variables to store the files
	char c;
	char write[1024];
	char path[1024];
	char func[4];
	int line1 = 12;
	int line2 = 41;
	int line3 = 55;
	int line4 = 74;
	int line5 = 83;
	int temp = 1;
	int count4 = 0;
	int count5 = 0;
	int funclen;
	fpr = fopen("stegshell.c", "r");  // opens the file that we read from
	fpw = fopen("copy.c", "w");
	c = getc(fpr);
	while (c != EOF)
	{
		if (c == '\n')
		{
			temp++;
			//printf("%d\n", temp); Useful for debugging, so will be left in for the time being
		}
		
		if (temp == line1)
		{
			putc('\n', fpw);
			strcpy(write, "void ");
			fwrite(write, 1, 5, fpw);
			printf("What is the abbreviated name of the function to add? (Only 4 letters will be used, though please use all 4 letters) :)");
			scanf("%s", func);
			fwrite(func, 1, 4, fpw);
			strcpy(write, "();");
			fwrite(write, 1, 3, fpw);
			putc('\n', fpw);
			temp++;
		}
		else if (temp == line2)
		{
			putc('\n', fpw);
			putc('\t', fpw);
			putc('\t', fpw);
			strcpy(write, "else if (strncmp(cmd, ");
			fwrite(write, 1, 22, fpw);
			putc('"', fpw);
			fwrite(func, 1, 4, fpw);
			putc('"', fpw);
			strcpy(write, ", 4) == 0)");
			fwrite(write, 1, 10, fpw);
			putc('\n', fpw);
			putc('\t', fpw); // /t is the c language escape sequence for a horizontal tab
			putc('\t', fpw);
			putc('{', fpw);
			putc('\n', fpw);
			putc('\t', fpw);
			putc('\t', fpw);
			putc('\t', fpw);
			fwrite(func, 1, 4, fpw);
			strcpy(write, "();");
			fwrite(write, 1, 3, fpw);
			putc('\n', fpw);
			putc('\t', fpw);
			putc('\t', fpw);
			putc('}', fpw);
			putc('\n', fpw);
			temp++;
		}
		else if (temp == line3)
		{
			putc('\n', fpw);
			putc('\t', fpw);
			strcpy(write, "printf(");
			fwrite(write, 1, 7, fpw);
			putc('"', fpw);
			strcpy(write, " - ");
			fwrite(write, 1, 3, fpw);
			fwrite(func, 1, 4, fpw);
			strcpy(write, "  This is used to run the ");
			fwrite(write, 1, 26, fpw);
			printf("How long is the full name of your function? (please answer with a number, i.e. 5) :)");
			scanf("%d", &funclen);
			printf("What is the full name of your function?");
			scanf("%s", write);
			fwrite(write, 1, funclen, fpw);
			strcpy(write, " program");
			fwrite(write, 1, 8, fpw);
			putc('\\', fpw);  // the escape for a \ so we can put a \n into the code without switching lines
			putc('n', fpw);
			putc('"', fpw);
			strcpy(write, ");");
			fwrite(write, 1, 2, fpw);
			putc('\n', fpw);
			temp++;
		}
		else if (temp == line4 && count4 == 0)
		{
			putc('\n', fpw);
			putc('\n', fpw);
			strcpy(write, "void ");
			fwrite(write, 1, 5, fpw);
			fwrite(func, 1, 4, fpw);
			strcpy(write, "()");
			fwrite(write, 1, 2, fpw);
			putc('\n', fpw);
			putc('{', fpw);
			putc('\n', fpw);
			putc('\t', fpw);
			strcpy(write, "char *exec_args[4];");
			fwrite(write, 1, 19, fpw);
			putc('\n', fpw);
			putc('\t', fpw);
			strcpy(write, "exec_args[0] = ");
			fwrite(write, 1, 15, fpw);
			putc('"', fpw);
			printf("What is the length of the path to your file? (Again, please use numbers) :)");
			scanf("%d", &funclen);
			printf("What is the path to your file?");
			scanf("%s", path);
			fwrite(path, 1, funclen, fpw);
			putc('"', fpw);
			putc(';', fpw);
			putc('\n', fpw);
			putc('\t', fpw);
			strcpy(write, "exec_args[1] = ");
			fwrite(write, 1, 15, fpw);
			putc('"', fpw);
			strcpy(write, "arg1");
			fwrite(write, 1, 4, fpw);
			putc('"', fpw);
			putc(';', fpw);
			putc('\n', fpw);
			putc('\t', fpw);
			strcpy(write, "exec_args[2] = ");
			fwrite(write, 1, 15, fpw);
			putc('"', fpw);
			strcpy(write, "arg2");
			fwrite(write, 1, 4, fpw);
			putc('"', fpw);
			putc(';', fpw);
			putc('\n', fpw);
			putc('\t', fpw);
			strcpy(write, "exec_args[3] = NULL;");
			fwrite(write, 1, 20, fpw);
			putc('\n', fpw);
			putc('\t', fpw);
			strcpy(write, "execv(");
			fwrite(write, 1, 6, fpw);
			putc('"', fpw);
			fwrite(path, 1, funclen, fpw);
			putc('"', fpw);
			strcpy(write, ", exec_args);");
			fwrite(write, 1, 13, fpw);
			putc('\n', fpw);
			putc('}', fpw);
			putc('\n', fpw);
			temp++;
			count4++;
		}
		else if (temp == line5 && count5 == 0)
		{
			line1 = line1 + 1;
			line2 = line2 + 5;
			line3 = line3 + 6;
			line4 = line4 + 16;
			line5 = line5 + 16;
			putc('\n', fpw);
			putc('\t', fpw);
			strcpy(write, "int line1 = ");
			fwrite(write, 1, 12, fpw);
			sprintf(write, "%d", line1);
			fwrite(write, 1, 2, fpw);
			putc(';', fpw);
			putc('\n', fpw);
			putc('\t', fpw);
			strcpy(write, "int line2 = ");
			fwrite(write, 1, 12, fpw);
			sprintf(write, "%d", line2);
			fwrite(write, 1, 2, fpw);
			putc(';', fpw);
			putc('\n', fpw);
			putc('\t', fpw);
			strcpy(write, "int line3 = ");
			fwrite(write, 1, 12, fpw);
			sprintf(write, "%d", line3);
			fwrite(write, 1, 2, fpw);
			putc(';', fpw);
			putc('\n', fpw);
			putc('\t', fpw);
			strcpy(write, "int line4 = ");
			fwrite(write, 1, 12, fpw);
			sprintf(write, "%d", line4);
			fwrite(write, 1, 2, fpw);
			putc(';', fpw);
			putc('\n', fpw);
			putc('\t', fpw);
			strcpy(write, "int line5 = ");
			fwrite(write, 1, 12, fpw);
			sprintf(write, "%d", line5);
			fwrite(write, 1, 2, fpw);
			putc(';', fpw);
			putc('\n', fpw);
			temp = temp + 4; // really, we dont need this anymore, because we aren't looking for anything else
			count5++;
			for ( int i = 0; i < 85; i++ )
			{
				c = getc(fpr);
			}
		}
		else
		{
			putc(c, fpw);
		}
		
		c = getc(fpr);
	}
	
	fclose(fpr);
	fclose(fpw);
	//remove("stegshell.c");
	//rename("copy.c", "stegshell.c"); these will be used to remove the former file and replace it with the new one
	printf("Please exit the shell and recompile it if you want to run the shell with your changes\n");
}
