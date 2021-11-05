#include <iostream>

void Bunnki_syori()
{
    int a = 0;
    switch (a + 1)
    {
    default:
        std::cout << "a + 1 は なんか知らんかずや。 たぶんな。" << std::endl;
        break;
    case 1:
        std::cout << "a + 1 は 1 です。" << std::endl; //なぜかFALL THROUGH
    case 2:
        std::cout << "a + 1 は 2 です。" << std::endl;
        break;
    }
}

int absolute(int value)
{
    int abs = value < 0 ? -value : value;
    return(abs);
}

void array_show()
{
    int array[] = {4,2,1,9,5};

    std::cout << array[0] << std::endl;
    std::cout << array[1] << std::endl;
    std::cout << array[2] << std::endl;
    std::cout << array[3] << std::endl;
    std::cout << array[4] << std::endl;
}
int main()
{
    int i = 0;
    i =  i * (2 + 4);
    i =  i % 3;
    std::cout << i << std::endl;
    if (i == 0)
    {
        std::cout << "あいなくなってもうた。" << std::endl;
    }
    Bunnki_syori();
    array_show();
    std::cout << absolute(-243) << std::endl;
}