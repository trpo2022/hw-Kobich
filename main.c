#include <stdio.h>

int main()
{
char mass[9][9];
for (int i = 0; i < 8; i++)
for (int j = 0; j < 1; j++)
{
mass[i][j] = 56 - i;
}
mass[8][0] = 32;
for (int i = 8; i > 7; i--) {
for (int j = 1; j < 9; j++)
mass[i][j] = 96 + j;
}
for (int i = 2; i < 6; i++)
for (int j = 1; j < 9; j++)
{
mass[i][j] = 32;
}

for (int i = 1; i < 2; i++)
for (int j = 1; j < 9; j++)
{
mass[i][j] = 112;
}

for (int i = 6; i < 7; i++)
for (int j = 1; j < 9; j++)
{
mass[i][j] = 80;
}
mass[7][1] = 82;
mass[7][8] = 82;
mass[7][2] = 78;
mass[7][7] = 78;
mass[7][3] = 66;
mass[7][6] = 66;
mass[7][4] = 81;
mass[7][5] = 75;
mass[0][1] = 114;
mass[0][8] = 114;
mass[0][2] = 110;
mass[0][7] = 110;
mass[0][3] = 98;
mass[0][6] = 98;
mass[0][4] = 113;
mass[0][5] = 107;

for (int i = 0; i < 9; i++)
{
for (int j = 0; j < 9; j++)
printf("%c ", mass[i][j]);
printf("\n");
}
return 0;
}
