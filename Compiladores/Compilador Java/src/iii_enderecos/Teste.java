/* Classe para testar a gera��o do c�digo de tr�s endere�os a partir de uma express�o digitada. */

package iii_enderecos;
import java.util.Scanner;

public class Teste {
	
	static Scanner scan = new Scanner(System.in);
    
    public static void main(String[] args) {
    	
    	System.out.print("Digite a expressao: ");
    	String input = scan.nextLine();
    	
    	input.replaceAll(" ", "");
    	
    	String[] expressao = input.split("=");
  
    	CodigoTresEnderecos.imprimirProcesso(expressao[0], expressao[1]);
    }
}
