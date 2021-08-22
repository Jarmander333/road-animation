#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
	for( ; ; ) {
		//int uptime = uptime + 2;

		//printf("%d seconds...\n\n", uptime);
		usleep(500000);
		system("clear");
		printf("       / | \\\n");
		printf("      /     \\\n");
		printf("     /       \\\n");
		printf("    /    |    \\\n");
		printf("   /     |     \\\n");
		printf("  /             \\\n");
		printf(" /               \\\n");
		printf("/        |        \\\n");
		usleep(500000);
		system("clear");
		printf("       / | \\\n");
        printf("      /  |  \\\n");
        printf("     /       \\\n");
        printf("    /         \\\n");
        printf("   /     |     \\\n");
        printf("  /      |      \\\n");
        printf(" /               \\\n");
        printf("/                 \\\n");
		usleep(500000);
		system("clear");
		printf("       /   \\\n");
        printf("      /  |  \\\n");
        printf("     /   |   \\\n");
        printf("    /         \\\n");
        printf("   /           \\\n");
        printf("  /      |      \\\n");
        printf(" /       |       \\\n");
        printf("/                 \\\n");
		usleep(500000);
		system("clear");
		printf("       /   \\\n");
        printf("      /     \\\n");
        printf("     /   |   \\\n");
        printf("    /    |    \\\n");
        printf("   /           \\\n");
        printf("  /             \\\n");
        printf(" /       |       \\\n");
        printf("/        |        \\\n");
	}
	return 0;
}
