#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>

float sum(char *argv[], int *argc);
float multiply(char *argv[], int *argc);
float division(char *argv[], int *argc);
float sub(char *argv[], int *argc);
void validity_check(int *err_flag, int *argc, int *m_flag, int *a_flag, int *s_flag, int *d_flag);
void parse_opts(int *result, int *err_flag, int *argc, char *argv[], int *m_flag, int *a_flag, int *s_flag, int *d_flag);
void run(int *argc, char *argv[], int *m_flag, int *a_flag, int *s_flag, int *d_flag);

int main(int argc, char *argv[])
{   
    int result;
    int err_flag;
    int m_flag, a_flag, s_flag, d_flag;

    m_flag = a_flag = s_flag = d_flag = 0;
    err_flag = 0;
    opterr = 0;
    
    parse_opts(&result, &err_flag, &argc, argv, &m_flag, &a_flag, &s_flag, &d_flag);

    validity_check(&err_flag, &argc, &m_flag, &a_flag, &s_flag, &d_flag);

    run(&argc, argv, &m_flag, &a_flag, &s_flag, &d_flag);

    return 0;
}

void run(int *argc, char *argv[], int *m_flag, int *a_flag, int *s_flag, int *d_flag)
{
    float operation_result = 0.0f;
    if(*m_flag)
    {
        operation_result = multiply(argv, argc);   
    }
    else if(*a_flag)
    {
        operation_result = sum(argv, argc);  
    }
    else if(*s_flag)
    {
        operation_result = sub(argv, argc);  
    }
    else if(*d_flag)
    {
        operation_result = division(argv, argc);  
    }

    printf("RESULT: %0.2f \n", operation_result);
}

float sum(char *argv[], int *argc)
{
    char *subArr;
    float total = 0.0f;

    for(int i = optind; i < (*argc); i++)
    {
        subArr = argv[i];
        float val = atof(subArr);
        total += val;
    }
    return total;
}

float multiply(char *argv[], int *argc)
{
    char *subArr;
    float total = 1.0f;

    for(int i = optind; i < (*argc); i++)
    {
        subArr = argv[i];
        float val = atof(subArr);
        total *= val;
    }
    return total;
}

float division(char *argv[], int *argc)
{
    float total = 1.0f;
    char *subArr = argv[optind];
    float val = atof(subArr);

    if((*argc) - optind < 2)
    {
        if(val == 0)
        {
            return 0.0f;
        }
        return total / val;
    }

    for(int i = optind + 1; i < (*argc); i++)
    {
        subArr = argv[i];
        float val2 = atof(subArr);
        if(val2 == 0)
            continue;
        
        total = val / val2;    
        val = total;    
    }
    return total;
}

float sub(char *argv[], int *argc)
{
    char *subArr;
    float total = 0.0f;
    
    subArr = argv[optind];
    float val = atof(subArr);

    if((*argc) - optind < 2)
    {
        return total - val;  
    }

    for(int i = optind + 1; i < (*argc); i++)
    {
        subArr = argv[i];
        float val2 = atof(subArr);
        
        total = val - val2;
        val = total;
    }
    return total;
}

void validity_check(int *err_flag, int *argc, int *m_flag, int *a_flag, int *s_flag, int *d_flag)
{
        if(*err_flag)
    {
        exit(EXIT_FAILURE);
    }

    if(*argc == optind)
    {
        fprintf(stderr, "given no option!\n");
        exit(EXIT_FAILURE);
    }

    int multiple_options = (*m_flag) + (*a_flag) + (*s_flag) + (*d_flag) > 1;

    if(*m_flag && multiple_options)
    {
        fprintf(stderr, "cannot be utilized with multiple options...\n");
        exit(EXIT_FAILURE);
    }

    if(*a_flag && multiple_options)
    {
        fprintf(stderr, "cannot be utilized with multiple options...\n");
        exit(EXIT_FAILURE);
    }

    if(*s_flag && multiple_options)
    {
        fprintf(stderr, "cannot be utilized with multiple options...\n");
        exit(EXIT_FAILURE);
    }

    if(*d_flag && multiple_options)
    {
        fprintf(stderr, "cannot be utilized with multiple options...\n");
        exit(EXIT_FAILURE);
    }
}

void parse_opts(int *result, int *err_flag, int *argc, char *argv[], int *m_flag, int *a_flag, int *s_flag, int *d_flag)
{
    while( (*result = getopt((*argc), argv, "masd")) != -1 )
    {
        switch((*result))
        {
            case 'm':
                *m_flag = 1;
                break;
            case 'a':
                *a_flag = 1;
                break;
            case 's':
                *s_flag = 1;
                break;
            case 'd':
                *d_flag = 1;
                break;
            case '?':
                if(optopt == 'm')
                {
                    fprintf(stderr, "-m option given without an argument...\n");
                }
                else if(optopt == 'a')
                {
                    fprintf(stderr, "-a option given without an argument...\n");
                }
                else if(optopt == 's')
                {
                    fprintf(stderr, "-s option given without an argument...\n");
                }
                else if(optopt == 'd')
                {
                    fprintf(stderr, "-d option given without an argument...\n");
                }
                else
                {
                    fprintf(stderr, "invalid option...\n");
                }
                *err_flag = 1;
                break;
        }
    }
}