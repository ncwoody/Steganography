#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	char cmaj[7];
	cmaj[0] = 'C';
	cmaj[1] = 'D';
	cmaj[2] = 'E';
	cmaj[3] = 'F';
	cmaj[4] = 'G';
	cmaj[5] = 'A';
	cmaj[6] = 'B';
	char start;
	char end;
	int n2;
	int n3;
	int last;
	char note2;
	char note3;
	int first;
	int second;
	
	while (1) // so we can loop through it as many times as possible
	{
		// first we need to get the notes we're going to walk between
		printf("What is the starting note?");
		scanf(" %c", &start);
		printf("What is the ending note?");
		scanf(" %c", &end);
	
		// need the digits we'll be representing
		printf("What is the first binary digit you want to send?");
		scanf("%d", &first);
		printf("What is the second binary digit you want to send?");
		scanf("%d", &second);
	
		printf("A walking pattern you could use is:\n");
	
		// change all to capital letters for ease
		if ( start == 'c' )
			start = 'C';
		if ( start == 'd' )
			start = 'D';
		if ( start == 'e' )
			start = 'E';
		if ( start == 'f' )
			start = 'F';
		if ( start == 'g' )
			start = 'G';
		if ( start == 'a' )
			start = 'A';
		if ( start == 'b' )
			start == 'B';
		if ( end == 'c' )
			end = 'C';
		if ( end == 'd' )
			end = 'D';
		if ( end == 'e' )
			end = 'E';
		if ( end == 'f' )
			end = 'F';
		if ( end == 'g' )
			end = 'G';
		if ( end == 'a' )
			end = 'A';
		if ( end == 'b' )
			end == 'B';
	
		// we start by printing the start note because we have to start on that
		switch(start)
		{
			case 'C' :
				printf("C");
				break;
			case 'D' :
				printf("D");
				break;
			case 'E' :
				printf("E");
				break;
			case 'F' :
				printf("F");
				break;
			case 'G' :
				printf("G");
				break;
			case 'A' :
				printf("A");
				break;
			case 'B' :
				printf("B");
				break;	
		}
	
		// now we pick the next two notes
		srand(time(0));
		n2 = rand() % 7;
		n3 = rand() % 7;
		if ( first == 1 )
		{
			switch(n2)
			{
				case 0:
					note2 = 'C';
					break;
				case 1:
					note2 = 'C';
					break;
				case 2:
					note2 = 'E';
					break;
				case 3:
					note2 = 'E';
					break;
				case 4:
					note2 = 'G';
					break;
				case 5:
					note2 = 'G';
					break;
				case 6:
					note2 = 'C';
					break;
			}
		}
		if ( first == 0 )
		{
			switch(n2)
			{
				case 0:
					note2 = 'D';
					break;
				case 1:
					note2 = 'D';
					break;
				case 2:
					note2 = 'F';
					break;
				case 3:
					note2 = 'F';
					break;
				case 4:
					note2 = 'A';
					break;
				case 5:
					note2 = 'A';
					break;
				case 6:
					note2 = 'B';
					break;
			}
		}
		if ( second == 1 )
		{
			switch(n3)
			{
				case 0:
					note3 = 'C';
					break;
				case 1:
					note3 = 'C';
					break;
				case 2:
					note3 = 'E';
					break;
				case 3:
					note3 = 'E';
					break;
				case 4:
					note3 = 'G';
					break;
				case 5:
					note3 = 'G';
					break;
				case 6:
					note3 = 'C';
					break;
			}
		}
		if ( second == 0 )
		{
			switch(n3)
			{
				case 0:
					note3 = 'D';
					break;
				case 1:
					note3 = 'D';
					break;
				case 2:
					note3 = 'F';
					break;
				case 3:
					note3 = 'F';
					break;
				case 4:
					note3 = 'A';
					break;
				case 5:
					note3 = 'A';
					break;
				case 6:
					note3 = 'B';
					break;
			}
		}
		printf("%c", note2);
		printf("%c", note3);
	
		// now we print the second to last note which is right next to the last note
		if ( end == 'C')
		{
			last = rand() % 2;
			if ( last == 0 )
				printf("B");
			else
				printf("D");
		}
		else if ( end == 'D')
		{
			last = rand() % 2;
			if ( last == 0 )
				printf("C");
			else
				printf("E");
		}
		else if ( end == 'E')
		{
			last = rand() % 2;
			if ( last == 0 )
				printf("D");
			else
				printf("F");
		}
		else if ( end == 'F')
		{
			last = rand() % 2;
			if ( last == 0 )
				printf("E");
			else
				printf("G");
		}
		else if ( end == 'G')
		{
			last = rand() % 2;
			if ( last == 0 )
				printf("F");
			else
				printf("A");
		}
		else if ( end == 'A')
		{
			last = rand() % 2;
			if ( last == 0 )
				printf("G");
			else
				printf("B");
		}
		else if ( end == 'B')
		{
			last = rand() % 2;
			if ( last == 0 )
				printf("A");
			else
				printf("C");
		}
	
		// now we print the last note cause we have to end on it
		switch(end)
		{
			case 'C' :
				printf(" C\n");
				break;
			case 'D' :
				printf(" D\n");
				break;
			case 'E' :
				printf(" E\n");
				break;
			case 'F' :
				printf(" F\n");
				break;
			case 'G' :
				printf(" G\n");
				break;
			case 'A' :
				printf(" A\n");
				break;
			case 'B' :
				printf(" B\n");
				break;	
		}
	
	}
	return 0;
}