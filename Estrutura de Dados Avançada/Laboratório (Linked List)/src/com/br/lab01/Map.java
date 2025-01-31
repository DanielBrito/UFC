package com.br.lab01;

public interface Map <K,V>{
	
	void add(K key, V value);
	V get(K key);
	void remove(K key);
	Iterable<K> keys();
}