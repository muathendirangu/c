#include <stdio.h>

/**
 *
 * Utilise function pointers to implement abstractions in c
 *
 * ***/

/*** API to implement ***/

struct greet_api
{
    int (*say_hello)(char *name);
    int (*say_goodbye)(void);
};

int say_hello_fn(char *name)
{
    printf("Hello %s\n", name);
    return 0;
}

int say_goodbye_fn(void)
{
    printf("bye sir\n");
    return 0;
}

/*** A struct implementing the API ***/
struct greet_api greet_api =
{
    .say_hello = say_hello_fn,
    .say_goodbye = say_goodbye_fn
};

int main(int argc, char *argv[])
{
    greet_api.say_hello(argv[1]);
    greet_api.say_goodbye();
}
