#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <stdarg.h>

#define PI  3.141592653; //常量定义， 宏定义（全局）

//命令行参数，用于执行时传递到main方法中
//   ./a.out testing1 testing2, 此时，testing1 和 testing2 作为参数传递到main方法中

// argNum为参数的个数，根据执行时传递的参数个数自行设置。
int main(int argNum, char *argv[]) {
    //单行注释
    /*多行注释*/


    //--------------------变量-------------------------------------------------------------
    // 数据类型
    char some = 'A';  //  声明、并定义变量
        printf("char类型大小%d个字节\n",sizeof(some));
    char name[] = "XIAOQIANG";  //char类型,  1   个字节
        printf("char类型数组大小%d个元素，%d个字节\n",strlen(name),sizeof(name));
    short b = 20;  // short 类型
        printf("short类型大小%d个字节\n",sizeof(b)); //  2 个字节
    int age=10; // int 类型，
        printf("int类型大小%d个字节\n",sizeof(age)); // 4   个字节
    long  c = 2018;   // long类型
        printf("long类型大小%d个字节\n",sizeof(c));   // long   4 个字节
    float height = 1.5;  //float类型，   4个字节
        printf("float类型大小%d个字节\n",sizeof(height)); // 4 字节
    double width = 2.0;  //double类型
        printf("double类型大小%d个字节\n",sizeof(width));  // 8  字节
    //extern int route ; // extern 用于声明变量，但是不定义（不建立存储空间）

    const float huilv = 0.8; //常量定义，局部


    //----------------强制类型转换
    //char,short --> int --> unsigned int -->  long --> unsigned long --> long long --> unsigned long long --> float --> double --> long double

    int forceA = (int) some; // 65，  字符A的ascii码为   65
    printf("%d\n", forceA);
    //-------------------字符串
    char  greeting[] = "Hello World";
    printf("字符串--->%s\n", greeting);
    printf("字符串长度--->%d\n", strlen(greeting)); //  11,  strlen()返回字符串的长度
    printf("strcpy-->%s\n",  strcat(greeting, ";xiao")); // strcat() 返回连接后的字符串
    printf("strchr-->%p\n",  strchr(greeting, 'W')); // strchr()返回某个字符第一次出现的位置的指针
    printf("*strchr-->%c\n", *strchr(greeting, 'W')); //
    printf("strstr-->%p\n",  strstr(greeting, "orl")); //返回一个指针，该指针指向字符串 orl第一次出现在greeting中的位置




    //--------------------数组
    double balance[] = {1000.0, 2.0, 3.4, 7.0, 50.0, 8} ;  // 声明并初始化数组,类型为double

    printf("balance[3]---->%f\n", balance[3]);
    printf("balance[3]---->%.2f\n", balance[3]);
    //多维数组
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

    //枚举
    enum  sex  {male=1, female}; // 枚举类型定义
    enum sex   sex1;   //枚举变量
    sex1 = male;



    //c中，存储类用于定义变量/函数的作用范围 和 生命周期，
    // c中存储类有： auto 、 register 、static 、extern 四种
    // auto: 只能用在函数内，修饰局部变量
    // register:  用于定义存储在寄存器中而不是RAM中的变量，这意味着变量的最大尺寸等于寄存器的大小，且不能对它使用一元的  &  运算符
    // static: 全局变量的默认存储类，在程序的整个生命周期内都存在，且只初始化一次。
    // extern 用于提供一个全局变量的引用，当使用extern 时，对于无法初始化的变量，会把变量名指向一个之前定义过的存储位置


    printf("hello world");
    printf(sizeof(int));

    // 运算符
    //  +  -  *  /   %   ++   --

    //判断  if  、else if  、  switch  、 三目 ?:
    //循环  while()      、  for() 、 do{} while() 、  嵌套循环
    //  循环控制  break  、continue 、 goto

    //函数定义， 参数类型必须，参数名可不要 int max(int , int)
    int max(int num1,  int num2){
        return num1 > num2? num1 : num2;
    }


    //  作用域规则:
    //全局变量 、 局部变量 、  形式参数

    */




    //----------------指针
    //指针是一个变量，指针的值是一个地址,一般用于存储另一个变量的地址，可通过&操作符取得。
    // 在声明变量的时候，如果没有确切的地址可以赋值，那么可以为该指针变量赋一个NULL值，赋NULL值的指针被称为空指针。
    //NULL指针是一个定义在标准库中的值为零的常量。
    //指针是变量，有值，所以也可以使用关系运算符来进行比较， ==  、 <  、  >
    char var2 = 'e';
    printf("var2变量的地址：%p\n", &var2); // &是用于取地址的一个符号
    char *ip ; // 整型的指针

    ip = &var2;
    printf("ip指针的值是：%p\n", ip);
    printf("*ip指针的值是：%p\n", *ip); //  %p 以地址形式格式化输出变量
    printf("*ip指针的值是：%d\n", *ip);

    int *ptr = NULL;
    printf("ptr的地址是: %p \n", ptr); //
   // printf("ptr的地址是: %p \n", *ptr); //取空指针地址的值，报错
    //printf("ptr的地址是: %d \n", *ptr); //取空指针地址的值，报错

    int test[] = {10,20,100};
    int *testptr = &test;
    for(int i=0;i<3; i++){
        printf("存储地址test[%d] = %x\n",i, testptr);
        printf("存储值test[%d] = %d\n",i, *testptr);
        testptr ++ ;
    }

    int *testp1 = &test[0];
    int *testp2 = &test[1];
    if(testp1 < testp2){
         printf("指针大小的比较\n");
    }

    // -----------指针数组
    // 用于存放指针的数组

    int  mytest[] = {100,200,300};
    int  *myptr[3];
    int testnum ;
    for(testnum =0;  testnum<3; testnum ++){
        myptr[testnum] = &mytest[testnum];
    }

    //---------------------函数
    // 函数传参 -- 可变参数
    int func(int num, ...) {
        return 0;
    }

    double average(int num, ...){
        va_list  arglist ;
        va_start(arglist, num); // 为num个参数初始化arglist
        int i;
        double total = 0.0;
        int temp;
        //访问所有赋值给 arglist的参数。
        for(i=0; i<num ; i++){
//            temp = va_arg(arglist, int);
           // printf("%d\n", temp);
            total += va_arg(arglist, int); //初始化arglist为参数列表
            printf("pertotal------------%f\n", total);
        }
        printf("total---->%f\n", total);
        va_end(arglist);  // 清理为arglist保留的内存
        return total/num;
    }
    printf("Average of 2, 3, 4, 5 = %f\n", average(4, 2,3,4,5));
    printf("Average of 2, 8, 3, 9,  4 = %f\n", average(5, 2,8,3,9,4));
    //average(5,2,6,8,1,6);

    // 递归函数

    int factorial(unsigned int i){

        printf("传入的参数是:%d\n", i);
        if(i<= 1){
            return 1;
        }
        return i * factorial(i-1);
    }
    printf("递归相乘5的乘积是：%d\n",factorial(5));

    //-----------函数指针与回调函数
    int max(int x, int y){
        printf("%d, %d\n", x, y);
        return x>y ? x : y;
    }
    int (*p) (int,int) = max;
    p(3,4);
/*
    int temp1, temp2, temp3,  temp4;
    scanf("%d%d%d", &temp1,&temp2, &temp3);
    printf("你输入的三个数是：%d,%d,%d\n", temp1, temp2, temp3);;

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
    printf("排序后的数字是: %d,%d,%d", temp1, temp2,temp3);

*/
    //-----------文件读写
    // fopen(filename, mode)
    //若读取的是文本文件，则mode有：r 、  w 、 a  、 r+  。w+   、 a+ ;
    // 若读取的是二进制文件，则mode有：
    // rb 、  wb 、   ab  、 rb+  、 r+b 、wb+   、ab+   、 a+b




    //------------------结构体
    struct Person {
        char *name; // 8个字节
        char A;
        int age; // 4个字节
    };

    struct Person  p1 = {.name="xiao1",.A='a',.age=21};
    struct Person  p2 = {.name="xiao2",.A='B',.age=22};
    printf("%s,%d\n", p1.name, p1.age); //xiao1,21
    printf("%s,%d\n", p2.name, p2.age); //xiao2,22

    p2 = p1; //将p1的所有的成员对应赋值给p2的成员

    printf("%s,%d\n", p1.name, p1.age); //xiao1,21
    printf("%s,%d\n", p2.name, p2.age); //xiao1,21

    printf("%d\n", sizeof(p1.name)); // 4
    printf("%d\n", sizeof(p1.age));  // 4
    printf("%d\n", sizeof(p1.A));    // 1
    printf("%d\n", sizeof(p1));      // 12

    //补齐（对齐）算法，
    //结构体所占用的存储空间，必须是 最大成员的字节数的倍数。


    //--------------输入输出
    // scanf()  printf()
    // getchar()   putchar()用于读取和写入一个字符
    //gets()    puts()    用于读取和写入一行到缓冲区（某个变量）。
    int myage ;
    char *myname[100];
    //printf("请输入你的姓名和年龄\n");
    //scanf("%s %d",&myname, &myage);
   //printf("你的姓名是%s, 年龄是 %d\n",  myname, myage);

    char  something[100];
    gets(something); //从输入流读取一行数据
    puts(something); // 将字符串和一个换行符写入到输出流

    //----------------typedef 和 define
    // typedef 只用于为类型（含自定义的类型，如：结构体等）定义别名 ，由编译器执行解释
    //而define除了为类型定义别名之外，还可以为数值定义别名。define由预编译器进行处理。
    #define  N 100;
    typedef unsigned int  myint;
    myint aa= 10;
    printf("%d",sizeof(aa));

    //----------------预处理器
    // 预处理器只是一个文本替换工具，将定义好的变量用指定的内容替代。
    //预处理器不是编译器的一部分， 是编译过程中一个单独的分支; 他们会指示编译器在实际编译之前完成所需要的预处理。
    // 预处理器命令都是 以 # 开头，   常见的预处理器指令有：
    //#define  、   #include 、   #undef  、   #ifdef  、 #ifndef  、
    // #if  、   #else  、   #elif 、     #endif  、  #error  、   #pragma


    #undef  FILE_SIZE; //取消已定义的FILE_SIZE
    #define FILE_SIZE  100; //  定义FILE_SIZE 为  100

    //只引用一次
    #ifndef MESSAGE
        #define MESSAGE "这是信息"
    #endif // MESSAGE

    //条件引用
    #ifdef MESSAGE
        printf("已定义该变量\n");
    #endif // MESSAGE

    // defined()运算符用于在常量表达式中，来确认一个标识符是否已经使用#define定义过。若已定义则返回真（非零），，若未定义则返回假(零)
    #if !defined(MESSAGE)
        #define MESSAGE  "MY MESSAGE"
    #endif

    //字符串常量话运算符   #,   #用于将宏定义中的参数转为字符串常量
    #define message_for(a, b)   \
        printf(#a " and " #b ":We love you!\n");
    message_for("小明", "小红");


    //标记黏贴运算符##
    #define  tokenparster(n)   \
        printf("token" #n " = %d", token##n);
    int  token34 = 40;
    tokenparster(34);


    //预定义宏、
    // __DATE__   、  __TIME__ 、 __FILE__  、__LINE__  、  __STDC__


    printf("__FILE__----->%s\n", __FILE__); //绝对地址 H:\cProj\learnC\1-grammer.c
    printf("__DATE__----->%s\n", __DATE__); // Aug 20 2018
    printf("__TIME__----->%s\n", __TIME__); // 00:28:23
    printf("__Line__----->%d\n", __LINE__ ); //行号 ，  313
    printf("__ANSI__----->%d\n", __STDC__ );  //  1


    //---------------共用体
    // 共用体，一种特殊的数据结构，能允许在相同的内存位置储存不同的数据类型
    //一个共用体中可以有多个成员有值。
    //共用体所占内存的大小取决于该共用体内部最大数据类型的大小

    union Data {
        int i;
        float f;
        char  str[20];
    };

    union Data  data1 ;
    data1.i = 20;
    data1.f = 30.3;
    strcpy(data1.str,"Hello World");
    printf("data1.i:  %d\n", data1.i); //数据丢失
    printf("data1.f:  %f\n", data1.f); //数据丢失, 最后赋给变量的值占用了空间
    printf("data1.str:%s\n", data1.str); //正确输出，无损失


    union Data  data2;
    data2.i = 30;
    printf("data2.i: %d\n", data2.i); // 正确输出  30
    data2.f = 12.3;
    printf("data2.i: %f\n", data2.f); //  正确输出 12.300000
    strcpy(data2.str , "hello");
    printf("data2.i: %s\n", data2.str); //正确输出 hello

    //------------头文件的引入
    // 使用  #include  <file> 指令来引入某个文件,如 #include <stdio.h>
    // 引入头文件，相当于将该文件中所有的内容复制到当前文件， 重复引入同一个文件会报错。
    //为了防止多次引入同一个头文件，最好是使用条件引入
    #ifndef  somefile
        #define somefile
    #endif // somefile


    //条件引用头文件

    #if SYSTEM1
        #include  "system_1.h"
    #elif SYSTEM2
        #include "system_2.h"
    #elif SYSTEM3
        #include "system_3.h"
    #endif // SYSTEM1














    return 0;


}
