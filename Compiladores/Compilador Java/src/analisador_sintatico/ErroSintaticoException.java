/* Classe referente ao tratamento de exce��es de erros sint�ticos. */

package analisador_sintatico;

public class ErroSintaticoException extends Exception {
	
	private static final long serialVersionUID = 1L;
	private static String linha;
	private static String simbolo;
	
	@Override
	public String getMessage(){
		
		return "\nErro sint�tico na linha: " + linha + ". " + simbolo;
	}
	
	public ErroSintaticoException(String msgLinha, String msgSimbolo) {
		
		linha = msgLinha;
		simbolo = msgSimbolo;
		getMessage();
	}
}
