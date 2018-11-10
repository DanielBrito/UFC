package com.br.exe2;

public class FabricaItau extends FabricaAbstrata {

	@Override
	public MensagemLogon gerarMensagemLogon() {
		
		return new MensagemLogonItau("ITA�", "Seja bem vindo!");
	}

	@Override
	public MensagemLogout gerarMensagemLogout() {
		
		return new MensagemLogoutItau("ITA�", "Volte sempre!");
	}	
}
