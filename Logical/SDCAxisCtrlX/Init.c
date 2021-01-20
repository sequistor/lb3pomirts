
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	//������������� ���� SDC �������
	gAxis_X_HW.EncIf1_Typ = ncSDC_ENC16;
	gAxis_X_HW.DiDoIf_Typ = ncSDC_DIDO;
	gAxis_X_HW.DrvIf_Typ = ncSDC_DRVSERVO16;
	//������������� ����� ����������
	strcpy(gAxis_X_HW.EncIf1_Name, "gAxis_X_EncIf");
	strcpy(gAxis_X_HW.DrvIf_Name, "gAxis_X_DrvIf");
	strcpy(gAxis_X_HW.DiDoIf_Name, "gAxis_X_DiDoIf");
	//������������� ����� ���������� � ���������� ������
	gAxis_X_EncIf.iEncOK = 1;
	gAxis_X_DrvIf.iDrvOK = 1;
	gAxis_X_DrvIf.iStatusEnable = 1;
	gAxis_X_DiDoIf.iDriveReady = 1;
	
	fb_controller.k_p=0.002;
	fb_controller.k_i=0.16;
	
	fb_controller.dt=0.002;
	fb_controller.integrator.dt=0.002;
	
	fb_controller.max_abs_value=24;
	
	pwm_period = 200;
	
	enable=1;
}
