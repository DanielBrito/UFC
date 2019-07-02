/* Classe para representar a pilha na gera��o do c�digo de 3 endere�os. */

package iii_enderecos;
import java.util.Stack;

public class Pilha {

    public static Character getTopOfOperator(Stack<Character> pilha){
    	
        if (pilha.isEmpty()){
        	
            return 'e';
        }
        
        return pilha.peek();
    }
}
