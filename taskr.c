#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
        readFile();
        return 0;
}

int add() 
{
        return 0;
}

int readFile(int typeOfRead, int taskID) // Type of read operation 0 == list ; 1 == filter. ;; int taskID == Expeced task ID
{
        FILE *ifp;
        char *mode = "r";
        char outputFilename[] = "taskr.lst";
        
        char* p;
        char* string;

        char ID[6];
        char desc[255], comm[255], buffer[510];

        ifp = fopen("taskr.lst", mode);

        if (ifp == NULL) { //Check if file is available for reading
                fprintf(stderr, "Can't open task file, does it exist? \n");
                exit(1);
        } // if closing
       
        while (1) {      //Read File & Put contents into a buffer
                if (fgets(buffer, 150, ifp) == NULL) break;
        //        printf("%s", buffer);
        } 

        p = strtok(buffer, "%");
        if (p != NULL) 
        {
                strcpy(ID, p);
                p = strtok (NULL, "%");
                if (p != NULL) 
                        strcpy(desc, p);
        }
        printf("\n Read value 1: %s; Read Value 2: %s; \n", ID, desc);

        return 0;
} // readFile()

int read() 
{

}

int list()
{
        return 0;
}

