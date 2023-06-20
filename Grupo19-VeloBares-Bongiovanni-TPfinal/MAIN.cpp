#include <vector>
#include <string>
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

const vector<string> nomPac = { //creamos un vector con nombres de clientes random
    "Emma", "Liam", "Olivia", "Noah", "Ava", "Sophia", "Isabella", "Mia", "Charlotte", "Amelia", "Harper", "Evelyn", "Abigail", "Emily", "Elizabeth", "Mila", "Ella", "Avery", "Sofia", "Camila", "Aria", "Scarlett", "Victoria", "Madison", "Luna", "Grace", "Chloe", "Penelope", "Layla", "Riley", "Zoey", "Nora", "Lily", "Eleanor", "Hannah", "Lillian", "Addison", "Aubrey", "Ellie", "Stella", "Natalie", "Zoe", "Leah", "Hazel", "Violet", "Aurora", "Savannah", "Audrey", "Brooklyn", "Bella", "Claire", "Skylar", "Lucy", "Paisley", "Everly", "Anna", "Caroline", "Nova", "Genesis"
};

const vector<string> apellidoPac = { 
    "Smith", "Johnson", "Williams", "Brown", "Jones", "Garcia", "Miller", "Davis", "Rodriguez", "Martinez", "Hernandez", "Lopez", "Gonzalez", "Wilson", "Anderson", "Thomas", "Taylor", "Moore", "Jackson", "Martin", "Lee", "Perez", "Thompson", "White", "Harris", "Sanchez", "Clark", "Ramirez", "Lewis", "Robinson", "Walker", "Young", "Hall", "Allen", "Torres", "Nguyen", "Wright", "King", "Scott", "Green", "Baker", "Adams", "Nelson", "Hill", "Campbell", "Mitchell", "Roberts", "Carter", "Phillips", "Evans", "Turner", "Parker", "Collins", "Edwards", "Stewart", "Flores", "Morris", "Ng", "Murphy", "Cook"
};

const vector<time_t> fechanacimientoPac = { 
1740787200, 1669852800, 1654041600, 1753923600, 1690848000, 1777770000, 1643673600, 1693526400, 1725062400, 1701475200, 1659312000, 1730160000, 1761872400, 1688256000, 1767142800, 1719792000, 1775091600, 1764550800, 1717113600, 1738108800, 1783040400, 1656633600, 1722384000, 1677628800, 1709424000, 1743379200, 1732838400, 1656633600, 1661990400, 1769821200, 1706745600, 1698796800, 1675209600, 1772413200, 1714521600, 1735430400, 1680307200, 1764550800, 1685577600, 1651363200, 1727740800, 1664582400, 1769821200, 1751331600, 1780362000, 1761872400, 1706745600, 1714521600, 1743379200, 1738108800, 1748653200, 1751331600, 1775091600, 1667260800, 1719792000, 1698796800, 1732838400, 1780362000, 1767142800, 1654041600, 1680307200, 1690848000, 1735430400, 1777770000, 1659312000, 1725062400, 1656633600, 1693526400, 1753923600 };

const vector<unsigned int> telefonoPac = {
1123456789, 1145678901, 1167890123, 1190123456, 1156789012, 1189012345, 1112345678, 1165432109, 1134567890, 1178901234, 1167890123, 1112345678, 1145678901, 1156789012, 1190123456, 1189012345, 1123456789, 1134567890, 1165432109, 1178901234, 1167890123, 1112345678, 1145678901, 1189012345, 1190123456, 1156789012, 1134567890, 1123456789, 1165432109, 1178901234, 1167890123, 1112345678, 1145678901, 1156789012, 1190123456, 1189012345, 1123456789, 1134567890, 1165432109, 1178901234, 1167890123, 1112345678, 1145678901, 1189012345, 1190123456, 1156789012, 1134567890, 1123456789, 1165432109, 1178901234, 1167890123, 1112345678, 1145678901, 1156789012, 1190123456, 1189012345};

const vector<string> radioPac = {
"15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "15.1", "15.2", "15.3", "15.4", "15.5", "15.6", "15.7", "15.8", "15.9", "16.1", "16.2", "16.3", "16.4", "16.5", "16.6", "16.7", "16.8", "16.9", "17.1", "17.2", "17.3", "17.4", "17.5", "17.6", "17.7", "17.8", "17.9", "18.1", "18.2", "18.3", "18.4", "18.5", "18.6", "18.7", "18.8", "18.9", "19.1", "19.2", "19.3", "19.4", "19.5", "19.6", "19.7", "19.8", "19.9"
};

