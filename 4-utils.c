#include "main.h"

int handleBuffer(int a, char *ch)
{
        static int iForBuffer = 0;
        int iForInput = 0;
        static char output[buff_size];
        static int outputLength = 0;
        if (a == -1)
        {
                write(1, output, iForBuffer);
                iForBuffer = 0;
                return (outputLength);
        }
        if (a == 1)
                output[iForBuffer] = *ch, ++outputLength, ++iForBuffer, ++iForInput, --a, output[iForBuffer] = '\0';
        while (a--)
        {
                if (iForBuffer == buff_size - 1)
                {
                        write(1, output, iForBuffer);
                        iForBuffer = 0, output[iForBuffer] = '\0';
                }
                output[iForBuffer] = ch[iForInput];
                ++outputLength, ++iForBuffer, ++iForInput, output[iForBuffer] = '\0';
        }
        return (outputLength);
}