#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 512

int main(int argc, char *argv[])
{
    FILE *file = fopen("card.raw", "r");
    if (argc != 2)
    {
        fprintf(stderr, "Usage: ./recover image\n");
        return 1;
    }


    if (file == NULL)
    {
        fprintf(stderr, "Could not open card.raw\n ");
        return 1;
    }
    FILE *image = NULL;

    unsigned char buffer[512];
    int filecount = 0;
    int jpg_found = 0;

    while (fread(buffer, BUFFER_SIZE, 1, file) == 1)
    {
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xe0) == 0xe0)
        {
            if (jpg_found == 1)
            {
                fclose(image);
            }
            else
            {
                jpg_found = 1;
            }

            char filename[8];
            sprintf(filename, "%03d.jpg", filecount);
            image = fopen(filename, "a");
            filecount++;
        }

        if (jpg_found == 1)
        {
            fwrite(&buffer, BUFFER_SIZE, 1, image);
        }

    }

    fclose(file);
    fclose(image);

    return 0;

}
