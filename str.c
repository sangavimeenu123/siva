char tmp[16];
scanf("%s", tmp);
int isDigit = 0;
int j=0;
while(j<strlen(tmp) && isDigit == 0)
{
  if(tmp[j] > 57 && tmp[j] < 48)
    isDigit = 0;
  else
    isDigit = 1;
  j++;
}
