#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    // check the argc that is equal 2
    if (argc != 2)
    {
        printf("Usage: ./recover IMAGE\n");
        return 1;
    }

    // open file for reading
    FILE *input_file = fopen(argv[1], "r");

    // check file is valid
    if (input_file == NULL)
    {
        printf("Could not open file");
        return 2;
    }

    // store 512 bytes
    unsigned char buffer[512];

    // images count
    int count_image = 0;

    // declare output file like pointer
    FILE *output_file = NULL;

    // char filename[8]
    char *filename = malloc(8 * sizeof(char));

    // read the blocks of 512 bytes
    while (fread(buffer, sizeof(char), 512, input_file))
    {
        // check if bytes start of jpeg
        if (buffer[0] == 0xff & buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            // write the jpeg filenames
            sprintf(filename, "%03i.jpg", count_image);

            // open output file for writing
            output_file = fopen(filename, "w");

            // increase counter
            count_image++;
        }
        if (output_file != NULL)
        {
            fwrite(buffer, sizeof(char), 512, output_file);
        }
    }

    free(filename);
    fclose(output_file);
    fclose(input_file);

    return 0;

}