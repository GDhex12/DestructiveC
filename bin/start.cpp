#include <stdio.h>

extern "C"
{
    void start();
}

extern "C" void printint(int val)
{
    printf("%d\n", val);
}

extern "C" void printstr(char* string)
{
    puts(string);
}

extern "C" void printintfile(char* fileName, int val)
{
    FILE* f = fopen(fileName, "wb+");
    if(f != NULL)
    {
        fprintf(f, "%d", val);
        fclose(f);
    }
}

extern "C" void printstrfile(char* fileName, char* val)
{
    FILE* f = fopen(fileName, "wb+");
    if(f != NULL)
    {
        fprintf(f, "%s", val);
        fclose(f);
    }
}
extern "C" int Sum(int a, int b){
    int* pointer = &a;
    int answ = a+b;
    printf("%d\n", answ);
    delete pointer;
    return answ;

}
int main()
{
    start();
    return 0;
}