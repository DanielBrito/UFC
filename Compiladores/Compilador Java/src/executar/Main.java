/* Classe principal que enviar� o endere�o do c�digo-fonte para o m�todo gerador da tabela de s�mbolos. */

package executar;

import java.io.File;

import analisador_lexico.ComentarioInvalidoException;
import analisador_lexico.SimboloInvalidoException;
import analisador_lexico.TabelaDeSimbolos;
import analisador_semantico.ErroSemanticoException;
import analisador_sintatico.ErroSintaticoException;

public class Main {

	public static void main(String[] args) throws ComentarioInvalidoException, SimboloInvalidoException, ErroSintaticoException, ErroSemanticoException {
		
		String enderecoArquivo = new File("src/TesteSintaticoSemantico.txt").getAbsolutePath();
		
		TabelaDeSimbolos.gerarTabela(enderecoArquivo);
		
		System.out.println("C�digo compilado!");		
	}
}
