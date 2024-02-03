#include <string.h>
#include <stdlib.h>

char * _opener_create_cmd(const char * cmd, const char * link) {
  char * url = (char*)malloc(strlen(cmd) + strlen(link) + 4);
  strcpy(url, cmd);
  strcat(url, " '");
  strcat(url, link);
  strcat(url, "'");
  return url;
}

int opener(const char *url) {
#if defined(__APPLE__) || defined(__MACH__)
    const char *cmd = "open";
#elif defined(_WIN32) || defined(_WIN64)
    const char *cmd = "start";
#else
    const char *cmd = "xdg-open";
#endif
    char *script = _opener_create_cmd(cmd, url);
    system(script);
    free(script);
    return 0;
}
