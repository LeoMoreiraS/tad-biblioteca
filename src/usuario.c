#include "..\headers\usuario.h"



int readUser(TUser *user){
    
    printf("Digite o cpf do usuario(xxx.xxx.xxx-xx)\n\t");
    fflush(stdin);
    fgets(user->cpf,16,stdin);
    printf("Digite o nome do usuario\n\t");
    fflush(stdin);
    fgets(user->name,25,stdin);
    printf("Digite o sobrenome do usuario\n\t");
    fflush(stdin);
    fgets(user->lastName,50,stdin);
    printf("Digite a identidade do usuario\n\t");
    fflush(stdin);
    fgets(user->rg,15,stdin);
    printf("Digite a seguir a data de nascimento do usuario\n");
    readDate(&(user->birthDate));
    printf("Digite a seguir o endereco do usuario\n\t");
    printf("Logradouro:\n\t");
    fflush(stdin);
    fgets(user->address.address,100,stdin);
    printf("\tNumero\n\t");
    fflush(stdin);
    scanf("%d",&user->address.number);
    printf("\tBairro\n\t");
    fflush(stdin);
    fgets(user->address.bairro,50,stdin);
    printf("\tCidade\n\t");
    fflush(stdin);
    fgets(user->address.city,50,stdin);
    printf("\tCep\n\t");
    fflush(stdin);
    fgets(user->address.cep,15,stdin);
    int toggle = 0;
    printf("Digite o tipo do usuario\n\t0-Aluno\n\t1-Professor\n\t2-Funcionario\n\t");
    do{
        if(toggle==1)printf("Tipo do usuario invalido!\n\t");
        scanf("%d",&user->userType);
        toggle = 1;
    }while(user->userType>2||user->userType<0);
    switch (user->userType)
    {
    case 0:
        printf("Digite o curso do aluno\n\t");
        fflush(stdin);
        fgets(user->courseDep,50,stdin);
        break;
    case 1:
        printf("Digite o departamento do professor\n\t");
        fflush(stdin);
        fgets(user->courseDep,50,stdin);
        break;
    case 2:
        printf("Digite o departamento do funcionario\n\t");
        fflush(stdin);
        fgets(user->courseDep,50,stdin);
        break;
    default:
        printf("O usuario invalido!\n\t");
        return 0;
        break;
    }
    return 1;
};

int printUser(TUser user){
    switch (user.userType)
    {
    case 0:
        printf("Aluno:\n\t%s\t%s",user.name,user.lastName);
        printf("Curso:\n\t%s",user.courseDep);
        break;
    
    case 1:
        printf("Professor:\n\t%s\t%s",user.name,user.lastName);
        printf("Departamento:\n\t%s",user.courseDep);
        break;
    
    case 2:
        printf("Funcionario:\n\t%s\t%s",user.name,user.lastName);
        printf("Departamento:\n\t%s",user.courseDep);
        break;
    
    default:
        printf("O usuario invalido!\n\t");
        break;
    }
    printf("cpf:\n\t%s",user.cpf);
    printf("identidade:\n\t%s",user.rg);
    printf("Data de nascimento\n\t");
    printDate(user.birthDate);
    printf("Endereco:\n");
    printf("\tLogradouro:\n\t\t%s",user.address.address);
    printf("\tNumero:\n\t\t%d\n",user.address.number);
    printf("\tBairro:\n\t\t%s",user.address.bairro);
    printf("\tCidade:\n\t\t%s",user.address.city);
    printf("\tCEP:\n\t\t%s",user.address.cep);
}

int insertUser(TModuleUser *mod2,TUser user){
    if(mod2->index < 100){
        mod2->users[mod2->index] = user;
        printUser(mod2->users[mod2->index]);
        mod2->index++;
        printf("Usuario cadastrado com sucesso!\n");
        return 1;
    }else{
        printf("O armazenamento de usuarios esta lotado!\n");
        return 0;
    }

}


int startUser(TModuleUser *mod2){
    mod2->index = 0;
    return 1;
}

int printAllUsers(TModuleUser mod2){

    for(int i=0; i<mod2.index; i++){
        printUser(mod2.users[i]);
    }
    return 1;
}
