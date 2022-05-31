
int getFile()
{
    int i;

    struct entrada
    {
        char username[40];
        char password[25];
    } funcionario[2];
    
    FILE*fp; // cria a variavel ponteiro
    fp = fopen("cadastro.bin", "rb"); // cria o arquivo
    if(fp == NULL)
    {
        printf("Erro de criar de ler!!!");
        exit("Create file");
    }
    fp = fread(&funcionario, sizeof(funcionario), 1, fp);


    for ( i = 0; i < 2; i++)
    {
        printf("%s\n", funcionario[i].username);
        printf("%s\n", funcionario[i].password);
    }
    
    fclose(fp);
    
    system("pause");

    return 0;
}