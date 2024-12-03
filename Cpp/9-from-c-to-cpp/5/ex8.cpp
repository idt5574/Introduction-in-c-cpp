#include <iostream>

using THING = struct
{
    char name[50];
    double weight;
};

void sort_things(THING* ar, size_t len)
{
    for(int i = 0; i < len; i++)
            for(int j = 0; j < len - i - 1; j++)
                if(ar[j].weight < ar[j + 1].weight)
                {
                    THING temp = ar[j];
                    ar[j] = ar[j + 1];
                    ar[j + 1] = temp;
                }
}

int main()
{
    THING things[] = {{"карандаш", 20}, {"зеркальце", 100}, {"зонт", 500}, {"рубашка", 300}, 
                        {"брюки", 1000}, {"бумага", 200}, {"молоток", 600}, {"пила", 400}, {"удочка", 1200},
                        {"расческа", 40}, {"котелок", 820}, {"палатка", 5240}, {"брезент", 2130}, {"спички", 10}};
    
    int N;
    int total_weight = 0;
    int count = 0;
    std::cin >> N;

    sort_things(things, 14);


    while (total_weight < N * 1000)
    {
        if(total_weight + things[count].weight > N * 1000)
        {
            count++;
            continue;
        }

        total_weight += things[count].weight;
        std::cout << things[count++].name << ' ';
    }
    
    std::cout << std::endl;

    return 0;
}