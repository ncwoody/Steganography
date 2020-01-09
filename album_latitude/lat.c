#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_STRING 50

int main()
{
	int ans;
	// these next variables are for storing the latitude and longitude to translate
	int lat1;
	int lat2;
	int lat3;
	int lat4;
	int lat5;
	int lat6;
	int nors;
	int lon1;
	int lon2;
	int lon3;
	int lon4;
	int lon5;
	int lon6;
	int eorw;
	int num;
	int len;
	int x;
	int name;  // used for chosing the album in decoding
	
	char lat1s[50];  // these will be used to help decode
	char lat1a[50];
	char lat2s[50];
	char lat2a[50];
	char lat3s[50];
	char lat3a[50];
	char lat4s[50];
	char lat4a[50];
	char lat5s[50];
	char lat5a[50];
	char lat6s[50];
	char lat6a[50];
	char norsb[50];
	char lon1s[50];
	char lon1a[50];
	char lon2s[50];
	char lon2a[50];
	char lon3s[50];
	char lon3a[50];
	char lon4s[50];
	char lon4a[50];
	char lon5s[50];
	char lon5a[50];
	char lon6s[50];
	char lon6a[50];
	char eorwb[50];
	srand(time(0)); // setting up the time for randomization purposes
	char norsd;
	char eorwd;
	
	// variables used for storing the results for decrypting
	int lat1p;
	int lat2p;
	int lat3p;
	int lat4p;
	int lat5p;
	int lat6p;
	int lon1p;
	int lon2p;
	int lon3p;
	int lon4p;
	int lon5p;
	int lon6p;
	
	// array of strings that will be used to generate answers.  Default will start with 12 albums
	char rising[][MAX_STRING] =
	{
		"Lonesome Day",
		"Into the Fire",
		"Waitin' on a Sunny Day",
		"Nothing Man",
		"Countin' on a Miracle",
		"Empty Sky",
		"Worlds Apart",
		"Let's Be Friends (Skin to Skin)",
		"Further On (Up the Road",
		"The Fuse",
		"Mary's Place",
		"You're Missing",
		"The Rising",
		"Paradise",
		"My City of Ruins"
	};
	int rising_len = 15;
	char wind[][MAX_STRING] =
	{
		"Dirty Life and Times",
		"Disorder in the House",
		"Knockin' on Heaven's Door",
		"Numb as a Statue",
		"She's Too Good For Me",
		"Prison Grove",
		"El Amor de Mi Vida",
		"The Rest of the Night",
		"Please Stay",
		"Rub Me Raw",
		"Keep Me in Your Heart"
	};
	int wind_len = 11;
	char naked[][MAX_STRING] = 
	{
		"The Naked Ride Home",
		"The Night Inside Me",
		"Casino Nation",
		"For Taking the Trouble",
		"Never Stop",
		"Walking Town",
		"About My Imagination",
		"Sergio Leone",
		"Don't You Want To Be There",
		"My Stunning Mystery Companion"
	};
	int naked_len = 10;
	char cohn[][MAX_STRING] = 
	{
		"Walking in Memphis",
		"Ghost Train",
		"Silver Thunderbird",
		"Dig Down Deep",
		"Walk on Water",
		"Miles Away",
		"Saving the Best for Last",
		"Strangers in a Car",
		"29 Ways",
		"Perfect Love",
		"True Companion"
	};
	int cohn_len = 11;
	char jubilee[][MAX_STRING] =
	{
		"Paper in Fire",
		"Down and Out in Paradise",
		"Check it Out",
		"The Real Life",
		"Cherry Bomb",
		"We Are the People",
		"Empty Hands",
		"Hard Times for an Honest Man",
		"Hotdogs and Hamburgers",
		"Rooty Toot Toot"
	};
	int jubilee_len = 10;
	char august[][MAX_STRING] = 
	{
		"Round Here",
		"Omaha",
		"Mr. Jones",
		"Perfect Blue Buildings",
		"Anna Begins",
		"Time and Time Again",
		"Rain King",
		"Sullivan Street",
		"Ghost Train",
		"Raining in Baltimore",
		"A Murder of One"
	};
	int august_len = 11;
	char against[][MAX_STRING] =
	{
		"Horizontal Bop",
		"You'll Accomp'ny Me",
		"Her Strut",
		"No Man's Land",
		"Long Twin Silver Line",
		"Against the Wind",
		"Good for Me",
		"Betty Lou's Getting Out Tonight",
		"Fire Lake",
		"Shinin' Brightly"
	};
	int against_len = 10;
	char four[][MAX_STRING] =
	{
		"Run-Around",
		"Stand",
		"Look Around",
		"Fallible",
		"The Mountains Win Again",
		"Freedom",
		"Crash & Burn",
		"Hook",
		"The Good, the Bad, and the Ugly",
		"Just Wait",
		"Brother John"
	};
	int four_len = 12;
	char audioslave[][MAX_STRING] =
	{
		"Choise",
		"Show Me How to Live",
		"Gasoline",
		"What You Are",
		"Like a Stone",
		"Set It Off",
		"Shadow on the Sun",
		"I Am the Highway",
		"Exploder",
		"Hypnotize",
		"Bring Em Back Alive",
		"Light My Way",
		"Getaway Car",
		"The Last Remaining Light"
	};
	int audioslave_len = 14;
	char social[][MAX_STRING] =
	{
		"So Far Away",
		"Let It Be Me",
		"Story of My Life",
		"Sick Boys",
		"Ring of Fire",
		"Ball & Chain",
		"It Coulda Been Me",
		"She's a Knockout",
		"A Place in My Heart",
		"Drug Train"
	};
	int social_len = 10;
	char life[][MAX_STRING] =
	{
		"She Is",
		"Over My Head(Cable Car)",
		"How to Save a Life",
		"All at Once",
		"Fall Away",
		"Heaven Forbid",
		"Look After You",
		"Hundred",
		"Vienna",
		"Dead Wrong",
		"Little House",
		"Trust Me"
	};
	int life_len = 12;
	char rumors[][MAX_STRING] =
	{
		"I Don't Want to Know",
		"Dreams",
		"Never Going Back Again",
		"Don't Stop",
		"Go Your Own Way",
		"Songbird",
		"The Chain",
		"You Make Loving Fun",
		"Second Hand News",
		"Oh Daddy",
		"Gold Dust Woman"
	};
	int rumors_len = 11;
	char used[12][MAX_STRING] = // this will be used to store the songs that are already used so one is not repeated
	{
		"",
		"",
		"",
		"",
		"",
		"",
		"",
		"",
		"",
		"",
		"",
		""
	};
	
	printf("Do you want to encode or decode?  Press 1 for encode and 2 for decode.\n");
	scanf("%d", &ans);
	
	if ( ans == 1 )
	{
		printf("You chose to encode\n");
		
		// gathering the information needed from the user
		printf("What is the latitude you wish to encode? Enter 1 number at a time.\n");
		printf("First latitude:\n");
		scanf("%d", &lat1);
		printf("Second latitude:\n");
		scanf("%d", &lat2);
		printf("Third latitude:\n");
		scanf("%d", &lat3);
		printf("Fourth latitude:\n");
		scanf("%d", &lat4);
		printf("Fifth latitude:\n");
		scanf("%d", &lat5);
		printf("Sixth latitude:\n");
		scanf("%d", &lat6);
		printf("Is this north or south? Enter 1 for north and 2 for south.\n");
		scanf("%d", &nors);
		printf("What is the longitude you wish to encode? Enter 1 number at a time.\n");
		printf("First longitude:\n");
		scanf("%d", &lon1);
		printf("Second longitude:\n");
		scanf("%d", &lon2);
		printf("Third longitude:\n");
		scanf("%d", &lon3);
		printf("Fourth longitude:\n");
		scanf("%d", &lon4);
		printf("Fifth longitude:\n");
		scanf("%d", &lon5);
		printf("Sixth longitude:\n");
		scanf("%d", &lon6);
		printf("Is this east or west? Enter 1 for east and 2 for west.\n");
		scanf("%d", &eorw);
		
		// now to generate the encoded message
		printf("\n");
		printf("My top 10 favorite songs are:\n");
		num = rand() % 12;
		if ( lat1 == 0 )
		{
			lat1 = 10;
		}
		else if ( lat1 > 0 && lat1 <= 10 )
		{
			lat1 -= 1;
		}
		switch (num) // want to be able for it to chose between 1 and 11 if album has more than 10 songs
		{
			case 0: printf("%s by Bruce Springsteen\n", &rising[lat1]);
				break;
			case 1: printf("%s by Warren Zevon\n", &wind[lat1]);
				break;
			case 2: printf("%s by Jackson Browne\n", &naked[lat1]);
				break;
			case 3: printf("%s by Marc Cohn\n", &cohn[lat1]);
				break;
			case 4: printf("%s by John Mellencamp\n", &jubilee[lat1]);
				break;
			case 5: printf("%s by Counting Crows\n", &august[lat1]);
				break;
			case 6: printf("%s by Bob Seger\n", &against[lat1]);
				break;
			case 7: printf("%s by Blues Traveler\n", &four[lat1]);
				break;
			case 8: printf("%s by Audioslave\n", &audioslave[lat1]);
				break;
			case 9: printf("%s by Social Distortion\n", &social[lat1]);
				break;
			case 10: printf("%s by The Fray\n", &life[lat1]);
				break;
			case 11: printf("%s by Fleetwood Mac\n", &rumors[lat1]);
				break;
		}
		num = rand() % 12;
		if ( lat2 == 0 )
		{
			lat2 = 10;
		}
		else if ( lat2 > 0 && lat2 <= 10 )
		{
			lat2 -= 1;
		}
		switch (num) // want to be able for it to chose between 1 and 11 if album has more than 10 songs
		{
			case 0: printf("%s by Bruce Springsteen\n", &rising[lat2]);
				break;
			case 1: printf("%s by Warren Zevon\n", &wind[lat2]);
				break;
			case 2: printf("%s by Jackson Browne\n", &naked[lat2]);
				break;
			case 3: printf("%s by Marc Cohn\n", &cohn[lat2]);
				break;
			case 4: printf("%s by John Mellencamp\n", &jubilee[lat2]);
				break;
			case 5: printf("%s by Counting Crows\n", &august[lat2]);
				break;
			case 6: printf("%s by Bob Seger\n", &against[lat2]);
				break;
			case 7: printf("%s by Blues Traveler\n", &four[lat2]);
				break;
			case 8: printf("%s by Audioslave\n", &audioslave[lat2]);
				break;
			case 9: printf("%s by Social Distortion\n", &social[lat2]);
				break;
			case 10: printf("%s by The Fray\n", &life[lat2]);
				break;
			case 11: printf("%s by Fleetwood Mac\n", &rumors[lat2]);
				break;
		}
		num = rand() % 12;
		if ( lat3 == 0 )
		{
			lat3 = 10;
		}
		else if ( lat3 > 0 && lat3 <= 10 )
		{
			lat3 -= 1;
		}
		switch (num) // want to be able for it to chose between 1 and 11 if album has more than 10 songs
		{
			case 0: printf("%s by Bruce Springsteen\n", &rising[lat3]);
				break;
			case 1: printf("%s by Warren Zevon\n", &wind[lat3]);
				break;
			case 2: printf("%s by Jackson Browne\n", &naked[lat3]);
				break;
			case 3: printf("%s by Marc Cohn\n", &cohn[lat3]);
				break;
			case 4: printf("%s by John Mellencamp\n", &jubilee[lat3]);
				break;
			case 5: printf("%s by Counting Crows\n", &august[lat3]);
				break;
			case 6: printf("%s by Bob Seger\n", &against[lat3]);
				break;
			case 7: printf("%s by Blues Traveler\n", &four[lat3]);
				break;
			case 8: printf("%s by Audioslave\n", &audioslave[lat3]);
				break;
			case 9: printf("%s by Social Distortion\n", &social[lat3]);
				break;
			case 10: printf("%s by The Fray\n", &life[lat3]);
				break;
			case 11: printf("%s by Fleetwood Mac\n", &rumors[lat3]);
				break;
		}
		num = rand() % 12;
		if ( lat4 == 0 )
		{
			lat4 = 10;
		}
		else if ( lat4 > 0 && lat4 <= 10 )
		{
			lat4 -= 1;
		}
		switch (num) // want to be able for it to chose between 1 and 11 if album has more than 10 songs
		{
			case 0: printf("%s by Bruce Springsteen\n", &rising[lat4]);
				break;
			case 1: printf("%s by Warren Zevon\n", &wind[lat4]);
				break;
			case 2: printf("%s by Jackson Browne\n", &naked[lat4]);
				break;
			case 3: printf("%s by Marc Cohn\n", &cohn[lat4]);
				break;
			case 4: printf("%s by John Mellencamp\n", &jubilee[lat4]);
				break;
			case 5: printf("%s by Counting Crows\n", &august[lat4]);
				break;
			case 6: printf("%s by Bob Seger\n", &against[lat4]);
				break;
			case 7: printf("%s by Blues Traveler\n", &four[lat4]);
				break;
			case 8: printf("%s by Audioslave\n", &audioslave[lat4]);
				break;
			case 9: printf("%s by Social Distortion\n", &social[lat4]);
				break;
			case 10: printf("%s by The Fray\n", &life[lat4]);
				break;
			case 11: printf("%s by Fleetwood Mac\n", &rumors[lat4]);
				break;
		}
		num = rand() % 12;
		if ( lat5 == 0 )
		{
			lat5 = 10;
		}
		else if ( lat5 > 0 && lat5 <= 10 )
		{
			lat5 -= 1;
		}
		switch (num) // want to be able for it to chose between 1 and 11 if album has more than 10 songs
		{
			case 0: printf("%s by Bruce Springsteen\n", &rising[lat5]);
				break;
			case 1: printf("%s by Warren Zevon\n", &wind[lat5]);
				break;
			case 2: printf("%s by Jackson Browne\n", &naked[lat5]);
				break;
			case 3: printf("%s by Marc Cohn\n", &cohn[lat5]);
				break;
			case 4: printf("%s by John Mellencamp\n", &jubilee[lat5]);
				break;
			case 5: printf("%s by Counting Crows\n", &august[lat5]);
				break;
			case 6: printf("%s by Bob Seger\n", &against[lat5]);
				break;
			case 7: printf("%s by Blues Traveler\n", &four[lat5]);
				break;
			case 8: printf("%s by Audioslave\n", &audioslave[lat5]);
				break;
			case 9: printf("%s by Social Distortion\n", &social[lat5]);
				break;
			case 10: printf("%s by The Fray\n", &life[lat5]);
				break;
			case 11: printf("%s by Fleetwood Mac\n", &rumors[lat5]);
				break;
		}
		num = rand() % 12;
		if ( lon1 == 0 )
		{
			lon1 = 10;
		}
		else if ( lon1 > 0 && lon1 <= 10 )
		{
			lon1 -= 1;
		}
		switch (num) // want to be able for it to chose between 1 and 11 if album has more than 10 songs
		{
			case 0: printf("%s by Bruce Springsteen\n", &rising[lon1]);
				break;
			case 1: printf("%s by Warren Zevon\n", &wind[lon1]);
				break;
			case 2: printf("%s by Jackson Browne\n", &naked[lon1]);
				break;
			case 3: printf("%s by Marc Cohn\n", &cohn[lon1]);
				break;
			case 4: printf("%s by John Mellencamp\n", &jubilee[lon1]);
				break;
			case 5: printf("%s by Counting Crows\n", &august[lon1]);
				break;
			case 6: printf("%s by Bob Seger\n", &against[lon1]);
				break;
			case 7: printf("%s by Blues Traveler\n", &four[lon1]);
				break;
			case 8: printf("%s by Audioslave\n", &audioslave[lon1]);
				break;
			case 9: printf("%s by Social Distortion\n", &social[lon1]);
				break;
			case 10: printf("%s by The Fray\n", &life[lon1]);
				break;
			case 11: printf("%s by Fleetwood Mac\n", &rumors[lon1]);
				break;
		}
		num = rand() % 12;
		if ( lon2 == 0 )
		{
			lon2 = 10;
		}
		else if ( lon2 > 0 && lon2 <= 10 )
		{
			lon2 -= 1;
		}
		switch (num) // want to be able for it to chose between 1 and 11 if album has more than 10 songs
		{
			case 0: printf("%s by Bruce Springsteen\n", &rising[lon2]);
				break;
			case 1: printf("%s by Warren Zevon\n", &wind[lon2]);
				break;
			case 2: printf("%s by Jackson Browne\n", &naked[lon2]);
				break;
			case 3: printf("%s by Marc Cohn\n", &cohn[lon2]);
				break;
			case 4: printf("%s by John Mellencamp\n", &jubilee[lon2]);
				break;
			case 5: printf("%s by Counting Crows\n", &august[lon2]);
				break;
			case 6: printf("%s by Bob Seger\n", &against[lon2]);
				break;
			case 7: printf("%s by Blues Traveler\n", &four[lon2]);
				break;
			case 8: printf("%s by Audioslave\n", &audioslave[lon2]);
				break;
			case 9: printf("%s by Social Distorion\n", &social[lon2]);
				break;
			case 10: printf("%s by The Fray\n", &life[lon2]);
				break;
			case 11: printf("%s by Fleetwood Mac\n", &rumors[lon2]);
				break;
		}
		num = rand() % 12;
		if ( lon3 == 0 )
		{
			lon3 = 10;
		}
		else if ( lon3 > 0 && lon3 <= 10 )
		{
			lon3 -= 1;
		}
		switch (num) // want to be able for it to chose between 1 and 11 if album has more than 10 songs
		{
			case 0: printf("%s by Bruce Springsteen\n", &rising[lon3]);
				break;
			case 1: printf("%s by Warren Zevon\n", &wind[lon3]);
				break;
			case 2: printf("%s by Jackson Browne\n", &naked[lon3]);
				break;
			case 3: printf("%s by Marc Cohn\n", &cohn[lon3]);
				break;
			case 4: printf("%s by John Mellencamp\n", &jubilee[lon3]);
				break;
			case 5: printf("%s by Counting Crows\n", &august[lon3]);
				break;
			case 6: printf("%s by Bob Seger\n", &against[lon3]);
				break;
			case 7: printf("%s by Blues Traveler\n", &four[lon3]);
				break;
			case 8: printf("%s by Audioslave\n", &audioslave[lon3]);
				break;
			case 9: printf("%s by Social Distortion\n", &social[lon3]);
				break;
			case 10: printf("%s by The Fray\n", &life[lon3]);
				break;
			case 11: printf("%s by Fleetwood Mac\n", &rumors[lon3]);
				break;
		}
		num = rand() % 12;
		if ( lon4 == 0 )
		{
			lon4 = 10;
		}
		else if ( lon4 > 0 && lon4 <= 10 )
		{
			lon4 -= 1;
		}
		switch (num) // want to be able for it to chose between 1 and 11 if album has more than 10 songs
		{
			case 0: printf("%s by Bruce Springsteen\n", &rising[lon4]);
				break;
			case 1: printf("%s by Warren Zevon\n", &wind[lon4]);
				break;
			case 2: printf("%s by Jackson Browne\n", &naked[lon4]);
				break;
			case 3: printf("%s by Marc Cohn\n", &cohn[lon4]);
				break;
			case 4: printf("%s by John Mellencamp\n", &jubilee[lon4]);
				break;
			case 5: printf("%s by Counting Crows\n", &august[lon4]);
				break;
			case 6: printf("%s by Bob Seger\n", &against[lon4]);
				break;
			case 7: printf("%s by Blues Traveler\n", &four[lon4]);
				break;
			case 8: printf("%s by Audioslave\n", &audioslave[lon4]);
				break;
			case 9: printf("%s by Social Distortion\n", &social[lon4]);
				break;
			case 10: printf("%s by The Fray\n", &life[lon4]);
				break;
			case 11: printf("%s by Fleetwood Mac\n", &rumors[lon4]);
				break;
		}
		num = rand() % 12;
		if ( lon5 == 0 )
		{
			lon5 = 10;
		}
		else if ( lon5 > 0 && lon5 <= 10 )
		{
			lon5 -= 1;
		}
		switch (num) // want to be able for it to chose between 1 and 11 if album has more than 10 songs
		{
			case 0: printf("%s by Bruce Springsteen\n", &rising[lon5]);
				break;
			case 1: printf("%s by Warren Zevon\n", &wind[lon5]);
				break;
			case 2: printf("%s by Jackson Browne\n", &naked[lon5]);
				break;
			case 3: printf("%s by Marc Cohn\n", &cohn[lon5]);
				break;
			case 4: printf("%s by John Mellencamp\n", &jubilee[lon5]);
				break;
			case 5: printf("%s by Counting Crows\n", &august[lon5]);
				break;
			case 6: printf("%s by Bob Seger\n", &against[lon5]);
				break;
			case 7: printf("%s by Blues Traveler\n", &four[lon5]);
				break;
			case 8: printf("%s by Audioslave\n", &audioslave[lon5]);
				break;
			case 9: printf("%s by Social Distortion\n", &social[lon5]);
				break;
			case 10: printf("%s by The Fray\n", &life[lon5]);
				break;
			case 11: printf("%s by Fleetwood Mac\n", &rumors[lon5]);
				break;
		}
		printf("My honorable mentions are:\n");
		num = rand() % 12;
		if ( lat6 == 0 )
		{
			lat6 = 10;
		}
		else if ( lat6 > 0 && lat6 <= 10 )
		{
			lat6 -= 1;
		}
		switch (num) // want to be able for it to chose between 1 and 11 if album has more than 10 songs
		{
			case 0: printf("%s by Bruce Springsteen\n", &rising[lat6]);
				break;
			case 1: printf("%s by Warren Zevon\n", &wind[lat6]);
				break;
			case 2: printf("%s by Jackson Browne\n", &naked[lat6]);
				break;
			case 3: printf("%s by Marc Cohn\n", &cohn[lat6]);
				break;
			case 4: printf("%s by John Mellencamp\n", &jubilee[lat6]);
				break;
			case 5: printf("%s by Counting Crows\n", &august[lat6]);
				break;
			case 6: printf("%s by Bob Seger\n", &against[lat6]);
				break;
			case 7: printf("%s by Blues Traveler\n", &four[lat6]);
				break;
			case 8: printf("%s by Audioslave\n", &audioslave[lat6]);
				break;
			case 9: printf("%s by Social Distortion\n", &social[lat6]);
				break;
			case 10: printf("%s by The Fray\n", &life[lat6]);
				break;
			case 11: printf("%s by Fleetwood Mac\n", &rumors[lat6]);
				break;
		}
		num = rand() % 12;
		if ( lon6 == 0 )
		{
			lon6 = 10;
		}
		else if ( lon6 > 0 && lon6 <= 10 )
		{
			lon6 -= 1;
		}
		switch (num) // want to be able for it to chose between 1 and 11 if album has more than 10 songs
		{
			case 0: printf("%s by Bruce Springsteen\n", &rising[lon6]);
				break;
			case 1: printf("%s by Warren Zevon\n", &wind[lon6]);
				break;
			case 2: printf("%s by Jackson Browne\n", &naked[lon6]);
				break;
			case 3: printf("%s by Marc Cohn\n", &cohn[lon6]);
				break;
			case 4: printf("%s by John Mellencamp\n", &jubilee[lon6]);
				break;
			case 5: printf("%s by Counting Crows\n", &august[lon6]);
				break;
			case 6: printf("%s by Bob Seger\n", &against[lon6]);
				break;
			case 7: printf("%s by Blues Traveler\n", &four[lon6]);
				break;
			case 8: printf("%s by Audioslave\n", &audioslave[lon6]);
				break;
			case 9: printf("%s by Social Distortion\n", &social[lon6]);
				break;
			case 10: printf("%s by The Fray\n", &life[lon6]);
				break;
			case 11: printf("%s by Fleetwood Mac\n", &rumors[lon6]);
				break;
		}
		// now to print what makes n/s or e/w
		printf("My favorite album of all time is:\n");
		if (nors == 1)
		{
			len = 0;
			while (len % 2 == 0)
			{
				num == rand() % 12;
				switch (num)
				{
					case 0: len = rising_len;
						break;
					case 1: len = wind_len;
						break;
					case 2:  len = naked_len;
						break;
					case 3: len = cohn_len;
						break;
					case 4: len = jubilee_len;
						break;
					case 5: len = august_len;
						break;
					case 6: len = against_len;
						break;
					case 7: len = four_len;
						break;
					case 8: len = audioslave_len;
						break;
					case 9: len = social_len;
						break;
					case 10: len = life_len;
						break;
					case 11: len = rumors_len;
						break;
				}
			}
			switch (num)
			{
				case 0: printf("The Rising by Bruce Springsteen\n");
					break;
				case 1: printf("The Wind by Warren Zevon\n");
					break;
				case 2:  printf("The Naked Ride Home by Jackson Browne\n");
					break;
				case 3: printf("Marc Cohn by Marc Cohn\n");
					break;
				case 4: printf("The Lonesome Jubilee by John Mellencamp\n");
					break;
				case 5: printf("August and Everything After by Counting Crows\n");
					break;
				case 6: printf("Against the Wind by Bob Seger\n");
					break;
				case 7: printf("Four by Blues Traveler\n");
					break;
				case 8: printf("Audioslave by Audioslave\n");
					break;
				case 9: printf("Social Distortion by Social Distortion\n");
					break;
				case 10: printf("How to Save a Life by The Fray\n");
					break;
				case 11: printf("Rumors by Fleetwood Mac\n");
					break;
			}
		}
		else if (nors == 2)
		{
			len = 1;
			while (len % 2 == 1)
			{
				num == rand() % 12;
				switch (num)
				{
					case 0: len = rising_len;
						break;
					case 1: len = wind_len;
						break;
					case 2:  len = naked_len;
						break;
					case 3: len = cohn_len;
						break;
					case 4: len = jubilee_len;
						break;
					case 5: len = august_len;
						break;
					case 6: len = against_len;
						break;
					case 7: len = four_len;
						break;
					case 8: len = audioslave_len;
						break;
					case 9: len = social_len;
						break;
					case 10: len = life_len;
						break;
					case 11: len = rumors_len;
						break;
				}
			}
			switch (num)
			{
				case 0: printf("The Rising by Bruce Springsteen\n");
					break;
				case 1: printf("The Wind by Warren Zevon\n");
					break;
				case 2:  printf("The Naked Ride Home by Jackson Browne\n");
					break;
				case 3: printf("Marc Cohn by Marc Cohn\n");
					break;
				case 4: printf("The Lonesome Jubilee by John Mellencamp\n");
					break;
				case 5: printf("August and Everything After by Counting Crows\n");
					break;
				case 6: printf("Against the Wind by Bob Seger\n");
					break;
				case 7: printf("Four by Blues Traveler\n");
					break;
				case 8: printf("Audioslave by Audioslave\n");
					break;
				case 9: printf("Social Distortion by Social Distortion\n");
					break;
				case 10: printf("How to Save a Life by The Fray\n");
					break;
				case 11: printf("Rumors by Fleetwood Mac\n");
					break;
			}
		}
		printf("My honorable mention for favortite album is:\n");
		if (eorw == 1)
		{
			len = 0;
			while (len % 2 == 0)
			{
				num == rand() % 12;
				switch (num)
				{
					case 0: len = rising_len;
						break;
					case 1: len = wind_len;
						break;
					case 2:  len = naked_len;
						break;
					case 3: len = cohn_len;
						break;
					case 4: len = jubilee_len;
						break;
					case 5: len = august_len;
						break;
					case 6: len = against_len;
						break;
					case 7: len = four_len;
						break;
					case 8: len = audioslave_len;
						break;
					case 9: len = social_len;
						break;
					case 10: len = life_len;
						break;
					case 11: len = rumors_len;
						break;
				}
			}
			switch (num)
			{
				case 0: printf("The Rising by Bruce Springsteen\n");
					break;
				case 1: printf("The Wind by Warren Zevon\n");
					break;
				case 2:  printf("The Naked Ride Home by Jackson Browne\n");
					break;
				case 3: printf("Marc Cohn by Marc Cohn\n");
					break;
				case 4: printf("The Lonesome Jubilee by John Mellencamp\n");
					break;
				case 5: printf("August and Everything After by Counting Crows\n");
					break;
				case 6: printf("Against the Wind by Bob Seger\n");
					break;
				case 7: printf("Four by Blues Traveler\n");
					break;
				case 8: printf("Audioslave by Audioslave\n");
					break;
				case 9: printf("Social Distortion by Social Distortion\n");
					break;
				case 10: printf("How to Save a Life by The Fray\n");
					break;
				case 11: printf("Rumors by Fleetwood Mac\n");
					break;
			}
		}
		else if (eorw == 2)
		{
			len = 1;
			while (len % 2 == 1)
			{
				num == rand() % 12;
				switch (num)
				{
					case 0: len = rising_len;
						break;
					case 1: len = wind_len;
						break;
					case 2:  len = naked_len;
						break;
					case 3: len = cohn_len;
						break;
					case 4: len = jubilee_len;
						break;
					case 5: len = august_len;
						break;
					case 6: len = against_len;
						break;
					case 7: len = four_len;
						break;
					case 8: len = audioslave_len;
						break;
					case 9: len = social_len;
						break;
					case 10: len = life_len;
						break;
					case 11: len = rumors_len;
						break;
				}
			}
			switch (num)
			{
				case 0: printf("The Rising by Bruce Springsteen\n");
					break;
				case 1: printf("The Wind by Warren Zevon\n");
					break;
				case 2:  printf("The Naked Ride Home by Jackson Browne\n");
					break;
				case 3: printf("Marc Cohn by Marc Cohn\n");
					break;
				case 4: printf("The Lonesome Jubilee by John Mellencamp\n");
					break;
				case 5: printf("August and Everything After by Counting Crows\n");
					break;
				case 6: printf("Against the Wind by Bob Seger\n");
					break;
				case 7: printf("Four by Blues Traveler\n");
					break;
				case 8: printf("Audioslave by Audioslave\n");
					break;
				case 9: printf("Social Distortion by Social Distortion\n");
					break;
				case 10: printf("How to Save a Life by The Fray\n");
					break;
				case 11: printf("Rumors by Fleetwood Mac\n");
					break;
			}
		}
	}	
	else if ( ans == 2 )
	{
		printf("You chose to decode\n");
		printf("Answer the questions with what was exactly written in the message you recieved.\n");
		printf("What was the name of the band the first song was by?\n");
		scanf("%s", lat1a);
		if (strncmp(lat1a, "Bruce Springsteen", 50))
		{
			name = 0;
		}
		else if (strncmp(lat1a, "Warren Zevon", 50))
		{
			name = 1;
		}
		else if (strncmp(lat1a, "Jackson Browne", 50))
		{
			name = 2;
		}
		else if (strncmp(lat1a, "Marc Cohn", 50))
		{
			name = 3;
		}
		else if (strncmp(lat1a, "John Mellencamp", 50))
		{
			name = 4;
		}
		else if (strncmp(lat1a, "Counting Crows", 50))
		{
			name = 5;
		}
		else if (strncmp(lat1a, "Bob Seger", 50))
		{
			name = 6;
		}
		else if (strncmp(lat1a, "Blues Traveler", 50))
		{
			name = 7;
		}
		else if (strncmp(lat1a, "Audioslave", 50))
		{
			name = 8;
		}
		else if (strncmp(lat1a, "Social Distortion", 50))
		{
			name = 9;
		}
		else if (strncmp(lat1a, "The Fray", 50))
		{
			name = 10;
		}
		else if (strncmp(lat1a, "Fleetwood Mac", 50))
		{
			name = 11;
		}
		printf("What was the name of the first song?\n");
		scanf("%s", lat1s);
		if (name = 0)
		{
			if (strncmp(lat1s, "Lonesome Day", 50))
			{
				lat1p = 1;
			}
			else if (strncmp(lat1s, "Into the Fire", 50))
			{
				lat1p = 2;
			}
			else if (strncmp(lat1s, "Waitin' on a Sunny Day", 50))
			{
				lat1p = 3;
			}
			else if (strncmp(lat1s, "Nothing Man", 50))
			{
				lat1p = 4;
			}
			else if (strncmp(lat1s, "Countin' on a Miracle", 50))
			{
				lat1p = 5;
			}
			else if (strncmp(lat1s, "Empty Sky", 50))
			{
				lat1p = 6;
			}
			else if (strncmp(lat1s, "Worlds Apart", 50))
			{
				lat1p = 7;
			}
			else if (strncmp(lat1s, "Let's Be Friends (Skin to Skin)", 50))
			{
				lat1p = 8;
			}
			else if (strncmp(lat1s, "Further On (Up the Road)", 50))
			{
				lat1p = 9;
			}
			else if (strncmp(lat1s, "The Fuse", 50))
			{
				lat1p = 0;
			}
			else if (strncmp(lat1s, "Mary's Place", 50))
			{
				lat1p = 1;
			}
			else if (strncmp(lat1s, "You're Missing", 50))
			{
				lat1p = 2;
			}
			else if (strncmp(lat1s, "The Rising", 50))
			{
				lat1p = 3;
			}
			else if (strncmp(lat1s, "Paradise", 50))
			{
				lat1p = 4;
			}
			else if (strncmp(lat1s, "My City of Ruins", 50))
			{
				lat1p = 5;
			}
		}
		else if (name == 1)
		{
			if (strncmp(lat1s, "Dirty Life and Times", 50))
			{
				lat1p = 1;
			}
			else if (strncmp(lat1s, "Disorder in the House", 50))
			{
				lat1p = 2;
			}
			else if (strncmp(lat1s, "Knockin' on Heaven's Door", 50))
			{
				lat1p = 3;
			}
			else if (strncmp(lat1s, "Numb as a Statue", 50))
			{
				lat1p = 4;
			}
			else if (strncmp(lat1s, "She's Too Good For Me", 50))
			{
				lat1p = 5;
			}
			else if (strncmp(lat1s, "Prison Grove", 50))
			{
				lat1p = 6;
			}
			else if (strncmp(lat1s, "El Amor de Mi Vida", 50))
			{
				lat1p = 7;
			}
			else if (strncmp(lat1s, "The Rest of the Night", 50))
			{
				lat1p = 8;
			}
			else if (strncmp(lat1s, "Please Stay", 50))
			{
				lat1p = 9;
			}
			else if (strncmp(lat1s, "Rub Me Raw", 50))
			{
				lat1p = 0;
			}
			else if (strncmp(lat1s, "Keep Me in Your Heart", 50))
			{
				lat1p = 1;
			}
		}
		else if (name == 2)
		{
			if (strncmp(lat1s, "The Naked Ride Home", 50))
			{
				lat1p = 1;
			}
			else if (strncmp(lat1s, "The Night Inside Me", 50))
			{
				lat1p = 2;
			}
			else if (strncmp(lat1s, "Casino Nation", 50))
			{
				lat1p = 3;
			}
			else if (strncmp(lat1s, "For Taking the Trouble", 50))
			{
				lat1p = 4;
			}
			else if (strncmp(lat1s, "Never Stop", 50))
			{
				lat1p = 5;
			}
			else if (strncmp(lat1s, "Walking Town", 50))
			{
				lat1p = 6;
			}
			else if (strncmp(lat1s, "About My Imagination", 50))
			{
				lat1p = 7;
			}
			else if (strncmp(lat1s, "Sergio Leone", 50))
			{
				lat1p = 8;
			}
			else if (strncmp(lat1s, "Don't You Want to Be There", 50))
			{
				lat1p = 9;
			}
			else if (strncmp(lat1s, "My Stunning Mystery Companion", 50))
			{
				lat1p = 0;
			}
		}
		else if (name == 3)
		{
			if (strncmp(lat1s, "Walking in Memphis", 50))
			{
				lat1p = 1;
			}
			else if (strncmp(lat1s, "Ghost Train", 50))
			{
				lat1p = 2;
			}
			else if (strncmp(lat1s, "Silver Thunderbird", 50))
			{
				lat1p = 3;
			}
			else if (strncmp(lat1s, "Dig Down Deep", 50))
			{
				lat1p = 4;
			}
			else if (strncmp(lat1s, "Walk on Water", 50))
			{
				lat1p = 5;
			}
			else if (strncmp(lat1s, "Miles Away", 50))
			{
				lat1p = 6;
			}
			else if (strncmp(lat1s, "Saving the Best for Last", 50))
			{
				lat1p = 7;
			}
			else if (strncmp(lat1s, "Strangers in a Car", 50))
			{
				lat1p = 8;
			}
			else if (strncmp(lat1s, "29 Ways", 50))
			{
				lat1p = 9;
			}
			else if (strncmp(lat1s, "Perfect Love", 50))
			{
				lat1p = 0;
			}
			else if (strncmp(lat1s, "True Companion", 50))
			{
				lat1p = 1;
			}
		}
		else if (name == 4)
		{
			if (strncmp(lat1s, "Paper in Fire", 50))
			{
				lat1p = 1;
			}
			else if (strncmp(lat1s, "Down and Out in Paradise", 50))
			{
				lat1p = 2;
			}
			else if (strncmp(lat1s, "Check it Out", 50))
			{
				lat1p = 3;
			}
			else if (strncmp(lat1s, "The Real Life", 50))
			{
				lat1p = 4;
			}
			else if (strncmp(lat1s, "Cherry Bomb", 50))
			{
				lat1p = 5;
			}
			else if (strncmp(lat1s, "We Are the People", 50))
			{
				lat1p = 6;
			}
			else if (strncmp(lat1s, "Empty Hands", 50))
			{
				lat1p = 7;
			}
			else if (strncmp(lat1s, "Hard Times for an Honest Man", 50))
			{
				lat1p = 8;
			}
			else if (strncmp(lat1s, "Hotdogs and Hamburgers", 50))
			{
				lat1p = 9;
			}
			else if (strncmp(lat1s, "Rooty Toot Toot", 50))
			{
				lat1p = 0;
			}
		}
		else if (name == 5)
		{
			if (strncmp(lat1s, "Round Here", 50))
			{
				lat1p = 1;
			}
			else if (strncmp(lat1s, "Omaha", 50))
			{
				lat1p = 2;
			}
			else if (strncmp(lat1s, "Mr. Jones", 50))
			{
				lat1p = 3;
			}
			else if (strncmp(lat1s, "Perfect Blue Buildings", 50))
			{
				lat1p = 4;
			}
			else if (strncmp(lat1s, "Anna Begins", 50))
			{
				lat1p = 5;
			}
			else if (strncmp(lat1s, "Time and Time Again", 50))
			{
				lat1p = 6;
			}
			else if (strncmp(lat1s, "Rain King", 50))
			{
				lat1p = 7;
			}
			else if (strncmp(lat1s, "Sullivan Street", 50))
			{
				lat1p = 8;
			}
			else if (strncmp(lat1s, "Ghost Train", 50))
			{
				lat1p = 9;
			}
			else if (strncmp(lat1s, "Raining in Baltimore", 50))
			{
				lat1p = 0;
			}
			else if (strncmp(lat1s, "A Murder of One", 50))
			{
				lat1p = 1;
			}
		}
		else if (name == 6)
		{
			if (strncmp(lat1s, "The Horizontal Bop", 50))
			{
				lat1p = 1;
			}
			else if (strncmp(lat1s, "You'll Accomp'ny Me", 50))
			{
				lat1p = 2;
			}
			else if (strncmp(lat1s, "Her Strut", 50))
			{
				lat1p = 3;
			}
			else if (strncmp(lat1s, "No Man's Land", 50))
			{
				lat1p = 4;
			}
			else if (strncmp(lat1s, "Long Twin Silver Line", 50))
			{
				lat1p = 5;
			}
			else if (strncmp(lat1s, "Against the Wind", 50))
			{
				lat1p = 6;
			}
			else if (strncmp(lat1s, "Good for Me", 50))
			{
				lat1p = 7;
			}
			else if (strncmp(lat1s, "Betty Lou's Gettin' Out Tonight", 50))
			{
				lat1p = 8;
			}
			else if (strncmp(lat1s, "Fire Lake", 50))
			{
				lat1p = 9;
			}
			else if (strncmp(lat1s, "Shinin' Brightly", 50))
			{
				lat1p = 0;
			}
		}
		else if (name == 7)
		{
			if (strncmp(lat1s, "Run-Around", 50))
			{
				lat1p = 1;
			}
			else if (strncmp(lat1s, "Stand", 50))
			{
				lat1p = 2;
			}
			else if (strncmp(lat1s, "Look Around", 50))
			{
				lat1p = 3;
			}
			else if (strncmp(lat1s, "Fallible", 50))
			{
				lat1p = 4;
			}
			else if (strncmp(lat1s, "The Mountains Win Again", 50))
			{
				lat1p = 5;
			}
			else if (strncmp(lat1s, "Freedom", 50))
			{
				lat1p = 6;
			}
			else if (strncmp(lat1s, "Crash Burn", 50))
			{
				lat1p = 7;
			}
			else if (strncmp(lat1s, "Price to Pay", 50))
			{
				lat1p = 8;
			}
			else if (strncmp(lat1s, "Hook", 50))
			{
				lat1p = 9;
			}
			else if (strncmp(lat1s, "The Good, the Bad, and the Ugly", 50))
			{
				lat1p = 0;
			}
			else if (strncmp(lat1s, "Just Wait", 50))
			{
				lat1p = 1;
			}
			else if (strncmp(lat1s, "Brother John", 50))
			{
				lat1p = 2;
			}
		}
		else if (name == 8)
		{
			if (strncmp(lat1s, "Cochise", 50))
			{
				lat1p = 1;
			}
			else if (strncmp(lat1s, "Show Me How to Live", 50))
			{
				lat1p = 2;
			}
			else if (strncmp(lat1s, "Gasoline", 50))
			{
				lat1p = 3;
			}
			else if (strncmp(lat1s, "What You Are", 50))
			{
				lat1p = 4;
			}
			else if (strncmp(lat1s, "Like a Stone", 50))
			{
				lat1p = 5;
			}
			else if (strncmp(lat1s, "Set It Off", 50))
			{
				lat1p = 6;
			}
			else if (strncmp(lat1s, "Shadow on the Sun", 50))
			{
				lat1p = 7;
			}
			else if (strncmp(lat1s, "I Am the Highway", 50))
			{
				lat1p = 8;
			}
			else if (strncmp(lat1s, "Exploder", 50))
			{
				lat1p = 9;
			}
			else if (strncmp(lat1s, "Hypnotize", 50))
			{
				lat1p = 0;
			}
			else if (strncmp(lat1s, "Bring Em Back Alive", 50))
			{
				lat1p = 1;
			}
			else if (strncmp(lat1s, "Light My Way", 50))
			{
				lat1p = 2;
			}
			else if (strncmp(lat1s, "Getaway Car", 50))
			{
				lat1p = 3;
			}
			else if (strncmp(lat1s, "The Last Remaining Light", 50))
			{
				lat1p = 4;
			}
		}
		else if (name == 9)
		{
			if (strncmp(lat1s, "So Far Away", 50))
			{
				lat1p = 1;
			}
			else if (strncmp(lat1s, "Let It Be Me", 50))
			{
				lat1p = 2;
			}
			else if (strncmp(lat1s, "Story of My Life", 50))
			{
				lat1p = 3;
			}
			else if (strncmp(lat1s, "Sick Boys", 50))
			{
				lat1p = 4;
			}
			else if (strncmp(lat1s, "Ring of Fire", 50))
			{
				lat1p = 5;
			}
			else if (strncmp(lat1s, "Ball and Chain", 50))
			{
				lat1p = 6;
			}
			else if (strncmp(lat1s, "It Coulda Been Me", 50))
			{
				lat1p = 7;
			}
			else if (strncmp(lat1s, "She's a Knockout", 50))
			{
				lat1p = 8;
			}
			else if (strncmp(lat1s, "A Place in My Heart", 50))
			{
				lat1p = 9;
			}
			else if (strncmp(lat1s, "Drug Train", 50))
			{
				lat1p = 0;
			}
		}
		else if (name == 10)
		{
			if (strncmp(lat1s, "She Is", 50))
			{
				lat1p = 1;
			}
			else if (strncmp(lat1s, "Over My Head (Cable Car)", 50))
			{
				lat1p = 2;
			}
			else if (strncmp(lat1s, "How to Save a Life", 50))
			{
				lat1p = 3;
			}
			else if (strncmp(lat1s, "All at Once", 50))
			{
				lat1p = 4;
			}
			else if (strncmp(lat1s, "Fall Away", 50))
			{
				lat1p = 5;
			}
			else if (strncmp(lat1s, "Heaven Forbid", 50))
			{
				lat1p = 6;
			}
			else if (strncmp(lat1s, "Look After You", 50))
			{
				lat1p = 7;
			}
			else if (strncmp(lat1s, "Hundred", 50))
			{
				lat1p = 8;
			}
			else if (strncmp(lat1s, "Vienna", 50))
			{
				lat1p = 9;
			}
			else if (strncmp(lat1s, "Dead Wrong", 50))
			{
				lat1p = 0;
			}
			else if (strncmp(lat1s, "Little House", 50))
			{
				lat1p = 1;
			}
			else if (strncmp(lat1s, "Trust Me", 50))
			{
				lat1p = 2;
			}
		}
		else if (name == 11)
		{
			if (strncmp(lat1s, "Second Hand News", 50))
			{
				lat1p = 1;
			}
			else if (strncmp(lat1s, "Dreams", 50))
			{
				lat1p = 2;
			}
			else if (strncmp(lat1s, "Never Going Back Again", 50))
			{
				lat1p = 3;
			}
			else if (strncmp(lat1s, "Don't Stop", 50))
			{
				lat1p = 4;
			}
			else if (strncmp(lat1s, "Go Your Own Way", 50))
			{
				lat1p = 5;
			}
			else if (strncmp(lat1s, "Songbird", 50))
			{
				lat1p = 6;
			}
			else if (strncmp(lat1s, "The Chain", 50))
			{
				lat1p = 7;
			}
			else if (strncmp(lat1s, "You Make Loving Fun", 50))
			{
				lat1p = 8;
			}
			else if (strncmp(lat1s, "I Don't Want to Know", 50))
			{
				lat1p = 9;
			}
			else if (strncmp(lat1s, "Oh Daddy", 50))
			{
				lat1p = 0;
			}
			else if (strncmp(lat1s, "Gold Dust Woman", 50))
			{
				lat1p = 1;
			}
		}
		printf("What was the name of the band the second song was by?\n");
		scanf("%s", lat2a);
		if (strncmp(lat2a, "Bruce Springsteen", 50))
		{
			name = 0;
		}
		else if (strncmp(lat2, "Warren Zevon", 50))
		{
			name = 1;
		}
		else if (strncmp(lat2a, "Jackson Browne", 50))
		{
			name = 2;
		}
		else if (strncmp(lat2a, "Marc Cohn", 50))
		{
			name = 3;
		}
		else if (strncmp(lat2a, "John Mellencamp", 50))
		{
			name = 4;
		}
		else if (strncmp(lat2a, "Counting Crows", 50))
		{
			name = 5;
		}
		else if (strncmp(lat2a, "Bob Seger", 50))
		{
			name = 6;
		}
		else if (strncmp(lat2a, "Blues Traveler", 50))
		{
			name = 7;
		}
		else if (strncmp(lat2a, "Audioslave", 50))
		{
			name = 8;
		}
		else if (strncmp(lat2a, "Social Distortion", 50))
		{
			name = 9;
		}
		else if (strncmp(lat2a, "The Fray", 50))
		{
			name = 10;
		}
		else if (strncmp(lat2a, "Fleetwood Mac", 50))
		{
			name = 11;
		}
		printf("What was the name of the second song?\n");
		scanf("%s", lat2s);
		if (name = 0)
		{
			if (strncmp(lat2s, "Lonesome Day", 50))
			{
				lat2p = 1;
			}
			else if (strncmp(lat2s, "Into the Fire", 50))
			{
				lat2p = 2;
			}
			else if (strncmp(lat2s, "Waitin' on a Sunny Day", 50))
			{
				lat2p = 3;
			}
			else if (strncmp(lat2s, "Nothing Man", 50))
			{
				lat2p = 4;
			}
			else if (strncmp(lat2s, "Countin' on a Miracle", 50))
			{
				lat2p = 5;
			}
			else if (strncmp(lat2s, "Empty Sky", 50))
			{
				lat2p = 6;
			}
			else if (strncmp(lat2s, "Worlds Apart", 50))
			{
				lat2p = 7;
			}
			else if (strncmp(lat2s, "Let's Be Friends (Skin to Skin)", 50))
			{
				lat2p = 8;
			}
			else if (strncmp(lat2s, "Further On (Up the Road)", 50))
			{
				lat2p = 9;
			}
			else if (strncmp(lat2s, "The Fuse", 50))
			{
				lat2p = 0;
			}
			else if (strncmp(lat2s, "Mary's Place", 50))
			{
				lat2p = 1;
			}
			else if (strncmp(lat2s, "You're Missing", 50))
			{
				lat2p = 2;
			}
			else if (strncmp(lat2s, "The Rising", 50))
			{
				lat2p = 3;
			}
			else if (strncmp(lat2s, "Paradise", 50))
			{
				lat2p = 4;
			}
			else if (strncmp(lat2s, "My City of Ruins", 50))
			{
				lat2p = 5;
			}
		}
		else if (name == 1)
		{
			if (strncmp(lat2s, "Dirty Life and Times", 50))
			{
				lat2p = 1;
			}
			else if (strncmp(lat2s, "Disorder in the House", 50))
			{
				lat2p = 2;
			}
			else if (strncmp(lat2s, "Knockin' on Heaven's Door", 50))
			{
				lat2p = 3;
			}
			else if (strncmp(lat2s, "Numb as a Statue", 50))
			{
				lat2p = 4;
			}
			else if (strncmp(lat2s, "She's Too Good For Me", 50))
			{
				lat2p = 5;
			}
			else if (strncmp(lat2s, "Prison Grove", 50))
			{
				lat2p = 6;
			}
			else if (strncmp(lat2s, "El Amor de Mi Vida", 50))
			{
				lat2p = 7;
			}
			else if (strncmp(lat2s, "The Rest of the Night", 50))
			{
				lat2p = 8;
			}
			else if (strncmp(lat2s, "Please Stay", 50))
			{
				lat2p = 9;
			}
			else if (strncmp(lat2s, "Rub Me Raw", 50))
			{
				lat2p = 0;
			}
			else if (strncmp(lat2s, "Keep Me in Your Heart", 50))
			{
				lat2p = 1;
			}
		}
		else if (name == 2)
		{
			if (strncmp(lat2s, "The Naked Ride Home", 50))
			{
				lat2p = 1;
			}
			else if (strncmp(lat2s, "The Night Inside Me", 50))
			{
				lat2p = 2;
			}
			else if (strncmp(lat2s, "Casino Nation", 50))
			{
				lat2p = 3;
			}
			else if (strncmp(lat2s, "For Taking the Trouble", 50))
			{
				lat2p = 4;
			}
			else if (strncmp(lat2s, "Never Stop", 50))
			{
				lat2p = 5;
			}
			else if (strncmp(lat2s, "Walking Town", 50))
			{
				lat2p = 6;
			}
			else if (strncmp(lat2s, "About My Imagination", 50))
			{
				lat2p = 7;
			}
			else if (strncmp(lat2s, "Sergio Leone", 50))
			{
				lat2p = 8;
			}
			else if (strncmp(lat2s, "Don't You Want to Be There", 50))
			{
				lat2p = 9;
			}
			else if (strncmp(lat2s, "My Stunning Mystery Companion", 50))
			{
				lat2p = 0;
			}
		}
		else if (name == 3)
		{
			if (strncmp(lat2s, "Walking in Memphis", 50))
			{
				lat2p = 1;
			}
			else if (strncmp(lat2s, "Ghost Train", 50))
			{
				lat2p = 2;
			}
			else if (strncmp(lat2s, "Silver Thunderbird", 50))
			{
				lat2p = 3;
			}
			else if (strncmp(lat2s, "Dig Down Deep", 50))
			{
				lat2p = 4;
			}
			else if (strncmp(lat2s, "Walk on Water", 50))
			{
				lat2p = 5;
			}
			else if (strncmp(lat2s, "Miles Away", 50))
			{
				lat2p = 6;
			}
			else if (strncmp(lat2s, "Saving the Best for Last", 50))
			{
				lat2p = 7;
			}
			else if (strncmp(lat2s, "Strangers in a Car", 50))
			{
				lat2p = 8;
			}
			else if (strncmp(lat2s, "29 Ways", 50))
			{
				lat2p = 9;
			}
			else if (strncmp(lat2s, "Perfect Love", 50))
			{
				lat2p = 0;
			}
			else if (strncmp(lat2s, "True Companion", 50))
			{
				lat2p = 1;
			}
		}
		else if (name == 4)
		{
			if (strncmp(lat2s, "Paper in Fire", 50))
			{
				lat2p = 1;
			}
			else if (strncmp(lat2s, "Down and Out in Paradise", 50))
			{
				lat2p = 2;
			}
			else if (strncmp(lat2s, "Check it Out", 50))
			{
				lat2p = 3;
			}
			else if (strncmp(lat2s, "The Real Life", 50))
			{
				lat2p = 4;
			}
			else if (strncmp(lat2s, "Cherry Bomb", 50))
			{
				lat2p = 5;
			}
			else if (strncmp(lat2s, "We Are the People", 50))
			{
				lat2p = 6;
			}
			else if (strncmp(lat2s, "Empty Hands", 50))
			{
				lat2p = 7;
			}
			else if (strncmp(lat2s, "Hard Times for an Honest Man", 50))
			{
				lat2p = 8;
			}
			else if (strncmp(lat2s, "Hotdogs and Hamburgers", 50))
			{
				lat2p = 9;
			}
			else if (strncmp(lat2s, "Rooty Toot Toot", 50))
			{
				lat2p = 0;
			}
		}
		else if (name == 5)
		{
			if (strncmp(lat2s, "Round Here", 50))
			{
				lat2p = 1;
			}
			else if (strncmp(lat2s, "Omaha", 50))
			{
				lat2p = 2;
			}
			else if (strncmp(lat2s, "Mr. Jones", 50))
			{
				lat2p = 3;
			}
			else if (strncmp(lat2s, "Perfect Blue Buildings", 50))
			{
				lat2p = 4;
			}
			else if (strncmp(lat2s, "Anna Begins", 50))
			{
				lat2p = 5;
			}
			else if (strncmp(lat2s, "Time and Time Again", 50))
			{
				lat2p = 6;
			}
			else if (strncmp(lat2s, "Rain King", 50))
			{
				lat2p = 7;
			}
			else if (strncmp(lat2s, "Sullivan Street", 50))
			{
				lat2p = 8;
			}
			else if (strncmp(lat2s, "Ghost Train", 50))
			{
				lat2p = 9;
			}
			else if (strncmp(lat2s, "Raining in Baltimore", 50))
			{
				lat2p = 0;
			}
			else if (strncmp(lat2s, "A Murder of One", 50))
			{
				lat2p = 1;
			}
		}
		else if (name == 6)
		{
			if (strncmp(lat2s, "The Horizontal Bop", 50))
			{
				lat2p = 1;
			}
			else if (strncmp(lat2s, "You'll Accomp'ny Me", 50))
			{
				lat2p = 2;
			}
			else if (strncmp(lat2s, "Her Strut", 50))
			{
				lat2p = 3;
			}
			else if (strncmp(lat2s, "No Man's Land", 50))
			{
				lat2p = 4;
			}
			else if (strncmp(lat2s, "Long Twin Silver Line", 50))
			{
				lat2p = 5;
			}
			else if (strncmp(lat2s, "Against the Wind", 50))
			{
				lat2p = 6;
			}
			else if (strncmp(lat2s, "Good for Me", 50))
			{
				lat2p = 7;
			}
			else if (strncmp(lat2s, "Betty Lou's Gettin' Out Tonight", 50))
			{
				lat2p = 8;
			}
			else if (strncmp(lat2s, "Fire Lake", 50))
			{
				lat2p = 9;
			}
			else if (strncmp(lat2s, "Shinin' Brightly", 50))
			{
				lat2p = 0;
			}
		}
		else if (name == 7)
		{
			if (strncmp(lat2s, "Run-Around", 50))
			{
				lat2p = 1;
			}
			else if (strncmp(lat2s, "Stand", 50))
			{
				lat2p = 2;
			}
			else if (strncmp(lat2s, "Look Around", 50))
			{
				lat2p = 3;
			}
			else if (strncmp(lat2s, "Fallible", 50))
			{
				lat2p = 4;
			}
			else if (strncmp(lat2s, "The Mountains Win Again", 50))
			{
				lat2p = 5;
			}
			else if (strncmp(lat2s, "Freedom", 50))
			{
				lat2p = 6;
			}
			else if (strncmp(lat2s, "Crash Burn", 50))
			{
				lat2p = 7;
			}
			else if (strncmp(lat2s, "Price to Pay", 50))
			{
				lat2p = 8;
			}
			else if (strncmp(lat2s, "Hook", 50))
			{
				lat2p = 9;
			}
			else if (strncmp(lat2s, "The Good, the Bad, and the Ugly", 50))
			{
				lat2p = 0;
			}
			else if (strncmp(lat2s, "Just Wait", 50))
			{
				lat2p = 1;
			}
			else if (strncmp(lat2s, "Brother John", 50))
			{
				lat2p = 2;
			}
		}
		else if (name == 8)
		{
			if (strncmp(lat2s, "Cochise", 50))
			{
				lat2p = 1;
			}
			else if (strncmp(lat2s, "Show Me How to Live", 50))
			{
				lat2p = 2;
			}
			else if (strncmp(lat2s, "Gasoline", 50))
			{
				lat2p = 3;
			}
			else if (strncmp(lat2s, "What You Are", 50))
			{
				lat2p = 4;
			}
			else if (strncmp(lat2s, "Like a Stone", 50))
			{
				lat2p = 5;
			}
			else if (strncmp(lat2s, "Set It Off", 50))
			{
				lat2p = 6;
			}
			else if (strncmp(lat2s, "Shadow on the Sun", 50))
			{
				lat2p = 7;
			}
			else if (strncmp(lat2s, "I Am the Highway", 50))
			{
				lat2p = 8;
			}
			else if (strncmp(lat2s, "Exploder", 50))
			{
				lat2p = 9;
			}
			else if (strncmp(lat2s, "Hypnotize", 50))
			{
				lat2p = 0;
			}
			else if (strncmp(lat2s, "Bring Em Back Alive", 50))
			{
				lat2p = 1;
			}
			else if (strncmp(lat2s, "Light My Way", 50))
			{
				lat2p = 2;
			}
			else if (strncmp(lat2s, "Getaway Car", 50))
			{
				lat2p = 3;
			}
			else if (strncmp(lat2s, "The Last Remaining Light", 50))
			{
				lat2p = 4;
			}
		}
		else if (name == 9)
		{
			if (strncmp(lat2s, "So Far Away", 50))
			{
				lat2p = 1;
			}
			else if (strncmp(lat2s, "Let It Be Me", 50))
			{
				lat2p = 2;
			}
			else if (strncmp(lat2s, "Story of My Life", 50))
			{
				lat2p = 3;
			}
			else if (strncmp(lat2s, "Sick Boys", 50))
			{
				lat2p = 4;
			}
			else if (strncmp(lat2s, "Ring of Fire", 50))
			{
				lat2p = 5;
			}
			else if (strncmp(lat2s, "Ball and Chain", 50))
			{
				lat2p = 6;
			}
			else if (strncmp(lat2s, "It Coulda Been Me", 50))
			{
				lat2p = 7;
			}
			else if (strncmp(lat2s, "She's a Knockout", 50))
			{
				lat2p = 8;
			}
			else if (strncmp(lat2s, "A Place in My Heart", 50))
			{
				lat2p = 9;
			}
			else if (strncmp(lat2s, "Drug Train", 50))
			{
				lat2p = 0;
			}
		}
		else if (name == 10)
		{
			if (strncmp(lat2s, "She Is", 50))
			{
				lat2p = 1;
			}
			else if (strncmp(lat2s, "Over My Head (Cable Car)", 50))
			{
				lat2p = 2;
			}
			else if (strncmp(lat2s, "How to Save a Life", 50))
			{
				lat2p = 3;
			}
			else if (strncmp(lat2s, "All at Once", 50))
			{
				lat2p = 4;
			}
			else if (strncmp(lat2s, "Fall Away", 50))
			{
				lat2p = 5;
			}
			else if (strncmp(lat2s, "Heaven Forbid", 50))
			{
				lat2p = 6;
			}
			else if (strncmp(lat2s, "Look After You", 50))
			{
				lat2p = 7;
			}
			else if (strncmp(lat2s, "Hundred", 50))
			{
				lat2p = 8;
			}
			else if (strncmp(lat2s, "Vienna", 50))
			{
				lat2p = 9;
			}
			else if (strncmp(lat2s, "Dead Wrong", 50))
			{
				lat2p = 0;
			}
			else if (strncmp(lat2s, "Little House", 50))
			{
				lat2p = 1;
			}
			else if (strncmp(lat2s, "Trust Me", 50))
			{
				lat2p = 2;
			}
		}
		else if (name == 11)
		{
			if (strncmp(lat2s, "Second Hand News", 50))
			{
				lat2p = 1;
			}
			else if (strncmp(lat2s, "Dreams", 50))
			{
				lat2p = 2;
			}
			else if (strncmp(lat2s, "Never Going Back Again", 50))
			{
				lat2p = 3;
			}
			else if (strncmp(lat2s, "Don't Stop", 50))
			{
				lat2p = 4;
			}
			else if (strncmp(lat2s, "Go Your Own Way", 50))
			{
				lat2p = 5;
			}
			else if (strncmp(lat2s, "Songbird", 50))
			{
				lat2p = 6;
			}
			else if (strncmp(lat2s, "The Chain", 50))
			{
				lat2p = 7;
			}
			else if (strncmp(lat2s, "You Make Loving Fun", 50))
			{
				lat2p = 8;
			}
			else if (strncmp(lat2s, "I Don't Want to Know", 50))
			{
				lat2p = 9;
			}
			else if (strncmp(lat2s, "Oh Daddy", 50))
			{
				lat2p = 0;
			}
			else if (strncmp(lat2s, "Gold Dust Woman", 50))
			{
				lat2p = 1;
			}
		}
		printf("What was the name of the band the third song was by?\n");
		scanf("%s", lat3a);
		if (strncmp(lat3a, "Bruce Springsteen", 50))
		{
			name = 0;
		}
		else if (strncmp(lat3a, "Warren Zevon", 50))
		{
			name = 1;
		}
		else if (strncmp(lat3a, "Jackson Browne", 50))
		{
			name = 2;
		}
		else if (strncmp(lat3a, "Marc Cohn", 50))
		{
			name = 3;
		}
		else if (strncmp(lat3a, "John Mellencamp", 50))
		{
			name = 4;
		}
		else if (strncmp(lat3a, "Counting Crows", 50))
		{
			name = 5;
		}
		else if (strncmp(lat3a, "Bob Seger", 50))
		{
			name = 6;
		}
		else if (strncmp(lat3a, "Blues Traveler", 50))
		{
			name = 7;
		}
		else if (strncmp(lat3a, "Audioslave", 50))
		{
			name = 8;
		}
		else if (strncmp(lat3a, "Social Distortion", 50))
		{
			name = 9;
		}
		else if (strncmp(lat3a, "The Fray", 50))
		{
			name = 10;
		}
		else if (strncmp(lat3a, "Fleetwood Mac", 50))
		{
			name = 11;
		}
		printf("What was the name of the third song?\n");
		scanf("%s", lat3s);
		if (name = 0)
		{
			if (strncmp(lat3s, "Lonesome Day", 50))
			{
				lat3p = 1;
			}
			else if (strncmp(lat3s, "Into the Fire", 50))
			{
				lat3p = 2;
			}
			else if (strncmp(lat3s, "Waitin' on a Sunny Day", 50))
			{
				lat3p = 3;
			}
			else if (strncmp(lat3s, "Nothing Man", 50))
			{
				lat3p = 4;
			}
			else if (strncmp(lat3s, "Countin' on a Miracle", 50))
			{
				lat3p = 5;
			}
			else if (strncmp(lat3s, "Empty Sky", 50))
			{
				lat3p = 6;
			}
			else if (strncmp(lat3s, "Worlds Apart", 50))
			{
				lat3p = 7;
			}
			else if (strncmp(lat3s, "Let's Be Friends (Skin to Skin)", 50))
			{
				lat3p = 8;
			}
			else if (strncmp(lat3s, "Further On (Up the Road)", 50))
			{
				lat3p = 9;
			}
			else if (strncmp(lat3s, "The Fuse", 50))
			{
				lat3p = 0;
			}
			else if (strncmp(lat3s, "Mary's Place", 50))
			{
				lat3p = 1;
			}
			else if (strncmp(lat3s, "You're Missing", 50))
			{
				lat3p = 2;
			}
			else if (strncmp(lat3s, "The Rising", 50))
			{
				lat3p = 3;
			}
			else if (strncmp(lat3s, "Paradise", 50))
			{
				lat3p = 4;
			}
			else if (strncmp(lat3s, "My City of Ruins", 50))
			{
				lat3p = 5;
			}
		}
		else if (name == 1)
		{
			if (strncmp(lat3s, "Dirty Life and Times", 50))
			{
				lat3p = 1;
			}
			else if (strncmp(lat3s, "Disorder in the House", 50))
			{
				lat3p = 2;
			}
			else if (strncmp(lat3s, "Knockin' on Heaven's Door", 50))
			{
				lat3p = 3;
			}
			else if (strncmp(lat3s, "Numb as a Statue", 50))
			{
				lat3p = 4;
			}
			else if (strncmp(lat3s, "She's Too Good For Me", 50))
			{
				lat3p = 5;
			}
			else if (strncmp(lat3s, "Prison Grove", 50))
			{
				lat3p = 6;
			}
			else if (strncmp(lat3s, "El Amor de Mi Vida", 50))
			{
				lat3p = 7;
			}
			else if (strncmp(lat3s, "The Rest of the Night", 50))
			{
				lat3p = 8;
			}
			else if (strncmp(lat3s, "Please Stay", 50))
			{
				lat3p = 9;
			}
			else if (strncmp(lat3s, "Rub Me Raw", 50))
			{
				lat3p = 0;
			}
			else if (strncmp(lat3s, "Keep Me in Your Heart", 50))
			{
				lat3p = 1;
			}
		}
		else if (name == 2)
		{
			if (strncmp(lat3s, "The Naked Ride Home", 50))
			{
				lat3p = 1;
			}
			else if (strncmp(lat3s, "The Night Inside Me", 50))
			{
				lat3p = 2;
			}
			else if (strncmp(lat3s, "Casino Nation", 50))
			{
				lat3p = 3;
			}
			else if (strncmp(lat3s, "For Taking the Trouble", 50))
			{
				lat3p = 4;
			}
			else if (strncmp(lat3s, "Never Stop", 50))
			{
				lat3p = 5;
			}
			else if (strncmp(lat3s, "Walking Town", 50))
			{
				lat3p = 6;
			}
			else if (strncmp(lat3s, "About My Imagination", 50))
			{
				lat3p = 7;
			}
			else if (strncmp(lat3s, "Sergio Leone", 50))
			{
				lat3p = 8;
			}
			else if (strncmp(lat3s, "Don't You Want to Be There", 50))
			{
				lat3p = 9;
			}
			else if (strncmp(lat3s, "My Stunning Mystery Companion", 50))
			{
				lat3p = 0;
			}
		}
		else if (name == 3)
		{
			if (strncmp(lat3s, "Walking in Memphis", 50))
			{
				lat3p = 1;
			}
			else if (strncmp(lat3s, "Ghost Train", 50))
			{
				lat3p = 2;
			}
			else if (strncmp(lat3s, "Silver Thunderbird", 50))
			{
				lat3p = 3;
			}
			else if (strncmp(lat3s, "Dig Down Deep", 50))
			{
				lat3p = 4;
			}
			else if (strncmp(lat3s, "Walk on Water", 50))
			{
				lat3p = 5;
			}
			else if (strncmp(lat3s, "Miles Away", 50))
			{
				lat3p = 6;
			}
			else if (strncmp(lat3s, "Saving the Best for Last", 50))
			{
				lat3p = 7;
			}
			else if (strncmp(lat3s, "Strangers in a Car", 50))
			{
				lat3p = 8;
			}
			else if (strncmp(lat3s, "29 Ways", 50))
			{
				lat3p = 9;
			}
			else if (strncmp(lat3s, "Perfect Love", 50))
			{
				lat3p = 0;
			}
			else if (strncmp(lat3s, "True Companion", 50))
			{
				lat3p = 1;
			}
		}
		else if (name == 4)
		{
			if (strncmp(lat3s, "Paper in Fire", 50))
			{
				lat3p = 1;
			}
			else if (strncmp(lat3s, "Down and Out in Paradise", 50))
			{
				lat3p = 2;
			}
			else if (strncmp(lat3s, "Check it Out", 50))
			{
				lat3p = 3;
			}
			else if (strncmp(lat3s, "The Real Life", 50))
			{
				lat3p = 4;
			}
			else if (strncmp(lat3s, "Cherry Bomb", 50))
			{
				lat3p = 5;
			}
			else if (strncmp(lat3s, "We Are the People", 50))
			{
				lat3p = 6;
			}
			else if (strncmp(lat3s, "Empty Hands", 50))
			{
				lat3p = 7;
			}
			else if (strncmp(lat3s, "Hard Times for an Honest Man", 50))
			{
				lat3p = 8;
			}
			else if (strncmp(lat3s, "Hotdogs and Hamburgers", 50))
			{
				lat3p = 9;
			}
			else if (strncmp(lat3s, "Rooty Toot Toot", 50))
			{
				lat3p = 0;
			}
		}
		else if (name == 5)
		{
			if (strncmp(lat3s, "Round Here", 50))
			{
				lat3p = 1;
			}
			else if (strncmp(lat3s, "Omaha", 50))
			{
				lat3p = 2;
			}
			else if (strncmp(lat3s, "Mr. Jones", 50))
			{
				lat3p = 3;
			}
			else if (strncmp(lat3s, "Perfect Blue Buildings", 50))
			{
				lat3p = 4;
			}
			else if (strncmp(lat3s, "Anna Begins", 50))
			{
				lat3p = 5;
			}
			else if (strncmp(lat3s, "Time and Time Again", 50))
			{
				lat3p = 6;
			}
			else if (strncmp(lat3s, "Rain King", 50))
			{
				lat3p = 7;
			}
			else if (strncmp(lat3s, "Sullivan Street", 50))
			{
				lat3p = 8;
			}
			else if (strncmp(lat3s, "Ghost Train", 50))
			{
				lat3p = 9;
			}
			else if (strncmp(lat3s, "Raining in Baltimore", 50))
			{
				lat3p = 0;
			}
			else if (strncmp(lat3s, "A Murder of One", 50))
			{
				lat3p = 1;
			}
		}
		else if (name == 6)
		{
			if (strncmp(lat3s, "The Horizontal Bop", 50))
			{
				lat3p = 1;
			}
			else if (strncmp(lat3s, "You'll Accomp'ny Me", 50))
			{
				lat3p = 2;
			}
			else if (strncmp(lat3s, "Her Strut", 50))
			{
				lat3p = 3;
			}
			else if (strncmp(lat3s, "No Man's Land", 50))
			{
				lat3p = 4;
			}
			else if (strncmp(lat3s, "Long Twin Silver Line", 50))
			{
				lat3p = 5;
			}
			else if (strncmp(lat3s, "Against the Wind", 50))
			{
				lat3p = 6;
			}
			else if (strncmp(lat3s, "Good for Me", 50))
			{
				lat3p = 7;
			}
			else if (strncmp(lat3s, "Betty Lou's Gettin' Out Tonight", 50))
			{
				lat3p = 8;
			}
			else if (strncmp(lat3s, "Fire Lake", 50))
			{
				lat3p = 9;
			}
			else if (strncmp(lat3s, "Shinin' Brightly", 50))
			{
				lat3p = 0;
			}
		}
		else if (name == 7)
		{
			if (strncmp(lat3s, "Run-Around", 50))
			{
				lat3p = 1;
			}
			else if (strncmp(lat3s, "Stand", 50))
			{
				lat3p = 2;
			}
			else if (strncmp(lat3s, "Look Around", 50))
			{
				lat3p = 3;
			}
			else if (strncmp(lat3s, "Fallible", 50))
			{
				lat3p = 4;
			}
			else if (strncmp(lat3s, "The Mountains Win Again", 50))
			{
				lat3p = 5;
			}
			else if (strncmp(lat3s, "Freedom", 50))
			{
				lat3p = 6;
			}
			else if (strncmp(lat3s, "Crash Burn", 50))
			{
				lat3p = 7;
			}
			else if (strncmp(lat3s, "Price to Pay", 50))
			{
				lat3p = 8;
			}
			else if (strncmp(lat3s, "Hook", 50))
			{
				lat3p = 9;
			}
			else if (strncmp(lat3s, "The Good, the Bad, and the Ugly", 50))
			{
				lat3p = 0;
			}
			else if (strncmp(lat3s, "Just Wait", 50))
			{
				lat3p = 1;
			}
			else if (strncmp(lat3s, "Brother John", 50))
			{
				lat3p = 2;
			}
		}
		else if (name == 8)
		{
			if (strncmp(lat3s, "Cochise", 50))
			{
				lat3p = 1;
			}
			else if (strncmp(lat3s, "Show Me How to Live", 50))
			{
				lat3p = 2;
			}
			else if (strncmp(lat3s, "Gasoline", 50))
			{
				lat3p = 3;
			}
			else if (strncmp(lat3s, "What You Are", 50))
			{
				lat3p = 4;
			}
			else if (strncmp(lat3s, "Like a Stone", 50))
			{
				lat3p = 5;
			}
			else if (strncmp(lat3s, "Set It Off", 50))
			{
				lat3p = 6;
			}
			else if (strncmp(lat3s, "Shadow on the Sun", 50))
			{
				lat3p = 7;
			}
			else if (strncmp(lat3s, "I Am the Highway", 50))
			{
				lat3p = 8;
			}
			else if (strncmp(lat3s, "Exploder", 50))
			{
				lat3p = 9;
			}
			else if (strncmp(lat3s, "Hypnotize", 50))
			{
				lat3p = 0;
			}
			else if (strncmp(lat3s, "Bring Em Back Alive", 50))
			{
				lat3p = 1;
			}
			else if (strncmp(lat3s, "Light My Way", 50))
			{
				lat3p = 2;
			}
			else if (strncmp(lat3s, "Getaway Car", 50))
			{
				lat3p = 3;
			}
			else if (strncmp(lat3s, "The Last Remaining Light", 50))
			{
				lat3p = 4;
			}
		}
		else if (name == 9)
		{
			if (strncmp(lat3s, "So Far Away", 50))
			{
				lat3p = 1;
			}
			else if (strncmp(lat3s, "Let It Be Me", 50))
			{
				lat3p = 2;
			}
			else if (strncmp(lat3s, "Story of My Life", 50))
			{
				lat3p = 3;
			}
			else if (strncmp(lat3s, "Sick Boys", 50))
			{
				lat3p = 4;
			}
			else if (strncmp(lat3s, "Ring of Fire", 50))
			{
				lat3p = 5;
			}
			else if (strncmp(lat3s, "Ball and Chain", 50))
			{
				lat3p = 6;
			}
			else if (strncmp(lat3s, "It Coulda Been Me", 50))
			{
				lat3p = 7;
			}
			else if (strncmp(lat3s, "She's a Knockout", 50))
			{
				lat3p = 8;
			}
			else if (strncmp(lat3s, "A Place in My Heart", 50))
			{
				lat3p = 9;
			}
			else if (strncmp(lat3s, "Drug Train", 50))
			{
				lat3p = 0;
			}
		}
		else if (name == 10)
		{
			if (strncmp(lat3s, "She Is", 50))
			{
				lat3p = 1;
			}
			else if (strncmp(lat3s, "Over My Head (Cable Car)", 50))
			{
				lat3p = 2;
			}
			else if (strncmp(lat3s, "How to Save a Life", 50))
			{
				lat3p = 3;
			}
			else if (strncmp(lat3s, "All at Once", 50))
			{
				lat3p = 4;
			}
			else if (strncmp(lat3s, "Fall Away", 50))
			{
				lat3p = 5;
			}
			else if (strncmp(lat3s, "Heaven Forbid", 50))
			{
				lat3p = 6;
			}
			else if (strncmp(lat3s, "Look After You", 50))
			{
				lat3p = 7;
			}
			else if (strncmp(lat3s, "Hundred", 50))
			{
				lat3p = 8;
			}
			else if (strncmp(lat3s, "Vienna", 50))
			{
				lat3p = 9;
			}
			else if (strncmp(lat3s, "Dead Wrong", 50))
			{
				lat3p = 0;
			}
			else if (strncmp(lat3s, "Little House", 50))
			{
				lat3p = 1;
			}
			else if (strncmp(lat3s, "Trust Me", 50))
			{
				lat3p = 2;
			}
		}
		else if (name == 11)
		{
			if (strncmp(lat3s, "Second Hand News", 50))
			{
				lat3p = 1;
			}
			else if (strncmp(lat3s, "Dreams", 50))
			{
				lat3p = 2;
			}
			else if (strncmp(lat3s, "Never Going Back Again", 50))
			{
				lat3p = 3;
			}
			else if (strncmp(lat3s, "Don't Stop", 50))
			{
				lat3p = 4;
			}
			else if (strncmp(lat3s, "Go Your Own Way", 50))
			{
				lat3p = 5;
			}
			else if (strncmp(lat3s, "Songbird", 50))
			{
				lat3p = 6;
			}
			else if (strncmp(lat3s, "The Chain", 50))
			{
				lat3p = 7;
			}
			else if (strncmp(lat3s, "You Make Loving Fun", 50))
			{
				lat3p = 8;
			}
			else if (strncmp(lat3s, "I Don't Want to Know", 50))
			{
				lat3p = 9;
			}
			else if (strncmp(lat3s, "Oh Daddy", 50))
			{
				lat3p = 0;
			}
			else if (strncmp(lat3s, "Gold Dust Woman", 50))
			{
				lat3p = 1;
			}
		}
		printf("What was the name of the band the fourth song was by?\n");
		scanf("%s", lat4a);
		if (strncmp(lat4a, "Bruce Springsteen", 50))
		{
			name = 0;
		}
		else if (strncmp(lat4a, "Warren Zevon", 50))
		{
			name = 1;
		}
		else if (strncmp(lat4a, "Jackson Browne", 50))
		{
			name = 2;
		}
		else if (strncmp(lat4a, "Marc Cohn", 50))
		{
			name = 3;
		}
		else if (strncmp(lat4a, "John Mellencamp", 50))
		{
			name = 4;
		}
		else if (strncmp(lat4a, "Counting Crows", 50))
		{
			name = 5;
		}
		else if (strncmp(lat4a, "Bob Seger", 50))
		{
			name = 6;
		}
		else if (strncmp(lat4a, "Blues Traveler", 50))
		{
			name = 7;
		}
		else if (strncmp(lat4a, "Audioslave", 50))
		{
			name = 8;
		}
		else if (strncmp(lat4a, "Social Distortion", 50))
		{
			name = 9;
		}
		else if (strncmp(lat4a, "The Fray", 50))
		{
			name = 10;
		}
		else if (strncmp(lat4a, "Fleetwood Mac", 50))
		{
			name = 11;
		}
		printf("What was the name of the fourth song?\n");
		scanf("%s", lat4s);
		if (name = 0)
		{
			if (strncmp(lat4s, "Lonesome Day", 50))
			{
				lat4p = 1;
			}
			else if (strncmp(lat4s, "Into the Fire", 50))
			{
				lat4p = 2;
			}
			else if (strncmp(lat4s, "Waitin' on a Sunny Day", 50))
			{
				lat4p = 3;
			}
			else if (strncmp(lat4s, "Nothing Man", 50))
			{
				lat4p = 4;
			}
			else if (strncmp(lat4s, "Countin' on a Miracle", 50))
			{
				lat4p = 5;
			}
			else if (strncmp(lat4s, "Empty Sky", 50))
			{
				lat4p = 6;
			}
			else if (strncmp(lat4s, "Worlds Apart", 50))
			{
				lat4p = 7;
			}
			else if (strncmp(lat4s, "Let's Be Friends (Skin to Skin)", 50))
			{
				lat4p = 8;
			}
			else if (strncmp(lat4s, "Further On (Up the Road)", 50))
			{
				lat4p = 9;
			}
			else if (strncmp(lat4s, "The Fuse", 50))
			{
				lat4p = 0;
			}
			else if (strncmp(lat4s, "Mary's Place", 50))
			{
				lat4p = 1;
			}
			else if (strncmp(lat4s, "You're Missing", 50))
			{
				lat4p = 2;
			}
			else if (strncmp(lat4s, "The Rising", 50))
			{
				lat4p = 3;
			}
			else if (strncmp(lat4s, "Paradise", 50))
			{
				lat4p = 4;
			}
			else if (strncmp(lat4s, "My City of Ruins", 50))
			{
				lat4p = 5;
			}
		}
		else if (name == 1)
		{
			if (strncmp(lat4s, "Dirty Life and Times", 50))
			{
				lat4p = 1;
			}
			else if (strncmp(lat4s, "Disorder in the House", 50))
			{
				lat4p = 2;
			}
			else if (strncmp(lat4s, "Knockin' on Heaven's Door", 50))
			{
				lat4p = 3;
			}
			else if (strncmp(lat4s, "Numb as a Statue", 50))
			{
				lat4p = 4;
			}
			else if (strncmp(lat4s, "She's Too Good For Me", 50))
			{
				lat4p = 5;
			}
			else if (strncmp(lat4s, "Prison Grove", 50))
			{
				lat4p = 6;
			}
			else if (strncmp(lat4s, "El Amor de Mi Vida", 50))
			{
				lat4p = 7;
			}
			else if (strncmp(lat4s, "The Rest of the Night", 50))
			{
				lat4p = 8;
			}
			else if (strncmp(lat4s, "Please Stay", 50))
			{
				lat4p = 9;
			}
			else if (strncmp(lat4s, "Rub Me Raw", 50))
			{
				lat4p = 0;
			}
			else if (strncmp(lat4s, "Keep Me in Your Heart", 50))
			{
				lat4p = 1;
			}
		}
		else if (name == 2)
		{
			if (strncmp(lat4s, "The Naked Ride Home", 50))
			{
				lat4p = 1;
			}
			else if (strncmp(lat4s, "The Night Inside Me", 50))
			{
				lat4p = 2;
			}
			else if (strncmp(lat4s, "Casino Nation", 50))
			{
				lat4p = 3;
			}
			else if (strncmp(lat4s, "For Taking the Trouble", 50))
			{
				lat4p = 4;
			}
			else if (strncmp(lat4s, "Never Stop", 50))
			{
				lat4p = 5;
			}
			else if (strncmp(lat4s, "Walking Town", 50))
			{
				lat4p = 6;
			}
			else if (strncmp(lat4s, "About My Imagination", 50))
			{
				lat4p = 7;
			}
			else if (strncmp(lat4s, "Sergio Leone", 50))
			{
				lat4p = 8;
			}
			else if (strncmp(lat4s, "Don't You Want to Be There", 50))
			{
				lat4p = 9;
			}
			else if (strncmp(lat4s, "My Stunning Mystery Companion", 50))
			{
				lat4p = 0;
			}
		}
		else if (name == 3)
		{
			if (strncmp(lat4s, "Walking in Memphis", 50))
			{
				lat4p = 1;
			}
			else if (strncmp(lat4s, "Ghost Train", 50))
			{
				lat4p = 2;
			}
			else if (strncmp(lat4s, "Silver Thunderbird", 50))
			{
				lat4p = 3;
			}
			else if (strncmp(lat4s, "Dig Down Deep", 50))
			{
				lat4p = 4;
			}
			else if (strncmp(lat4s, "Walk on Water", 50))
			{
				lat4p = 5;
			}
			else if (strncmp(lat4s, "Miles Away", 50))
			{
				lat4p = 6;
			}
			else if (strncmp(lat4s, "Saving the Best for Last", 50))
			{
				lat4p = 7;
			}
			else if (strncmp(lat4s, "Strangers in a Car", 50))
			{
				lat4p = 8;
			}
			else if (strncmp(lat4s, "29 Ways", 50))
			{
				lat4p = 9;
			}
			else if (strncmp(lat4s, "Perfect Love", 50))
			{
				lat4p = 0;
			}
			else if (strncmp(lat4s, "True Companion", 50))
			{
				lat4p = 1;
			}
		}
		else if (name == 4)
		{
			if (strncmp(lat4s, "Paper in Fire", 50))
			{
				lat4p = 1;
			}
			else if (strncmp(lat4s, "Down and Out in Paradise", 50))
			{
				lat4p = 2;
			}
			else if (strncmp(lat4s, "Check it Out", 50))
			{
				lat4p = 3;
			}
			else if (strncmp(lat4s, "The Real Life", 50))
			{
				lat4p = 4;
			}
			else if (strncmp(lat4s, "Cherry Bomb", 50))
			{
				lat4p = 5;
			}
			else if (strncmp(lat4s, "We Are the People", 50))
			{
				lat4p = 6;
			}
			else if (strncmp(lat4s, "Empty Hands", 50))
			{
				lat4p = 7;
			}
			else if (strncmp(lat4s, "Hard Times for an Honest Man", 50))
			{
				lat4p = 8;
			}
			else if (strncmp(lat4s, "Hotdogs and Hamburgers", 50))
			{
				lat4p = 9;
			}
			else if (strncmp(lat4s, "Rooty Toot Toot", 50))
			{
				lat4p = 0;
			}
		}
		else if (name == 5)
		{
			if (strncmp(lat4s, "Round Here", 50))
			{
				lat4p = 1;
			}
			else if (strncmp(lat4s, "Omaha", 50))
			{
				lat4p = 2;
			}
			else if (strncmp(lat4s, "Mr. Jones", 50))
			{
				lat4p = 3;
			}
			else if (strncmp(lat4s, "Perfect Blue Buildings", 50))
			{
				lat4p = 4;
			}
			else if (strncmp(lat4s, "Anna Begins", 50))
			{
				lat4p = 5;
			}
			else if (strncmp(lat4s, "Time and Time Again", 50))
			{
				lat4p = 6;
			}
			else if (strncmp(lat4s, "Rain King", 50))
			{
				lat4p = 7;
			}
			else if (strncmp(lat4s, "Sullivan Street", 50))
			{
				lat4p = 8;
			}
			else if (strncmp(lat4s, "Ghost Train", 50))
			{
				lat4p = 9;
			}
			else if (strncmp(lat4s, "Raining in Baltimore", 50))
			{
				lat4p = 0;
			}
			else if (strncmp(lat4s, "A Murder of One", 50))
			{
				lat4p = 1;
			}
		}
		else if (name == 6)
		{
			if (strncmp(lat4s, "The Horizontal Bop", 50))
			{
				lat4p = 1;
			}
			else if (strncmp(lat4s, "You'll Accomp'ny Me", 50))
			{
				lat4p = 2;
			}
			else if (strncmp(lat4s, "Her Strut", 50))
			{
				lat4p = 3;
			}
			else if (strncmp(lat4s, "No Man's Land", 50))
			{
				lat4p = 4;
			}
			else if (strncmp(lat4s, "Long Twin Silver Line", 50))
			{
				lat4p = 5;
			}
			else if (strncmp(lat4s, "Against the Wind", 50))
			{
				lat4p = 6;
			}
			else if (strncmp(lat4s, "Good for Me", 50))
			{
				lat4p = 7;
			}
			else if (strncmp(lat4s, "Betty Lou's Gettin' Out Tonight", 50))
			{
				lat4p = 8;
			}
			else if (strncmp(lat4s, "Fire Lake", 50))
			{
				lat4p = 9;
			}
			else if (strncmp(lat4s, "Shinin' Brightly", 50))
			{
				lat4p = 0;
			}
		}
		else if (name == 7)
		{
			if (strncmp(lat4s, "Run-Around", 50))
			{
				lat4p = 1;
			}
			else if (strncmp(lat4s, "Stand", 50))
			{
				lat4p = 2;
			}
			else if (strncmp(lat4s, "Look Around", 50))
			{
				lat4p = 3;
			}
			else if (strncmp(lat4s, "Fallible", 50))
			{
				lat4p = 4;
			}
			else if (strncmp(lat4s, "The Mountains Win Again", 50))
			{
				lat4p = 5;
			}
			else if (strncmp(lat4s, "Freedom", 50))
			{
				lat4p = 6;
			}
			else if (strncmp(lat4s, "Crash Burn", 50))
			{
				lat4p = 7;
			}
			else if (strncmp(lat4s, "Price to Pay", 50))
			{
				lat4p = 8;
			}
			else if (strncmp(lat4s, "Hook", 50))
			{
				lat4p = 9;
			}
			else if (strncmp(lat4s, "The Good, the Bad, and the Ugly", 50))
			{
				lat4p = 0;
			}
			else if (strncmp(lat4s, "Just Wait", 50))
			{
				lat4p = 1;
			}
			else if (strncmp(lat4s, "Brother John", 50))
			{
				lat4p = 2;
			}
		}
		else if (name == 8)
		{
			if (strncmp(lat4s, "Cochise", 50))
			{
				lat4p = 1;
			}
			else if (strncmp(lat4s, "Show Me How to Live", 50))
			{
				lat4p = 2;
			}
			else if (strncmp(lat4s, "Gasoline", 50))
			{
				lat4p = 3;
			}
			else if (strncmp(lat4s, "What You Are", 50))
			{
				lat4p = 4;
			}
			else if (strncmp(lat4s, "Like a Stone", 50))
			{
				lat4p = 5;
			}
			else if (strncmp(lat4s, "Set It Off", 50))
			{
				lat4p = 6;
			}
			else if (strncmp(lat4s, "Shadow on the Sun", 50))
			{
				lat4p = 7;
			}
			else if (strncmp(lat4s, "I Am the Highway", 50))
			{
				lat4p = 8;
			}
			else if (strncmp(lat4s, "Exploder", 50))
			{
				lat4p = 9;
			}
			else if (strncmp(lat4s, "Hypnotize", 50))
			{
				lat4p = 0;
			}
			else if (strncmp(lat4s, "Bring Em Back Alive", 50))
			{
				lat4p = 1;
			}
			else if (strncmp(lat4s, "Light My Way", 50))
			{
				lat4p = 2;
			}
			else if (strncmp(lat4s, "Getaway Car", 50))
			{
				lat4p = 3;
			}
			else if (strncmp(lat4s, "The Last Remaining Light", 50))
			{
				lat4p = 4;
			}
		}
		else if (name == 9)
		{
			if (strncmp(lat4s, "So Far Away", 50))
			{
				lat4p = 1;
			}
			else if (strncmp(lat4s, "Let It Be Me", 50))
			{
				lat4p = 2;
			}
			else if (strncmp(lat4s, "Story of My Life", 50))
			{
				lat4p = 3;
			}
			else if (strncmp(lat4s, "Sick Boys", 50))
			{
				lat4p = 4;
			}
			else if (strncmp(lat4s, "Ring of Fire", 50))
			{
				lat4p = 5;
			}
			else if (strncmp(lat4s, "Ball and Chain", 50))
			{
				lat4p = 6;
			}
			else if (strncmp(lat4s, "It Coulda Been Me", 50))
			{
				lat4p = 7;
			}
			else if (strncmp(lat4s, "She's a Knockout", 50))
			{
				lat4p = 8;
			}
			else if (strncmp(lat4s, "A Place in My Heart", 50))
			{
				lat4p = 9;
			}
			else if (strncmp(lat4s, "Drug Train", 50))
			{
				lat4p = 0;
			}
		}
		else if (name == 10)
		{
			if (strncmp(lat4s, "She Is", 50))
			{
				lat4p = 1;
			}
			else if (strncmp(lat4s, "Over My Head (Cable Car)", 50))
			{
				lat4p = 2;
			}
			else if (strncmp(lat4s, "How to Save a Life", 50))
			{
				lat4p = 3;
			}
			else if (strncmp(lat4s, "All at Once", 50))
			{
				lat4p = 4;
			}
			else if (strncmp(lat4s, "Fall Away", 50))
			{
				lat4p = 5;
			}
			else if (strncmp(lat4s, "Heaven Forbid", 50))
			{
				lat4p = 6;
			}
			else if (strncmp(lat4s, "Look After You", 50))
			{
				lat4p = 7;
			}
			else if (strncmp(lat4s, "Hundred", 50))
			{
				lat4p = 8;
			}
			else if (strncmp(lat4s, "Vienna", 50))
			{
				lat4p = 9;
			}
			else if (strncmp(lat4s, "Dead Wrong", 50))
			{
				lat4p = 0;
			}
			else if (strncmp(lat4s, "Little House", 50))
			{
				lat4p = 1;
			}
			else if (strncmp(lat4s, "Trust Me", 50))
			{
				lat4p = 2;
			}
		}
		else if (name == 11)
		{
			if (strncmp(lat4s, "Second Hand News", 50))
			{
				lat4p = 1;
			}
			else if (strncmp(lat4s, "Dreams", 50))
			{
				lat4p = 2;
			}
			else if (strncmp(lat4s, "Never Going Back Again", 50))
			{
				lat4p = 3;
			}
			else if (strncmp(lat4s, "Don't Stop", 50))
			{
				lat4p = 4;
			}
			else if (strncmp(lat4s, "Go Your Own Way", 50))
			{
				lat4p = 5;
			}
			else if (strncmp(lat4s, "Songbird", 50))
			{
				lat4p = 6;
			}
			else if (strncmp(lat4s, "The Chain", 50))
			{
				lat4p = 7;
			}
			else if (strncmp(lat4s, "You Make Loving Fun", 50))
			{
				lat4p = 8;
			}
			else if (strncmp(lat4s, "I Don't Want to Know", 50))
			{
				lat4p = 9;
			}
			else if (strncmp(lat4s, "Oh Daddy", 50))
			{
				lat4p = 0;
			}
			else if (strncmp(lat4s, "Gold Dust Woman", 50))
			{
				lat4p = 1;
			}
		}
		printf("What was the name of the band the fifth song was by?\n");
		scanf("%s", lat5a);
		if (strncmp(lat5a, "Bruce Springsteen", 50))
		{
			name = 0;
		}
		else if (strncmp(lat5a, "Warren Zevon", 50))
		{
			name = 1;
		}
		else if (strncmp(lat5a, "Jackson Browne", 50))
		{
			name = 2;
		}
		else if (strncmp(lat5a, "Marc Cohn", 50))
		{
			name = 3;
		}
		else if (strncmp(lat5a, "John Mellencamp", 50))
		{
			name = 4;
		}
		else if (strncmp(lat5a, "Counting Crows", 50))
		{
			name = 5;
		}
		else if (strncmp(lat5a, "Bob Seger", 50))
		{
			name = 6;
		}
		else if (strncmp(lat5a, "Blues Traveler", 50))
		{
			name = 7;
		}
		else if (strncmp(lat5a, "Audioslave", 50))
		{
			name = 8;
		}
		else if (strncmp(lat5a, "Social Distortion", 50))
		{
			name = 9;
		}
		else if (strncmp(lat5a, "The Fray", 50))
		{
			name = 10;
		}
		else if (strncmp(lat5a, "Fleetwood Mac", 50))
		{
			name = 11;
		}
		printf("What was the name of the fifth song?\n");
		scanf("%s", lat5s);
		if (name = 0)
		{
			if (strncmp(lat5s, "Lonesome Day", 50))
			{
				lat5p = 1;
			}
			else if (strncmp(lat5s, "Into the Fire", 50))
			{
				lat5p = 2;
			}
			else if (strncmp(lat5s, "Waitin' on a Sunny Day", 50))
			{
				lat5p = 3;
			}
			else if (strncmp(lat5s, "Nothing Man", 50))
			{
				lat5p = 4;
			}
			else if (strncmp(lat5s, "Countin' on a Miracle", 50))
			{
				lat5p = 5;
			}
			else if (strncmp(lat5s, "Empty Sky", 50))
			{
				lat5p = 6;
			}
			else if (strncmp(lat5s, "Worlds Apart", 50))
			{
				lat5p = 7;
			}
			else if (strncmp(lat5s, "Let's Be Friends (Skin to Skin)", 50))
			{
				lat5p = 8;
			}
			else if (strncmp(lat5s, "Further On (Up the Road)", 50))
			{
				lat5p = 9;
			}
			else if (strncmp(lat5s, "The Fuse", 50))
			{
				lat5p = 0;
			}
			else if (strncmp(lat5s, "Mary's Place", 50))
			{
				lat5p = 1;
			}
			else if (strncmp(lat5s, "You're Missing", 50))
			{
				lat5p = 2;
			}
			else if (strncmp(lat5s, "The Rising", 50))
			{
				lat5p = 3;
			}
			else if (strncmp(lat5s, "Paradise", 50))
			{
				lat5p = 4;
			}
			else if (strncmp(lat5s, "My City of Ruins", 50))
			{
				lat5p = 5;
			}
		}
		else if (name == 1)
		{
			if (strncmp(lat5s, "Dirty Life and Times", 50))
			{
				lat5p = 1;
			}
			else if (strncmp(lat5s, "Disorder in the House", 50))
			{
				lat5p = 2;
			}
			else if (strncmp(lat5s, "Knockin' on Heaven's Door", 50))
			{
				lat5p = 3;
			}
			else if (strncmp(lat5s, "Numb as a Statue", 50))
			{
				lat5p = 4;
			}
			else if (strncmp(lat5s, "She's Too Good For Me", 50))
			{
				lat5p = 5;
			}
			else if (strncmp(lat5s, "Prison Grove", 50))
			{
				lat5p = 6;
			}
			else if (strncmp(lat5s, "El Amor de Mi Vida", 50))
			{
				lat5p = 7;
			}
			else if (strncmp(lat5s, "The Rest of the Night", 50))
			{
				lat5p = 8;
			}
			else if (strncmp(lat5s, "Please Stay", 50))
			{
				lat5p = 9;
			}
			else if (strncmp(lat5s, "Rub Me Raw", 50))
			{
				lat5p = 0;
			}
			else if (strncmp(lat5s, "Keep Me in Your Heart", 50))
			{
				lat5p = 1;
			}
		}
		else if (name == 2)
		{
			if (strncmp(lat5s, "The Naked Ride Home", 50))
			{
				lat5p = 1;
			}
			else if (strncmp(lat5s, "The Night Inside Me", 50))
			{
				lat5p = 2;
			}
			else if (strncmp(lat5s, "Casino Nation", 50))
			{
				lat5p = 3;
			}
			else if (strncmp(lat5s, "For Taking the Trouble", 50))
			{
				lat5p = 4;
			}
			else if (strncmp(lat5s, "Never Stop", 50))
			{
				lat5p = 5;
			}
			else if (strncmp(lat5s, "Walking Town", 50))
			{
				lat5p = 6;
			}
			else if (strncmp(lat5s, "About My Imagination", 50))
			{
				lat5p = 7;
			}
			else if (strncmp(lat5s, "Sergio Leone", 50))
			{
				lat5p = 8;
			}
			else if (strncmp(lat5s, "Don't You Want to Be There", 50))
			{
				lat5p = 9;
			}
			else if (strncmp(lat5s, "My Stunning Mystery Companion", 50))
			{
				lat5p = 0;
			}
		}
		else if (name == 3)
		{
			if (strncmp(lat5s, "Walking in Memphis", 50))
			{
				lat5p = 1;
			}
			else if (strncmp(lat5s, "Ghost Train", 50))
			{
				lat5p = 2;
			}
			else if (strncmp(lat5s, "Silver Thunderbird", 50))
			{
				lat5p = 3;
			}
			else if (strncmp(lat5s, "Dig Down Deep", 50))
			{
				lat5p = 4;
			}
			else if (strncmp(lat5s, "Walk on Water", 50))
			{
				lat5p = 5;
			}
			else if (strncmp(lat5s, "Miles Away", 50))
			{
				lat5p = 6;
			}
			else if (strncmp(lat5s, "Saving the Best for Last", 50))
			{
				lat5p = 7;
			}
			else if (strncmp(lat5s, "Strangers in a Car", 50))
			{
				lat5p = 8;
			}
			else if (strncmp(lat5s, "29 Ways", 50))
			{
				lat5p = 9;
			}
			else if (strncmp(lat5s, "Perfect Love", 50))
			{
				lat5p = 0;
			}
			else if (strncmp(lat5s, "True Companion", 50))
			{
				lat5p = 1;
			}
		}
		else if (name == 4)
		{
			if (strncmp(lat5s, "Paper in Fire", 50))
			{
				lat5p = 1;
			}
			else if (strncmp(lat5s, "Down and Out in Paradise", 50))
			{
				lat5p = 2;
			}
			else if (strncmp(lat5s, "Check it Out", 50))
			{
				lat5p = 3;
			}
			else if (strncmp(lat5s, "The Real Life", 50))
			{
				lat5p = 4;
			}
			else if (strncmp(lat5s, "Cherry Bomb", 50))
			{
				lat5p = 5;
			}
			else if (strncmp(lat5s, "We Are the People", 50))
			{
				lat5p = 6;
			}
			else if (strncmp(lat5s, "Empty Hands", 50))
			{
				lat5p = 7;
			}
			else if (strncmp(lat5s, "Hard Times for an Honest Man", 50))
			{
				lat5p = 8;
			}
			else if (strncmp(lat5s, "Hotdogs and Hamburgers", 50))
			{
				lat5p = 9;
			}
			else if (strncmp(lat5s, "Rooty Toot Toot", 50))
			{
				lat5p = 0;
			}
		}
		else if (name == 5)
		{
			if (strncmp(lat5s, "Round Here", 50))
			{
				lat5p = 1;
			}
			else if (strncmp(lat5s, "Omaha", 50))
			{
				lat5p = 2;
			}
			else if (strncmp(lat5s, "Mr. Jones", 50))
			{
				lat5p = 3;
			}
			else if (strncmp(lat5s, "Perfect Blue Buildings", 50))
			{
				lat5p = 4;
			}
			else if (strncmp(lat5s, "Anna Begins", 50))
			{
				lat5p = 5;
			}
			else if (strncmp(lat5s, "Time and Time Again", 50))
			{
				lat5p = 6;
			}
			else if (strncmp(lat5s, "Rain King", 50))
			{
				lat5p = 7;
			}
			else if (strncmp(lat5s, "Sullivan Street", 50))
			{
				lat5p = 8;
			}
			else if (strncmp(lat5s, "Ghost Train", 50))
			{
				lat5p = 9;
			}
			else if (strncmp(lat5s, "Raining in Baltimore", 50))
			{
				lat5p = 0;
			}
			else if (strncmp(lat5s, "A Murder of One", 50))
			{
				lat5p = 1;
			}
		}
		else if (name == 6)
		{
			if (strncmp(lat5s, "The Horizontal Bop", 50))
			{
				lat5p = 1;
			}
			else if (strncmp(lat5s, "You'll Accomp'ny Me", 50))
			{
				lat5p = 2;
			}
			else if (strncmp(lat5s, "Her Strut", 50))
			{
				lat5p = 3;
			}
			else if (strncmp(lat5s, "No Man's Land", 50))
			{
				lat5p = 4;
			}
			else if (strncmp(lat5s, "Long Twin Silver Line", 50))
			{
				lat5p = 5;
			}
			else if (strncmp(lat5s, "Against the Wind", 50))
			{
				lat5p = 6;
			}
			else if (strncmp(lat5s, "Good for Me", 50))
			{
				lat5p = 7;
			}
			else if (strncmp(lat5s, "Betty Lou's Gettin' Out Tonight", 50))
			{
				lat5p = 8;
			}
			else if (strncmp(lat5s, "Fire Lake", 50))
			{
				lat5p = 9;
			}
			else if (strncmp(lat5s, "Shinin' Brightly", 50))
			{
				lat5p = 0;
			}
		}
		else if (name == 7)
		{
			if (strncmp(lat5s, "Run-Around", 50))
			{
				lat5p = 1;
			}
			else if (strncmp(lat5s, "Stand", 50))
			{
				lat5p = 2;
			}
			else if (strncmp(lat5s, "Look Around", 50))
			{
				lat5p = 3;
			}
			else if (strncmp(lat5s, "Fallible", 50))
			{
				lat5p = 4;
			}
			else if (strncmp(lat5s, "The Mountains Win Again", 50))
			{
				lat5p = 5;
			}
			else if (strncmp(lat5s, "Freedom", 50))
			{
				lat5p = 6;
			}
			else if (strncmp(lat5s, "Crash Burn", 50))
			{
				lat5p = 7;
			}
			else if (strncmp(lat5s, "Price to Pay", 50))
			{
				lat5p = 8;
			}
			else if (strncmp(lat5s, "Hook", 50))
			{
				lat5p = 9;
			}
			else if (strncmp(lat5s, "The Good, the Bad, and the Ugly", 50))
			{
				lat5p = 0;
			}
			else if (strncmp(lat5s, "Just Wait", 50))
			{
				lat5p = 1;
			}
			else if (strncmp(lat5s, "Brother John", 50))
			{
				lat5p = 2;
			}
		}
		else if (name == 8)
		{
			if (strncmp(lat5s, "Cochise", 50))
			{
				lat5p = 1;
			}
			else if (strncmp(lat5s, "Show Me How to Live", 50))
			{
				lat5p = 2;
			}
			else if (strncmp(lat5s, "Gasoline", 50))
			{
				lat5p = 3;
			}
			else if (strncmp(lat5s, "What You Are", 50))
			{
				lat5p = 4;
			}
			else if (strncmp(lat5s, "Like a Stone", 50))
			{
				lat5p = 5;
			}
			else if (strncmp(lat5s, "Set It Off", 50))
			{
				lat5p = 6;
			}
			else if (strncmp(lat5s, "Shadow on the Sun", 50))
			{
				lat5p = 7;
			}
			else if (strncmp(lat5s, "I Am the Highway", 50))
			{
				lat5p = 8;
			}
			else if (strncmp(lat5s, "Exploder", 50))
			{
				lat5p = 9;
			}
			else if (strncmp(lat5s, "Hypnotize", 50))
			{
				lat5p = 0;
			}
			else if (strncmp(lat5s, "Bring Em Back Alive", 50))
			{
				lat5p = 1;
			}
			else if (strncmp(lat5s, "Light My Way", 50))
			{
				lat5p = 2;
			}
			else if (strncmp(lat5s, "Getaway Car", 50))
			{
				lat5p = 3;
			}
			else if (strncmp(lat5s, "The Last Remaining Light", 50))
			{
				lat5p = 4;
			}
		}
		else if (name == 9)
		{
			if (strncmp(lat5s, "So Far Away", 50))
			{
				lat5p = 1;
			}
			else if (strncmp(lat5s, "Let It Be Me", 50))
			{
				lat5p = 2;
			}
			else if (strncmp(lat5s, "Story of My Life", 50))
			{
				lat5p = 3;
			}
			else if (strncmp(lat5s, "Sick Boys", 50))
			{
				lat5p = 4;
			}
			else if (strncmp(lat5s, "Ring of Fire", 50))
			{
				lat5p = 5;
			}
			else if (strncmp(lat5s, "Ball and Chain", 50))
			{
				lat5p = 6;
			}
			else if (strncmp(lat5s, "It Coulda Been Me", 50))
			{
				lat5p = 7;
			}
			else if (strncmp(lat5s, "She's a Knockout", 50))
			{
				lat5p = 8;
			}
			else if (strncmp(lat5s, "A Place in My Heart", 50))
			{
				lat5p = 9;
			}
			else if (strncmp(lat5s, "Drug Train", 50))
			{
				lat5p = 0;
			}
		}
		else if (name == 10)
		{
			if (strncmp(lat5s, "She Is", 50))
			{
				lat5p = 1;
			}
			else if (strncmp(lat5s, "Over My Head (Cable Car)", 50))
			{
				lat5p = 2;
			}
			else if (strncmp(lat5s, "How to Save a Life", 50))
			{
				lat5p = 3;
			}
			else if (strncmp(lat5s, "All at Once", 50))
			{
				lat5p = 4;
			}
			else if (strncmp(lat5s, "Fall Away", 50))
			{
				lat5p = 5;
			}
			else if (strncmp(lat5s, "Heaven Forbid", 50))
			{
				lat5p = 6;
			}
			else if (strncmp(lat5s, "Look After You", 50))
			{
				lat5p = 7;
			}
			else if (strncmp(lat5s, "Hundred", 50))
			{
				lat5p = 8;
			}
			else if (strncmp(lat5s, "Vienna", 50))
			{
				lat5p = 9;
			}
			else if (strncmp(lat5s, "Dead Wrong", 50))
			{
				lat5p = 0;
			}
			else if (strncmp(lat5s, "Little House", 50))
			{
				lat5p = 1;
			}
			else if (strncmp(lat5s, "Trust Me", 50))
			{
				lat5p = 2;
			}
		}
		else if (name == 11)
		{
			if (strncmp(lat5s, "Second Hand News", 50))
			{
				lat5p = 1;
			}
			else if (strncmp(lat5s, "Dreams", 50))
			{
				lat5p = 2;
			}
			else if (strncmp(lat5s, "Never Going Back Again", 50))
			{
				lat5p = 3;
			}
			else if (strncmp(lat5s, "Don't Stop", 50))
			{
				lat5p = 4;
			}
			else if (strncmp(lat5s, "Go Your Own Way", 50))
			{
				lat5p = 5;
			}
			else if (strncmp(lat5s, "Songbird", 50))
			{
				lat5p = 6;
			}
			else if (strncmp(lat5s, "The Chain", 50))
			{
				lat5p = 7;
			}
			else if (strncmp(lat5s, "You Make Loving Fun", 50))
			{
				lat5p = 8;
			}
			else if (strncmp(lat5s, "I Don't Want to Know", 50))
			{
				lat5p = 9;
			}
			else if (strncmp(lat5s, "Oh Daddy", 50))
			{
				lat5p = 0;
			}
			else if (strncmp(lat5s, "Gold Dust Woman", 50))
			{
				lat5p = 1;
			}
		}
		printf("What was the name of the band the sixth song was by?\n");
		scanf("%s", lon1a);
		if (strncmp(lon1a, "Bruce Springsteen", 50))
		{
			name = 0;
		}
		else if (strncmp(lon1a, "Warren Zevon", 50))
		{
			name = 1;
		}
		else if (strncmp(lon1a, "Jackson Browne", 50))
		{
			name = 2;
		}
		else if (strncmp(lon1a, "Marc Cohn", 50))
		{
			name = 3;
		}
		else if (strncmp(lon1a, "John Mellencamp", 50))
		{
			name = 4;
		}
		else if (strncmp(lon1a, "Counting Crows", 50))
		{
			name = 5;
		}
		else if (strncmp(lon1a, "Bob Seger", 50))
		{
			name = 6;
		}
		else if (strncmp(lon1a, "Blues Traveler", 50))
		{
			name = 7;
		}
		else if (strncmp(lon1a, "Audioslave", 50))
		{
			name = 8;
		}
		else if (strncmp(lon1a, "Social Distortion", 50))
		{
			name = 9;
		}
		else if (strncmp(lon1a, "The Fray", 50))
		{
			name = 10;
		}
		else if (strncmp(lon1a, "Fleetwood Mac", 50))
		{
			name = 11;
		}
		printf("What was the name of the sixth song?\n");
		scanf("%s", lon1s);
		if (name = 0)
		{
			if (strncmp(lon6s, "Lonesome Day", 50))
			{
				lon1p = 1;
			}
			else if (strncmp(lon6s, "Into the Fire", 50))
			{
				lon1p = 2;
			}
			else if (strncmp(lon6s, "Waitin' on a Sunny Day", 50))
			{
				lon1p = 3;
			}
			else if (strncmp(lon6s, "Nothing Man", 50))
			{
				lon1p = 4;
			}
			else if (strncmp(lon6s, "Countin' on a Miracle", 50))
			{
				lon1p = 5;
			}
			else if (strncmp(lon6s, "Empty Sky", 50))
			{
				lon1p = 6;
			}
			else if (strncmp(lon6s, "Worlds Apart", 50))
			{
				lon1p = 7;
			}
			else if (strncmp(lon6s, "Let's Be Friends (Skin to Skin)", 50))
			{
				lon1p = 8;
			}
			else if (strncmp(lon6s, "Further On (Up the Road)", 50))
			{
				lon1p = 9;
			}
			else if (strncmp(lon6s, "The Fuse", 50))
			{
				lon1p = 0;
			}
			else if (strncmp(lon6s, "Mary's Place", 50))
			{
				lon1p = 1;
			}
			else if (strncmp(lon6s, "You're Missing", 50))
			{
				lon1p = 2;
			}
			else if (strncmp(lon6s, "The Rising", 50))
			{
				lon1p = 3;
			}
			else if (strncmp(lon6s, "Paradise", 50))
			{
				lon1p = 4;
			}
			else if (strncmp(lon6s, "My City of Ruins", 50))
			{
				lon1p = 5;
			}
		}
		else if (name == 1)
		{
			if (strncmp(lon6s, "Dirty Life and Times", 50))
			{
				lon1p = 1;
			}
			else if (strncmp(lon6s, "Disorder in the House", 50))
			{
				lon1p = 2;
			}
			else if (strncmp(lon6s, "Knockin' on Heaven's Door", 50))
			{
				lon1p = 3;
			}
			else if (strncmp(lon6s, "Numb as a Statue", 50))
			{
				lon1p = 4;
			}
			else if (strncmp(lon6s, "She's Too Good For Me", 50))
			{
				lon1p = 5;
			}
			else if (strncmp(lon6s, "Prison Grove", 50))
			{
				lon1p = 6;
			}
			else if (strncmp(lon6s, "El Amor de Mi Vida", 50))
			{
				lon1p = 7;
			}
			else if (strncmp(lon6s, "The Rest of the Night", 50))
			{
				lon1p = 8;
			}
			else if (strncmp(lon6s, "Please Stay", 50))
			{
				lon1p = 9;
			}
			else if (strncmp(lon6s, "Rub Me Raw", 50))
			{
				lon1p = 0;
			}
			else if (strncmp(lon6s, "Keep Me in Your Heart", 50))
			{
				lon1p = 1;
			}
		}
		else if (name == 2)
		{
			if (strncmp(lon6s, "The Naked Ride Home", 50))
			{
				lon1p = 1;
			}
			else if (strncmp(lon6s, "The Night Inside Me", 50))
			{
				lon1p = 2;
			}
			else if (strncmp(lon6s, "Casino Nation", 50))
			{
				lon1p = 3;
			}
			else if (strncmp(lon6s, "For Taking the Trouble", 50))
			{
				lon1p = 4;
			}
			else if (strncmp(lon6s, "Never Stop", 50))
			{
				lon1p = 5;
			}
			else if (strncmp(lon6s, "Walking Town", 50))
			{
				lon1p = 6;
			}
			else if (strncmp(lon6s, "About My Imagination", 50))
			{
				lon1p = 7;
			}
			else if (strncmp(lon6s, "Sergio Leone", 50))
			{
				lon1p = 8;
			}
			else if (strncmp(lon6s, "Don't You Want to Be There", 50))
			{
				lon1p = 9;
			}
			else if (strncmp(lon6s, "My Stunning Mystery Companion", 50))
			{
				lon1p = 0;
			}
		}
		else if (name == 3)
		{
			if (strncmp(lon6s, "Walking in Memphis", 50))
			{
				lon1p = 1;
			}
			else if (strncmp(lon6s, "Ghost Train", 50))
			{
				lon1p = 2;
			}
			else if (strncmp(lon6s, "Silver Thunderbird", 50))
			{
				lon1p = 3;
			}
			else if (strncmp(lon6s, "Dig Down Deep", 50))
			{
				lon1p = 4;
			}
			else if (strncmp(lon6s, "Walk on Water", 50))
			{
				lon1p = 5;
			}
			else if (strncmp(lon6s, "Miles Away", 50))
			{
				lon1p = 6;
			}
			else if (strncmp(lon6s, "Saving the Best for Last", 50))
			{
				lon1p = 7;
			}
			else if (strncmp(lon6s, "Strangers in a Car", 50))
			{
				lon1p = 8;
			}
			else if (strncmp(lon6s, "29 Ways", 50))
			{
				lon1p = 9;
			}
			else if (strncmp(lon6s, "Perfect Love", 50))
			{
				lon1p = 0;
			}
			else if (strncmp(lon6s, "True Companion", 50))
			{
				lon1p = 1;
			}
		}
		else if (name == 4)
		{
			if (strncmp(lon6s, "Paper in Fire", 50))
			{
				lon1p = 1;
			}
			else if (strncmp(lon6s, "Down and Out in Paradise", 50))
			{
				lon1p = 2;
			}
			else if (strncmp(lon6s, "Check it Out", 50))
			{
				lon1p = 3;
			}
			else if (strncmp(lon6s, "The Real Life", 50))
			{
				lon1p = 4;
			}
			else if (strncmp(lon6s, "Cherry Bomb", 50))
			{
				lon1p = 5;
			}
			else if (strncmp(lon6s, "We Are the People", 50))
			{
				lon1p = 6;
			}
			else if (strncmp(lon6s, "Empty Hands", 50))
			{
				lon1p = 7;
			}
			else if (strncmp(lon6s, "Hard Times for an Honest Man", 50))
			{
				lon1p = 8;
			}
			else if (strncmp(lon6s, "Hotdogs and Hamburgers", 50))
			{
				lon1p = 9;
			}
			else if (strncmp(lon6s, "Rooty Toot Toot", 50))
			{
				lon1p = 0;
			}
		}
		else if (name == 5)
		{
			if (strncmp(lon6s, "Round Here", 50))
			{
				lon1p = 1;
			}
			else if (strncmp(lon6s, "Omaha", 50))
			{
				lon1p = 2;
			}
			else if (strncmp(lon6s, "Mr. Jones", 50))
			{
				lon1p = 3;
			}
			else if (strncmp(lon6s, "Perfect Blue Buildings", 50))
			{
				lon1p = 4;
			}
			else if (strncmp(lon6s, "Anna Begins", 50))
			{
				lon1p = 5;
			}
			else if (strncmp(lon6s, "Time and Time Again", 50))
			{
				lon1p = 6;
			}
			else if (strncmp(lon6s, "Rain King", 50))
			{
				lon1p = 7;
			}
			else if (strncmp(lon6s, "Sullivan Street", 50))
			{
				lon1p = 8;
			}
			else if (strncmp(lon6s, "Ghost Train", 50))
			{
				lon1p = 9;
			}
			else if (strncmp(lon6s, "Raining in Baltimore", 50))
			{
				lon1p = 0;
			}
			else if (strncmp(lon6s, "A Murder of One", 50))
			{
				lon1p = 1;
			}
		}
		else if (name == 6)
		{
			if (strncmp(lon6s, "The Horizontal Bop", 50))
			{
				lon1p = 1;
			}
			else if (strncmp(lon6s, "You'll Accomp'ny Me", 50))
			{
				lon1p = 2;
			}
			else if (strncmp(lon6s, "Her Strut", 50))
			{
				lon1p = 3;
			}
			else if (strncmp(lon6s, "No Man's Land", 50))
			{
				lon1p = 4;
			}
			else if (strncmp(lon6s, "Long Twin Silver Line", 50))
			{
				lon1p = 5;
			}
			else if (strncmp(lon6s, "Against the Wind", 50))
			{
				lon1p = 6;
			}
			else if (strncmp(lon6s, "Good for Me", 50))
			{
				lon1p = 7;
			}
			else if (strncmp(lon6s, "Betty Lou's Gettin' Out Tonight", 50))
			{
				lon1p = 8;
			}
			else if (strncmp(lon6s, "Fire Lake", 50))
			{
				lon1p = 9;
			}
			else if (strncmp(lon6s, "Shinin' Brightly", 50))
			{
				lon1p = 0;
			}
		}
		else if (name == 7)
		{
			if (strncmp(lon6s, "Run-Around", 50))
			{
				lon1p = 1;
			}
			else if (strncmp(lon6s, "Stand", 50))
			{
				lon1p = 2;
			}
			else if (strncmp(lon6s, "Look Around", 50))
			{
				lon1p = 3;
			}
			else if (strncmp(lon6s, "Fallible", 50))
			{
				lon1p = 4;
			}
			else if (strncmp(lon6s, "The Mountains Win Again", 50))
			{
				lon1p = 5;
			}
			else if (strncmp(lon6s, "Freedom", 50))
			{
				lon1p = 6;
			}
			else if (strncmp(lon6s, "Crash Burn", 50))
			{
				lon1p = 7;
			}
			else if (strncmp(lon6s, "Price to Pay", 50))
			{
				lon1p = 8;
			}
			else if (strncmp(lon6s, "Hook", 50))
			{
				lon1p = 9;
			}
			else if (strncmp(lon6s, "The Good, the Bad, and the Ugly", 50))
			{
				lon1p = 0;
			}
			else if (strncmp(lon6s, "Just Wait", 50))
			{
				lon1p = 1;
			}
			else if (strncmp(lon6s, "Brother John", 50))
			{
				lon1p = 2;
			}
		}
		else if (name == 8)
		{
			if (strncmp(lon6s, "Cochise", 50))
			{
				lon1p = 1;
			}
			else if (strncmp(lon6s, "Show Me How to Live", 50))
			{
				lon1p = 2;
			}
			else if (strncmp(lon6s, "Gasoline", 50))
			{
				lon1p = 3;
			}
			else if (strncmp(lon6s, "What You Are", 50))
			{
				lon1p = 4;
			}
			else if (strncmp(lon6s, "Like a Stone", 50))
			{
				lon1p = 5;
			}
			else if (strncmp(lon6s, "Set It Off", 50))
			{
				lon1p = 6;
			}
			else if (strncmp(lon6s, "Shadow on the Sun", 50))
			{
				lon1p = 7;
			}
			else if (strncmp(lon6s, "I Am the Highway", 50))
			{
				lon1p = 8;
			}
			else if (strncmp(lon6s, "Exploder", 50))
			{
				lon1p = 9;
			}
			else if (strncmp(lon6s, "Hypnotize", 50))
			{
				lon1p = 0;
			}
			else if (strncmp(lon6s, "Bring Em Back Alive", 50))
			{
				lon1p = 1;
			}
			else if (strncmp(lon6s, "Light My Way", 50))
			{
				lon1p = 2;
			}
			else if (strncmp(lon6s, "Getaway Car", 50))
			{
				lon1p = 3;
			}
			else if (strncmp(lon6s, "The Last Remaining Light", 50))
			{
				lon1p = 4;
			}
		}
		else if (name == 9)
		{
			if (strncmp(lon6s, "So Far Away", 50))
			{
				lon1p = 1;
			}
			else if (strncmp(lon6s, "Let It Be Me", 50))
			{
				lon1p = 2;
			}
			else if (strncmp(lon6s, "Story of My Life", 50))
			{
				lon1p = 3;
			}
			else if (strncmp(lon6s, "Sick Boys", 50))
			{
				lon1p = 4;
			}
			else if (strncmp(lon6s, "Ring of Fire", 50))
			{
				lon1p = 5;
			}
			else if (strncmp(lon6s, "Ball and Chain", 50))
			{
				lon1p = 6;
			}
			else if (strncmp(lon6s, "It Coulda Been Me", 50))
			{
				lon1p = 7;
			}
			else if (strncmp(lon6s, "She's a Knockout", 50))
			{
				lon1p = 8;
			}
			else if (strncmp(lon6s, "A Place in My Heart", 50))
			{
				lon1p = 9;
			}
			else if (strncmp(lon6s, "Drug Train", 50))
			{
				lon1p = 0;
			}
		}
		else if (name == 10)
		{
			if (strncmp(lon6s, "She Is", 50))
			{
				lon1p = 1;
			}
			else if (strncmp(lon6s, "Over My Head (Cable Car)", 50))
			{
				lon1p = 2;
			}
			else if (strncmp(lon6s, "How to Save a Life", 50))
			{
				lon1p = 3;
			}
			else if (strncmp(lon6s, "All at Once", 50))
			{
				lon1p = 4;
			}
			else if (strncmp(lon6s, "Fall Away", 50))
			{
				lon1p = 5;
			}
			else if (strncmp(lon6s, "Heaven Forbid", 50))
			{
				lon1p = 6;
			}
			else if (strncmp(lon6s, "Look After You", 50))
			{
				lon1p = 7;
			}
			else if (strncmp(lon6s, "Hundred", 50))
			{
				lon1p = 8;
			}
			else if (strncmp(lon6s, "Vienna", 50))
			{
				lon1p = 9;
			}
			else if (strncmp(lon6s, "Dead Wrong", 50))
			{
				lon1p = 0;
			}
			else if (strncmp(lon6s, "Little House", 50))
			{
				lon1p = 1;
			}
			else if (strncmp(lon6s, "Trust Me", 50))
			{
				lon1p = 2;
			}
		}
		else if (name == 11)
		{
			if (strncmp(lon6s, "Second Hand News", 50))
			{
				lon1p = 1;
			}
			else if (strncmp(lon6s, "Dreams", 50))
			{
				lon1p = 2;
			}
			else if (strncmp(lon6s, "Never Going Back Again", 50))
			{
				lon1p = 3;
			}
			else if (strncmp(lon6s, "Don't Stop", 50))
			{
				lon1p = 4;
			}
			else if (strncmp(lon6s, "Go Your Own Way", 50))
			{
				lon1p = 5;
			}
			else if (strncmp(lon6s, "Songbird", 50))
			{
				lon1p = 6;
			}
			else if (strncmp(lon6s, "The Chain", 50))
			{
				lon1p = 7;
			}
			else if (strncmp(lon6s, "You Make Loving Fun", 50))
			{
				lon1p = 8;
			}
			else if (strncmp(lon6s, "I Don't Want to Know", 50))
			{
				lon1p = 9;
			}
			else if (strncmp(lon6s, "Oh Daddy", 50))
			{
				lon1p = 0;
			}
			else if (strncmp(lon6s, "Gold Dust Woman", 50))
			{
				lon1p = 1;
			}
		}
		printf("What was the name of the band the seventh song was by?\n");
		scanf("%s", lon2a);
		if (strncmp(lon2a, "Bruce Springsteen", 50))
		{
			name = 0;
		}
		else if (strncmp(lon2a, "Warren Zevon", 50))
		{
			name = 1;
		}
		else if (strncmp(lon2a, "Jackson Browne", 50))
		{
			name = 2;
		}
		else if (strncmp(lon2a, "Marc Cohn", 50))
		{
			name = 3;
		}
		else if (strncmp(lon2a, "John Mellencamp", 50))
		{
			name = 4;
		}
		else if (strncmp(lon2a, "Counting Crows", 50))
		{
			name = 5;
		}
		else if (strncmp(lon2a, "Bob Seger", 50))
		{
			name = 6;
		}
		else if (strncmp(lon2a, "Blues Traveler", 50))
		{
			name = 7;
		}
		else if (strncmp(lon2a, "Audioslave", 50))
		{
			name = 8;
		}
		else if (strncmp(lon2a, "Social Distortion", 50))
		{
			name = 9;
		}
		else if (strncmp(lon2a, "The Fray", 50))
		{
			name = 10;
		}
		else if (strncmp(lon2a, "Fleetwood Mac", 50))
		{
			name = 11;
		}
		printf("What was the name of the seventh song?\n");
		scanf("%s", lon2s);
		if (name = 0)
		{
			if (strncmp(lon2s, "Lonesome Day", 50))
			{
				lon2p = 1;
			}
			else if (strncmp(lon2s, "Into the Fire", 50))
			{
				lon2p = 2;
			}
			else if (strncmp(lon2s, "Waitin' on a Sunny Day", 50))
			{
				lon2p = 3;
			}
			else if (strncmp(lon2s, "Nothing Man", 50))
			{
				lon2p = 4;
			}
			else if (strncmp(lon2s, "Countin' on a Miracle", 50))
			{
				lon2p = 5;
			}
			else if (strncmp(lon2s, "Empty Sky", 50))
			{
				lon2p = 6;
			}
			else if (strncmp(lon2s, "Worlds Apart", 50))
			{
				lon2p = 7;
			}
			else if (strncmp(lon2s, "Let's Be Friends (Skin to Skin)", 50))
			{
				lon2p = 8;
			}
			else if (strncmp(lon2s, "Further On (Up the Road)", 50))
			{
				lon2p = 9;
			}
			else if (strncmp(lon2s, "The Fuse", 50))
			{
				lon2p = 0;
			}
			else if (strncmp(lon2s, "Mary's Place", 50))
			{
				lon2p = 1;
			}
			else if (strncmp(lon2s, "You're Missing", 50))
			{
				lon2p = 2;
			}
			else if (strncmp(lon2s, "The Rising", 50))
			{
				lon2p = 3;
			}
			else if (strncmp(lon2s, "Paradise", 50))
			{
				lon2p = 4;
			}
			else if (strncmp(lon2s, "My City of Ruins", 50))
			{
				lon2p = 5;
			}
		}
		else if (name == 1)
		{
			if (strncmp(lon2s, "Dirty Life and Times", 50))
			{
				lon2p = 1;
			}
			else if (strncmp(lon2s, "Disorder in the House", 50))
			{
				lon2p = 2;
			}
			else if (strncmp(lon2s, "Knockin' on Heaven's Door", 50))
			{
				lon2p = 3;
			}
			else if (strncmp(lon2s, "Numb as a Statue", 50))
			{
				lon2p = 4;
			}
			else if (strncmp(lon2s, "She's Too Good For Me", 50))
			{
				lon2p = 5;
			}
			else if (strncmp(lon2s, "Prison Grove", 50))
			{
				lon2p = 6;
			}
			else if (strncmp(lon2s, "El Amor de Mi Vida", 50))
			{
				lon2p = 7;
			}
			else if (strncmp(lon2s, "The Rest of the Night", 50))
			{
				lon2p = 8;
			}
			else if (strncmp(lon2s, "Please Stay", 50))
			{
				lon2p = 9;
			}
			else if (strncmp(lon2s, "Rub Me Raw", 50))
			{
				lon2p = 0;
			}
			else if (strncmp(lon2s, "Keep Me in Your Heart", 50))
			{
				lon2p = 1;
			}
		}
		else if (name == 2)
		{
			if (strncmp(lon2s, "The Naked Ride Home", 50))
			{
				lon2p = 1;
			}
			else if (strncmp(lon2s, "The Night Inside Me", 50))
			{
				lon2p = 2;
			}
			else if (strncmp(lon2s, "Casino Nation", 50))
			{
				lon2p = 3;
			}
			else if (strncmp(lon2s, "For Taking the Trouble", 50))
			{
				lon2p = 4;
			}
			else if (strncmp(lon2s, "Never Stop", 50))
			{
				lon2p = 5;
			}
			else if (strncmp(lon2s, "Walking Town", 50))
			{
				lon2p = 6;
			}
			else if (strncmp(lon2s, "About My Imagination", 50))
			{
				lon2p = 7;
			}
			else if (strncmp(lon2s, "Sergio Leone", 50))
			{
				lon2p = 8;
			}
			else if (strncmp(lon2s, "Don't You Want to Be There", 50))
			{
				lon2p = 9;
			}
			else if (strncmp(lon2s, "My Stunning Mystery Companion", 50))
			{
				lon2p = 0;
			}
		}
		else if (name == 3)
		{
			if (strncmp(lon2s, "Walking in Memphis", 50))
			{
				lon2p = 1;
			}
			else if (strncmp(lon2s, "Ghost Train", 50))
			{
				lon2p = 2;
			}
			else if (strncmp(lon2s, "Silver Thunderbird", 50))
			{
				lon2p = 3;
			}
			else if (strncmp(lon2s, "Dig Down Deep", 50))
			{
				lon2p = 4;
			}
			else if (strncmp(lon2s, "Walk on Water", 50))
			{
				lon2p = 5;
			}
			else if (strncmp(lon2s, "Miles Away", 50))
			{
				lon2p = 6;
			}
			else if (strncmp(lon2s, "Saving the Best for Last", 50))
			{
				lon2p = 7;
			}
			else if (strncmp(lon2s, "Strangers in a Car", 50))
			{
				lon2p = 8;
			}
			else if (strncmp(lon2s, "29 Ways", 50))
			{
				lon2p = 9;
			}
			else if (strncmp(lon2s, "Perfect Love", 50))
			{
				lon2p = 0;
			}
			else if (strncmp(lon2s, "True Companion", 50))
			{
				lon2p = 1;
			}
		}
		else if (name == 4)
		{
			if (strncmp(lon2s, "Paper in Fire", 50))
			{
				lon2p = 1;
			}
			else if (strncmp(lon2s, "Down and Out in Paradise", 50))
			{
				lon2p = 2;
			}
			else if (strncmp(lon2s, "Check it Out", 50))
			{
				lon2p = 3;
			}
			else if (strncmp(lon2s, "The Real Life", 50))
			{
				lon2p = 4;
			}
			else if (strncmp(lon2s, "Cherry Bomb", 50))
			{
				lon2p = 5;
			}
			else if (strncmp(lon2s, "We Are the People", 50))
			{
				lon2p = 6;
			}
			else if (strncmp(lon2s, "Empty Hands", 50))
			{
				lon2p = 7;
			}
			else if (strncmp(lon2s, "Hard Times for an Honest Man", 50))
			{
				lon2p = 8;
			}
			else if (strncmp(lon2s, "Hotdogs and Hamburgers", 50))
			{
				lon2p = 9;
			}
			else if (strncmp(lon2s, "Rooty Toot Toot", 50))
			{
				lon2p = 0;
			}
		}
		else if (name == 5)
		{
			if (strncmp(lon2s, "Round Here", 50))
			{
				lon2p = 1;
			}
			else if (strncmp(lon2s, "Omaha", 50))
			{
				lon2p = 2;
			}
			else if (strncmp(lon2s, "Mr. Jones", 50))
			{
				lon2p = 3;
			}
			else if (strncmp(lon2s, "Perfect Blue Buildings", 50))
			{
				lon2p = 4;
			}
			else if (strncmp(lon2s, "Anna Begins", 50))
			{
				lon2p = 5;
			}
			else if (strncmp(lon2s, "Time and Time Again", 50))
			{
				lon2p = 6;
			}
			else if (strncmp(lon2s, "Rain King", 50))
			{
				lon2p = 7;
			}
			else if (strncmp(lon2s, "Sullivan Street", 50))
			{
				lon2p = 8;
			}
			else if (strncmp(lon2s, "Ghost Train", 50))
			{
				lon2p = 9;
			}
			else if (strncmp(lon2s, "Raining in Baltimore", 50))
			{
				lon2p = 0;
			}
			else if (strncmp(lon2s, "A Murder of One", 50))
			{
				lon2p = 1;
			}
		}
		else if (name == 6)
		{
			if (strncmp(lon2s, "The Horizontal Bop", 50))
			{
				lon2p = 1;
			}
			else if (strncmp(lon2s, "You'll Accomp'ny Me", 50))
			{
				lon2p = 2;
			}
			else if (strncmp(lon2s, "Her Strut", 50))
			{
				lon2p = 3;
			}
			else if (strncmp(lon2s, "No Man's Land", 50))
			{
				lon2p = 4;
			}
			else if (strncmp(lon2s, "Long Twin Silver Line", 50))
			{
				lon2p = 5;
			}
			else if (strncmp(lon2s, "Against the Wind", 50))
			{
				lon2p = 6;
			}
			else if (strncmp(lon2s, "Good for Me", 50))
			{
				lon2p = 7;
			}
			else if (strncmp(lon2s, "Betty Lou's Gettin' Out Tonight", 50))
			{
				lon2p = 8;
			}
			else if (strncmp(lon2s, "Fire Lake", 50))
			{
				lon2p = 9;
			}
			else if (strncmp(lon2s, "Shinin' Brightly", 50))
			{
				lon2p = 0;
			}
		}
		else if (name == 7)
		{
			if (strncmp(lon2s, "Run-Around", 50))
			{
				lon2p = 1;
			}
			else if (strncmp(lon2s, "Stand", 50))
			{
				lon2p = 2;
			}
			else if (strncmp(lon2s, "Look Around", 50))
			{
				lon2p = 3;
			}
			else if (strncmp(lon2s, "Fallible", 50))
			{
				lon2p = 4;
			}
			else if (strncmp(lon2s, "The Mountains Win Again", 50))
			{
				lon2p = 5;
			}
			else if (strncmp(lon2s, "Freedom", 50))
			{
				lon2p = 6;
			}
			else if (strncmp(lon2s, "Crash Burn", 50))
			{
				lon2p = 7;
			}
			else if (strncmp(lon2s, "Price to Pay", 50))
			{
				lon2p = 8;
			}
			else if (strncmp(lon2s, "Hook", 50))
			{
				lon2p = 9;
			}
			else if (strncmp(lon2s, "The Good, the Bad, and the Ugly", 50))
			{
				lon2p = 0;
			}
			else if (strncmp(lon2s, "Just Wait", 50))
			{
				lon2p = 1;
			}
			else if (strncmp(lon2s, "Brother John", 50))
			{
				lon2p = 2;
			}
		}
		else if (name == 8)
		{
			if (strncmp(lon2s, "Cochise", 50))
			{
				lon2p = 1;
			}
			else if (strncmp(lon2s, "Show Me How to Live", 50))
			{
				lon2p = 2;
			}
			else if (strncmp(lon2s, "Gasoline", 50))
			{
				lon2p = 3;
			}
			else if (strncmp(lon2s, "What You Are", 50))
			{
				lon2p = 4;
			}
			else if (strncmp(lon2s, "Like a Stone", 50))
			{
				lon2p = 5;
			}
			else if (strncmp(lon2s, "Set It Off", 50))
			{
				lon2p = 6;
			}
			else if (strncmp(lon2s, "Shadow on the Sun", 50))
			{
				lon2p = 7;
			}
			else if (strncmp(lon2s, "I Am the Highway", 50))
			{
				lon2p = 8;
			}
			else if (strncmp(lon2s, "Exploder", 50))
			{
				lon2p = 9;
			}
			else if (strncmp(lon2s, "Hypnotize", 50))
			{
				lon2p = 0;
			}
			else if (strncmp(lon2s, "Bring Em Back Alive", 50))
			{
				lon2p = 1;
			}
			else if (strncmp(lon2s, "Light My Way", 50))
			{
				lon2p = 2;
			}
			else if (strncmp(lon2s, "Getaway Car", 50))
			{
				lon2p = 3;
			}
			else if (strncmp(lon2s, "The Last Remaining Light", 50))
			{
				lon2p = 4;
			}
		}
		else if (name == 9)
		{
			if (strncmp(lon2s, "So Far Away", 50))
			{
				lon2p = 1;
			}
			else if (strncmp(lon2s, "Let It Be Me", 50))
			{
				lon2p = 2;
			}
			else if (strncmp(lon2s, "Story of My Life", 50))
			{
				lon2p = 3;
			}
			else if (strncmp(lon2s, "Sick Boys", 50))
			{
				lon2p = 4;
			}
			else if (strncmp(lon2s, "Ring of Fire", 50))
			{
				lon2p = 5;
			}
			else if (strncmp(lon2s, "Ball and Chain", 50))
			{
				lon2p = 6;
			}
			else if (strncmp(lon2s, "It Coulda Been Me", 50))
			{
				lon2p = 7;
			}
			else if (strncmp(lon2s, "She's a Knockout", 50))
			{
				lon2p = 8;
			}
			else if (strncmp(lon2s, "A Place in My Heart", 50))
			{
				lon2p = 9;
			}
			else if (strncmp(lon2s, "Drug Train", 50))
			{
				lon2p = 0;
			}
		}
		else if (name == 10)
		{
			if (strncmp(lon2s, "She Is", 50))
			{
				lon2p = 1;
			}
			else if (strncmp(lon2s, "Over My Head (Cable Car)", 50))
			{
				lon2p = 2;
			}
			else if (strncmp(lon2s, "How to Save a Life", 50))
			{
				lon2p = 3;
			}
			else if (strncmp(lon2s, "All at Once", 50))
			{
				lon2p = 4;
			}
			else if (strncmp(lon2s, "Fall Away", 50))
			{
				lon2p = 5;
			}
			else if (strncmp(lon2s, "Heaven Forbid", 50))
			{
				lon2p = 6;
			}
			else if (strncmp(lon2s, "Look After You", 50))
			{
				lon2p = 7;
			}
			else if (strncmp(lon2s, "Hundred", 50))
			{
				lon2p = 8;
			}
			else if (strncmp(lon2s, "Vienna", 50))
			{
				lon2p = 9;
			}
			else if (strncmp(lon2s, "Dead Wrong", 50))
			{
				lon2p = 0;
			}
			else if (strncmp(lon2s, "Little House", 50))
			{
				lon2p = 1;
			}
			else if (strncmp(lon2s, "Trust Me", 50))
			{
				lon2p = 2;
			}
		}
		else if (name == 11)
		{
			if (strncmp(lon2s, "Second Hand News", 50))
			{
				lon2p = 1;
			}
			else if (strncmp(lon2s, "Dreams", 50))
			{
				lon2p = 2;
			}
			else if (strncmp(lon2s, "Never Going Back Again", 50))
			{
				lon2p = 3;
			}
			else if (strncmp(lon2s, "Don't Stop", 50))
			{
				lon2p = 4;
			}
			else if (strncmp(lon2s, "Go Your Own Way", 50))
			{
				lon2p = 5;
			}
			else if (strncmp(lon2s, "Songbird", 50))
			{
				lon2p = 6;
			}
			else if (strncmp(lon2s, "The Chain", 50))
			{
				lon2p = 7;
			}
			else if (strncmp(lon2s, "You Make Loving Fun", 50))
			{
				lon2p = 8;
			}
			else if (strncmp(lon2s, "I Don't Want to Know", 50))
			{
				lon2p = 9;
			}
			else if (strncmp(lon2s, "Oh Daddy", 50))
			{
				lon2p = 0;
			}
			else if (strncmp(lon2s, "Gold Dust Woman", 50))
			{
				lon2p = 1;
			}
		}
		printf("What was the name of the band the eighth song was by?\n");
		scanf("%s", lon3a);
		if (strncmp(lon3a, "Bruce Springsteen", 50))
		{
			name = 0;
		}
		else if (strncmp(lon3a, "Warren Zevon", 50))
		{
			name = 1;
		}
		else if (strncmp(lon3a, "Jackson Browne", 50))
		{
			name = 2;
		}
		else if (strncmp(lon3a, "Marc Cohn", 50))
		{
			name = 3;
		}
		else if (strncmp(lon3a, "John Mellencamp", 50))
		{
			name = 4;
		}
		else if (strncmp(lon3a, "Counting Crows", 50))
		{
			name = 5;
		}
		else if (strncmp(lon3a, "Bob Seger", 50))
		{
			name = 6;
		}
		else if (strncmp(lon3a, "Blues Traveler", 50))
		{
			name = 7;
		}
		else if (strncmp(lon3a, "Audioslave", 50))
		{
			name = 8;
		}
		else if (strncmp(lon3a, "Social Distortion", 50))
		{
			name = 9;
		}
		else if (strncmp(lon3a, "The Fray", 50))
		{
			name = 10;
		}
		else if (strncmp(lon3a, "Fleetwood Mac", 50))
		{
			name = 11;
		}
		printf("What was the name of the eighth song?\n");
		scanf("%s", lon3s);
		if (name = 0)
		{
			if (strncmp(lon3s, "Lonesome Day", 50))
			{
				lon3p = 1;
			}
			else if (strncmp(lon3s, "Into the Fire", 50))
			{
				lon3p = 2;
			}
			else if (strncmp(lon3s, "Waitin' on a Sunny Day", 50))
			{
				lon3p = 3;
			}
			else if (strncmp(lon3s, "Nothing Man", 50))
			{
				lon3p = 4;
			}
			else if (strncmp(lon3s, "Countin' on a Miracle", 50))
			{
				lon3p = 5;
			}
			else if (strncmp(lon3s, "Empty Sky", 50))
			{
				lon3p = 6;
			}
			else if (strncmp(lon3s, "Worlds Apart", 50))
			{
				lon3p = 7;
			}
			else if (strncmp(lon3s, "Let's Be Friends (Skin to Skin)", 50))
			{
				lon3p = 8;
			}
			else if (strncmp(lon3s, "Further On (Up the Road)", 50))
			{
				lon3p = 9;
			}
			else if (strncmp(lon3s, "The Fuse", 50))
			{
				lon3p = 0;
			}
			else if (strncmp(lon3s, "Mary's Place", 50))
			{
				lon3p = 1;
			}
			else if (strncmp(lon3s, "You're Missing", 50))
			{
				lon3p = 2;
			}
			else if (strncmp(lon3s, "The Rising", 50))
			{
				lon3p = 3;
			}
			else if (strncmp(lon3s, "Paradise", 50))
			{
				lon3p = 4;
			}
			else if (strncmp(lon3s, "My City of Ruins", 50))
			{
				lon3p = 5;
			}
		}
		else if (name == 1)
		{
			if (strncmp(lon3s, "Dirty Life and Times", 50))
			{
				lon3p = 1;
			}
			else if (strncmp(lon3s, "Disorder in the House", 50))
			{
				lon3p = 2;
			}
			else if (strncmp(lon3s, "Knockin' on Heaven's Door", 50))
			{
				lon3p = 3;
			}
			else if (strncmp(lon3s, "Numb as a Statue", 50))
			{
				lon3p = 4;
			}
			else if (strncmp(lon3s, "She's Too Good For Me", 50))
			{
				lon3p = 5;
			}
			else if (strncmp(lon3s, "Prison Grove", 50))
			{
				lon3p = 6;
			}
			else if (strncmp(lon3s, "El Amor de Mi Vida", 50))
			{
				lon3p = 7;
			}
			else if (strncmp(lon3s, "The Rest of the Night", 50))
			{
				lon3p = 8;
			}
			else if (strncmp(lon3s, "Please Stay", 50))
			{
				lon3p = 9;
			}
			else if (strncmp(lon3s, "Rub Me Raw", 50))
			{
				lon3p = 0;
			}
			else if (strncmp(lon3s, "Keep Me in Your Heart", 50))
			{
				lon3p = 1;
			}
		}
		else if (name == 2)
		{
			if (strncmp(lon3s, "The Naked Ride Home", 50))
			{
				lon3p = 1;
			}
			else if (strncmp(lon3s, "The Night Inside Me", 50))
			{
				lon3p = 2;
			}
			else if (strncmp(lon3s, "Casino Nation", 50))
			{
				lon3p = 3;
			}
			else if (strncmp(lon3s, "For Taking the Trouble", 50))
			{
				lon3p = 4;
			}
			else if (strncmp(lon3s, "Never Stop", 50))
			{
				lon3p = 5;
			}
			else if (strncmp(lon3s, "Walking Town", 50))
			{
				lon3p = 6;
			}
			else if (strncmp(lon3s, "About My Imagination", 50))
			{
				lon3p = 7;
			}
			else if (strncmp(lon3s, "Sergio Leone", 50))
			{
				lon3p = 8;
			}
			else if (strncmp(lon3s, "Don't You Want to Be There", 50))
			{
				lon3p = 9;
			}
			else if (strncmp(lon3s, "My Stunning Mystery Companion", 50))
			{
				lon3p = 0;
			}
		}
		else if (name == 3)
		{
			if (strncmp(lon3s, "Walking in Memphis", 50))
			{
				lon3p = 1;
			}
			else if (strncmp(lon3s, "Ghost Train", 50))
			{
				lon3p = 2;
			}
			else if (strncmp(lon3s, "Silver Thunderbird", 50))
			{
				lon3p = 3;
			}
			else if (strncmp(lon3s, "Dig Down Deep", 50))
			{
				lon3p = 4;
			}
			else if (strncmp(lon3s, "Walk on Water", 50))
			{
				lon3p = 5;
			}
			else if (strncmp(lon3s, "Miles Away", 50))
			{
				lon3p = 6;
			}
			else if (strncmp(lon3s, "Saving the Best for Last", 50))
			{
				lon3p = 7;
			}
			else if (strncmp(lon3s, "Strangers in a Car", 50))
			{
				lon3p = 8;
			}
			else if (strncmp(lon3s, "29 Ways", 50))
			{
				lon3p = 9;
			}
			else if (strncmp(lon3s, "Perfect Love", 50))
			{
				lon3p = 0;
			}
			else if (strncmp(lon3s, "True Companion", 50))
			{
				lon3p = 1;
			}
		}
		else if (name == 4)
		{
			if (strncmp(lon3s, "Paper in Fire", 50))
			{
				lon3p = 1;
			}
			else if (strncmp(lon3s, "Down and Out in Paradise", 50))
			{
				lon3p = 2;
			}
			else if (strncmp(lon3s, "Check it Out", 50))
			{
				lon3p = 3;
			}
			else if (strncmp(lon3s, "The Real Life", 50))
			{
				lon3p = 4;
			}
			else if (strncmp(lon3s, "Cherry Bomb", 50))
			{
				lon3p = 5;
			}
			else if (strncmp(lon3s, "We Are the People", 50))
			{
				lon3p = 6;
			}
			else if (strncmp(lon3s, "Empty Hands", 50))
			{
				lon3p = 7;
			}
			else if (strncmp(lon3s, "Hard Times for an Honest Man", 50))
			{
				lon3p = 8;
			}
			else if (strncmp(lon3s, "Hotdogs and Hamburgers", 50))
			{
				lon3p = 9;
			}
			else if (strncmp(lon3s, "Rooty Toot Toot", 50))
			{
				lon3p = 0;
			}
		}
		else if (name == 5)
		{
			if (strncmp(lon3s, "Round Here", 50))
			{
				lon3p = 1;
			}
			else if (strncmp(lon3s, "Omaha", 50))
			{
				lon3p = 2;
			}
			else if (strncmp(lon3s, "Mr. Jones", 50))
			{
				lon3p = 3;
			}
			else if (strncmp(lon3s, "Perfect Blue Buildings", 50))
			{
				lon3p = 4;
			}
			else if (strncmp(lon3s, "Anna Begins", 50))
			{
				lon3p = 5;
			}
			else if (strncmp(lon3s, "Time and Time Again", 50))
			{
				lon3p = 6;
			}
			else if (strncmp(lon3s, "Rain King", 50))
			{
				lon3p = 7;
			}
			else if (strncmp(lon3s, "Sullivan Street", 50))
			{
				lon3p = 8;
			}
			else if (strncmp(lon3s, "Ghost Train", 50))
			{
				lon3p = 9;
			}
			else if (strncmp(lon3s, "Raining in Baltimore", 50))
			{
				lon3p = 0;
			}
			else if (strncmp(lon3s, "A Murder of One", 50))
			{
				lon3p = 1;
			}
		}
		else if (name == 6)
		{
			if (strncmp(lon3s, "The Horizontal Bop", 50))
			{
				lon3p = 1;
			}
			else if (strncmp(lon3s, "You'll Accomp'ny Me", 50))
			{
				lon3p = 2;
			}
			else if (strncmp(lon3s, "Her Strut", 50))
			{
				lon3p = 3;
			}
			else if (strncmp(lon3s, "No Man's Land", 50))
			{
				lon3p = 4;
			}
			else if (strncmp(lon3s, "Long Twin Silver Line", 50))
			{
				lon3p = 5;
			}
			else if (strncmp(lon3s, "Against the Wind", 50))
			{
				lon3p = 6;
			}
			else if (strncmp(lon3s, "Good for Me", 50))
			{
				lon3p = 7;
			}
			else if (strncmp(lon3s, "Betty Lou's Gettin' Out Tonight", 50))
			{
				lon3p = 8;
			}
			else if (strncmp(lon3s, "Fire Lake", 50))
			{
				lon3p = 9;
			}
			else if (strncmp(lon3s, "Shinin' Brightly", 50))
			{
				lon3p = 0;
			}
		}
		else if (name == 7)
		{
			if (strncmp(lon3s, "Run-Around", 50))
			{
				lon3p = 1;
			}
			else if (strncmp(lon3s, "Stand", 50))
			{
				lon3p = 2;
			}
			else if (strncmp(lon3s, "Look Around", 50))
			{
				lon3p = 3;
			}
			else if (strncmp(lon3s, "Fallible", 50))
			{
				lon3p = 4;
			}
			else if (strncmp(lon3s, "The Mountains Win Again", 50))
			{
				lon3p = 5;
			}
			else if (strncmp(lon3s, "Freedom", 50))
			{
				lon3p = 6;
			}
			else if (strncmp(lon3s, "Crash Burn", 50))
			{
				lon3p = 7;
			}
			else if (strncmp(lon3s, "Price to Pay", 50))
			{
				lon3p = 8;
			}
			else if (strncmp(lon3s, "Hook", 50))
			{
				lon3p = 9;
			}
			else if (strncmp(lon3s, "The Good, the Bad, and the Ugly", 50))
			{
				lon3p = 0;
			}
			else if (strncmp(lon3s, "Just Wait", 50))
			{
				lon3p = 1;
			}
			else if (strncmp(lon3s, "Brother John", 50))
			{
				lon3p = 2;
			}
		}
		else if (name == 8)
		{
			if (strncmp(lon3s, "Cochise", 50))
			{
				lon3p = 1;
			}
			else if (strncmp(lon3s, "Show Me How to Live", 50))
			{
				lon3p = 2;
			}
			else if (strncmp(lon3s, "Gasoline", 50))
			{
				lon3p = 3;
			}
			else if (strncmp(lon3s, "What You Are", 50))
			{
				lon3p = 4;
			}
			else if (strncmp(lon3s, "Like a Stone", 50))
			{
				lon3p = 5;
			}
			else if (strncmp(lon3s, "Set It Off", 50))
			{
				lon3p = 6;
			}
			else if (strncmp(lon3s, "Shadow on the Sun", 50))
			{
				lon3p = 7;
			}
			else if (strncmp(lon3s, "I Am the Highway", 50))
			{
				lon3p = 8;
			}
			else if (strncmp(lon3s, "Exploder", 50))
			{
				lon3p = 9;
			}
			else if (strncmp(lon3s, "Hypnotize", 50))
			{
				lon3p = 0;
			}
			else if (strncmp(lon3s, "Bring Em Back Alive", 50))
			{
				lon3p = 1;
			}
			else if (strncmp(lon3s, "Light My Way", 50))
			{
				lon3p = 2;
			}
			else if (strncmp(lon3s, "Getaway Car", 50))
			{
				lon3p = 3;
			}
			else if (strncmp(lon3s, "The Last Remaining Light", 50))
			{
				lon3p = 4;
			}
		}
		else if (name == 9)
		{
			if (strncmp(lon3s, "So Far Away", 50))
			{
				lon3p = 1;
			}
			else if (strncmp(lon3s, "Let It Be Me", 50))
			{
				lon3p = 2;
			}
			else if (strncmp(lon3s, "Story of My Life", 50))
			{
				lon3p = 3;
			}
			else if (strncmp(lon3s, "Sick Boys", 50))
			{
				lon3p = 4;
			}
			else if (strncmp(lon3s, "Ring of Fire", 50))
			{
				lon3p = 5;
			}
			else if (strncmp(lon3s, "Ball and Chain", 50))
			{
				lon3p = 6;
			}
			else if (strncmp(lon3s, "It Coulda Been Me", 50))
			{
				lon3p = 7;
			}
			else if (strncmp(lon3s, "She's a Knockout", 50))
			{
				lon3p = 8;
			}
			else if (strncmp(lon3s, "A Place in My Heart", 50))
			{
				lon3p = 9;
			}
			else if (strncmp(lon3s, "Drug Train", 50))
			{
				lon3p = 0;
			}
		}
		else if (name == 10)
		{
			if (strncmp(lon3s, "She Is", 50))
			{
				lon3p = 1;
			}
			else if (strncmp(lon3s, "Over My Head (Cable Car)", 50))
			{
				lon3p = 2;
			}
			else if (strncmp(lon3s, "How to Save a Life", 50))
			{
				lon3p = 3;
			}
			else if (strncmp(lon3s, "All at Once", 50))
			{
				lon3p = 4;
			}
			else if (strncmp(lon3s, "Fall Away", 50))
			{
				lon3p = 5;
			}
			else if (strncmp(lon3s, "Heaven Forbid", 50))
			{
				lon3p = 6;
			}
			else if (strncmp(lon3s, "Look After You", 50))
			{
				lon3p = 7;
			}
			else if (strncmp(lon3s, "Hundred", 50))
			{
				lon3p = 8;
			}
			else if (strncmp(lon3s, "Vienna", 50))
			{
				lon3p = 9;
			}
			else if (strncmp(lon3s, "Dead Wrong", 50))
			{
				lon3p = 0;
			}
			else if (strncmp(lon3s, "Little House", 50))
			{
				lon3p = 1;
			}
			else if (strncmp(lon3s, "Trust Me", 50))
			{
				lon3p = 2;
			}
		}
		else if (name == 11)
		{
			if (strncmp(lon3s, "Second Hand News", 50))
			{
				lon3p = 1;
			}
			else if (strncmp(lon3s, "Dreams", 50))
			{
				lon3p = 2;
			}
			else if (strncmp(lon3s, "Never Going Back Again", 50))
			{
				lon3p = 3;
			}
			else if (strncmp(lon3s, "Don't Stop", 50))
			{
				lon3p = 4;
			}
			else if (strncmp(lon3s, "Go Your Own Way", 50))
			{
				lon3p = 5;
			}
			else if (strncmp(lon3s, "Songbird", 50))
			{
				lon3p = 6;
			}
			else if (strncmp(lon3s, "The Chain", 50))
			{
				lon3p = 7;
			}
			else if (strncmp(lon3s, "You Make Loving Fun", 50))
			{
				lon3p = 8;
			}
			else if (strncmp(lon3s, "I Don't Want to Know", 50))
			{
				lon3p = 9;
			}
			else if (strncmp(lon3s, "Oh Daddy", 50))
			{
				lon3p = 0;
			}
			else if (strncmp(lon3s, "Gold Dust Woman", 50))
			{
				lon3p = 1;
			}
		}
		printf("What was the name of the band the ninth song was by?\n");
		scanf("%s", lon4a);
		if (strncmp(lon4a, "Bruce Springsteen", 50))
		{
			name = 0;
		}
		else if (strncmp(lon4a, "Warren Zevon", 50))
		{
			name = 1;
		}
		else if (strncmp(lon4a, "Jackson Browne", 50))
		{
			name = 2;
		}
		else if (strncmp(lon4a, "Marc Cohn", 50))
		{
			name = 3;
		}
		else if (strncmp(lon4a, "John Mellencamp", 50))
		{
			name = 4;
		}
		else if (strncmp(lon4a, "Counting Crows", 50))
		{
			name = 5;
		}
		else if (strncmp(lon4a, "Bob Seger", 50))
		{
			name = 6;
		}
		else if (strncmp(lon4a, "Blues Traveler", 50))
		{
			name = 7;
		}
		else if (strncmp(lon4a, "Audioslave", 50))
		{
			name = 8;
		}
		else if (strncmp(lon4a, "Social Distortion", 50))
		{
			name = 9;
		}
		else if (strncmp(lon4a, "The Fray", 50))
		{
			name = 10;
		}
		else if (strncmp(lon4a, "Fleetwood Mac", 50))
		{
			name = 11;
		}
		printf("What was the name of the ninth song?\n");
		scanf("%s", lon4s);
		if (name = 0)
		{
			if (strncmp(lon4s, "Lonesome Day", 50))
			{
				lon4p = 1;
			}
			else if (strncmp(lon4s, "Into the Fire", 50))
			{
				lon4p = 2;
			}
			else if (strncmp(lon4s, "Waitin' on a Sunny Day", 50))
			{
				lon4p = 3;
			}
			else if (strncmp(lon4s, "Nothing Man", 50))
			{
				lon4p = 4;
			}
			else if (strncmp(lon4s, "Countin' on a Miracle", 50))
			{
				lon4p = 5;
			}
			else if (strncmp(lon4s, "Empty Sky", 50))
			{
				lon4p = 6;
			}
			else if (strncmp(lon4s, "Worlds Apart", 50))
			{
				lon4p = 7;
			}
			else if (strncmp(lon4s, "Let's Be Friends (Skin to Skin)", 50))
			{
				lon4p = 8;
			}
			else if (strncmp(lon4s, "Further On (Up the Road)", 50))
			{
				lon4p = 9;
			}
			else if (strncmp(lon4s, "The Fuse", 50))
			{
				lon4p = 0;
			}
			else if (strncmp(lon4s, "Mary's Place", 50))
			{
				lon4p = 1;
			}
			else if (strncmp(lon4s, "You're Missing", 50))
			{
				lon4p = 2;
			}
			else if (strncmp(lon4s, "The Rising", 50))
			{
				lon4p = 3;
			}
			else if (strncmp(lon4s, "Paradise", 50))
			{
				lon4p = 4;
			}
			else if (strncmp(lon4s, "My City of Ruins", 50))
			{
				lon4p = 5;
			}
		}
		else if (name == 1)
		{
			if (strncmp(lon4s, "Dirty Life and Times", 50))
			{
				lon4p = 1;
			}
			else if (strncmp(lon4s, "Disorder in the House", 50))
			{
				lon4p = 2;
			}
			else if (strncmp(lon4s, "Knockin' on Heaven's Door", 50))
			{
				lon4p = 3;
			}
			else if (strncmp(lon4s, "Numb as a Statue", 50))
			{
				lon4p = 4;
			}
			else if (strncmp(lon4s, "She's Too Good For Me", 50))
			{
				lon4p = 5;
			}
			else if (strncmp(lon4s, "Prison Grove", 50))
			{
				lon4p = 6;
			}
			else if (strncmp(lon4s, "El Amor de Mi Vida", 50))
			{
				lon4p = 7;
			}
			else if (strncmp(lon4s, "The Rest of the Night", 50))
			{
				lon4p = 8;
			}
			else if (strncmp(lon4s, "Please Stay", 50))
			{
				lon4p = 9;
			}
			else if (strncmp(lon4s, "Rub Me Raw", 50))
			{
				lon4p = 0;
			}
			else if (strncmp(lon4s, "Keep Me in Your Heart", 50))
			{
				lon4p = 1;
			}
		}
		else if (name == 2)
		{
			if (strncmp(lon4s, "The Naked Ride Home", 50))
			{
				lon4p = 1;
			}
			else if (strncmp(lon4s, "The Night Inside Me", 50))
			{
				lon4p = 2;
			}
			else if (strncmp(lon4s, "Casino Nation", 50))
			{
				lon4p = 3;
			}
			else if (strncmp(lon4s, "For Taking the Trouble", 50))
			{
				lon4p = 4;
			}
			else if (strncmp(lon4s, "Never Stop", 50))
			{
				lon4p = 5;
			}
			else if (strncmp(lon4s, "Walking Town", 50))
			{
				lon4p = 6;
			}
			else if (strncmp(lon4s, "About My Imagination", 50))
			{
				lon4p = 7;
			}
			else if (strncmp(lon4s, "Sergio Leone", 50))
			{
				lon4p = 8;
			}
			else if (strncmp(lon4s, "Don't You Want to Be There", 50))
			{
				lon4p = 9;
			}
			else if (strncmp(lon4s, "My Stunning Mystery Companion", 50))
			{
				lon4p = 0;
			}
		}
		else if (name == 3)
		{
			if (strncmp(lon4s, "Walking in Memphis", 50))
			{
				lon4p = 1;
			}
			else if (strncmp(lon4s, "Ghost Train", 50))
			{
				lon4p = 2;
			}
			else if (strncmp(lon4s, "Silver Thunderbird", 50))
			{
				lon4p = 3;
			}
			else if (strncmp(lon4s, "Dig Down Deep", 50))
			{
				lon4p = 4;
			}
			else if (strncmp(lon4s, "Walk on Water", 50))
			{
				lon4p = 5;
			}
			else if (strncmp(lon4s, "Miles Away", 50))
			{
				lon4p = 6;
			}
			else if (strncmp(lon4s, "Saving the Best for Last", 50))
			{
				lon4p = 7;
			}
			else if (strncmp(lon4s, "Strangers in a Car", 50))
			{
				lon4p = 8;
			}
			else if (strncmp(lon4s, "29 Ways", 50))
			{
				lon4p = 9;
			}
			else if (strncmp(lon4s, "Perfect Love", 50))
			{
				lon4p = 0;
			}
			else if (strncmp(lon4s, "True Companion", 50))
			{
				lon4p = 1;
			}
		}
		else if (name == 4)
		{
			if (strncmp(lon4s, "Paper in Fire", 50))
			{
				lon4p = 1;
			}
			else if (strncmp(lon4s, "Down and Out in Paradise", 50))
			{
				lon4p = 2;
			}
			else if (strncmp(lon4s, "Check it Out", 50))
			{
				lon4p = 3;
			}
			else if (strncmp(lon4s, "The Real Life", 50))
			{
				lon4p = 4;
			}
			else if (strncmp(lon4s, "Cherry Bomb", 50))
			{
				lon4p = 5;
			}
			else if (strncmp(lon4s, "We Are the People", 50))
			{
				lon4p = 6;
			}
			else if (strncmp(lon4s, "Empty Hands", 50))
			{
				lon4p = 7;
			}
			else if (strncmp(lon4s, "Hard Times for an Honest Man", 50))
			{
				lon4p = 8;
			}
			else if (strncmp(lon4s, "Hotdogs and Hamburgers", 50))
			{
				lon4p = 9;
			}
			else if (strncmp(lon4s, "Rooty Toot Toot", 50))
			{
				lon4p = 0;
			}
		}
		else if (name == 5)
		{
			if (strncmp(lon4s, "Round Here", 50))
			{
				lon4p = 1;
			}
			else if (strncmp(lon4s, "Omaha", 50))
			{
				lon4p = 2;
			}
			else if (strncmp(lon4s, "Mr. Jones", 50))
			{
				lon4p = 3;
			}
			else if (strncmp(lon4s, "Perfect Blue Buildings", 50))
			{
				lon4p = 4;
			}
			else if (strncmp(lon4s, "Anna Begins", 50))
			{
				lon4p = 5;
			}
			else if (strncmp(lon4s, "Time and Time Again", 50))
			{
				lon4p = 6;
			}
			else if (strncmp(lon4s, "Rain King", 50))
			{
				lon4p = 7;
			}
			else if (strncmp(lon4s, "Sullivan Street", 50))
			{
				lon4p = 8;
			}
			else if (strncmp(lon4s, "Ghost Train", 50))
			{
				lon4p = 9;
			}
			else if (strncmp(lon4s, "Raining in Baltimore", 50))
			{
				lon4p = 0;
			}
			else if (strncmp(lon4s, "A Murder of One", 50))
			{
				lon4p = 1;
			}
		}
		else if (name == 6)
		{
			if (strncmp(lon4s, "The Horizontal Bop", 50))
			{
				lon4p = 1;
			}
			else if (strncmp(lon4s, "You'll Accomp'ny Me", 50))
			{
				lon4p = 2;
			}
			else if (strncmp(lon4s, "Her Strut", 50))
			{
				lon4p = 3;
			}
			else if (strncmp(lon4s, "No Man's Land", 50))
			{
				lon4p = 4;
			}
			else if (strncmp(lon4s, "Long Twin Silver Line", 50))
			{
				lon4p = 5;
			}
			else if (strncmp(lon4s, "Against the Wind", 50))
			{
				lon4p = 6;
			}
			else if (strncmp(lon4s, "Good for Me", 50))
			{
				lon4p = 7;
			}
			else if (strncmp(lon4s, "Betty Lou's Gettin' Out Tonight", 50))
			{
				lon4p = 8;
			}
			else if (strncmp(lon4s, "Fire Lake", 50))
			{
				lon4p = 9;
			}
			else if (strncmp(lon4s, "Shinin' Brightly", 50))
			{
				lon4p = 0;
			}
		}
		else if (name == 7)
		{
			if (strncmp(lon4s, "Run-Around", 50))
			{
				lon4p = 1;
			}
			else if (strncmp(lon4s, "Stand", 50))
			{
				lon4p = 2;
			}
			else if (strncmp(lon4s, "Look Around", 50))
			{
				lon4p = 3;
			}
			else if (strncmp(lon4s, "Fallible", 50))
			{
				lon4p = 4;
			}
			else if (strncmp(lon4s, "The Mountains Win Again", 50))
			{
				lon4p = 5;
			}
			else if (strncmp(lon4s, "Freedom", 50))
			{
				lon4p = 6;
			}
			else if (strncmp(lon4s, "Crash Burn", 50))
			{
				lon4p = 7;
			}
			else if (strncmp(lon4s, "Price to Pay", 50))
			{
				lon4p = 8;
			}
			else if (strncmp(lon4s, "Hook", 50))
			{
				lon4p = 9;
			}
			else if (strncmp(lon4s, "The Good, the Bad, and the Ugly", 50))
			{
				lon4p = 0;
			}
			else if (strncmp(lon4s, "Just Wait", 50))
			{
				lon4p = 1;
			}
			else if (strncmp(lon4s, "Brother John", 50))
			{
				lon4p = 2;
			}
		}
		else if (name == 8)
		{
			if (strncmp(lon4s, "Cochise", 50))
			{
				lon4p = 1;
			}
			else if (strncmp(lon4s, "Show Me How to Live", 50))
			{
				lon4p = 2;
			}
			else if (strncmp(lon4s, "Gasoline", 50))
			{
				lon4p = 3;
			}
			else if (strncmp(lon4s, "What You Are", 50))
			{
				lon4p = 4;
			}
			else if (strncmp(lon4s, "Like a Stone", 50))
			{
				lon4p = 5;
			}
			else if (strncmp(lon4s, "Set It Off", 50))
			{
				lon4p = 6;
			}
			else if (strncmp(lon4s, "Shadow on the Sun", 50))
			{
				lon4p = 7;
			}
			else if (strncmp(lon4s, "I Am the Highway", 50))
			{
				lon4p = 8;
			}
			else if (strncmp(lon4s, "Exploder", 50))
			{
				lon4p = 9;
			}
			else if (strncmp(lon4s, "Hypnotize", 50))
			{
				lon4p = 0;
			}
			else if (strncmp(lon4s, "Bring Em Back Alive", 50))
			{
				lon4p = 1;
			}
			else if (strncmp(lon4s, "Light My Way", 50))
			{
				lon4p = 2;
			}
			else if (strncmp(lon4s, "Getaway Car", 50))
			{
				lon4p = 3;
			}
			else if (strncmp(lon4s, "The Last Remaining Light", 50))
			{
				lon4p = 4;
			}
		}
		else if (name == 9)
		{
			if (strncmp(lon4s, "So Far Away", 50))
			{
				lon4p = 1;
			}
			else if (strncmp(lon4s, "Let It Be Me", 50))
			{
				lon4p = 2;
			}
			else if (strncmp(lon4s, "Story of My Life", 50))
			{
				lon4p = 3;
			}
			else if (strncmp(lon4s, "Sick Boys", 50))
			{
				lon4p = 4;
			}
			else if (strncmp(lon4s, "Ring of Fire", 50))
			{
				lon4p = 5;
			}
			else if (strncmp(lon4s, "Ball and Chain", 50))
			{
				lon4p = 6;
			}
			else if (strncmp(lon4s, "It Coulda Been Me", 50))
			{
				lon4p = 7;
			}
			else if (strncmp(lon4s, "She's a Knockout", 50))
			{
				lon4p = 8;
			}
			else if (strncmp(lon4s, "A Place in My Heart", 50))
			{
				lon4p = 9;
			}
			else if (strncmp(lon4s, "Drug Train", 50))
			{
				lon4p = 0;
			}
		}
		else if (name == 10)
		{
			if (strncmp(lon4s, "She Is", 50))
			{
				lon4p = 1;
			}
			else if (strncmp(lon4s, "Over My Head (Cable Car)", 50))
			{
				lon4p = 2;
			}
			else if (strncmp(lon4s, "How to Save a Life", 50))
			{
				lon4p = 3;
			}
			else if (strncmp(lon4s, "All at Once", 50))
			{
				lon4p = 4;
			}
			else if (strncmp(lon4s, "Fall Away", 50))
			{
				lon4p = 5;
			}
			else if (strncmp(lon4s, "Heaven Forbid", 50))
			{
				lon4p = 6;
			}
			else if (strncmp(lon4s, "Look After You", 50))
			{
				lon4p = 7;
			}
			else if (strncmp(lon4s, "Hundred", 50))
			{
				lon4p = 8;
			}
			else if (strncmp(lon4s, "Vienna", 50))
			{
				lon4p = 9;
			}
			else if (strncmp(lon4s, "Dead Wrong", 50))
			{
				lon4p = 0;
			}
			else if (strncmp(lon4s, "Little House", 50))
			{
				lon4p = 1;
			}
			else if (strncmp(lon4s, "Trust Me", 50))
			{
				lon4p = 2;
			}
		}
		else if (name == 11)
		{
			if (strncmp(lon4s, "Second Hand News", 50))
			{
				lon4p = 1;
			}
			else if (strncmp(lon4s, "Dreams", 50))
			{
				lon4p = 2;
			}
			else if (strncmp(lon4s, "Never Going Back Again", 50))
			{
				lon4p = 3;
			}
			else if (strncmp(lon4s, "Don't Stop", 50))
			{
				lon4p = 4;
			}
			else if (strncmp(lon4s, "Go Your Own Way", 50))
			{
				lon4p = 5;
			}
			else if (strncmp(lon4s, "Songbird", 50))
			{
				lon4p = 6;
			}
			else if (strncmp(lon4s, "The Chain", 50))
			{
				lon4p = 7;
			}
			else if (strncmp(lon4s, "You Make Loving Fun", 50))
			{
				lon4p = 8;
			}
			else if (strncmp(lon4s, "I Don't Want to Know", 50))
			{
				lon4p = 9;
			}
			else if (strncmp(lon4s, "Oh Daddy", 50))
			{
				lon4p = 0;
			}
			else if (strncmp(lon4s, "Gold Dust Woman", 50))
			{
				lon4p = 1;
			}
		}
		printf("What was the name of the band the tenth song was by?\n");
		scanf("%s", lon5a);
		if (strncmp(lon5a, "Bruce Springsteen", 50))
		{
			name = 0;
		}
		else if (strncmp(lon5a, "Warren Zevon", 50))
		{
			name = 1;
		}
		else if (strncmp(lon5a, "Jackson Browne", 50))
		{
			name = 2;
		}
		else if (strncmp(lon5a, "Marc Cohn", 50))
		{
			name = 3;
		}
		else if (strncmp(lon5a, "John Mellencamp", 50))
		{
			name = 4;
		}
		else if (strncmp(lon5a, "Counting Crows", 50))
		{
			name = 5;
		}
		else if (strncmp(lon5a, "Bob Seger", 50))
		{
			name = 6;
		}
		else if (strncmp(lon5a, "Blues Traveler", 50))
		{
			name = 7;
		}
		else if (strncmp(lon5a, "Audioslave", 50))
		{
			name = 8;
		}
		else if (strncmp(lon5a, "Social Distortion", 50))
		{
			name = 9;
		}
		else if (strncmp(lon5a, "The Fray", 50))
		{
			name = 10;
		}
		else if (strncmp(lon5a, "Fleetwood Mac", 50))
		{
			name = 11;
		}
		printf("What was the name of the tenth song?\n");
		scanf("%s", lon5s);
		if (name = 0)
		{
			if (strncmp(lon5s, "Lonesome Day", 50))
			{
				lon5p = 1;
			}
			else if (strncmp(lon5s, "Into the Fire", 50))
			{
				lon5p = 2;
			}
			else if (strncmp(lon5s, "Waitin' on a Sunny Day", 50))
			{
				lon5p = 3;
			}
			else if (strncmp(lon5s, "Nothing Man", 50))
			{
				lon5p = 4;
			}
			else if (strncmp(lon5s, "Countin' on a Miracle", 50))
			{
				lon5p = 5;
			}
			else if (strncmp(lon5s, "Empty Sky", 50))
			{
				lon5p = 6;
			}
			else if (strncmp(lon5s, "Worlds Apart", 50))
			{
				lon5p = 7;
			}
			else if (strncmp(lon5s, "Let's Be Friends (Skin to Skin)", 50))
			{
				lon5p = 8;
			}
			else if (strncmp(lon5s, "Further On (Up the Road)", 50))
			{
				lon5p = 9;
			}
			else if (strncmp(lon5s, "The Fuse", 50))
			{
				lon5p = 0;
			}
			else if (strncmp(lon5s, "Mary's Place", 50))
			{
				lon5p = 1;
			}
			else if (strncmp(lon5s, "You're Missing", 50))
			{
				lon5p = 2;
			}
			else if (strncmp(lon5s, "The Rising", 50))
			{
				lon5p = 3;
			}
			else if (strncmp(lon5s, "Paradise", 50))
			{
				lon5p = 4;
			}
			else if (strncmp(lon5s, "My City of Ruins", 50))
			{
				lon5p = 5;
			}
		}
		else if (name == 1)
		{
			if (strncmp(lon5s, "Dirty Life and Times", 50))
			{
				lon5p = 1;
			}
			else if (strncmp(lon5s, "Disorder in the House", 50))
			{
				lon5p = 2;
			}
			else if (strncmp(lon5s, "Knockin' on Heaven's Door", 50))
			{
				lon5p = 3;
			}
			else if (strncmp(lon5s, "Numb as a Statue", 50))
			{
				lon5p = 4;
			}
			else if (strncmp(lon5s, "She's Too Good For Me", 50))
			{
				lon5p = 5;
			}
			else if (strncmp(lon5s, "Prison Grove", 50))
			{
				lon5p = 6;
			}
			else if (strncmp(lon5s, "El Amor de Mi Vida", 50))
			{
				lon5p = 7;
			}
			else if (strncmp(lon5s, "The Rest of the Night", 50))
			{
				lon5p = 8;
			}
			else if (strncmp(lon5s, "Please Stay", 50))
			{
				lon5p = 9;
			}
			else if (strncmp(lon5s, "Rub Me Raw", 50))
			{
				lon5p = 0;
			}
			else if (strncmp(lon5s, "Keep Me in Your Heart", 50))
			{
				lon5p = 1;
			}
		}
		else if (name == 2)
		{
			if (strncmp(lon5s, "The Naked Ride Home", 50))
			{
				lon5p = 1;
			}
			else if (strncmp(lon5s, "The Night Inside Me", 50))
			{
				lon5p = 2;
			}
			else if (strncmp(lon5s, "Casino Nation", 50))
			{
				lon5p = 3;
			}
			else if (strncmp(lon5s, "For Taking the Trouble", 50))
			{
				lon5p = 4;
			}
			else if (strncmp(lon5s, "Never Stop", 50))
			{
				lon5p = 5;
			}
			else if (strncmp(lon5s, "Walking Town", 50))
			{
				lon5p = 6;
			}
			else if (strncmp(lon5s, "About My Imagination", 50))
			{
				lon5p = 7;
			}
			else if (strncmp(lon5s, "Sergio Leone", 50))
			{
				lon5p = 8;
			}
			else if (strncmp(lon5s, "Don't You Want to Be There", 50))
			{
				lon5p = 9;
			}
			else if (strncmp(lon5s, "My Stunning Mystery Companion", 50))
			{
				lon5p = 0;
			}
		}
		else if (name == 3)
		{
			if (strncmp(lon5s, "Walking in Memphis", 50))
			{
				lon5p = 1;
			}
			else if (strncmp(lon5s, "Ghost Train", 50))
			{
				lon5p = 2;
			}
			else if (strncmp(lon5s, "Silver Thunderbird", 50))
			{
				lon5p = 3;
			}
			else if (strncmp(lon5s, "Dig Down Deep", 50))
			{
				lon5p = 4;
			}
			else if (strncmp(lon5s, "Walk on Water", 50))
			{
				lon5p = 5;
			}
			else if (strncmp(lon5s, "Miles Away", 50))
			{
				lon5p = 6;
			}
			else if (strncmp(lon5s, "Saving the Best for Last", 50))
			{
				lon5p = 7;
			}
			else if (strncmp(lon5s, "Strangers in a Car", 50))
			{
				lon5p = 8;
			}
			else if (strncmp(lon5s, "29 Ways", 50))
			{
				lon5p = 9;
			}
			else if (strncmp(lon5s, "Perfect Love", 50))
			{
				lon5p = 0;
			}
			else if (strncmp(lon5s, "True Companion", 50))
			{
				lon5p = 1;
			}
		}
		else if (name == 4)
		{
			if (strncmp(lon5s, "Paper in Fire", 50))
			{
				lon5p = 1;
			}
			else if (strncmp(lon5s, "Down and Out in Paradise", 50))
			{
				lon5p = 2;
			}
			else if (strncmp(lon5s, "Check it Out", 50))
			{
				lon5p = 3;
			}
			else if (strncmp(lon5s, "The Real Life", 50))
			{
				lon5p = 4;
			}
			else if (strncmp(lon5s, "Cherry Bomb", 50))
			{
				lon5p = 5;
			}
			else if (strncmp(lon5s, "We Are the People", 50))
			{
				lon5p = 6;
			}
			else if (strncmp(lon5s, "Empty Hands", 50))
			{
				lon5p = 7;
			}
			else if (strncmp(lon5s, "Hard Times for an Honest Man", 50))
			{
				lon5p = 8;
			}
			else if (strncmp(lon5s, "Hotdogs and Hamburgers", 50))
			{
				lon5p = 9;
			}
			else if (strncmp(lon5s, "Rooty Toot Toot", 50))
			{
				lon5p = 0;
			}
		}
		else if (name == 5)
		{
			if (strncmp(lon5s, "Round Here", 50))
			{
				lon5p = 1;
			}
			else if (strncmp(lon5s, "Omaha", 50))
			{
				lon5p = 2;
			}
			else if (strncmp(lon5s, "Mr. Jones", 50))
			{
				lon5p = 3;
			}
			else if (strncmp(lon5s, "Perfect Blue Buildings", 50))
			{
				lon5p = 4;
			}
			else if (strncmp(lon5s, "Anna Begins", 50))
			{
				lon5p = 5;
			}
			else if (strncmp(lon5s, "Time and Time Again", 50))
			{
				lon5p = 6;
			}
			else if (strncmp(lon5s, "Rain King", 50))
			{
				lon5p = 7;
			}
			else if (strncmp(lon5s, "Sullivan Street", 50))
			{
				lon5p = 8;
			}
			else if (strncmp(lon5s, "Ghost Train", 50))
			{
				lon5p = 9;
			}
			else if (strncmp(lon5s, "Raining in Baltimore", 50))
			{
				lon5p = 0;
			}
			else if (strncmp(lon5s, "A Murder of One", 50))
			{
				lon5p = 1;
			}
		}
		else if (name == 6)
		{
			if (strncmp(lon5s, "The Horizontal Bop", 50))
			{
				lon5p = 1;
			}
			else if (strncmp(lon5s, "You'll Accomp'ny Me", 50))
			{
				lon5p = 2;
			}
			else if (strncmp(lon5s, "Her Strut", 50))
			{
				lon5p = 3;
			}
			else if (strncmp(lon5s, "No Man's Land", 50))
			{
				lon5p = 4;
			}
			else if (strncmp(lon5s, "Long Twin Silver Line", 50))
			{
				lon5p = 5;
			}
			else if (strncmp(lon5s, "Against the Wind", 50))
			{
				lon5p = 6;
			}
			else if (strncmp(lon5s, "Good for Me", 50))
			{
				lon5p = 7;
			}
			else if (strncmp(lon5s, "Betty Lou's Gettin' Out Tonight", 50))
			{
				lon5p = 8;
			}
			else if (strncmp(lon5s, "Fire Lake", 50))
			{
				lon5p = 9;
			}
			else if (strncmp(lon5s, "Shinin' Brightly", 50))
			{
				lon5p = 0;
			}
		}
		else if (name == 7)
		{
			if (strncmp(lon5s, "Run-Around", 50))
			{
				lon5p = 1;
			}
			else if (strncmp(lon5s, "Stand", 50))
			{
				lon5p = 2;
			}
			else if (strncmp(lon5s, "Look Around", 50))
			{
				lon5p = 3;
			}
			else if (strncmp(lon5s, "Fallible", 50))
			{
				lon5p = 4;
			}
			else if (strncmp(lon5s, "The Mountains Win Again", 50))
			{
				lon5p = 5;
			}
			else if (strncmp(lon5s, "Freedom", 50))
			{
				lon5p = 6;
			}
			else if (strncmp(lon5s, "Crash Burn", 50))
			{
				lon5p = 7;
			}
			else if (strncmp(lon5s, "Price to Pay", 50))
			{
				lon5p = 8;
			}
			else if (strncmp(lon5s, "Hook", 50))
			{
				lon5p = 9;
			}
			else if (strncmp(lon5s, "The Good, the Bad, and the Ugly", 50))
			{
				lon5p = 0;
			}
			else if (strncmp(lon5s, "Just Wait", 50))
			{
				lon5p = 1;
			}
			else if (strncmp(lon5s, "Brother John", 50))
			{
				lon5p = 2;
			}
		}
		else if (name == 8)
		{
			if (strncmp(lon5s, "Cochise", 50))
			{
				lon5p = 1;
			}
			else if (strncmp(lon5s, "Show Me How to Live", 50))
			{
				lon5p = 2;
			}
			else if (strncmp(lon5s, "Gasoline", 50))
			{
				lon5p = 3;
			}
			else if (strncmp(lon5s, "What You Are", 50))
			{
				lon5p = 4;
			}
			else if (strncmp(lon5s, "Like a Stone", 50))
			{
				lon5p = 5;
			}
			else if (strncmp(lon5s, "Set It Off", 50))
			{
				lon5p = 6;
			}
			else if (strncmp(lon5s, "Shadow on the Sun", 50))
			{
				lon5p = 7;
			}
			else if (strncmp(lon5s, "I Am the Highway", 50))
			{
				lon5p = 8;
			}
			else if (strncmp(lon5s, "Exploder", 50))
			{
				lon5p = 9;
			}
			else if (strncmp(lon5s, "Hypnotize", 50))
			{
				lon5p = 0;
			}
			else if (strncmp(lon5s, "Bring Em Back Alive", 50))
			{
				lon5p = 1;
			}
			else if (strncmp(lon5s, "Light My Way", 50))
			{
				lon5p = 2;
			}
			else if (strncmp(lon5s, "Getaway Car", 50))
			{
				lon5p = 3;
			}
			else if (strncmp(lon5s, "The Last Remaining Light", 50))
			{
				lon5p = 4;
			}
		}
		else if (name == 9)
		{
			if (strncmp(lon5s, "So Far Away", 50))
			{
				lon5p = 1;
			}
			else if (strncmp(lon5s, "Let It Be Me", 50))
			{
				lon5p = 2;
			}
			else if (strncmp(lon5s, "Story of My Life", 50))
			{
				lon5p = 3;
			}
			else if (strncmp(lon5s, "Sick Boys", 50))
			{
				lon5p = 4;
			}
			else if (strncmp(lon5s, "Ring of Fire", 50))
			{
				lon5p = 5;
			}
			else if (strncmp(lon5s, "Ball and Chain", 50))
			{
				lon5p = 6;
			}
			else if (strncmp(lon5s, "It Coulda Been Me", 50))
			{
				lon5p = 7;
			}
			else if (strncmp(lon5s, "She's a Knockout", 50))
			{
				lon5p = 8;
			}
			else if (strncmp(lon5s, "A Place in My Heart", 50))
			{
				lon5p = 9;
			}
			else if (strncmp(lon5s, "Drug Train", 50))
			{
				lon5p = 0;
			}
		}
		else if (name == 10)
		{
			if (strncmp(lon5s, "She Is", 50))
			{
				lon5p = 1;
			}
			else if (strncmp(lon5s, "Over My Head (Cable Car)", 50))
			{
				lon5p = 2;
			}
			else if (strncmp(lon5s, "How to Save a Life", 50))
			{
				lon5p = 3;
			}
			else if (strncmp(lon5s, "All at Once", 50))
			{
				lon5p = 4;
			}
			else if (strncmp(lon5s, "Fall Away", 50))
			{
				lon5p = 5;
			}
			else if (strncmp(lon5s, "Heaven Forbid", 50))
			{
				lon5p = 6;
			}
			else if (strncmp(lon5s, "Look After You", 50))
			{
				lon5p = 7;
			}
			else if (strncmp(lon5s, "Hundred", 50))
			{
				lon5p = 8;
			}
			else if (strncmp(lon5s, "Vienna", 50))
			{
				lon5p = 9;
			}
			else if (strncmp(lon5s, "Dead Wrong", 50))
			{
				lon5p = 0;
			}
			else if (strncmp(lon5s, "Little House", 50))
			{
				lon5p = 1;
			}
			else if (strncmp(lon5s, "Trust Me", 50))
			{
				lon5p = 2;
			}
		}
		else if (name == 11)
		{
			if (strncmp(lon5s, "Second Hand News", 50))
			{
				lon5p = 1;
			}
			else if (strncmp(lon5s, "Dreams", 50))
			{
				lon5p = 2;
			}
			else if (strncmp(lon5s, "Never Going Back Again", 50))
			{
				lon5p = 3;
			}
			else if (strncmp(lon5s, "Don't Stop", 50))
			{
				lon5p = 4;
			}
			else if (strncmp(lon5s, "Go Your Own Way", 50))
			{
				lon5p = 5;
			}
			else if (strncmp(lon5s, "Songbird", 50))
			{
				lon5p = 6;
			}
			else if (strncmp(lon5s, "The Chain", 50))
			{
				lon5p = 7;
			}
			else if (strncmp(lon5s, "You Make Loving Fun", 50))
			{
				lon5p = 8;
			}
			else if (strncmp(lon5s, "I Don't Want to Know", 50))
			{
				lon5p = 9;
			}
			else if (strncmp(lon5s, "Oh Daddy", 50))
			{
				lon5p = 0;
			}
			else if (strncmp(lon5s, "Gold Dust Woman", 50))
			{
				lon5p = 1;
			}
		}
		printf("What was the name of the band the eleventh song was by?\n");
		scanf("%s", lat6a);
		if (strncmp(lat6a, "Bruce Springsteen", 50))
		{
			name = 0;
		}
		else if (strncmp(lat6a, "Warren Zevon", 50))
		{
			name = 1;
		}
		else if (strncmp(lat6a, "Jackson Browne", 50))
		{
			name = 2;
		}
		else if (strncmp(lat6a, "Marc Cohn", 50))
		{
			name = 3;
		}
		else if (strncmp(lat6a, "John Mellencamp", 50))
		{
			name = 4;
		}
		else if (strncmp(lat6a, "Counting Crows", 50))
		{
			name = 5;
		}
		else if (strncmp(lat6a, "Bob Seger", 50))
		{
			name = 6;
		}
		else if (strncmp(lat6a, "Blues Traveler", 50))
		{
			name = 7;
		}
		else if (strncmp(lat6a, "Audioslave", 50))
		{
			name = 8;
		}
		else if (strncmp(lat6a, "Social Distortion", 50))
		{
			name = 9;
		}
		else if (strncmp(lat6a, "The Fray", 50))
		{
			name = 10;
		}
		else if (strncmp(lat6a, "Fleetwood Mac", 50))
		{
			name = 11;
		}
		printf("What was the name of the eleventh song?\n");
		scanf("%s", lat6s);
		if (name = 0)
		{
			if (strncmp(lat6s, "Lonesome Day", 50))
			{
				lat6p = 1;
			}
			else if (strncmp(lat6s, "Into the Fire", 50))
			{
				lat6p = 2;
			}
			else if (strncmp(lat6s, "Waitin' on a Sunny Day", 50))
			{
				lat6p = 3;
			}
			else if (strncmp(lat6s, "Nothing Man", 50))
			{
				lat6p = 4;
			}
			else if (strncmp(lat6s, "Countin' on a Miracle", 50))
			{
				lat6p = 5;
			}
			else if (strncmp(lat6s, "Empty Sky", 50))
			{
				lat6p = 6;
			}
			else if (strncmp(lat6s, "Worlds Apart", 50))
			{
				lat6p = 7;
			}
			else if (strncmp(lat6s, "Let's Be Friends (Skin to Skin)", 50))
			{
				lat6p = 8;
			}
			else if (strncmp(lat6s, "Further On (Up the Road)", 50))
			{
				lat6p = 9;
			}
			else if (strncmp(lat6s, "The Fuse", 50))
			{
				lat6p = 0;
			}
			else if (strncmp(lat6s, "Mary's Place", 50))
			{
				lat6p = 1;
			}
			else if (strncmp(lat6s, "You're Missing", 50))
			{
				lat6p = 2;
			}
			else if (strncmp(lat6s, "The Rising", 50))
			{
				lat6p = 3;
			}
			else if (strncmp(lat6s, "Paradise", 50))
			{
				lat6p = 4;
			}
			else if (strncmp(lat6s, "My City of Ruins", 50))
			{
				lat6p = 5;
			}
		}
		else if (name == 1)
		{
			if (strncmp(lat6s, "Dirty Life and Times", 50))
			{
				lat6p = 1;
			}
			else if (strncmp(lat6s, "Disorder in the House", 50))
			{
				lat6p = 2;
			}
			else if (strncmp(lat6s, "Knockin' on Heaven's Door", 50))
			{
				lat6p = 3;
			}
			else if (strncmp(lat6s, "Numb as a Statue", 50))
			{
				lat6p = 4;
			}
			else if (strncmp(lat6s, "She's Too Good For Me", 50))
			{
				lat6p = 5;
			}
			else if (strncmp(lat6s, "Prison Grove", 50))
			{
				lat6p = 6;
			}
			else if (strncmp(lat6s, "El Amor de Mi Vida", 50))
			{
				lat6p = 7;
			}
			else if (strncmp(lat6s, "The Rest of the Night", 50))
			{
				lat6p = 8;
			}
			else if (strncmp(lat6s, "Please Stay", 50))
			{
				lat6p = 9;
			}
			else if (strncmp(lat6s, "Rub Me Raw", 50))
			{
				lat6p = 0;
			}
			else if (strncmp(lat6s, "Keep Me in Your Heart", 50))
			{
				lat6p = 1;
			}
		}
		else if (name == 2)
		{
			if (strncmp(lat6s, "The Naked Ride Home", 50))
			{
				lat6p = 1;
			}
			else if (strncmp(lat6s, "The Night Inside Me", 50))
			{
				lat6p = 2;
			}
			else if (strncmp(lat6s, "Casino Nation", 50))
			{
				lat6p = 3;
			}
			else if (strncmp(lat6s, "For Taking the Trouble", 50))
			{
				lat6p = 4;
			}
			else if (strncmp(lat6s, "Never Stop", 50))
			{
				lat6p = 5;
			}
			else if (strncmp(lat6s, "Walking Town", 50))
			{
				lat6p = 6;
			}
			else if (strncmp(lat6s, "About My Imagination", 50))
			{
				lat6p = 7;
			}
			else if (strncmp(lat6s, "Sergio Leone", 50))
			{
				lat6p = 8;
			}
			else if (strncmp(lat6s, "Don't You Want to Be There", 50))
			{
				lat6p = 9;
			}
			else if (strncmp(lat6s, "My Stunning Mystery Companion", 50))
			{
				lat6p = 0;
			}
		}
		else if (name == 3)
		{
			if (strncmp(lat6s, "Walking in Memphis", 50))
			{
				lat6p = 1;
			}
			else if (strncmp(lat6s, "Ghost Train", 50))
			{
				lat6p = 2;
			}
			else if (strncmp(lat6s, "Silver Thunderbird", 50))
			{
				lat6p = 3;
			}
			else if (strncmp(lat6s, "Dig Down Deep", 50))
			{
				lat6p = 4;
			}
			else if (strncmp(lat6s, "Walk on Water", 50))
			{
				lat6p = 5;
			}
			else if (strncmp(lat6s, "Miles Away", 50))
			{
				lat6p = 6;
			}
			else if (strncmp(lat6s, "Saving the Best for Last", 50))
			{
				lat6p = 7;
			}
			else if (strncmp(lat6s, "Strangers in a Car", 50))
			{
				lat6p = 8;
			}
			else if (strncmp(lat6s, "29 Ways", 50))
			{
				lat6p = 9;
			}
			else if (strncmp(lat6s, "Perfect Love", 50))
			{
				lat6p = 0;
			}
			else if (strncmp(lat6s, "True Companion", 50))
			{
				lat6p = 1;
			}
		}
		else if (name == 4)
		{
			if (strncmp(lat6s, "Paper in Fire", 50))
			{
				lat6p = 1;
			}
			else if (strncmp(lat6s, "Down and Out in Paradise", 50))
			{
				lat6p = 2;
			}
			else if (strncmp(lat6s, "Check it Out", 50))
			{
				lat6p = 3;
			}
			else if (strncmp(lat6s, "The Real Life", 50))
			{
				lat6p = 4;
			}
			else if (strncmp(lat6s, "Cherry Bomb", 50))
			{
				lat6p = 5;
			}
			else if (strncmp(lat6s, "We Are the People", 50))
			{
				lat6p = 6;
			}
			else if (strncmp(lat6s, "Empty Hands", 50))
			{
				lat6p = 7;
			}
			else if (strncmp(lat6s, "Hard Times for an Honest Man", 50))
			{
				lat6p = 8;
			}
			else if (strncmp(lat6s, "Hotdogs and Hamburgers", 50))
			{
				lat6p = 9;
			}
			else if (strncmp(lat6s, "Rooty Toot Toot", 50))
			{
				lat6p = 0;
			}
		}
		else if (name == 5)
		{
			if (strncmp(lat6s, "Round Here", 50))
			{
				lat6p = 1;
			}
			else if (strncmp(lat6s, "Omaha", 50))
			{
				lat6p = 2;
			}
			else if (strncmp(lat6s, "Mr. Jones", 50))
			{
				lat6p = 3;
			}
			else if (strncmp(lat6s, "Perfect Blue Buildings", 50))
			{
				lat6p = 4;
			}
			else if (strncmp(lat6s, "Anna Begins", 50))
			{
				lat6p = 5;
			}
			else if (strncmp(lat6s, "Time and Time Again", 50))
			{
				lat6p = 6;
			}
			else if (strncmp(lat6s, "Rain King", 50))
			{
				lat6p = 7;
			}
			else if (strncmp(lat6s, "Sullivan Street", 50))
			{
				lat6p = 8;
			}
			else if (strncmp(lat6s, "Ghost Train", 50))
			{
				lat6p = 9;
			}
			else if (strncmp(lat6s, "Raining in Baltimore", 50))
			{
				lat6p = 0;
			}
			else if (strncmp(lat6s, "A Murder of One", 50))
			{
				lat6p = 1;
			}
		}
		else if (name == 6)
		{
			if (strncmp(lat6s, "The Horizontal Bop", 50))
			{
				lat6p = 1;
			}
			else if (strncmp(lat6s, "You'll Accomp'ny Me", 50))
			{
				lat6p = 2;
			}
			else if (strncmp(lat6s, "Her Strut", 50))
			{
				lat6p = 3;
			}
			else if (strncmp(lat6s, "No Man's Land", 50))
			{
				lat6p = 4;
			}
			else if (strncmp(lat6s, "Long Twin Silver Line", 50))
			{
				lat6p = 5;
			}
			else if (strncmp(lat6s, "Against the Wind", 50))
			{
				lat6p = 6;
			}
			else if (strncmp(lat6s, "Good for Me", 50))
			{
				lat6p = 7;
			}
			else if (strncmp(lat6s, "Betty Lou's Gettin' Out Tonight", 50))
			{
				lat6p = 8;
			}
			else if (strncmp(lat6s, "Fire Lake", 50))
			{
				lat6p = 9;
			}
			else if (strncmp(lat6s, "Shinin' Brightly", 50))
			{
				lat6p = 0;
			}
		}
		else if (name == 7)
		{
			if (strncmp(lat6s, "Run-Around", 50))
			{
				lat6p = 1;
			}
			else if (strncmp(lat6s, "Stand", 50))
			{
				lat6p = 2;
			}
			else if (strncmp(lat6s, "Look Around", 50))
			{
				lat6p = 3;
			}
			else if (strncmp(lat6s, "Fallible", 50))
			{
				lat6p = 4;
			}
			else if (strncmp(lat6s, "The Mountains Win Again", 50))
			{
				lat6p = 5;
			}
			else if (strncmp(lat6s, "Freedom", 50))
			{
				lat6p = 6;
			}
			else if (strncmp(lat6s, "Crash Burn", 50))
			{
				lat6p = 7;
			}
			else if (strncmp(lat6s, "Price to Pay", 50))
			{
				lat6p = 8;
			}
			else if (strncmp(lat6s, "Hook", 50))
			{
				lat6p = 9;
			}
			else if (strncmp(lat6s, "The Good, the Bad, and the Ugly", 50))
			{
				lat6p = 0;
			}
			else if (strncmp(lat6s, "Just Wait", 50))
			{
				lat6p = 1;
			}
			else if (strncmp(lat6s, "Brother John", 50))
			{
				lat6p = 2;
			}
		}
		else if (name == 8)
		{
			if (strncmp(lat6s, "Cochise", 50))
			{
				lat6p = 1;
			}
			else if (strncmp(lat6s, "Show Me How to Live", 50))
			{
				lat6p = 2;
			}
			else if (strncmp(lat6s, "Gasoline", 50))
			{
				lat6p = 3;
			}
			else if (strncmp(lat6s, "What You Are", 50))
			{
				lat6p = 4;
			}
			else if (strncmp(lat6s, "Like a Stone", 50))
			{
				lat6p = 5;
			}
			else if (strncmp(lat6s, "Set It Off", 50))
			{
				lat6p = 6;
			}
			else if (strncmp(lat6s, "Shadow on the Sun", 50))
			{
				lat6p = 7;
			}
			else if (strncmp(lat6s, "I Am the Highway", 50))
			{
				lat6p = 8;
			}
			else if (strncmp(lat6s, "Exploder", 50))
			{
				lat6p = 9;
			}
			else if (strncmp(lat6s, "Hypnotize", 50))
			{
				lat6p = 0;
			}
			else if (strncmp(lat6s, "Bring Em Back Alive", 50))
			{
				lat6p = 1;
			}
			else if (strncmp(lat6s, "Light My Way", 50))
			{
				lat6p = 2;
			}
			else if (strncmp(lat6s, "Getaway Car", 50))
			{
				lat6p = 3;
			}
			else if (strncmp(lat6s, "The Last Remaining Light", 50))
			{
				lat6p = 4;
			}
		}
		else if (name == 9)
		{
			if (strncmp(lat6s, "So Far Away", 50))
			{
				lat6p = 1;
			}
			else if (strncmp(lat6s, "Let It Be Me", 50))
			{
				lat6p = 2;
			}
			else if (strncmp(lat6s, "Story of My Life", 50))
			{
				lat6p = 3;
			}
			else if (strncmp(lat6s, "Sick Boys", 50))
			{
				lat6p = 4;
			}
			else if (strncmp(lat6s, "Ring of Fire", 50))
			{
				lat6p = 5;
			}
			else if (strncmp(lat6s, "Ball and Chain", 50))
			{
				lat6p = 6;
			}
			else if (strncmp(lat6s, "It Coulda Been Me", 50))
			{
				lat6p = 7;
			}
			else if (strncmp(lat6s, "She's a Knockout", 50))
			{
				lat6p = 8;
			}
			else if (strncmp(lat6s, "A Place in My Heart", 50))
			{
				lat6p = 9;
			}
			else if (strncmp(lat6s, "Drug Train", 50))
			{
				lat6p = 0;
			}
		}
		else if (name == 10)
		{
			if (strncmp(lat6s, "She Is", 50))
			{
				lat6p = 1;
			}
			else if (strncmp(lat6s, "Over My Head (Cable Car)", 50))
			{
				lat6p = 2;
			}
			else if (strncmp(lat6s, "How to Save a Life", 50))
			{
				lat6p = 3;
			}
			else if (strncmp(lat6s, "All at Once", 50))
			{
				lat6p = 4;
			}
			else if (strncmp(lat6s, "Fall Away", 50))
			{
				lat6p = 5;
			}
			else if (strncmp(lat6s, "Heaven Forbid", 50))
			{
				lat6p = 6;
			}
			else if (strncmp(lat6s, "Look After You", 50))
			{
				lat6p = 7;
			}
			else if (strncmp(lat6s, "Hundred", 50))
			{
				lat6p = 8;
			}
			else if (strncmp(lat6s, "Vienna", 50))
			{
				lat6p = 9;
			}
			else if (strncmp(lat6s, "Dead Wrong", 50))
			{
				lat6p = 0;
			}
			else if (strncmp(lat6s, "Little House", 50))
			{
				lat6p = 1;
			}
			else if (strncmp(lat6s, "Trust Me", 50))
			{
				lat6p = 2;
			}
		}
		else if (name == 11)
		{
			if (strncmp(lat6s, "Second Hand News", 50))
			{
				lat6p = 1;
			}
			else if (strncmp(lat6s, "Dreams", 50))
			{
				lat6p = 2;
			}
			else if (strncmp(lat6s, "Never Going Back Again", 50))
			{
				lat6p = 3;
			}
			else if (strncmp(lat6s, "Don't Stop", 50))
			{
				lat6p = 4;
			}
			else if (strncmp(lat6s, "Go Your Own Way", 50))
			{
				lat6p = 5;
			}
			else if (strncmp(lat6s, "Songbird", 50))
			{
				lat6p = 6;
			}
			else if (strncmp(lat6s, "The Chain", 50))
			{
				lat6p = 7;
			}
			else if (strncmp(lat6s, "You Make Loving Fun", 50))
			{
				lat6p = 8;
			}
			else if (strncmp(lat6s, "I Don't Want to Know", 50))
			{
				lat6p = 9;
			}
			else if (strncmp(lat6s, "Oh Daddy", 50))
			{
				lat6p = 0;
			}
			else if (strncmp(lat6s, "Gold Dust Woman", 50))
			{
				lat6p = 1;
			}
		}
		printf("What was the name of the band the twelfth song was by?\n");
		scanf("%s", lon6a);
		if (strncmp(lon6a, "Bruce Springsteen", 50))
		{
			name = 0;
		}
		else if (strncmp(lon6a, "Warren Zevon", 50))
		{
			name = 1;
		}
		else if (strncmp(lon6a, "Jackson Browne", 50))
		{
			name = 2;
		}
		else if (strncmp(lon6a, "Marc Cohn", 50))
		{
			name = 3;
		}
		else if (strncmp(lon6a, "John Mellencamp", 50))
		{
			name = 4;
		}
		else if (strncmp(lon6a, "Counting Crows", 50))
		{
			name = 5;
		}
		else if (strncmp(lon6a, "Bob Seger", 50))
		{
			name = 6;
		}
		else if (strncmp(lon6a, "Blues Traveler", 50))
		{
			name = 7;
		}
		else if (strncmp(lon6a, "Audioslave", 50))
		{
			name = 8;
		}
		else if (strncmp(lon6a, "Social Distortion", 50))
		{
			name = 9;
		}
		else if (strncmp(lon6a, "The Fray", 50))
		{
			name = 10;
		}
		else if (strncmp(lon6a, "Fleetwood Mac", 50))
		{
			name = 11;
		}
		printf("What was the name of the thwelfth song?\n");
		scanf("%s", lon6s);
		if (name = 0)
		{
			if (strncmp(lon6s, "Lonesome Day", 50))
			{
				lon6p = 1;
			}
			else if (strncmp(lon6s, "Into the Fire", 50))
			{
				lon6p = 2;
			}
			else if (strncmp(lon6s, "Waitin' on a Sunny Day", 50))
			{
				lon6p = 3;
			}
			else if (strncmp(lon6s, "Nothing Man", 50))
			{
				lon6p = 4;
			}
			else if (strncmp(lon6s, "Countin' on a Miracle", 50))
			{
				lon6p = 5;
			}
			else if (strncmp(lon6s, "Empty Sky", 50))
			{
				lon6p = 6;
			}
			else if (strncmp(lon6s, "Worlds Apart", 50))
			{
				lon6p = 7;
			}
			else if (strncmp(lon6s, "Let's Be Friends (Skin to Skin)", 50))
			{
				lon6p = 8;
			}
			else if (strncmp(lon6s, "Further On (Up the Road)", 50))
			{
				lon6p = 9;
			}
			else if (strncmp(lon6s, "The Fuse", 50))
			{
				lon6p = 0;
			}
			else if (strncmp(lon6s, "Mary's Place", 50))
			{
				lon6p = 1;
			}
			else if (strncmp(lon6s, "You're Missing", 50))
			{
				lon6p = 2;
			}
			else if (strncmp(lon6s, "The Rising", 50))
			{
				lon6p = 3;
			}
			else if (strncmp(lon6s, "Paradise", 50))
			{
				lon6p = 4;
			}
			else if (strncmp(lon6s, "My City of Ruins", 50))
			{
				lon6p = 5;
			}
		}
		else if (name == 1)
		{
			if (strncmp(lon6s, "Dirty Life and Times", 50))
			{
				lon6p = 1;
			}
			else if (strncmp(lon6s, "Disorder in the House", 50))
			{
				lon6p = 2;
			}
			else if (strncmp(lon6s, "Knockin' on Heaven's Door", 50))
			{
				lon6p = 3;
			}
			else if (strncmp(lon6s, "Numb as a Statue", 50))
			{
				lon6p = 4;
			}
			else if (strncmp(lon6s, "She's Too Good For Me", 50))
			{
				lon6p = 5;
			}
			else if (strncmp(lon6s, "Prison Grove", 50))
			{
				lon6p = 6;
			}
			else if (strncmp(lon6s, "El Amor de Mi Vida", 50))
			{
				lon6p = 7;
			}
			else if (strncmp(lon6s, "The Rest of the Night", 50))
			{
				lon6p = 8;
			}
			else if (strncmp(lon6s, "Please Stay", 50))
			{
				lon6p = 9;
			}
			else if (strncmp(lon6s, "Rub Me Raw", 50))
			{
				lon6p = 0;
			}
			else if (strncmp(lon6s, "Keep Me in Your Heart", 50))
			{
				lon6p = 1;
			}
		}
		else if (name == 2)
		{
			if (strncmp(lon6s, "The Naked Ride Home", 50))
			{
				lon6p = 1;
			}
			else if (strncmp(lon6s, "The Night Inside Me", 50))
			{
				lon6p = 2;
			}
			else if (strncmp(lon6s, "Casino Nation", 50))
			{
				lon6p = 3;
			}
			else if (strncmp(lon6s, "For Taking the Trouble", 50))
			{
				lon6p = 4;
			}
			else if (strncmp(lon6s, "Never Stop", 50))
			{
				lon6p = 5;
			}
			else if (strncmp(lon6s, "Walking Town", 50))
			{
				lon6p = 6;
			}
			else if (strncmp(lon6s, "About My Imagination", 50))
			{
				lon6p = 7;
			}
			else if (strncmp(lon6s, "Sergio Leone", 50))
			{
				lon6p = 8;
			}
			else if (strncmp(lon6s, "Don't You Want to Be There", 50))
			{
				lon6p = 9;
			}
			else if (strncmp(lon6s, "My Stunning Mystery Companion", 50))
			{
				lon6p = 0;
			}
		}
		else if (name == 3)
		{
			if (strncmp(lon6s, "Walking in Memphis", 50))
			{
				lon6p = 1;
			}
			else if (strncmp(lon6s, "Ghost Train", 50))
			{
				lon6p = 2;
			}
			else if (strncmp(lon6s, "Silver Thunderbird", 50))
			{
				lon6p = 3;
			}
			else if (strncmp(lon6s, "Dig Down Deep", 50))
			{
				lon6p = 4;
			}
			else if (strncmp(lon6s, "Walk on Water", 50))
			{
				lon6p = 5;
			}
			else if (strncmp(lon6s, "Miles Away", 50))
			{
				lon6p = 6;
			}
			else if (strncmp(lon6s, "Saving the Best for Last", 50))
			{
				lon6p = 7;
			}
			else if (strncmp(lon6s, "Strangers in a Car", 50))
			{
				lon6p = 8;
			}
			else if (strncmp(lon6s, "29 Ways", 50))
			{
				lon6p = 9;
			}
			else if (strncmp(lon6s, "Perfect Love", 50))
			{
				lon6p = 0;
			}
			else if (strncmp(lon6s, "True Companion", 50))
			{
				lon6p = 1;
			}
		}
		else if (name == 4)
		{
			if (strncmp(lon6s, "Paper in Fire", 50))
			{
				lon6p = 1;
			}
			else if (strncmp(lon6s, "Down and Out in Paradise", 50))
			{
				lon6p = 2;
			}
			else if (strncmp(lon6s, "Check it Out", 50))
			{
				lon6p = 3;
			}
			else if (strncmp(lon6s, "The Real Life", 50))
			{
				lon6p = 4;
			}
			else if (strncmp(lon6s, "Cherry Bomb", 50))
			{
				lon6p = 5;
			}
			else if (strncmp(lon6s, "We Are the People", 50))
			{
				lon6p = 6;
			}
			else if (strncmp(lon6s, "Empty Hands", 50))
			{
				lon6p = 7;
			}
			else if (strncmp(lon6s, "Hard Times for an Honest Man", 50))
			{
				lon6p = 8;
			}
			else if (strncmp(lon6s, "Hotdogs and Hamburgers", 50))
			{
				lon6p = 9;
			}
			else if (strncmp(lon6s, "Rooty Toot Toot", 50))
			{
				lon6p = 0;
			}
		}
		else if (name == 5)
		{
			if (strncmp(lon6s, "Round Here", 50))
			{
				lon6p = 1;
			}
			else if (strncmp(lon6s, "Omaha", 50))
			{
				lon6p = 2;
			}
			else if (strncmp(lon6s, "Mr. Jones", 50))
			{
				lon6p = 3;
			}
			else if (strncmp(lon6s, "Perfect Blue Buildings", 50))
			{
				lon6p = 4;
			}
			else if (strncmp(lon6s, "Anna Begins", 50))
			{
				lon6p = 5;
			}
			else if (strncmp(lon6s, "Time and Time Again", 50))
			{
				lon6p = 6;
			}
			else if (strncmp(lon6s, "Rain King", 50))
			{
				lon6p = 7;
			}
			else if (strncmp(lon6s, "Sullivan Street", 50))
			{
				lon6p = 8;
			}
			else if (strncmp(lon6s, "Ghost Train", 50))
			{
				lon6p = 9;
			}
			else if (strncmp(lon6s, "Raining in Baltimore", 50))
			{
				lon6p = 0;
			}
			else if (strncmp(lon6s, "A Murder of One", 50))
			{
				lon6p = 1;
			}
		}
		else if (name == 6)
		{
			if (strncmp(lon6s, "The Horizontal Bop", 50))
			{
				lon6p = 1;
			}
			else if (strncmp(lon6s, "You'll Accomp'ny Me", 50))
			{
				lon6p = 2;
			}
			else if (strncmp(lon6s, "Her Strut", 50))
			{
				lon6p = 3;
			}
			else if (strncmp(lon6s, "No Man's Land", 50))
			{
				lon6p = 4;
			}
			else if (strncmp(lon6s, "Long Twin Silver Line", 50))
			{
				lon6p = 5;
			}
			else if (strncmp(lon6s, "Against the Wind", 50))
			{
				lon6p = 6;
			}
			else if (strncmp(lon6s, "Good for Me", 50))
			{
				lon6p = 7;
			}
			else if (strncmp(lon6s, "Betty Lou's Gettin' Out Tonight", 50))
			{
				lon6p = 8;
			}
			else if (strncmp(lon6s, "Fire Lake", 50))
			{
				lon6p = 9;
			}
			else if (strncmp(lon6s, "Shinin' Brightly", 50))
			{
				lon6p = 0;
			}
		}
		else if (name == 7)
		{
			if (strncmp(lon6s, "Run-Around", 50))
			{
				lon6p = 1;
			}
			else if (strncmp(lon6s, "Stand", 50))
			{
				lon6p = 2;
			}
			else if (strncmp(lon6s, "Look Around", 50))
			{
				lon6p = 3;
			}
			else if (strncmp(lon6s, "Fallible", 50))
			{
				lon6p = 4;
			}
			else if (strncmp(lon6s, "The Mountains Win Again", 50))
			{
				lon6p = 5;
			}
			else if (strncmp(lon6s, "Freedom", 50))
			{
				lon6p = 6;
			}
			else if (strncmp(lon6s, "Crash Burn", 50))
			{
				lon6p = 7;
			}
			else if (strncmp(lon6s, "Price to Pay", 50))
			{
				lon6p = 8;
			}
			else if (strncmp(lon6s, "Hook", 50))
			{
				lon6p = 9;
			}
			else if (strncmp(lon6s, "The Good, the Bad, and the Ugly", 50))
			{
				lon6p = 0;
			}
			else if (strncmp(lon6s, "Just Wait", 50))
			{
				lon6p = 1;
			}
			else if (strncmp(lon6s, "Brother John", 50))
			{
				lon6p = 2;
			}
		}
		else if (name == 8)
		{
			if (strncmp(lon6s, "Cochise", 50))
			{
				lon6p = 1;
			}
			else if (strncmp(lon6s, "Show Me How to Live", 50))
			{
				lon6p = 2;
			}
			else if (strncmp(lon6s, "Gasoline", 50))
			{
				lon6p = 3;
			}
			else if (strncmp(lon6s, "What You Are", 50))
			{
				lon6p = 4;
			}
			else if (strncmp(lon6s, "Like a Stone", 50))
			{
				lon6p = 5;
			}
			else if (strncmp(lon6s, "Set It Off", 50))
			{
				lon6p = 6;
			}
			else if (strncmp(lon6s, "Shadow on the Sun", 50))
			{
				lon6p = 7;
			}
			else if (strncmp(lon6s, "I Am the Highway", 50))
			{
				lon6p = 8;
			}
			else if (strncmp(lon6s, "Exploder", 50))
			{
				lon6p = 9;
			}
			else if (strncmp(lon6s, "Hypnotize", 50))
			{
				lon6p = 0;
			}
			else if (strncmp(lon6s, "Bring Em Back Alive", 50))
			{
				lon6p = 1;
			}
			else if (strncmp(lon6s, "Light My Way", 50))
			{
				lon6p = 2;
			}
			else if (strncmp(lon6s, "Getaway Car", 50))
			{
				lon6p = 3;
			}
			else if (strncmp(lon6s, "The Last Remaining Light", 50))
			{
				lon6p = 4;
			}
		}
		else if (name == 9)
		{
			if (strncmp(lon6s, "So Far Away", 50))
			{
				lon6p = 1;
			}
			else if (strncmp(lon6s, "Let It Be Me", 50))
			{
				lon6p = 2;
			}
			else if (strncmp(lon6s, "Story of My Life", 50))
			{
				lon6p = 3;
			}
			else if (strncmp(lon6s, "Sick Boys", 50))
			{
				lon6p = 4;
			}
			else if (strncmp(lon6s, "Ring of Fire", 50))
			{
				lon6p = 5;
			}
			else if (strncmp(lon6s, "Ball and Chain", 50))
			{
				lon6p = 6;
			}
			else if (strncmp(lon6s, "It Coulda Been Me", 50))
			{
				lon6p = 7;
			}
			else if (strncmp(lon6s, "She's a Knockout", 50))
			{
				lon6p = 8;
			}
			else if (strncmp(lon6s, "A Place in My Heart", 50))
			{
				lon6p = 9;
			}
			else if (strncmp(lon6s, "Drug Train", 50))
			{
				lon6p = 0;
			}
		}
		else if (name == 10)
		{
			if (strncmp(lon6s, "She Is", 50))
			{
				lon6p = 1;
			}
			else if (strncmp(lon6s, "Over My Head (Cable Car)", 50))
			{
				lon6p = 2;
			}
			else if (strncmp(lon6s, "How to Save a Life", 50))
			{
				lon6p = 3;
			}
			else if (strncmp(lon6s, "All at Once", 50))
			{
				lon6p = 4;
			}
			else if (strncmp(lon6s, "Fall Away", 50))
			{
				lon6p = 5;
			}
			else if (strncmp(lon6s, "Heaven Forbid", 50))
			{
				lon6p = 6;
			}
			else if (strncmp(lon6s, "Look After You", 50))
			{
				lon6p = 7;
			}
			else if (strncmp(lon6s, "Hundred", 50))
			{
				lon6p = 8;
			}
			else if (strncmp(lon6s, "Vienna", 50))
			{
				lon6p = 9;
			}
			else if (strncmp(lon6s, "Dead Wrong", 50))
			{
				lon6p = 0;
			}
			else if (strncmp(lon6s, "Little House", 50))
			{
				lon6p = 1;
			}
			else if (strncmp(lon6s, "Trust Me", 50))
			{
				lon6p = 2;
			}
		}
		else if (name == 11)
		{
			if (strncmp(lon6s, "Second Hand News", 50))
			{
				lon6p = 1;
			}
			else if (strncmp(lon6s, "Dreams", 50))
			{
				lon6p = 2;
			}
			else if (strncmp(lon6s, "Never Going Back Again", 50))
			{
				lon6p = 3;
			}
			else if (strncmp(lon6s, "Don't Stop", 50))
			{
				lon6p = 4;
			}
			else if (strncmp(lon6s, "Go Your Own Way", 50))
			{
				lon6p = 5;
			}
			else if (strncmp(lon6s, "Songbird", 50))
			{
				lon6p = 6;
			}
			else if (strncmp(lon6s, "The Chain", 50))
			{
				lon6p = 7;
			}
			else if (strncmp(lon6s, "You Make Loving Fun", 50))
			{
				lon6p = 8;
			}
			else if (strncmp(lon6s, "I Don't Want to Know", 50))
			{
				lon6p = 9;
			}
			else if (strncmp(lon6s, "Oh Daddy", 50))
			{
				lon6p = 0;
			}
			else if (strncmp(lon6s, "Gold Dust Woman", 50))
			{
				lon6p = 1;
			}
		}
		printf("What was the name of the first album?\n");
		scanf("%s", norsb);
		if (strncmp(norsd, "The Rising by Bruce Springsteen", 50))
		{
			norsd = 'n';
		}
		else if (strncmp(norsd, "The Wind by Warren Zevon", 50))
		{
			norsd = 'n';
		}
		else if (strncmp(norsd, "The Naked Ride Home by Jackson Browne", 50))
		{
			norsd = 's';
		}
		else if (strncmp(norsd, "Marc Cohn by Marc Cohn", 50))
		{
			norsd = 'n';
		}
		else if (strncmp(norsd, "The Lonesome Jubilee John Mellencamp", 50))
		{
			norsd = 's';
		}
		else if (strncmp(norsd, "August and Everything After by Counting Crows", 50))
		{
			norsd = 'n';
		}
		else if (strncmp(norsd, "Aginst the Wind by Bob Seger", 50))
		{
			norsd = 's';
		}
		else if (strncmp(norsd, "Four by Blues Traveler", 50))
		{
			norsd = 's';
		}
		else if (strncmp(norsd, "Audioslave by Audioslave", 50))
		{
			norsd = 's';
		}
		else if (strncmp(norsd, "Social Distortion by Social Distortion", 50))
		{
			norsd = 's';
		}
		else if (strncmp(norsd, "How to Save a Life by The Fray", 50))
		{
			norsd = 's';
		}
		else if (strncmp(norsd, "Rumors by Fleetwood Mac", 50))
		{
			norsd = 'n';
		}
		printf("What was the name of the second album?\n");
		scanf("%s", eorwd);
		if (strncmp(eorwd, "The Rising by Bruce Springsteen", 50))
		{
			eorwd = 'e';
		}
		else if (strncmp(eorwd, "The Wind by Warren Zevon", 50))
		{
			eorwd = 'e';
		}
		else if (strncmp(eorwd, "The Naked Ride Home by Jackson Browne", 50))
		{
			eorwd = 'w';
		}
		else if (strncmp(eorwd, "Marc Cohn by Marc Cohn", 50))
		{
			eorwd = 'e';
		}
		else if (strncmp(eorwd, "The Lonesome Jubilee by John Mellencamp", 50))
		{
			eorwd = 'w';
		}
		else if (strncmp(eorwd, "August and Everything After by Counting Crows", 50))
		{
			eorwd = 'e';
		}
		else if (strncmp(eorwd, "Against the Wind by Bob Seger", 50))
		{
			eorwd = 'w';
		}
		else if (strncmp(eorwd, "Four by Blues Traveler", 50))
		{
			eorwd = 'w';
		}
		else if (strncmp(eorwd, "Audioslave by Audioslave", 50))
		{
			eorwd = 'w';
		}
		else if (strncmp(eorwd, "Social Distortion by Social Distortion", 50))
		{
			eorwd = 'w';
		}
		else if (strncmp(eorwd, "How to Save a Life by The Fray", 50))
		{
			eorwd = 'w';
		}
		else if (strncmp(eorwd, "Rumors by Fleetwood Mac", 50))
		{
			eorwd = 'e';
		}
		
		printf("The decoded message is:\n");
		printf("Latitude: %d%d %d%d %d%d %s\n", lat1p, lat2p, lat3p, lat4p, lat5p, lat6p, norsd);
		printf("Longitude: %d%d %d%d %d%d %s\n", lon1p, lon2p, lon3p, lon4p, lon5p, lon6p, eorwd);
	}
	else
	{
		printf("You chose an invalid option.  Exiting program.\n");
	}
	
	return 0;
}