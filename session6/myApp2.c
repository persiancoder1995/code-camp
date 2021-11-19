#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main() {
    int fd = open("lyric.txt",O_RDONLY);
    printf("fd is : %d\n",fd);

    while (1)
    {
        char file_input[10];
        int bytes_read = read(fd,file_input,10);

        if(bytes_read > 0)
        {
            // printf("\n%d\n",bytes_read);

            file_input[bytes_read] = '\0';
            printf("%s",file_input);
            continue;
        }else if (bytes_read == 0)
        {
            
            printf("done successfully\n");
        } else {
            printf("something is wrong.\n");
        }
        break;
        
        
    }
    
}