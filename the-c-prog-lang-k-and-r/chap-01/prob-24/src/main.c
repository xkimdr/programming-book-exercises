#include <stdio.h>
#define T 1
#define F 0
#define M 1000

int main(void)
{
    int cf = F;
    int cpf = F;
    int sqf = F;
    int dqf = F;

    int i = 0;
    char buff[M];

    int pc = -1;
    int c;
    while ((c = getchar()) != EOF)
    {
        if (!cf && !cpf && !sqf && !dqf)
        {
            if (c == '{' || c == '[' || c == '(')
            {
                buff[i] = (char)c;
                ++i;
            }
            else if (c == '\'')
            {
                sqf = T;
            }
            else if (c == '\"')
            {
                dqf = T;
            }
            else if (pc == '/' && c == '/')
            {
                cpf = T;
            }
            else if (pc == '/' && c == '*')
            {
                cf = T;
            }
            else if (c == '}' || c == ']' || c == ')')
            {
                if (i != 0 && ((buff[i - 1] == '{' && c == '}') || (buff[i - 1] == '(' && c == ')') || (buff[i - 1] == '[' && c == ']')))
                {
                    --i;
                }
                else
                {
                    printf("error\n");
                    return -1;
                }
            }
        }
        else if (cf && pc == '*' && c == '/')
        {
            cf = F;
        }
        else if (cpf && c == '\n')
        {
            cpf = F;
        }
        else if (sqf && pc != '\\' && c == '\'')
        {
            sqf = F;
        }
        else if (dqf && pc != '\\' && c == '\"')
        {
            dqf = F;
        }

        pc = c;
    }

    if (i != 0 || cf || cpf || sqf || dqf)
    {
        printf("error\n");
        return -1;
    }

    return 0;
}
