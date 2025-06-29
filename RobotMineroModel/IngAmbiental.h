#pragma once
#include"Usuario.h"

namespace RobotMineroModel {
	[Serializable]
	public ref class IngAmbiental:public Usuario
	{
	public:
		String^ Especializacion;
		String^ NumeroLicencia;
		String^ EntidadCertificadora;
		IngAmbiental() {
			Especializacion = "";
			NumeroLicencia = "";
			EntidadCertificadora = "";
		}
		void VisualizarConcetracion();
	};
}