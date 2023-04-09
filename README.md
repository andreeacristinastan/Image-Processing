# Image-Processing
Stan Andreea-Cristina 313CA

Main :  -Am memorat ce introduceam de la tastatura si am salvat instructiunea.
        -Am verificat pe rand ce instructiune este si am apelat functia
            corespunzatoare, afisand mesajul corespunzator.

Read : -Pentru citirea din fisier binar, am citit cu ajutorul unui char fara
            semn, bit cu bit, apoi am salvat in matrice valoarea potrivita.

Rotate :-Daca rotirea se face pe o imagine grayscale, atat pentru selectie,
            cat si pentru intreaga imagine, am aplicat algoritmul gasit, atat
            pentru rotirea de 90/-270 de grade, cat si pentru rotirea de
            180/-180, respectiv -90/270 de grade repetandu-l de 2, respectiv
            3 ori.
            La final am copiat in matricea initiala valorile daca era cazul.

        -Daca rotirea se face pe o imagine color, atat pentru intreaga imagine,
            cat si pentru o sectiune, am procedat asemanator ca pentru
            grayscale, insa am parcurs matricea pe linii, si am memorat intr-o
            copie valorile asa incat sa aiba loc rotirea corect.
            La final am copiat in matricea initiala valorile daca era cazul.

Crop :-Am verificat ce tip de imagine este si am parcurs matricea initiala
        conform selectiei, memorand in copia creata valorile corespunzatoare.
        La final am redimensionat matricea initiala, si am copiat valorile
        gasite la pasul anterior.

Grayscale :-Am verificat ce tip de imagine este si am parcurs matricea
                initiala pe linii, am calculat noile valori ale pixelilor
                in format double, le-am rotunjit daca era cazul, apoi
                le-am inlocuit in matrice printr-un cast la int.

Sepia :-Asemanator ca si la grayscale, am verificat tipul imaginii si am
            parcurs matricea initiala pe linii, am calculat noile valori
            ale pixelilor, le-am rotunjit daca era cazul, apoi le-am
            inlocuit in matrice prin cast la int.

Save_binary :-Pentru salvarea in binar, am parcurs matricea bit cu bit
                cu un char fara semn, apoi valoarea gasite am
                adaugat-o in fisierul potrivit.

Select :-Am memorat pozitia unde se afla primul spatiu de dupa instructiune,
            apoi am parcurs din spatiu in spatiu vectorul char, si am memorat
            pe rand valorile corespunzatoare. Daca nu erau cuvinte, le-am
            convertit in int-uri si le-am salvat, avand grija sa am numarul
            de valori necesare unei selectii valide.

Find_ascii :-Am ales sa procedez la fel ca la select, memorand mai intai pozitia
                pe care se afla primul spatiu,apoi parcurgand vectorul din
                spatiu in spatiu. Am salvat numele noului fisier, apoi am 
                verificat daca exista parametrul ascii sau nu.

Find_angle :-Si aici am memorat pozitia primului spatiu, apoi am luat valoare
                char-ului si am convertit-o in int. Am verificat daca valorile
                unghiurilor sunt cele corecte si am afisat mesaje
                corespunzatoare.

         
