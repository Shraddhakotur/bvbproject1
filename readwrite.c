#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_CONTACTS 100
struct contact
{
     char name[50];
     char phone_no[15];
     int serial_no;
     char email_id[25];
     time_t datetime;
};
struct contact phoneBook[MAX_CONTACTS];
int contactCount=0;

int main()
 {
    const char *filename = "phoneBook.txt";
    writeData(filename);
    readData(filename);
    return 0;
}
void writeData(const char *filename)
{
    time_t t;   // not a primitive datatype
    time(&t);
    FILE *file = fopen(filename,"wb");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }
    struct contact phoneBook = {"hello","hiiii",10,"nmj@gmail.com",ctime(&t)};
    fwrite(&phoneBook, sizeof(struct contact), 1, file);
    printf("Data written to file successfully.\n");
    fclose(file);
    }
    void readData(const char *filename)
     {
    FILE *file = fopen(filename, "rb");
    if (file == NULL)
         {
        printf("Error opening file for reading.\n");
        return;
        }
    struct contact phoneBook;
    fread(&phoneBook,sizeof(struct contact), 1, file);
    printf("Name:%s\n", phoneBook.name);
    printf("phone_no:%s\n", phoneBook.phone_no);
    printf("serial_no:%d\n", phoneBook.serial_no);
    printf("email_id:%s\n", phoneBook.email_id);
    printf("datetime:%s\n", phoneBook.datetime);
    }
