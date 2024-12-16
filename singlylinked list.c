#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*next;
}
struct node*head;
void beginsert();
void lastinsert();
void randominsert();
void begin_delete();
void last_delete();
void random_delete();
void display();
void search();
void main()
{
int choice=0;
while(choice !=9)
{
printf("\n\n*********Main Menu*********\n");
printf("\nchoose one option from the folllowing list...\n");
printf("\n=======================\n");
 
