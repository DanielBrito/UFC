package com.br.teste;

import java.util.Calendar;
import java.util.Scanner;

public class App {
	
	public static Scanner scan = new Scanner(System.in);

	public static void main(String[] args) {

		menu();
	}
	
	public static void menu() {
		
		int op;
		int indice;
		
		System.out.println("\nMENU");
		System.out.println("\n1 - Inserir");
		System.out.println("2 - Remover por �ndice");
		System.out.println("3 - Remover �ltimo registro");
		System.out.println("4 - Atualizar");
		System.out.println("5 - Pesquisar");
		System.out.println("6 - Imprimir");
		System.out.println("0 - Sair");
		
		System.out.print("\n=> ");
		op = scan.nextInt();
		
		switch(op) {
		
			case 1: System.out.println("\nINSERIR");
					
					if(ColecaoPessoa.getInstance().inserir(cadastrar())==true){
						
						System.out.println("\nRegistro inserido com sucesso.");
					}
					else {
						
						System.out.println("\nN�o foi poss�vel inserir o registro.");
					}
					
					break;
			
			case 2: System.out.println("\nREMOVER POR �NDICE");
			
					System.out.print("\nDigite o �ndice a remover: ");
					indice = scan.nextInt();
					
					if(ColecaoPessoa.getInstance().remover(indice)==true) {
						
						System.out.println("\nRegistro removido com sucesso.");
					}
					else {
						
						System.out.println("\nN�o foi poss�vel remover o registro.");
					}
					
					break;
					
			case 3: System.out.println("\nREMOVER �LTIMO REGISTRO");
					
					if(ColecaoPessoa.getInstance().remover()==true) {
						
						System.out.println("\nRegistro removido com sucesso.");
					}
					else {
						
						System.out.println("\nN�o foi poss�vel remover o registro.");
					}
					
					break;
			
			case 4: System.out.println("\nATUALIZAR");
			
					System.out.print("\nDigite o �ndice a atualizar: ");
					indice = scan.nextInt();
			
					ColecaoPessoa.getInstance().atualizar(indice, cadastrar()); 
					
					break;
			
			case 5: System.out.println("\nPESQUISAR");
			
					System.out.println("\n1 - Pessoa F�sica");
					System.out.println("2 - Pessoa Jur�dica");
					
					System.out.print("\n=> ");
					op = scan.nextInt();
					
					scan.nextLine();
					
					if(op==1) {
						
						System.out.print("\nDigite o CPF a ser pesquisado: ");
						String cpf = scan.nextLine();
						
						PessoaFisica pf = new PessoaFisica(null, cpf, null);
						
						if(verificaCpf(pf)==false) {
							
							System.out.println("\nCPF inv�lido.");
						}
						else {
							
							if(ColecaoPessoa.getInstance().pesquisar(pf)==true) {
								
								System.out.println("\nO registro foi encontrado.");
							}
							else {
								
								System.out.println("\nNenhum registro foi encontrado.");
							}
						}						
					}
					
					if(op==2) {
						
						System.out.print("\nDigite o CNPJ a ser pesquisado: ");
						String cnpj = scan.nextLine();
						
						PessoaJuridica pj = new PessoaJuridica(null, cnpj, null);
						
						if(verificaCnpj(pj)==false) {
							
							System.out.println("\nCNPJ inv�lido.");
						}
						else {
							
							if(ColecaoPessoa.getInstance().pesquisar(pj)==true) {
								
								System.out.println("\nO registro foi encontrado.");
							}
							else {
								
								System.out.println("\nNenhum registro foi encontrado.");
							}
						}
					}

					break;
			
			case 6: System.out.println("\nIMPRIMIR");
				
					ColecaoPessoa.getInstance().imprimirDadosColecao();
				
					break;
			
			case 0: System.exit(0);
			
			default: System.out.println("\nOp��o inv�lida.");
		}
		
		opcao();
	}
	
	public static Pessoa cadastrar() {
		
		System.out.println("\n1 - Pessoa F�sica");
		System.out.println("2 - Pessoa Jur�dica");
		
		System.out.print("\n=> ");
		int op = scan.nextInt();
		
		scan.nextLine();
		
		switch(op) {
		
			case 1: System.out.println("\nPESSOA F�SICA");
				
					System.out.print("\nDigite o nome: ");
					String nomePF = scan.nextLine();
					
					System.out.print("Digite o CPF: ");
					String cpf = scan.nextLine();
					
					System.out.print("Digite o dia do nascimento: ");
					int diaPF = scan.nextInt();
					
					System.out.print("Digite o m�s do nascimento: ");
					int mesPF = scan.nextInt();
					
					System.out.print("Digite o ano do nascimento: ");
					int anoPF = scan.nextInt();
					
					Calendar dataPF = Calendar.getInstance();
					
					dataPF.set(Calendar.DAY_OF_MONTH, diaPF);
					dataPF.set(Calendar.MONTH, mesPF); 
					dataPF.set(Calendar.YEAR, anoPF); 
					
					PessoaFisica pf = new PessoaFisica(nomePF, cpf, dataPF);
					
					if(verificaCpf(pf)==false) {
						
						return null;
					}
					
					return pf;
				   
			case 2: System.out.println("\nPESSOA JUR�DICA");
			
					System.out.print("\nDigite o nome: ");
					String nomePJ = scan.nextLine();
					
					System.out.print("Digite o CNPJ: ");
					String cnpj = scan.nextLine();
					
					System.out.print("Digite o dia da cria��o: ");
					int diaPJ = scan.nextInt();
					
					System.out.print("Digite o m�s da cria��o: ");
					int mesPJ = scan.nextInt();
					
					System.out.print("Digite o ano da cria��o: ");
					int anoPJ = scan.nextInt();
					
					Calendar dataPJ = Calendar.getInstance();
					
					dataPJ.set(Calendar.DAY_OF_MONTH, diaPJ);
					dataPJ.set(Calendar.MONTH, mesPJ); 
					dataPJ.set(Calendar.YEAR, anoPJ); 
					
					PessoaJuridica pj = new PessoaJuridica(nomePJ, cnpj, dataPJ);
					
					if(verificaCnpj(pj)==false) {
						
						return null;
					}
					
					return pj;
		}
		
		return null;
	}
	
	public static boolean verificaCpf(PessoaFisica pf) {
		
		if(pf.getCpf().equals("Inv�lido")) {
			
			return false;
		}
		
		return true;
	}
	
	public static boolean verificaCnpj(PessoaJuridica pj) {
		
		if(pj.getCnpj().equals("Inv�lido")) {
			
			return false;
		}
		
		return true;
	}
	
	public static void opcao() {
		
		System.out.println("\n1 - Menu");
		System.out.println("0 - Sair");
		
		System.out.print("\n=> ");
		int op = scan.nextInt();
		
		if(op==1) {
			
			menu();
		}
		
		if(op==0) {
			
			System.exit(0);
		}		
	}
}