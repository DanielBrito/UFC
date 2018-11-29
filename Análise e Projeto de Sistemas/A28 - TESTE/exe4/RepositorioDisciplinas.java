package com.br.exe4;

public class RepositorioDisciplinas implements Colecao {
	
	public String disciplinas[] = {"An�lise e Projeto de Sistemas", 
			                       "�lgebra Linear", 
			                       "Matem�tica Discreta",
			                       "Linguagens de Programa��o",
			                       "Linguagens Formais e Aut�matos",
			                       "Probabilidade e Estat�stica"};

	@Override
	public Iterator getIterator() {

		return new IteratorDisciplinas();
	}
	
	private class IteratorDisciplinas implements Iterator{
		
		int index;
		
		@Override
		public boolean hasNext() {
			
			if(index<disciplinas.length) {
				
				return true;
			}
			
			return false;
		}

		@Override
		public Object next() {

			if(this.hasNext()) {
				
				return disciplinas[index++];
			}
			
			return null;
		}
	}
}