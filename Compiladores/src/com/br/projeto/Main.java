/* Classe principal que enviar� o endere�o do c�digo-fonte para o m�todo gerador da tabela de s�mbolos. */

package com.br.projeto;

import java.io.File;

public class Main {

	public static void main(String[] args) throws ComentarioException {
		
		String enderecoArquivo = new File("src/Hello.txt").getAbsolutePath();
		
		TabelaDeSimbolos.gerarTabela(enderecoArquivo);
	}
}
