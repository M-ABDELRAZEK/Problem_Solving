#include<stdio.h>
#include<stdlib.h>

int main()
{
    long long eyes, mouths, bodies, Katryoshkas;
    
    scanf("%lld %lld %lld", &eyes, &mouths, &bodies);

    if(eyes == 0 || mouths == 0)
        Katryoshkas = 0;
    else if(mouths == 0 && eyes >= 2)
        Katryoshkas = __min(eyes / 2, bodies);

    else if(mouths > 0 && eyes > 0 && bodies > 0)
    {
        if(mouths < eyes && mouths < bodies)
        {   
            Katryoshkas = mouths;
            bodies -= Katryoshkas;
            eyes -= Katryoshkas;
            Katryoshkas += __min(eyes / 2, bodies);
        }
        else 
        {
            Katryoshkas = __min(eyes, bodies);
        }
    }
    
    printf("%lld", Katryoshkas);

    return 0;
}