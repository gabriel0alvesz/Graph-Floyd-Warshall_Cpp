<div align="justify">

<div align="center">

# Problema do Caminho Mínimo
## Para Entregas Sequenciais em Bairros Distintos de Pimenta-MG 

![Pimenta_vistaAerea](./assets/Pimenta_vistaAerea.png)<br>
Figura 1 - Vista Aérea da cidade de Pimenta-MG.


</div>

## 1 - Introdução

A cidade de **Pimenta**, localizada no estado de **Minas Gerais**, à 240Km da capital **Belo Horizonte**. Possui ao todo 24 bairros e 1 Distrito - isso, de acordo com a Prefeitura Municipal. Contudo, para uma mapeamento melhor das cidade e para fidelidade do problema, foram introduzidas 4 Zonas Rurais que não são documentadas como logradouros pela prefeitura, mas possuem sua importância devido a quantidade substancial de habitantes em cada uma delas.

Os bairros são: *Antonio Lara, Barro Preto, Bela Vista, Belvedere, Centro, Copacabana, Eldorado, Enseada das Garças, Estancia de Furnas, Ilha do Cabaçal, J.K, Jardim Sao Jose, Luis Lara, Novo Horizonte, Peixe Vivo, Portal do Lago, Pousada das Garças, Quinca Lopes, Rauny, Santa Rita, Santo Antonio, Sion, Terezinha Aubieri e Vivendas do Lago*. Contando ainda com o distrito de *Santo-Hilário*, que possui dois bairros, *Recanto das Águas e Ecomarine*. Além disso, não podendo esquecer das 4 zonas rurais, que são: B*oa-Vista, Grama-dos-Cordeiros, Quilombo e Vila-Costina*.

> De acordo com o **IBGE** de 2021, a população estimada de Pimenta é de 8715 habitantes. Mas, conforme com algumas estimativas da Prefeitura, esse número pode ser maior em até 380 habitantes.

## 2 - O problema

Devido a expansão do agronegócio, a cidade está em constante crescimento. Consequentemente, também houve uma expansão no ramo da construção cívil. Tanto na área industrial/agrícola, quanto na área doméstica. Com isso a loja de materiais de construção, "SUPREMA", localizada na *rua Olinto Fonseca, nº544*, recentemente começou a enfretar um problema para atender seus clientes de maneira rápida e eficiente. 

O caminhão "toco", como é popularmente chamado, devido ao fato de a sua "caçamba" ter abertura para todos os lados, consegue carregar 13,5 toneladas de material. Este caminhão é muito utilizado quando é necessário transportar mais de um material, seja ele um material bruto - como brita, areia, terra e etc - ou não - como sacos de cimento, argamassa, tijolos e etc. O problema da empresa começa quando é preciso atender 3 clientes ou mais, que estão situados em bairros diferentes e necessitam de materiais distintos.

### 2.1 - O problema na prática

Suponhamos 3 clientes: A, B e C. Todos os três, moram em bairros diferentes e cada um comprou sos seguintes materiais: 

| Clientes   |  Materiais                                    |  Bairros
| -----------| ----------------------------------------------|---------------
|A           | 12 sacos de Cimento e 10 sacos de cal         |  Antonio Lara
|B           | 14 telhas de fibrocimento (2,44 x 1,10)       |  J.K
|C           | 1m$^{3}$ de Areia grossa                      |  Barro Preto

Ao passar este pedido para os funcionários que irão carregar o caminhão com os materiais. Os mesmo, irão fazer o seu trabalho da melhor forma possível, com o intuito de facilitar o descarregamento nos endereços dos clientes. Dessa forma, ao carregarem o caminhão, os mesmos funcionários irão passar a ordem com que as entregas deverão ser feitas. Neste caso Hipotético, a ordem seria: Primeiro o **cliente B**, pelo fato de as telhas de fibrocimento serem frágeis e compridas, são sempre traspontadas em cima de algum material - neste caso, em cima dos sacos de cimento ou de cal - e amarradas ao caminhão. Logo em seguida será o **cliente A**, visto que, os sacos de cimento pesam 50kg e os sacos de cal, pesam 20Kg e por isso, são carregados bem em frente as aberturas das portas laterais do caminhão - isso facilita também o carregamento. Por fim, o último será o **cliente C**, pelo fato de a areia se esparramar, deve ser carregada primeiro, e deve ser coloca na região central, até a parte traseira da caçamba, para facilitar o descarregamento.

Agora, para deixar mais evidente o problema, o caminhão será carregado sequencialmente com os materiais dos seguintes clientes: C $\to$ B $\to$ A. E a entrega será feita na seguinte sequência de clientes: B $\to$ A $\to$ C. Note que, não necessariamente a ordem de entrega será a ordem inversa de carregamento dos materiais no caminhão. Dessa forma, temos que encontrar o menor caminho para atender os clientes sequencialmente, saíndo com a nota fiscal da loja e indo para o bairro *J.K* e depois para o bairro *Antonio Lara* e por fim o bairro *Barro Preto*.

> Antes de lidar com o problema do caminho mínimo é preciso lidar com a logística do abastecimento do caminhão com os materiais que deverão ser entregues. Com isso pode-se deixar claro que, as entregas dependem de como o caminhão será carregado e é a ordem de entrega dos materiais que definem a ordem da busca pelo menor caminho no algoritmo.

## 3 - O Algoritmo


</div>
