#pragma once
using namespace System;
using namespace System::Collections::Generic;
#include"Reporte.h"

namespace RobotMineroModel {
	public ref class ReporteAmbiental: public Reporte
	{
	private:
		List<double>^ HumoMedido;//Se van a llamar de una forma distinta creo
		List<double>^ MetanoMedido;
		List<double>^ AmoniacoMedido;
		List<double>^ TemperaturaMedida;
	public:
		void MostrarConcetraciones();//Poner como uno solo mostrar reporte
		void MostrarTemperatura();
		
	};
}
