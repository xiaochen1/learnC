#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <stdarg.h>

#define PI  3.141592653; //�������壬 �궨�壨ȫ�֣�

//�����в���������ִ��ʱ���ݵ�main������
//   ./a.out testing1 testing2, ��ʱ��testing1 �� testing2 ��Ϊ�������ݵ�main������

// argNumΪ�����ĸ���������ִ��ʱ���ݵĲ��������������á�
int main(int argNum, char *argv[]) {
    //����ע��
    /*����ע��*/


    //--------------------����-------------------------------------------------------------
    // ��������
    char some = 'A';  //  ���������������
        printf("char���ʹ�С%d���ֽ�\n",sizeof(some));
    char name[] = "XIAOQIANG";  //char����,  1   ���ֽ�
        printf("char���������С%d��Ԫ�أ�%d���ֽ�\n",strlen(name),sizeof(name));
    short b = 20;  // short ����
        printf("short���ʹ�С%d���ֽ�\n",sizeof(b)); //  2 ���ֽ�
    int age=10; // int ���ͣ�
        printf("int���ʹ�С%d���ֽ�\n",sizeof(age)); // 4   ���ֽ�
    long  c = 2018;   // long����
        printf("long���ʹ�С%d���ֽ�\n",sizeof(c));   // long   4 ���ֽ�
    float height = 1.5;  //float���ͣ�   4���ֽ�
        printf("float���ʹ�С%d���ֽ�\n",sizeof(height)); // 4 �ֽ�
    double width = 2.0;  //double����
        printf("double���ʹ�С%d���ֽ�\n",sizeof(width));  // 8  �ֽ�
    //extern int route ; // extern �����������������ǲ����壨�������洢�ռ䣩

    const float huilv = 0.8; //�������壬�ֲ�


    //----------------ǿ������ת��
    //char,short --> int --> unsigned int -->  long --> unsigned long --> long long --> unsigned long long --> float --> double --> long double

    int forceA = (int) some; // 65��  �ַ�A��ascii��Ϊ   65
    printf("%d\n", forceA);
    //-------------------�ַ���
    char  greeting[] = "Hello World";
    printf("�ַ���--->%s\n", greeting);
    printf("�ַ�������--->%d\n", strlen(greeting)); //  11,  strlen()�����ַ����ĳ���
    printf("strcpy-->%s\n",  strcat(greeting, ";xiao")); // strcat() �������Ӻ���ַ���
    printf("strchr-->%p\n",  strchr(greeting, 'W')); // strchr()����ĳ���ַ���һ�γ��ֵ�λ�õ�ָ��
    printf("*strchr-->%c\n", *strchr(greeting, 'W')); //
    printf("strstr-->%p\n",  strstr(greeting, "orl")); //����һ��ָ�룬��ָ��ָ���ַ��� orl��һ�γ�����greeting�е�λ��




    //--------------------����
    double balance[] = {1000.0, 2.0, 3.4, 7.0, 50.0, 8} ;  // ��������ʼ������,����Ϊdouble

    printf("balance[3]---->%f\n", balance[3]);
    printf("balance[3]---->%.2f\n", balance[3]);
    //��ά����
    //   1  2  3
    //   4  5  6
    //   7  8  9
    /*
    int gonge[][3]= {{1,2,3}, {4,5,6}, {7,8,9}};
    printf(gonge[1][1]); // 5
    int i;
    int j;
    for ( i = 0; i < 5; i++ ) {
        for ( j = 0; j < 2; j++ ) {
            printf("gonge[%d][%d] = %d\n", i,j, gonge[i][j] );
        }
    }

    //ö��
    enum  sex  {male=1, female}; // ö�����Ͷ���
    enum sex   sex1;   //ö�ٱ���
    sex1 = male;



    //c�У��洢�����ڶ������/���������÷�Χ �� �������ڣ�
    // c�д洢���У� auto �� register ��static ��extern ����
    // auto: ֻ�����ں����ڣ����ξֲ�����
    // register:  ���ڶ���洢�ڼĴ����ж�����RAM�еı���������ζ�ű��������ߴ���ڼĴ����Ĵ�С���Ҳ��ܶ���ʹ��һԪ��  &  �����
    // static: ȫ�ֱ�����Ĭ�ϴ洢�࣬�ڳ�����������������ڶ����ڣ���ֻ��ʼ��һ�Ρ�
    // extern �����ṩһ��ȫ�ֱ��������ã���ʹ��extern ʱ�������޷���ʼ���ı�������ѱ�����ָ��һ��֮ǰ������Ĵ洢λ��


    printf("hello world");
    printf(sizeof(int));

    // �����
    //  +  -  *  /   %   ++   --

    //�ж�  if  ��else if  ��  switch  �� ��Ŀ ?:
    //ѭ��  while()      ��  for() �� do{} while() ��  Ƕ��ѭ��
    //  ѭ������  break  ��continue �� goto

    //�������壬 �������ͱ��룬�������ɲ�Ҫ int max(int , int)
    int max(int num1,  int num2){
        return num1 > num2? num1 : num2;
    }


    //  ���������:
    //ȫ�ֱ��� �� �ֲ����� ��  ��ʽ����

    */




    //----------------ָ��
    //ָ����һ��������ָ���ֵ��һ����ַ,һ�����ڴ洢��һ�������ĵ�ַ����ͨ��&������ȡ�á�
    // ������������ʱ�����û��ȷ�еĵ�ַ���Ը�ֵ����ô����Ϊ��ָ�������һ��NULLֵ����NULLֵ��ָ�뱻��Ϊ��ָ�롣
    //NULLָ����һ�������ڱ�׼���е�ֵΪ��ĳ�����
    //ָ���Ǳ�������ֵ������Ҳ����ʹ�ù�ϵ����������бȽϣ� ==  �� <  ��  >
    char var2 = 'e';
    printf("var2�����ĵ�ַ��%p\n", &var2); // &������ȡ��ַ��һ������
    char *ip ; // ���͵�ָ��

    ip = &var2;
    printf("ipָ���ֵ�ǣ�%p\n", ip);
    printf("*ipָ���ֵ�ǣ�%p\n", *ip); //  %p �Ե�ַ��ʽ��ʽ���������
    printf("*ipָ���ֵ�ǣ�%d\n", *ip);

    int *ptr = NULL;
    printf("ptr�ĵ�ַ��: %p \n", ptr); //
   // printf("ptr�ĵ�ַ��: %p \n", *ptr); //ȡ��ָ���ַ��ֵ������
    //printf("ptr�ĵ�ַ��: %d \n", *ptr); //ȡ��ָ���ַ��ֵ������

    int test[] = {10,20,100};
    int *testptr = &test;
    for(int i=0;i<3; i++){
        printf("�洢��ַtest[%d] = %x\n",i, testptr);
        printf("�洢ֵtest[%d] = %d\n",i, *testptr);
        testptr ++ ;
    }

    int *testp1 = &test[0];
    int *testp2 = &test[1];
    if(testp1 < testp2){
         printf("ָ���С�ıȽ�\n");
    }

    // -----------ָ������
    // ���ڴ��ָ�������

    int  mytest[] = {100,200,300};
    int  *myptr[3];
    int testnum ;
    for(testnum =0;  testnum<3; testnum ++){
        myptr[testnum] = &mytest[testnum];
    }

    //---------------------����
    // �������� -- �ɱ����
    int func(int num, ...) {
        return 0;
    }

    double average(int num, ...){
        va_list  arglist ;
        va_start(arglist, num); // Ϊnum��������ʼ��arglist
        int i;
        double total = 0.0;
        int temp;
        //�������и�ֵ�� arglist�Ĳ�����
        for(i=0; i<num ; i++){
//            temp = va_arg(arglist, int);
           // printf("%d\n", temp);
            total += va_arg(arglist, int); //��ʼ��arglistΪ�����б�
            printf("pertotal------------%f\n", total);
        }
        printf("total---->%f\n", total);
        va_end(arglist);  // ����Ϊarglist�������ڴ�
        return total/num;
    }
    printf("Average of 2, 3, 4, 5 = %f\n", average(4, 2,3,4,5));
    printf("Average of 2, 8, 3, 9,  4 = %f\n", average(5, 2,8,3,9,4));
    //average(5,2,6,8,1,6);

    // �ݹ麯��

    int factorial(unsigned int i){

        printf("����Ĳ�����:%d\n", i);
        if(i<= 1){
            return 1;
        }
        return i * factorial(i-1);
    }
    printf("�ݹ����5�ĳ˻��ǣ�%d\n",factorial(5));

    //-----------����ָ����ص�����
    int max(int x, int y){
        printf("%d, %d\n", x, y);
        return x>y ? x : y;
    }
    int (*p) (int,int) = max;
    p(3,4);
/*
    int temp1, temp2, temp3,  temp4;
    scanf("%d%d%d", &temp1,&temp2, &temp3);
    printf("��������������ǣ�%d,%d,%d\n", temp1, temp2, temp3);;

    if(temp1>temp2){
        temp4 = temp1;
        temp1 = temp2;
        temp2 = temp4;
    }

    if(temp1>temp3){
        temp4 = temp1;
        temp1 = temp3;
        temp3 = temp4;
    }

    if(temp2>temp3){
        temp4 = temp2;
        temp2 = temp3;
        temp3 = temp4;
    }
    printf("������������: %d,%d,%d", temp1, temp2,temp3);

*/
    //-----------�ļ���д
    // fopen(filename, mode)
    //����ȡ�����ı��ļ�����mode�У�r ��  w �� a  �� r+  ��w+   �� a+ ;
    // ����ȡ���Ƕ������ļ�����mode�У�
    // rb ��  wb ��   ab  �� rb+  �� r+b ��wb+   ��ab+   �� a+b




    //------------------�ṹ��
    struct Person {
        char *name; // 8���ֽ�
        char A;
        int age; // 4���ֽ�
    };

    struct Person  p1 = {.name="xiao1",.A='a',.age=21};
    struct Person  p2 = {.name="xiao2",.A='B',.age=22};
    printf("%s,%d\n", p1.name, p1.age); //xiao1,21
    printf("%s,%d\n", p2.name, p2.age); //xiao2,22

    p2 = p1; //��p1�����еĳ�Ա��Ӧ��ֵ��p2�ĳ�Ա

    printf("%s,%d\n", p1.name, p1.age); //xiao1,21
    printf("%s,%d\n", p2.name, p2.age); //xiao1,21

    printf("%d\n", sizeof(p1.name)); // 4
    printf("%d\n", sizeof(p1.age));  // 4
    printf("%d\n", sizeof(p1.A));    // 1
    printf("%d\n", sizeof(p1));      // 12

    //���루���룩�㷨��
    //�ṹ����ռ�õĴ洢�ռ䣬������ ����Ա���ֽ����ı�����


    //--------------�������
    // scanf()  printf()
    // getchar()   putchar()���ڶ�ȡ��д��һ���ַ�
    //gets()    puts()    ���ڶ�ȡ��д��һ�е���������ĳ����������
    int myage ;
    char *myname[100];
    //printf("�������������������\n");
    //scanf("%s %d",&myname, &myage);
   //printf("���������%s, ������ %d\n",  myname, myage);

    char  something[100];
    gets(something); //����������ȡһ������
    puts(something); // ���ַ�����һ�����з�д�뵽�����

    //----------------typedef �� define
    // typedef ֻ����Ϊ���ͣ����Զ�������ͣ��磺�ṹ��ȣ�������� ���ɱ�����ִ�н���
    //��define����Ϊ���Ͷ������֮�⣬������Ϊ��ֵ���������define��Ԥ���������д���
    #define  N 100;
    typedef unsigned int  myint;
    myint aa= 10;
    printf("%d",sizeof(aa));

    //----------------Ԥ������
    // Ԥ������ֻ��һ���ı��滻���ߣ�������õı�����ָ�������������
    //Ԥ���������Ǳ�������һ���֣� �Ǳ��������һ�������ķ�֧; ���ǻ�ָʾ��������ʵ�ʱ���֮ǰ�������Ҫ��Ԥ����
    // Ԥ����������� �� # ��ͷ��   ������Ԥ������ָ���У�
    //#define  ��   #include ��   #undef  ��   #ifdef  �� #ifndef  ��
    // #if  ��   #else  ��   #elif ��     #endif  ��  #error  ��   #pragma


    #undef  FILE_SIZE; //ȡ���Ѷ����FILE_SIZE
    #define FILE_SIZE  100; //  ����FILE_SIZE Ϊ  100

    //ֻ����һ��
    #ifndef MESSAGE
        #define MESSAGE "������Ϣ"
    #endif // MESSAGE

    //��������
    #ifdef MESSAGE
        printf("�Ѷ���ñ���\n");
    #endif // MESSAGE

    // defined()����������ڳ������ʽ�У���ȷ��һ����ʶ���Ƿ��Ѿ�ʹ��#define����������Ѷ����򷵻��棨���㣩������δ�����򷵻ؼ�(��)
    #if !defined(MESSAGE)
        #define MESSAGE  "MY MESSAGE"
    #endif

    //�ַ��������������   #,   #���ڽ��궨���еĲ���תΪ�ַ�������
    #define message_for(a, b)   \
        printf(#a " and " #b ":We love you!\n");
    message_for("С��", "С��");


    //�����������##
    #define  tokenparster(n)   \
        printf("token" #n " = %d", token##n);
    int  token34 = 40;
    tokenparster(34);


    //Ԥ����ꡢ
    // __DATE__   ��  __TIME__ �� __FILE__  ��__LINE__  ��  __STDC__


    printf("__FILE__----->%s\n", __FILE__); //���Ե�ַ H:\cProj\learnC\1-grammer.c
    printf("__DATE__----->%s\n", __DATE__); // Aug 20 2018
    printf("__TIME__----->%s\n", __TIME__); // 00:28:23
    printf("__Line__----->%d\n", __LINE__ ); //�к� ��  313
    printf("__ANSI__----->%d\n", __STDC__ );  //  1


    //---------------������
    // �����壬һ����������ݽṹ������������ͬ���ڴ�λ�ô��治ͬ����������
    //һ���������п����ж����Ա��ֵ��
    //��������ռ�ڴ�Ĵ�Сȡ���ڸù������ڲ�����������͵Ĵ�С

    union Data {
        int i;
        float f;
        char  str[20];
    };

    union Data  data1 ;
    data1.i = 20;
    data1.f = 30.3;
    strcpy(data1.str,"Hello World");
    printf("data1.i:  %d\n", data1.i); //���ݶ�ʧ
    printf("data1.f:  %f\n", data1.f); //���ݶ�ʧ, ��󸳸�������ֵռ���˿ռ�
    printf("data1.str:%s\n", data1.str); //��ȷ���������ʧ


    union Data  data2;
    data2.i = 30;
    printf("data2.i: %d\n", data2.i); // ��ȷ���  30
    data2.f = 12.3;
    printf("data2.i: %f\n", data2.f); //  ��ȷ��� 12.300000
    strcpy(data2.str , "hello");
    printf("data2.i: %s\n", data2.str); //��ȷ��� hello

    //------------ͷ�ļ�������
    // ʹ��  #include  <file> ָ��������ĳ���ļ�,�� #include <stdio.h>
    // ����ͷ�ļ����൱�ڽ����ļ������е����ݸ��Ƶ���ǰ�ļ��� �ظ�����ͬһ���ļ��ᱨ��
    //Ϊ�˷�ֹ�������ͬһ��ͷ�ļ��������ʹ����������
    #ifndef  somefile
        #define somefile
    #endif // somefile


    //��������ͷ�ļ�

    #if SYSTEM1
        #include  "system_1.h"
    #elif SYSTEM2
        #include "system_2.h"
    #elif SYSTEM3
        #include "system_3.h"
    #endif // SYSTEM1














    return 0;


}
