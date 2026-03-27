/*Name:Aisha Abdulahi
Student ID: 25378043
Date:25/03/2026*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

/*structure to store each location*/
typedef struct {
	int n, s, e, w, in, out;
	char description[256];
} location;

/*Array to store all location*/
location locations[100];
int numLocations = 0;
char locationsFile[] = "adventure_locations.txt";

/*function to read locatiins from file*/
bool readLocations() {
	FILE* file;
	char line[256];

	file = fopen(locationsFile, "r");
	if (file == NULL) {
		printf("Error opening file\n");
		return false;
	}
	/* skip first two header lines*/
	fgets(line, sizeof(line), file);
	fgets(line, sizeof(line), file);

	while (fgets(line, sizeof(line), file)) {
		numLocations++;

		location l;
		int locNum;

		/* read data from line*/
		sscanf(line, "%d %d %d %d %d %d %d %[^\n]",
			&locNum, &l.n, &l.s, &l.e, &l.w,
			&l.in, &l.out, l.description);

		locations[numLocations] = l;
	}
	fclose(file);/*close file*/
	return true;
}
int main() {
	if (readLocations()) {
		printf("Successfully read %d locations from file\n", numLocations);
	}
	int currentLocation = 1;/*start at location 1*/
	char command[20];/* stores user command*/
	bool playing = true;

	printf("Welcome to Galway Adventure. Type 'help' for help.\n\n");

	/*main game loop*/
	while (playing) {
		printf("\n%s\n", locations[currentLocation].description);
		/* ask user for command*/
		printf("\nCommand: ");
		scanf("%s", command);

		for (int i = 0; command[i]; i++) {
			command[i] = tolower(command[i]);
		}

		/* move North */
		if (strcmp(command, "n") == 0) {
			if (locations[currentLocation].n != 0) {
				currentLocation = locations[currentLocation].n;
				printf("%s\n", locations[currentLocation].description);
			}
			else
				printf("You can't go that way.\n");
		}

		/* move South */
		else if (strcmp(command, "s") == 0) {
			if (locations[currentLocation].s != 0) {
				currentLocation = locations[currentLocation].s;
				printf("%s\n", locations[currentLocation].description);
			}
			else
				printf("You can't go that way.\n");
		}

		/* move East */
		else if (strcmp(command, "e") == 0) {
			if (locations[currentLocation].e != 0) {
				currentLocation = locations[currentLocation].e;
				printf("%s\n", locations[currentLocation].description);
			}
			else
				printf("You can't go that way.\n");
		}

		/* move West */
		else if (strcmp(command, "w") == 0) {
			if (locations[currentLocation].w != 0) {
				currentLocation = locations[currentLocation].w;
				printf("%s\n", locations[currentLocation].description);
			}
			else
				printf("You can't go that way.\n");
		}

		/* move in */
		else if (strcmp(command, "in") == 0) {
			if (locations[currentLocation].in != 0) {
				currentLocation = locations[currentLocation].in;
				printf("%s\n", locations[currentLocation].description);
			}
			else
				printf("You can't go that way.\n");
		}

		/* move out */
		else if (strcmp(command, "out") == 0) {
			if (locations[currentLocation].out != 0) {
				currentLocation = locations[currentLocation].out;
				printf("%s\n", locations[currentLocation].description);
			}
			else
				printf("You can't go that way.\n");
		}

		/* look */
		else if (strcmp(command, "look") == 0) {
			printf("%s\n", locations[currentLocation].description);
		}

		/* help */
		else if (strcmp(command, "help") == 0) {
			printf("I know these commands:\n");
			printf("n, s, e, w, in, out, look, help, quit.\n");
		}

		/* Quit command*/
		else if (strcmp(command, "quit") == 0) {
			playing = false;
			puts("bye!\n");
		}
		/* Invalid command*/
		else {
			printf("Unknown command\n");
		}
	}
	return 0;
}


