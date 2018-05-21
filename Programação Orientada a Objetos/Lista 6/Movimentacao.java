package com.daniel.lista6.exe1;

public class Movimentacao{
	
	private String descricao;
	private double valor;
	private char tipo; // (c)r�dito || (d)�bito

	public Movimentacao(String descricao, double valor, char tipo){

		this.descricao = descricao;
		this.valor = valor;
		this. tipo = tipo;
	}

	public String toString(){

		String resultado = "";

		resultado = "Descri��o: " + this.descricao +
		            "\nValor: " + this.valor +
		            "\nTipo: " + this.tipo + "\n\n";

		return resultado;
	}
}