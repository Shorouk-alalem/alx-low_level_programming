#include<stdio.h>
#include<unistd.h>
/**
 * main - a program to print a line to standard error
 * Return: 1 (Success)
 */
int main(void)
{
write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19",59);
return (1);
}
