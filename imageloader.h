#ifndef IMAGE_LOADER_H_INCLUDED
#define IMAGE_LOADER_H_INCLUDED

//Classe que representa uma imagem
class Image {
public:
	Image(char* ps, int w, int h);
	~Image();
	/* Um array da forma (R1, G1, B1, R2, G2, B2, ...) indicando
	* a cor de cada pixel da imagem. Os componentes de cada cor v�o de 0 a 255.
	* O array come�a do pixel do lado esquerdo de baixo, ent�o se move para a direita
	* at� o final da linha. Ap�s isso, muda para a pr�xima coluna at� percorrer a imagem completa.	
	*/
	char* pixels;
	int width;
	int height;
};

//Fun��o que l� um bitmap de um arquivo
Image* loadBMP(const char* filename);

#endif
