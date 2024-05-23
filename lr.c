#include <stdio.h>
#define MAX 1000
#define YES 1 
#define NO 0
#define N 10
#define P 3
#define K 4

struct Data
{
    float avg;
    int min;
    int max;
};

int lr1(void)
{
    float L; 
    //расстояние между пунктами
    float V1;  
    //скорость первого пешехода
    float t;
    // время встречи
    float V2;
    //cкорость второго пешехода
    printf("L = ");
    scanf("%f", &L);
    printf("V1 = ");
    scanf("%f", &V1);
    printf("t = ");
    scanf("%f", &t);
    V2 = (L / t) - V1;
    printf ("V2 = %f", V2);
    return 0;

}

int dop1()
{
    const int L = 55;
    //расстояние между пунктами
    int V1;
    //скорость первого пешехода
    int t;
    // время встречи
    int V2;
    // скорость второго пешехода
    printf("L = %d \n", L);
    printf("V1 = ");
    scanf("%d", &V1);
    printf("t = ");
    scanf("%d", &t);
    V2 = (L / t) - V1;
    printf ("V2 = %d", V2);
    return 0;
}

int lr2(void)
{
    float a;
    long long s;
    int x;
    float x1;
    int n,i,sign;

    printf("x = ");
    scanf("%d", &x);
    printf("n = ");
    scanf("%d", &n);
    s = 0;
    sign = 1;
    i = 1;
    x1=x;

    while ( i <= n )
    {
        a = x1/((float)(i));
        s = s + a*sign;
        sign = -sign;
        i = i + 1;
        x1*=x;
    }

    printf(" s = %lld \n", s);

    return 0;
}

int dop2( void )
{
    float a;
    long double s;
    int x;
    float x1;
    int n,i,sign;

    printf("x = ");
    scanf("%d", &x);
    printf("n = ");
    scanf("%d", &n);
    s = 0;
    sign = 1;
    x1=x;

    for(i = n; i > 0 ; --i)
    {
        a = x1/((float)(n-i+1));
        s = s + a*sign;
        sign = -sign;
        x1*=x;
    }

    printf(" s = %Lf \n", s);

    return 0;
} 

int lr3(void)
{
    int flag = NO, c, cnt=0, m=0,n;
    //признак слова
    //текущий символ
    //колво букв в слове
    //колво слов удвл условию
    printf("n=");
    scanf("%d", &n);
    printf ("Для окончания работы программы введите Enter ctrl+D \n");
    while((c = getchar ()) != EOF)
    {
        if ((c == ' ') || (c == '.') || (c == '\n') || (c == ','))
        {
            flag=NO;
            if(cnt>n) m+=1;
            cnt=0;
        }
        else
            if(flag==NO)
            {
                flag=YES; cnt+=1;
            }
            else
                if(flag==YES)
                    cnt+=1;
    }
    printf("\number of words = %d\n", m);
    return 0;
}

int dop3()
{
    int flag = NO, c, cnt=0, m=0,n, k;
    //признак слова
    //текущий символ
    //колво букв в слове
    //колво слов удвл условию
    printf("n=");
    scanf("%d", &n);
    printf("k=");
    scanf("%d", &k);
    printf ("Для окончания работы программы введите Enter ctrl+D \n");
    while((c = getchar ()) != EOF)
    {
        if ((c == ' ') || (c == '.') || (c == '\n') || (c == ','))
        {
            flag=NO;
            if(cnt>n && n<k) m+=1;
                cnt=0;
        }
        else
            if(flag==NO)
            {
                flag=YES; cnt+=1;
            }
            else
                if(flag==YES)
                    cnt+=1;
    }
    printf("\nnumber of words = %d\n", m);
    return 0; 
}

int lr4(void)
{ 
    int i = 0;
    int j = 0;
    char c;
    char line[MAX];
    char buffer[MAX];

    fgets(buffer, MAX, stdin);

    do
    {
        c = buffer[i];

        if(c == ' ')
        {
            line[j++] = ' ';

            while(c == ' ')
            {
                i++;
                c = buffer[i];
            }
        }

        line[j] = c;

        i++;
        j++;
    }
    while( c != '\0' );

    puts(line);
    return 0;
}

int dop4(void)
{
    int i = 0;
    int j = 0;
    char c;
    char line[MAX];
    char buffer[MAX];

    fgets(buffer, MAX, stdin);

    do
    {
        c = buffer[i];

        if(c == ' ')
        {
            line[j++] = '\n';

            while(c == ' ')
            {
                i++;
                c = buffer[i];
            }
        }
        line[j] = c;
        i++;
        j++;
    }
    while( c != '\0' );
    puts(line);
    return 0;
}

