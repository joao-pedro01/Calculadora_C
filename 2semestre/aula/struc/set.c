int setFile()
{
    int i;
    struct entrada
    {
        char nome[40];
        float salario;
    } funcionario[2];
    for ( i = 0; i < 2; i++)
    {
        printf("Digite o seu nome: ");
        fflush(stdin); gets(funcionario[i].nome);    
        printf("Digite o seu sálario: ");
        scanf("%f", &funcionario[i].salario);
    }
    

    FILE*fp; // cria a variavel ponteiro
    fp = fopen("cadastro.bin", "w"); // cria o arquivo
    if(fp == NULL)
    {
        printf("Erro de criar de arquivo!!!");
        exit("Create file");
    }
    fwrite(&funcionario, sizeof(funcionario), 1, fp);
    fclose(fp);
    system("pause");


    return 0;
}