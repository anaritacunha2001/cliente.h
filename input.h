#ifndef INPUT_H
#define INPUT_H

#ifdef __cplusplus
extern "C" {
#endif




#ifdef __cplusplus
}
#endif

#endif /* INPUT_H */

int obterInt(int minValor, int maxValor, char *msg);
float obterFloat(float minValor, float maxValor, char *msg);
double obterDouble(double minValor, double maxValor, char *msg);
char obterChar(char *msg);
void lerString(char *string, unsigned int tamanho, char *msg);

