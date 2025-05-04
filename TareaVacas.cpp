#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Declaracion de variables para las rutas
    cout << endl;
    int ruta1, alt2, alt1, alt1f,alt2f;

    // Primera eleccion de rutas, gym o parque
    cout << "Hola, Esta ves te traere una historia de mis 2 salidas eligiendo tu diferentes caminos:D" << endl;
    cout << "Elige la siguiente ruta donde iremos 1- Gym 2- Parque" << endl;
    cin >> ruta1;

    // Verificacion para rutas de la historia
    switch (ruta1)
    {
    case 1:
        cout << "Perfecto, pues vamos a ponernos cholos B)" << endl;
        break;
    case 2:
        cout << "Perfecto, Vamos despejar la mente y a relajarnos :D" << endl;
        break;

    default:
        cout << "Esto no es un albion para que elijas tu historia viejo, elige las alternativas dadas >:(";
        break;
    }
    // Alternativa 1, Gym
    if (ruta1 == 1)
    {
        // Eleccion de que musculo se trabajara
        cout << "Ahora que estamos en el gym decide que haremos, 1- Espalda 2- Pecho 3- Pierna" << endl;
        cin >> alt1;

        switch (alt1)
        {

        case 1:
            cout << "Ahora haces una rutina completa de espalda y terminas super cansado asi que decides ir a casa" << endl;
            break;

        case 2:
            cout << "Ahora haces una rutina completa de pecho y terminas super cansado asi que decides ir a casa" << endl;
            break;

        case 3:
            cout << "Ahora haces una rutina completa de pierna y terminas super cansado asi que decides ir a casa " << endl;
            break;
        }

        // Eleccion de que se cenara y final de ruta gym
        cout << "Al descansar un rato, no te das cuenta y se hizo noche, ahora debes elegir que debes cenar: 1 - Ensalada, 2- Sopa de pollo 3- sandwiches" << endl;
        cin >> alt1f;

        switch (alt1f)
        {
        case 1:
            cout << "Despues de cenar una deliciosa ensalada, procedes a quedar satisfecho y te irasa dormir, bona noche :D" << endl;
            cout << "Gracias por jugar elije tu camino, espero te haya gustado feliz dia :D" << endl;
            break;

        case 2:
            cout << "Despues de cenar una deliciosa sopa de pollo, procedes a quedar satisfecho y te irasa dormir, bona noche :D" << endl;
            cout << "Gracias por jugar elije tu camino, espero te haya gustado feliz dia :D" << endl;
            break;

        case 3:
            cout << "Despues de cenar unos deliciosos sandwirhces, procedes a quedar satisfecho y te irasa dormir, bona noche :D" << endl;
            cout << "Gracias por jugar elije tu camino, espero te haya gustado feliz dia :D" << endl;
            break;
        }
       

       
    }
    //Inicio de ruta de Parque
    if (ruta1 == 2){
        cout << "Ahora que estamos en el parque que hacemos 1- Ir a los columpios 2- Jugar con personas desconocidas al futbol 3- Acostarse al pasto y observar el cielo";
        cin >> alt2;
    }
    // Que pasara dependendiendo de la eleccion estando en el parque
    switch (alt2)
    {

    case 1:
        cout << "Vas a los columpios y encuentras una chica bastante bonita con la que te quedas charlando y deciden volverse a ver en un futuro (que ligon) " << endl;
        break;

    case 2:
        cout << "Juegas un partidazo con los desconocidos anotando 2 goles y ganando 4-1 y diciendote que vuelvas a jugar para la proxima " << endl;
        break;

    case 3:
        cout << "Te tomas un tiempo para ti mismo, despejas tu mente y ahora sientes que el estres de un monton de dias simplemente desparece" << endl;
        break;
    }

    // Eleccion de que actividad habra y final de ruta en el parque
    cout << "Luego de regresar de un gran dia, para terminar el dia decides 3 opciones 1- Jugar un videojuego 2- Ver una pelicula 3-Probar una nueva receta para la cena" << endl;
    cin >> alt2f;

    switch (alt2f)
    {
    case 1:
        cout << "Decides jugar un buen rato Smash, ganas bastantes partidas y casi llevas a tu main a elite, luego de eso cenas y te vas a dormir tranquilamente" << endl;
        cout << "Gracias por jugar elije tu camino, espero te haya gustado feliz dia :D" << endl;
        break;

    case 2:
        cout << "Vas a ver una pelicula de miedo con tu familia, mientras cenan algo delicioso, luego de la pelicula decides irte a dormir con miedo" << endl;
        cout << "Gracias por jugar elije tu camino, espero te haya gustado feliz dia :D" << endl;
        break;

    case 3:
        cout << "Te tomas un tiempo probando nueva receta para una cena exquisita, donde sorprendes a tu familia y todos disfrutan de tu nueva creacion" << endl;
        cout << "Gracias por jugar elije tu camino, espero te haya gustado feliz dia :D" << endl;
        break;
    }
    
           
    return 0;       
}