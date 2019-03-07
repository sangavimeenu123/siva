void main(void)  
{  
clrscr();  
int count = 0;  
int words = 0;  
int sentences = 0;  
char ch;
while ((ch = getch()) != '\n')
{
    printf("%c", ch);
    while ((ch = getch()) != '.')
    {
        printf("%c", ch);
        while ((ch = getch()) != ' ')
        {
            printf("%c", ch);
            count++;
        }
        printf("%c", ch);
        words++;
    }
    sentences++;
}
printf("The number of characters are %d", count);
printf("\nThe number of words are %d", words);
printf("\nThe number of sentences are %d", sentences);
getch();
   }
