/* Classe que define a preced�ncia dos operadores atrav�s da ideia do PEMDAS. */

package iii_enderecos;

public class Operador {

    public static int getOperatorPrecedence(Character inOperator){

        if(inOperator=='-'){
        	
            return 1;
        }
        else
        if(inOperator=='+') {
        	
        	return 2;
        }
        if(inOperator=='/'){
        	
            return 3;
        }
        else 
        if(inOperator=='*'){
        	
            return 4;
        }

        return 0;
    }
}
