#include <iostream>

void hello_world()
{
    std::cout << "こんにちは世界" << std::endl
              << "二行目の世界"
              << " もう一つの世界" << std::endl;
}

int sum(int a, int b, int c)
{
    int Sum = 0;
    Sum = a + b + c;
    return(Sum);
}

void Zennchi_Kouchi(int i)
{
    std::cout << "sizeof : " << sizeof(i) << std::endl;
    std::cout << "i   : " << i << std::endl;
    std::cout << "++i : " << ++i << std::endl;
    std::cout << "i   : " << i << std::endl;
    std::cout << "i++ : " << i++ << std::endl;
    std::cout << "i   : " << i << std::endl;
}

void Pointer_rennsyuu()
{
    int i = 0;
    const int* pi = &i; //piはconstポインター型(指し示す先の変数が変更不可能)であり、constアドレスが定義され、piにiのアドレスを代入している。
    int* const pi2 = &i; //こちらはポインタ自体が変更不可能
    //*pi = 42;         //piを通して、iに代入している。
    i = 10;             //アドレスが固定化されただけで、変数自体は変更できる。
    std::cout << i << std::endl;
}

void chara_sample()
{
    char c = 99;
    std::cout << c << std::endl;
    std::cout << static_cast<int>(c) << std::endl;
}

void show_float(float f)
{
    f = 100.001f;
    std::cout << f << std::endl;
    f -= 100.0000;
    std::cout << f << std::endl;
}

void length_of_array()
{
    int array[10] = {};
    std::size_t length = sizeof(array) / sizeof(array[0]);
    std::cout << "array[" << length << "]" << std::endl;
}

void elements_of_array()
{
    std::string hello2 = "hello";
    hello2 += ", array!!";
    for (char element : hello2)
    {
        std::cout << element << std::endl;
    }
    std::cout << hello2 << std::endl;
}

void struct_rennsyuu()
{
    struct helloworld
    {
        int id;
        int member;
        int price;
    };
    helloworld hlwa;
    hlwa.id = 0;
    hlwa.member = 1999;
    hlwa.price = 103;
    helloworld* ptr = &hlwa;
    std::cout << "id : " << ptr->id << std::endl;
    std::cout << "member : " << ptr->member << std::endl;
    std::cout << "price : " << ptr->price << std::endl;
}

void union_rennsyuu()
{
    union abcdekanji
    {
        int a;
        long b;
        char c;
        float d;
        float e[10];
    };
    abcdekanji abc;
    abc.a = 1;
    std::cout << "abc.a = " << abc.a << std::endl;
    std::cout << "abc.b = " <<  abc.b << std::endl;
    std::cout << "abc.c = " <<  abc.c << std::endl;
    std::cout << "abc.d = " <<  abc.d << std::endl;
    std::cout << "abc.e = " <<  abc.e[0] << std::endl;
    std::cout << "abc.e = " <<  abc.e[1] << std::endl;
}

void enum_rekkyotai()
{
    enum class Category : char
    {
        value1,
        value2,
        value3,
        value4,
        value5,
    };

    Category test = Category::value4;
}

int main()
{
    // 変数の初期化方法
    int a(0);
    int b = 2;
    int c{4};
    int d = {3};
    const int e = 4;
    float ff = 42.195;
    int i = 0;
    int* pi = &i;
    *pi = 42;
    char hello[] = {'H','e','l','l','o',',','a','r','r','a','y','!','!','\0'};
    std::cout << hello << std::endl;
    std::cout << i << std::endl;
    std::cout << a * (b - e) / b << std::endl;
    std::cout <<  "sum(a,b,c) : " << sum(a,b,c) << std::endl;
    hello_world();
    Zennchi_Kouchi(e);
    Pointer_rennsyuu();
    chara_sample();
    show_float(ff);
    length_of_array();
    elements_of_array();
    struct_rennsyuu();
    union_rennsyuu();
}


