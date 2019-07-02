/* Classe referente ao tratamento de exce��es de coment�rios incorretos. */

package analisador_lexico;

public class ComentarioInvalidoException extends Exception {

	private static final long serialVersionUID = 1L;
	private static String linha;
	
	@Override
	public String getMessage(){
		
		return "\nErro l�xico na linha " + linha + ": Coment�rio aberto e n�o fechado.";
	}
	
	public ComentarioInvalidoException(String msgLinha) {
		
		linha = msgLinha;
		getMessage();
	}
}