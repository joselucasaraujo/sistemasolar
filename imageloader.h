#ifndef IMAGE_LOADER_H_INCLUDED
#define IMAGE_LOADER_H_INCLUDED

//Classe que representa uma imagem
class Image {
public:
	Image(char* ps, int w, int h);
	~Image();
	/* Um array da forma (R1, G1, B1, R2, G2, B2, ...) indicando
	* a cor de cada pixel da imagem. Os componentes de cada cor vão de 0 a 255.
	* O array começa do pixel do lado esquerdo de baixo, então se move para a direita
	* até o final da linha. Após isso, muda para a próxima coluna até percorrer a imagem completa.	
	*/
	char* pixels;
	int width;
	int height;
};

//Função que lê um bitmap de um arquivo
Image* loadBMP(const char* filename);

#endif
