#pragma once
#include "Componentes.h"

namespace RobotMineroModel {
	[Serializable]

	public ref class Servomotor : public Componentes
	{
	public: 
		property double AnguloMin;       // � m�nimo
		property double AnguloMax;       // � m�ximo
		property String^ Modelo;         // p. ej. �SG90�
		property double Velocidad;       // s/60� (tiempo de giro)

		property double TorqueNominal;   // Nm
		property String^ Protocolo;      // p. ej. �PWM� o �I2C�
		
		Servomotor() {}
	};
}
//