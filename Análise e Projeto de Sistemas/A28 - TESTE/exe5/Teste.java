package com.br.exe5;

/*

Neste exerc�cio � criada uma interface Imagem e algumas classes concretas (ImagemReal, ImagemProxy)
que implementam a interface Imagem.

Com base na motiva��o e nas caracter�sticas do padr�o de projeto Proxy, ImagemProxy � uma classe de 
proxy para reduzir o consumo de mem�ria do carregamento em rela��o aos objetos ImagemReal.

No final, ProxyImage � utilizado para obter um objeto Imagem para carregar e exibir sempre que
for necess�rio.

*/

public class Teste {

	public static void main(String[] args) {

		Imagem img = new ImagemProxy("profile.jpg");
		
		// Carregada do disco
		img.exibir();
		System.out.println("");
		
		// N�o carregada do disco
		img.exibir();
	}
}
