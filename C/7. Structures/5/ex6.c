    #include <stdio.h>

    enum NOTES
    {
        _do = 1,
        _re = 2,
        _mi = 3,
        _fa = 4,
        _sol = 5,
        _la = 6,
        _si = 7
    };

    int get_major(int note)
    {
        return note == _do || note == _mi || note == _sol;
    }

    int main(void)
    {
        int a[5];
        scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);

        for(int i = 0; i < 5; i++)
            if(get_major(a[i]))
                printf("%d ", a[i]);
        
        
        return 0;
    }