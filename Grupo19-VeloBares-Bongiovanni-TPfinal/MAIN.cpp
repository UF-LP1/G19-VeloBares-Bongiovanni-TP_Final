#include <vector>
#include <string>
#include <stack>
#include <iostream>
#include "iostream"
#include "cProtesis.h"
#include "cPaciente.h"
#include "cMedico.h"
#include "cHospital.h"
#include "cANPA.h"
#include "cFabricante.h"
#include "cOrtopedia.h"
#include "cRegistro.h"
using namespace std;

const vector<string> nomPac = { // creamos un vector con nombres de clientes random
    "Emma", "Liam", "Olivia", "Noah", "Ava", "Sophia", "Isabella", "Mia", "Charlotte", "Amelia", "Harper", "Evelyn", "Abigail", "Emily", "Elizabeth", "Mila", "Ella", "Avery", "Sofia", "Camila", "Aria", "Scarlett", "Victoria", "Madison", "Luna", "Grace", "Chloe", "Penelope", "Layla", "Riley", "Zoey", "Nora", "Lily", "Eleanor", "Hannah", "Lillian", "Addison", "Aubrey", "Ellie", "Stella", "Natalie", "Zoe", "Leah", "Hazel", "Violet", "Aurora", "Savannah", "Audrey", "Brooklyn", "Bella", "Claire", "Skylar", "Lucy", "Paisley", "Everly", "Anna", "Caroline", "Nova", "Genesis"
};

const vector<string> apellidoPac = { 
    "Smith", "Johnson", "Williams", "Brown", "Jones", "Garcia", "Miller", "Davis", "Rodriguez", "Martinez", "Hernandez", "Lopez", "Gonzalez", "Wilson", "Anderson", "Thomas", "Taylor", "Moore", "Jackson", "Martin", "Lee", "Perez", "Thompson", "White", "Harris", "Sanchez", "Clark", "Ramirez", "Lewis", "Robinson", "Walker", "Young", "Hall", "Allen", "Torres", "Nguyen", "Wright", "King", "Scott", "Green", "Baker", "Adams", "Nelson", "Hill", "Campbell", "Mitchell", "Roberts", "Carter", "Phillips", "Evans", "Turner", "Parker", "Collins", "Edwards", "Stewart", "Flores", "Morris", "Ng", "Murphy", "Cook"
};


const vector<time_t> fechanacimientoPac = { //por que no toma?
    "04/08/1952", "17/11/1965", "29/07/1981", "12/03/1943", "27/09/1977", "08/06/1956", "21/02/1999", "03/10/1989", "15/05/1948", "28/01/1970", "11/08/1993", "24/04/1959", "06/12/1973", "19/09/2002", "01/07/1985", "14/03/1967", "27/10/1950", "09/06/1982", "22/02/1945", "04/11/1978", "17/07/1994", "30/03/1966", "12/12/1958", "25/08/1972", "07/05/2000", "20/01/1984", "02/09/1968", "15/04/1954", "28/10/1991", "10/07/1946", "23/03/1979", "06/12/1995", "19/08/1961", "01/05/1944", "14/01/1976", "27/09/1999", "09/06/1983", "22/02/1965", "05/11/1947", "18/07/1980", "31/03/1952", "12/12/1967", "25/08/1990", "07/05/1974", "20/01/1957", "02/09/1989", "15/04/1971", "28/10/1953", "10/07/1996", "23/03/1982", "05/11/1964", "18/07/1948", "31/03/1986", "12/12/1969", "25/08/1951", "07/05/1984", "20/01/1998", "02/09/1975", "15/04/1959", "28/10/1992", "10/07/1946", "23/03/1970"
};

const vector<unsigned int> telefonoPac = { //por que no toma?
    "1234567890", "9876543210", "5551234567", "9998887777", "1112223333", "4445556666", "7778889999", "5555555555", "1231231234", "9879879876", "1111111111", "9999999999", "3333333333", "4444444444", "8888888888", "7777777777", "6666666666", "2222222222", "5556667777", "9998887777", "1234567890", "9876543210", "5551234567", "9998887777", "1112223333", "4445556666", "7778889999", "5555555555", "1231231234", "9879879876", "1111111111", "9999999999", "3333333333", "4444444444", "8888888888", "7777777777", "6666666666", "2222222222", "5556667777", "9998887777", "1234567890", "9876543210", "5551234567", "9998887777", "1112223333", "4445556666", "7778889999", "5555555555", "1231231234", "9879879876", "1111111111", "9999999999", "3333333333", "4444444444", "8888888888", "7777777777", "6666666666", "2222222222", "5556667777", "9998887777"
};

