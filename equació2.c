#inclide <stdio>
void main(){
    int a,b, c, discriminant;
    printf("Donam a: ");
    scanf("%d",&a);
    printf("Donam b: ");
    scanf("%d",&b);
    printf("Donam c: ");
    scanf("%d",&c);
    if(a==0) printf("No és equació de 2n grau!!\b");
    else{
        discriminant=(b*b)-(4*a*c);
        if(discriminant>0) printf("2sol\b");
        if(discriminant==0) printf("1 sol\b");
        if(discriminant<0) printf("No sol reals\b");
    }

    return;
}
