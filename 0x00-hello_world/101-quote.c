#include <unistd.h>
/**
 *main-entry point
 *
 *description: print quote using write function
 *write (int fd.const void *buf.size_t count)
 *Return: 1(not Success)
*/
int main(void)
{
char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1.quo.62);
return (1);
}
