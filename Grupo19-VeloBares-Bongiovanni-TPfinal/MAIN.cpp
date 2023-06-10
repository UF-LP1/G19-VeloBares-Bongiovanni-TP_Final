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

stack<cPaciente*> generador_pacientes(unsigned int cantidad) { //me genero una "pila" de pacientes  con todos sus atributos random
    stack<cPaciente*> MisPacientes;

    for (unsigned int i = 0; i < cantidad; i++) 
        MisPacientes.push(new cPaciente(nomPac[randint(0, nomPac.size())], apellidoPac[randint(0, apellidoPac.size())],to_string(randint(1000000000, 9999999999)), (bool)randint(0, 2)),(bool)randint(0, 2)), to_string(telefonoPac[randint(0, telefonoPac.size())]), radioPac[randint(0, radioPac.size())], to_string(codigoPac[randint(0, codigoPac.size())]);

    return MisPacientes; //me devuelve la lista de pacientes que se crea de manera random
}

int main()
{
    srand(time(NULL)); //simulacion todo randommm
    stack<cPaciente*> MisPaccientes = generador_pacientes(5);

    cMedico* Richard = new cMedico ("")

	return 0;
}
// llamr ostream(agregar) y hacer protesis