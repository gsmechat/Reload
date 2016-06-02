# Reload
Project C Reload TIC

Reload

Le projet consiste en la réalisation de trois librairies qui vous aideront dans vos futurs développements en C.
Ce projet "Reload" a été conçu pour vous permettre d'assimiler un maximum de notions et de réunir les outils qui vous permetterons d'aborder votre projet de fin d'année sereinement.
En conséquence, il peut de prime abord vous paraître plus simple que les autres projets. Il n'en reste pas moins délicat à faire correctement et primordial pour la suite !

Consignes
Fonction autorisées : malloc, read, write, open, perror, free, close
Nous corrigerons votre projet sous Debian 7 avec le compilateur gcc et évaluerons la norme avec l'indentation d'emacs (vous êtes prévenus...)
Votre projet doit compiler avec un Makefile et les flags de compilation suivants : -W -Wall -Werror
Vous pouvez utiliser votre libmy, mais veillez à respecter les conditions suivantes :
Les sources de votre lib doivent être présentes dans votre répertoire de rendu
Votre libmy doit pouvoir être recompilée dans le repertoire de rendu au cours de la soutenance, vous devez donc rendre son Makefile
Vos lib doivent être uniques et individuelles, vous ne devez pas utiliser celles de vos binômes récupérées sur des projets communs (ex. battle for midgard)
LibParse

Votre première étape consistera en la réalisation d'une librairie de parsing d'arguments et d'options.
Elle doit vous permettre d'associer une chaine de caractères à un comportement en l'occurence à un appel de fonction.
Votre lib doit pouvoir gérer les arguments envoyés à votre programme (ex. my_cat) ainsi que les données envoyées sur l'entrée standard.

LibList

Cette deuxième étape consiste en la réalisation d'une librairie de création et de manipulation de listes chainées. Vous devez pouvoir au minimum :
Créer et détruire une liste
Rechercher un élément
Supprimer un élément
Ajouter un élément
Si vous êtes vraiment très à l'aise et que tout le reste est terminé, vous pouvez tenter de rendre vos listes génériques, doublement chainées, circulaires...

LibError

Cette dernière étape consiste en la création d'une librairie de gestion d'erreurs et de création de fichiers de log.

Vous l'aurez compris ce sujet est très libre. L'implémentation de ces librairies est à votre discrétion, après tout, c'est vous qui allez les utiliser !
Nous évaluerons en soutenance l'élégance des solutions proposées. Soyez malin ! N'hésitez pas à préparer votre plan d'attaque sur papier et le faire valider par vos co-promo et vos assistants. Gardez en tête que ce projet est réellement conçu pour vous aider.
Employez votre temps à revoir ce que vous n'avez pas eu le temps d'assimiler. N'hésitez pas à poser un maximum de questions.
Nous serons pour la soutenance et jusqu'à la fin de votre cursus intransigeant sur les questions de rigueur, de norme et de robustesse de vos programmes.
Nous avons conscience que ce projet sied davantage à ceux d'entre vous qui ont encore des difficultés en C. J'encourage néanmoins ceux pour qui ce projet est "facile" à laisser libre cours à leur imagination et à dépasser la consigne (après validation sur le forum).
Quelques pistes :
Une moulinette de triche ?
Une moulinette de norme ?
Une moulinette de test qui reproduirait les horreurs que les assets font subir à vos programme en soutenance ?
Think twice, code once.
Have fun !
