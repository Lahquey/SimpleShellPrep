#include <stdio.h>

int main(void)
{
    FILE *fp;
    int pidmax;

    // Open the file for reading
    fp = fopen("/proc/sys/kernel/pid_max", "r");

    // Check if the file opened successfully
    if (fp == NULL) {
        perror("Error opening file");
        return 1;  // Exit with an error code
    }

    // Read the value from the file
    fscanf(fp, "%d", &pidmax);

    // Close the file
    fclose(fp);

    // Print the value
    printf("%d\n", pidmax);

    return 0;
}