const vector<string> radioPac = {
"15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "15.1", "15.2", "15.3", "15.4", "15.5", "15.6", "15.7", "15.8", "15.9", "16.1", "16.2", "16.3", "16.4", "16.5", "16.6", "16.7", "16.8", "16.9", "17.1", "17.2", "17.3", "17.4", "17.5", "17.6", "17.7", "17.8", "17.9", "18.1", "18.2", "18.3", "18.4", "18.5", "18.6", "18.7", "18.8", "18.9", "19.1", "19.2", "19.3", "19.4", "19.5", "19.6", "19.7", "19.8", "19.9"
};

const vector<unsigned int> codigoPac = { //por que no toma?
 "001", "002", "003", "004", "005", "006", "007", "008", "009", "010", "011", "012", "013", "014", "015", "016", "017", "018", "019", "020", "021", "022", "023", "024", "025", "026", "027", "028", "029", "030", "031", "032", "033", "034", "035", "036", "037", "038", "039", "040", "041", "042", "043", "044", "045", "046", "047", "048", "049", "050", "051", "052", "053", "054", "055", "056", "057", "058", "059", "060"
};

unsigned int randint(unsigned int min, unsigned int max) 
{
    return rand() % (max - min) + min;
}

//nombre,apellido,fecha,alergia,problema,telefono,radio,codigo

vector<cPaciente*> generador_pacientes(unsigned int cantidad) { //me genero una "pila" de pacientes  con todos sus atributos random
    vector<cPaciente*> MisPacientes;

    for (unsigned int i = 0; i < cantidad; i++) //por que no toma?
        MisPacientes.push_back(new cPaciente(nomPac[randint(0, nomPac.size())], apellidoPac[randint(0, apellidoPac.size())],to_string(randint(1000000000, 9999999999)), (bool)randint(0, 2)),(bool)randint(0, 2)), to_string(telefonoPac[randint(0, telefonoPac.size())]), radioPac[randint(0, radioPac.size())], to_string(codigoPac[randint(0, codigoPac.size())]);

    return MisPacientes; //me devuelve la lista de pacientes que se crea de manera random
}

