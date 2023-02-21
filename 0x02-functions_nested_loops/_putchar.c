#include <unistd.h>
/** put characte rprin character c in stdout
 */
int _putchar(char c)
{
  return write((1, &c,1));
}

