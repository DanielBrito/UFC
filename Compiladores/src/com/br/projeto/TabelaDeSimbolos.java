/* Classe que define os elementos da Tabela de S�mbolos e que verifica a exist�ncia de erros l�xicos. */

package com.br.projeto;

import java.util.ArrayList;
import java.util.List;

public class TabelaDeSimbolos {

	
	public static void gerarTabela(String enderecoArquivo) throws ComentarioException {
		
		Classificacao.carregarInformacoes();
		
		List<Mapeamento> simbolos = new ArrayList<Mapeamento>();
		List<Mapeamento> invalidos = new ArrayList<Mapeamento>();
		
		List<Elemento> elementos = new ArrayList<Elemento>();
		
		simbolos = Arquivo.lerArquivo(enderecoArquivo);		
		
		for(Mapeamento m : simbolos) {
			
			Elemento aux = Classificacao.atribuirInformacoes(m);
			
			if(aux==null) {
				
				invalidos.add(m);
			}
			else {
				
				elementos.add(aux);
			}
		}
		
		System.out.println("\n\nTABELA DE S�MBOLOS:\n");
		
		for(Elemento e : elementos) {
			
			System.out.println(e);
		}
		
		System.out.println("\n\nS�MBOLOS INV�LIDOS:\n");
		
		for(Mapeamento e : invalidos) {
			
			if(!(e.simbolo.compareTo("/*")==0 || e.simbolo.compareTo("*/")==0)) {
				
				System.out.println(e);
			}
		}
		
		verificarComentarios(simbolos);
	}
	
	/* O m�todo verificarComentarios ainda n�o est� totalmente funcional */
	
	public static void verificarComentarios(List<Mapeamento> simbolos) throws ComentarioException{
		
		boolean contComent= false;
		int contLine=0;
		
		for(Mapeamento m : simbolos) {
			
			if(m.simbolo.compareTo("/*")==0) {
				
				contComent = true;
				
				if(contLine==0) {
					
					contLine = m.numLinha;
				}	
			}
			
			if(m.simbolo.compareTo("*/")==0) {
					
				contComent = false;
				contLine = 0;
			}
		}
		
		if(contComent == true){
			
			throw new ComentarioException("" + contLine);
		}	
	}
}