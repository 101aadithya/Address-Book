#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include<string.h>


#define MAX_CONTACTS 100

typedef struct {
    int index;
    char name[50];
    char number[15];
    char mail[50];
    int age;
    char address[100];
}contact;

// function to add contacts
void add(contact *con);

// function to list contacts
void list(contact *con);

// function to search from contacts
void search(contact *con);

// function to edit the exisiting contacts
void edit(contact *con);

// function to delete contacts
void delete_contacts(contact *con);

void load_contacts(const char *bookname,contact *con);
void save_contacts(const char *bookname,contact *con);

#endif