int lr5(void)
{
    int x[N];
    float aver = 0;
    int i;

    for( i = 0; i < N; i++ )
    scanf("%d", &x[i]);

    for( i = 0; i < N; i++ )
    aver = aver + x[i];
    aver = aver / N;

    for( i = 0; i < N; i++ )
    {
        if( x[i] < aver )
        x[i] = 0;
    }

    for( i = 0; i < N; i++ )
        printf("%d ", x[i]);
    printf("\n");

    return 0;
}

int dop5(void)
{
    int x[N]; 
    float aver = 0; 
    int i;
    
    
        
    for( i = 0; i < N; i++ )
        scanf("%d", &x[i]);
        
        struct Data data;

    data.avg = 0;
    data.min = x[0];
    data.max = x[0];

    for (int i = 0; i < N; i++) {
        data.avg += x[i];
        
        if (x[i] < data.min) {
            data.min = x[i];
        }
        
        if (x[i] > data.max) {
            data.max = x[i];
        }
    }

    data.avg = data.avg / N;

    printf("Average: %.2f\n", data.avg);
    printf("Min: %d\n", data.min);
    printf("Max: %d\n", data.max);
    
    for( i = 0; i < N; i++ )
        aver = aver + x[i];
    aver = aver / N;
    
    for( i = 0; i < N; i++ )
    {
        if( x[i] < aver )
            x[i] = 0;
    }
        
    for( i = 0; i < N; i++ )
        printf("%d ", x[i]);
    printf("\n");
        
    return 0;
}



int lr6() 
{
    int arr[P][K];
    
    for (int i = 0; i < P; i++) 
    {
        for (int j = 0; j < K; j++) 
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int minSum = __INT_MAX__;
    int minIndex = -1;

    // Находим строку с минимальной суммой элементов
    for (int i = 0; i < P; i++) 
    {
        int sum = 0;
        for (int j = 0; j < K; j++) 
        {
            sum += arr[i][j];
        }
        if (sum < minSum) 
        {
            minSum = sum;
            minIndex = i;
        }
    }

    // Обнуляем элементы строки с минимальной суммой
    for (int j = 0; j < K; j++) 
    {
        arr[minIndex][j] = 0;
    }

    printf("Полученный массив:\n");
    for (int i = 0; i < P; i++) 
    {
        for (int j = 0; j < K; j++) 
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

void swap(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubbleSort(int arr[P][K]) 
{
    for (int i = 0; i < P; i++) 
    {
        for (int j = 0; j < K; j++) 
        {
            for (int k = 0; k < P; k++) 
            {
                for (int l = 0; l < K; l++) 
                {
                    if (arr[i][j] > arr[k][l]) 
                    {
                        swap(&arr[i][j], &arr[k][l]);
                    }
                }
            }
        }
    }
}
void printArray (int arr[P][K]) 
{
    for (int i = 0; i < P; i++) 
    {
        for (int j = 0; j < K; j++) 
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
int dop6() 
{
    int arr[P][K];
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Введите элементы массива %dx%d:\n", P, K);
    for (int i = 0; i < P; i++) 
    {
        for (int j = 0; j < K; j++) 
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int minSum = __INT_MAX__;
    int minIndex = -1;
    // Находим строку с минимальной суммой элементов
    for (int i = 0; i < P; i++) 
    {
        int sum = 0;
        for (int j = 0; j < K; j++)
        {
            sum += arr[i][j];
        }
        if (sum < minSum) 
        {
            minSum = sum;
            minIndex = i;
        }
    }
    // Обнуляем элементы строки с минимальной суммой
    for (int j = 0; j < K; j++) 
    {
        arr[minIndex][j] = 0;
    }

    bubbleSort(arr);

    printf("Полученный массив:\n");
    printArray(arr);

    return 0;
} 

int lr7() 
{
    long long L;
    int bitposition = 0;
    
    // Вводим число N
    printf("целое число N: ");
    scanf("%lld", &L);

    if(L == 0)
    {
        printf("число не содержит единиц");
    }
    // Находим младшую единицу в двоичном представлении числа N
    else
    {
        while ((L & (1 << bitposition)) == 0) 
        {
            bitposition++;
        }
    
    printf("позиция младшей единицы: %d\n", bitposition);
    }

    return 0;
}