const vector<unsigned int> codigoPac = {
100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159};

unsigned int randint(unsigned int min, unsigned int max) 
{
    return rand() % (max - min) + min;
}

vector<cPaciente*> generador_pacientes(unsigned int cantidad) { //me genero una "pila" de pacientes  con todos sus atributos random
    vector<cPaciente*> MisPacientes;

    for (unsigned int i = 0; i < cantidad; i++)
    {
        MisPacientes.push_back(new cPaciente(nomPac[randint(0, nomPac.size())], apellidoPac[randint(0, apellidoPac.size())], fechanacimientoPac[randint(0, fechanacimientoPac.size())], (bool)randint(0, 2), (bool)randint(0, 2), telefonoPac[randint(0, telefonoPac.size())], radioPac[randint(0, radioPac.size())], codigoPac[randint(0, codigoPac.size())]));
    }
    return MisPacientes; //me devuelve la lista de pacientes que se crea de manera random
}

 vector <string> dimension = { 
    "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "15.1", "15.2", "15.3", "15.4", "15.5", "15.6", "15.7", "15.8", "15.9", "16.1", "16.2", "16.3", "16.4", "16.5", "16.6", "16.7", "16.8", "16.9", "17.1", "17.2", "17.3", "17.4", "17.5", "17.6", "17.7", "17.8", "17.9", "18.1", "18.2", "18.3", "18.4", "18.5", "18.6", "18.7", "18.8", "18.9", "19.1", "19.2", "19.3", "19.4", "19.5", "19.6", "19.7", "19.8", "19.9" };

 vector<string> material = {
"Plástico", "Metal", "Fibra de carbono", "Silicona", "Goma", "Madera", "Aluminio", "Titanio", "Acero inoxidable", "Polipropileno", "Nylon", "Teflón", "Cerámica", "Espuma de poliuretano", "Elastómero", "Resina", "Polietileno", "Caucho", "Poliéster", "Fibra de vidrio", "Porcelana", "Cromo", "Bambú", "Vidrio", "Cobre", "Platino", "Latón", "PVC", "EVA", "Polimetilmetacrilato", "Fibra natural", "Espuma de látex", "Composite", "Aleación de magnesio", "Dacron", "Tungsteno", "Polioximetileno", "Cerámica bioactiva", "Polimetilpenteno", "Polisulfona", "Polimetacrilato de metilo", "Poliuretano termoplástico", "Gel de sílice", "Polietileno de alta densidad", "Polibutileno tereftalato", "Polipropileno reforzado con fibra de vidrio", "Polipropileno reforzado con fibra de carbono", "Silicona médica", "Fibra de polietileno de alta densidad", "Cristal líquido", "Tetrafluoroetileno", "Fibra de polietileno reticulado", "Polipropileno microporoso", "Algodón", "Yute", "Hilo de sutura", "Hilo de polipropileno", "Caucho termoplástico", "Poliestireno expandido" };

 vector<time_t> fechadefabricacion = { 
946684800, 946771200, 946857600, 946944000, 947030400, 947116800, 947203200, 947289600, 947376000, 947462400, 947548800, 947635200, 947721600, 947808000, 947894400, 947980800, 948067200, 948153600, 948240000, 948326400, 948412800, 948499200, 948585600, 948672000, 948758400, 948844800, 948931200, 949017600, 949104000, 949190400, 949276800, 949363200, 949449600, 949536000, 949622400, 949708800, 949795200, 949881600, 949968000, 950054400, 950140800, 950227200, 950313600, 950400000, 950486400, 950572800, 950659200, 950745600, 950832000, 950918400, 951004800, 951091200, 951177600, 951264000, 951350400, 951436800, 951523200, 951609600, 951696000, 951782400, 951868800, 951955200, 952041600, 952128000
 };
vector<string> fabricante = {
"Sofía", "Luis", "Valentina", "Diego", "Lucía", "Carlos", "Isabella", "Juan", "Camila", "Miguel", "María", "Alejandro", "Ana", "Gabriel", "Valeria", "Pedro", "Fernanda", "Andrés", "Laura", "Javier", "Paula", "Raúl", "Daniela", "Gonzalo", "Carolina", "Jorge", "Adriana", "José", "Elena", "Fernando", "Olivia", "Emilio", "Renata", "Sebastián", "Clara", "Ricardo", "Sara", "Hugo", "Catalina", "Matías", "Gabriela", "Andrés", "Isabel", "Esteban", "Martina", "Ignacio", "Victoria", "Mario", "Julia", "Óscar", "Emily", "Rodrigo", "Abril", "Alberto", "René", "Guillermo", "Natalia", "Tomás", "Alicia", "Emmanuel", "Antonella"
 };


 vector<unsigned int> codigo = {
1000, 1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010, 1011, 1012, 1013, 1014, 1015, 1016, 1017, 1018, 1019, 1020, 1021, 1022, 1023, 1024, 1025, 1026, 1027, 1028, 1029, 1030, 1031, 1032, 1033, 1034, 1035, 1036, 1037, 1038, 1039, 1040, 1041, 1042, 1043, 1044, 1045, 1046, 1047, 1048, 1049, 1050, 1051, 1052, 1053, 1054, 1055, 1056, 1057, 1058, 1059
 };

unsigned int randint(unsigned int min, unsigned int max)
{
    return rand() % (max - min) + min;
}

vector<cProtesis*> generador_protesis(unsigned int cantidad) { //me genero una "pila" de pacientes  con todos sus atributos random
    vector<cProtesis*> MisProtesis;
    for (unsigned int i = 0; i < cantidad; i++) 
        MisProtesis.push_back(new cProtesis(dimension[randint(0, dimension.size())], material[randint(0, material.size())], fabricante[randint(0, fabricante.size())], fechadefabricacion[randint(0, fechadefabricacion.size())], codigo[randint(0, codigo.size())]));
    
    return MisProtesis; //me devuelve la lista de protesis que se crea de manera random
}

int main()
{
    srand(time(NULL)); //simulacion todo randommm
    vector <cPaciente*> MisPacientes = generador_pacientes(5);
    vector <cProtesis*> MisProtesis = generador_protesis(5);
    vector <cMedico*> medico;
    vector <cHospital*> hospital;
    vector <cOrtopedia*> ortopedia;

    int Pa = rand() % MisPacientes.size();
    int Pro = rand() % MisProtesis.size();

    time_t fechasolicitud = time(NULL);
    time_t fechaotorgamiento = time(NULL);
    cHospital *santacruz;
    cMedico* leximissyou;

    cMedico* Richard = new cMedico(MisProtesis, "Richard", "Gomez", "42500"); //VA EN EL ORDEN DEL CONSTRUCTOR DE LA PARTE PUBLIC
    cHospital* Madison = new cHospital("Madison", "av Santa Fe", medico, MisPacientes); 
    cFabricante* Raul = new cFabricante("Raul", "av Las Heras", 999);
    cANPA* ANPA = new cANPA(ortopedia, hospital);
    cOrtopedia* Ortopediahappyplace = new cOrtopedia ("Ortopediahappyplace", "av Corrientes", 3 );
    cRegistro* Registro = new cRegistro( Madison, Richard, fechasolicitud, fechaotorgamiento, MisProtesis[Pro], MisPacientes[Pa], true);

    unsigned int codigopaciente__;
     
    while (!(MisPacientes.empty())) //mientras hayan pacientes se va a dar todo lo siguiente...
    {
    
        if (&Madison->buscarpaciente(codigopaciente__) == MisPacientes[Pa])
        {
            /*cout << "Desea agregar un paciente ? Si es asi, ingrese su codigo" << endl;
            cin >> codigopaciente__;
            Madison->agregarpaciente(*Madison, *MisPacientes[Pa]);*/

            cout << "Desea eliminar un paciente ? Si es asi, ingrese su codigo" << endl;
            cin >> codigopaciente__;

            Madison->eliminarpaciente(codigopaciente__, *MisPacientes[Pa]);

            Richard->recetarprotesis(*MisPacientes[Pa], *Ortopediahappyplace, *Raul, *MisProtesis[Pro], *Richard); //aca ya llama al fabricante y da la protesis si no tiene stock la ortopedia
        } 

    }

    ANPA->tenerregistros(*Registro, *MisProtesis[Pro], *Richard, *MisPacientes[Pa], *Ortopediahappyplace, *Raul);
    cProtesis tiemporecuperacion(vector<cProtesis*> listaprotesis, time_t tiemporecup);
    cProtesis imprimirprotesis();

    delete Richard;
    delete Madison;
    delete Raul;
    delete ANPA;
    delete Ortopediahappyplace;
    delete Registro;

	return 0;
}
