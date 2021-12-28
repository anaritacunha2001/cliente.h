#ifndef cliente_h
#define cliente_h

#define MIN_NUM_CLIENTE 0
#define MAX_NUM_CLIENTE 10
#define MSG_OBTER_NUM_CLIENTE "Insira o numero de cliente: "
#define MAX_NOME_CLIENTE 80
#define MSG_OBTER_NOME "Digite o seu nome: "
#define MIN_DIA 1
#define MAX_DIA 31
#define OBTER_DIA_NASC "Digite o dia de nascimento: "
#define MIN_MES 1
#define MAX_MES 12 
#define OBTER_MES_NASC "Digite o mes do nascimento: "
#define MIN_ANO 1990
#define MAX_ANO 2021 
#define OBTER_ANO_NASC "Digite o ano do nascimento: "
#define MIN_NIF 1
#define MAX_NIF 900000000
#define OBTER_NIF_CLIENTE "Digite o NIF: "
#define MAX_PAIS 50 
#define MSG_OBTER_PAIS_CLIENTE "Digite a sua nacionalidade: "
#define ERRO_CLIENTE_EXISTE "Cliente ja existente!"
#define ERRO_CLIENTE_NAO_EXISTE "Cliente nao existe!"
#define ERRO_LISTA_VAZIA "Lista vazia!"
#define ERRO_LISTA_CHEIA "Lista cheia!"

#ifdef __cplusplus
extern "C" {
#endif

    typedef struct {
        int ano, mes, dia;
    } Data;

    typedef struct cliente{
        int tamanho;
        int numero;
        char nome[MAX_NOME_CLIENTE];
        Data data_nascimento;
        char pais[MAX_PAIS];
        int NIF;
        int cliente_codigo;
        int clienteRemovido;
        char email[60];
        double phone;
        int idade;
    } Cliente;

    typedef struct clientes{
        int contador;
        Cliente clientes[MAX_NUM_CLIENTE];
    } Clientes;

   
#ifdef __cplusplus
}
#endif

#endif /* CRIARPERFIL_H */


 void inserirClientes(Clientes *clientes);
    void procurarClientes(Clientes clientes);
    void editarClientes(Clientes *clientes);
    void removerClientes(Clientes *clientes);
    void listarClientes(Clientes *clientes);


