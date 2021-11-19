#include <stdio.h>
#include <fcntl.h>

int main() {
    int fd = open("input.txt", O_RDONLY);
    int fd2 = open("input2.txt", O_RDONLY);
    int fd3 = open("input2.txt", O_RDONLY);

    printf("fd is : %d\n",fd);
    printf("fd2 is : %d\n",fd2);
    printf("fd3 is : %d\n",fd3);
}