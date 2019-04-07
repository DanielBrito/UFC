/* Classe referente ao tratamento de exce��es de coment�rios incorretos. */

package com.br.projeto;

public class ComentarioException extends Exception {

	private static final long serialVersionUID = 1L;
	private static String linha;
	
	@Override
	public String getMessage(){
		
		return "Erro: Coment�rio aberto e n�o fechado na linha " + linha;
	}
	
	public ComentarioException(String mensagem) {
		
		linha = mensagem;
		getMessage();
	}
}