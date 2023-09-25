#include "main.h"

char *leet(char *n)
{
        char i[] = "aAeEoOtTlL";
        char j[] = "4433007711";
        int s;

        for (s = 0; n[s] != '\0'; s++)
        {
                int x = 0;

                while (i[x] != '\0')
                {
                        if (n[s] == i[x])
                        {
                                n[s] = j[x];
                        }
                        x++;
                }
        }
        return (n);
}