const vector<string> dimension = { //por que no toma?
    "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "15.1", "15.2", "15.3", "15.4", "15.5", "15.6", "15.7", "15.8", "15.9", "16.1", "16.2", "16.3", "16.4", "16.5", "16.6", "16.7", "16.8", "16.9", "17.1", "17.2", "17.3", "17.4", "17.5", "17.6", "17.7", "17.8", "17.9", "18.1", "18.2", "18.3", "18.4", "18.5", "18.6", "18.7", "18.8", "18.9", "19.1", "19.2", "19.3", "19.4", "19.5", "19.6", "19.7", "19.8", "19.9" };

const vector<string> material = {
"Plástico", "Metal", "Fibra de carbono", "Silicona", "Goma", "Madera", "Aluminio", "Titanio", "Acero inoxidable", "Polipropileno", "Nylon", "Teflón", "Cerámica", "Espuma de poliuretano", "Elastómero", "Resina", "Polietileno", "Caucho", "Poliéster", "Fibra de vidrio", "Porcelana", "Cromo", "Bambú", "Vidrio", "Cobre", "Platino", "Latón", "PVC", "EVA", "Polimetilmetacrilato", "Fibra natural", "Espuma de látex", "Composite", "Aleación de magnesio", "Dacron", "Tungsteno", "Polioximetileno", "Cerámica bioactiva", "Polimetilpenteno", "Polisulfona", "Polimetacrilato de metilo", "Poliuretano termoplástico", "Gel de sílice", "Polietileno de alta densidad", "Polibutileno tereftalato", "Polipropileno reforzado con fibra de vidrio", "Polipropileno reforzado con fibra de carbono", "Silicona médica", "Fibra de polietileno de alta densidad", "Cristal líquido", "Tetrafluoroetileno", "Fibra de polietileno reticulado", "Polipropileno microporoso", "Algodón", "Yute", "Hilo de sutura", "Hilo de polipropileno", "Caucho termoplástico", "Poliestireno expandido" };

const vector<time_t> fechadefabricacion = { //por que no toma?
"16 de mayo", "17 de mayo", "18 de mayo", "19 de mayo", "20 de mayo", "21 de mayo", "22 de mayo", "23 de mayo", "24 de mayo", "25 de mayo", "26 de mayo", "27 de mayo", "28 de mayo", "29 de mayo", "30 de mayo", "31 de mayo", "1 de junio", "2 de junio", "3 de junio", "4 de junio" };

const vector<unsigned int> codigo = { //por que no toma?
"8543", "2096", "4675", "9128", "5831", "7609", "3187", "6952", "1247", "5874", "9320", "4169", "7893", "6028", "3451", "1782", "9054", "6523", "4378", "2916", "8740", "5369", "2974", "6412", "8291", "1703", "4086", "7562", "5934", "3251", "9618", "4837", "7260", "2475", "5102", "8934", "6581", "4260", "7815", "5693", "3047", "6379", "9132", "4827", "7259", "2614", "5309", "8792", "6941", "3470", "1826", "9124", "5879", "4396", "7083", "3462", "5207", "8619", "6378", "9046", "1567" };

unsigned int randint(unsigned int min, unsigned int max)
{
    return rand() % (max - min) + min;
}

vector<cProtesis*> generador_protesis(unsigned int cantidad) { //me genero una "pila" de pacientes  con todos sus atributos random
    vector<cProtesis*> MisProtesis;

    for (unsigned int i = 0; i < cantidad; i++) //por que no toma?
        MisProtesis.push_back(new cProtesis(dimension[randint(0, dimension.size())], material[randint(0, material.size())], to_string(randint(1000000000, 9999999999)), to_string(codigo[randint(0, codigo.size()]));
    //LAM NO TOMA PORQUE SON ATRIBUTOS CONSTANTES, COMO HACEMOS EL RANDOM SINO?!?!?!
    return MisProtesis; //me devuelve la lista de protesis que se crea de manera random
}

int main()
{
    srand(time(NULL)); //simulacion todo randommm
    vector <cPaciente*> MisPacientes = generador_pacientes(5);
    vector <cProtesis*> MisProtesis = generador_protesis(5);
    vector <cMedico> medico;
    vector <cHospital> hospital;
    vector <cOrtopedia> ortopedia;

    cMedico* Richard = new cMedico(MisProtesis, "Richard", "Gomez","35356362"); //si es constante igual es asi?
    cHospital* Madison = new cHospital("Madison", "av Santa Fe", medico, MisPacientes); //por que no toma?
    cFabricante* Raul = new cFabricante("Raul", "av Las Heras", 999);
    cANPA* ANPA = new cANPA(ortopedia, hospital);
    cOrtopedia* Ortopedia = new cOrtopedia("Ortopedia", "av Corrientes");
    cRegistro* Registro = new cRegistro(hospital, medico, MisProtesis, MisPacientes); //time_t fechadesolicitud; time_t fechaentrega;
    unsigned int codigopaciente__;

    int Pa = rand() % MisPacientes.size();
    int Pro = rand() % MisProtesis.size();

    Richard->recetarprotesis(*MisPacientes[Pa], *Ortopedia, *Raul, *MisProtesis[Pro], *Richard);
    Raul->hacerprotesis(*MisPacientes[Pa], *Richard , *MisProtesis[Pro]);

    Madison->buscarpaciente(codigopaciente__, *MisPacientes[Pa]);
    Madison->eliminarpaciente(codigopaciente__, *MisPacientes[Pa], *MisProtesis[Pa]);

    ANPA->tenerregistros(*Registro, *MisProtesis[Pro], *Richard, *MisPacientes[Pa], *Ortopedia, *Raul);

    ostream& operator<<(ostream & out, cPaciente & paciente);
    MisProtesis->imprimirprotesis();
    
    while (!(MisPacientes.empty())) // mientras hayan pacientes se va a dar todo lo siguiente...
    {
        if (Madison->buscarpaciente(codigopaciente__, *MisPacientes[Pa]) == *MisPacientes[Pa]->getcodigopaciente())
        {
                 Richard->recetarprotesis(*MisPacientes[Pa], *Ortopedia, *Raul, *MisProtesis[Pro], *Richard); //aca ya llama al fabricante y da la protesis si no tiene stock la ortopedia
        }
       

    }

    delete Richard;
    delete Madison;
    delete Raul;
    delete ANPA;
    delete Ortopedia;
    delete Registro;

	return 0;
}
