/* Classe referente ao tratamento de exce��es de s�mbolos inv�lidos. */

package analisador_lexico;

public class SimboloInvalidoException extends Exception{
	
	private static final long serialVersionUID = 1L;
	private static String linha;
	private static String simbolo;
	
	@Override
	public String getMessage(){
		
		return "\nErro l�xico na linha " + linha + ". S�mbolo inv�lido: " + simbolo;
	}
	
	public SimboloInvalidoException(String msgLinha, String msgSimbolo) {
		
		linha = msgLinha;
		simbolo = msgSimbolo;
		getMessage();
	}
}
