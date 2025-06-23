#pragma once
#include"Usuario.h"

namespace RobotMineroModel {
	public ref class IngAmbiental:public Usuario
	{
	public:
		String^ Especializacion;
		String^ NumeroLicencia;
		String^ EntidadCertificadora;
		void VisualizarConcetracion();
	};
}