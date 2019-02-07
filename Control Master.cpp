#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
int main()
{
	system("mode 200");
	int val, bit;
	system("cls");
	printf("Control Master Beta v1.0\n");
	printf("A Utility Expansion, Performance Boosting and Computer Hardware Information Management Software By Amish Hacker\n");
	printf("Software Intended for Testing Purpose Only\n");
	printf("Free for Non-Commercial Use Only Until Author Permits\n");
	printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
	printf("Main Menu 1 [Tool Selection Point]\n");
	printf("For Boosting Tools and Optimizers");
	printf("  [Note:Select YOur Preferred Type Tool just by Typing the Number before the Tool Name]\n");
	printf("1. Disk Cleanup \t//Utility Made for Removing the Junk Files and make Avaiable Extra Space\n");
	printf("2. Disk Defragmenter \t//Utitlity Made for Consolidating the Entire Drive\n");
	printf("3. Memory Diagonstics \t//Utility Made for Checking your PC for CRC Memory Error[Cluster Related Problems]\n");
	printf("\nMain Menu 2 [Information and Advanced System Controller]\n");
	printf("4. System Information \t//Utility for Adressing or seeking the Detailed System Information\n");
	printf("5. Resouce Monitor \t//Utility Made for Measuring Your Computer Resources\n");
	printf("6. Task Scheduler \t//Utility Made for Scheduling a specific Task\n");
	printf("7. System Configuration \t//From Boot Options To Advanced System Tools[Caution: Use with Care][Don't Use if you have no Knowledge of what are you doing]\n");
	printf("8. Services \t//An Editor for Starting/Stopping Running Services\n");
	printf("9. Local Group Policy Editor \t//A Tool to Assign Specific System per action values\n");
	printf("10.Event Viewer \t//View the Biggest Log Register on your PC\n");
	printf("11.Windows Firewall with Advanced Security \t//Control your Network the way you want\n");
	printf("12.Print Management \t//Control your Printers\n");
	printf("13.Performance Monitor \t//Collect Data of a specific Application and see its Performance\n");
	printf("14.ODBC Data Sources ->\n");
	printf("\t\t\t32bit\n");
	printf("\t\t\t64bit\n");
	printf("    \t//ODBC Data Sources Allows user to connect a specific or Several Databases[Requires Elevated Mode]\n");
	printf("15.Local Security Policy \t//Controls the policies for the Local Computer[Requires Elevated Mode]\n");
	printf("16.iSCSI Initiator \t//Abbreviated as (Internet Small Computer System Interface)[Allows computer to connect External Storage on a Lan(constantly a Storage Mapper)]\n");
	printf("17.Component Services \t//Alows to configure and administer Component Object Model (COM) components\n");
	printf("\nExit the Program Now(Press zero)\n");
revamp:
	printf("\n----Enter the Tool number to Initiate----\n");
	printf("---> ");
	scanf_s("%d", &val);
	switch (val)
	{
	case 1:
		printf("You selected Disk Cleanup\n");
		printf("Executing................\n");
		_spawnl(P_WAIT, "C:\\Windows\\System32\\cleanmgr.exe", "Using spawnl", NULL);
		goto revamp;
		break;
	case 2:
		printf("You selected Disk Defragmenter\n");
		printf("Executing................\n");
		_spawnl(P_WAIT, "C:\\Windows\\System32\\dfrgui.exe", "Using spawnl", NULL);
		goto revamp;
		break;
	case 3:
		printf("You selected Memory Diagonstics\n");
		printf("Executing................\n");
		system("mdsched.exe ");
		goto revamp;
		break;
	case 4:
		printf("You Selected System Information\n");
		printf("Executing................\n");
		_spawnl(P_WAIT, "C:\\Windows\\System32\\msinfo32.exe", "Using spawnl", NULL);
		goto revamp;
		break;
	case 5:
		printf("You Selected Resouce Monitor\n");
		printf("Executing................\n");
		_spawnl(P_WAIT, "C:\\Windows\\System32\\resmon.exe", "Using spawnl", NULL);
		goto revamp;
		break;
	case 6:
		printf("You Selected Task Scheduler\n");
		printf("Executing................\n");
		system("Taskschd.msc");
		goto revamp;
		break;
	case 7:
		printf("You Selected System Configuration\n");
		printf("Executing................\n");
		system("msconfig.exe");
		goto revamp;
		break;
	case 8:
		printf("You Selected Services\n");
		printf("Executing................\n");
		system("services.msc");
		goto revamp;
		break;
	case 9:
		printf("You Selected Local Group Policy Editor\n");
		printf("Executing................\n");
		system("gpedit.msc");
		goto revamp;
		break;
	case 10:
		printf("You Selected Event Viewer\n");
		printf("Executing................\n");
		system("eventvwr");
		goto revamp;
		break;
	case 11:
		printf("You Selected Windows Firewall with Advanced Security\n");
		printf("Executing................\n");
		system("wf.msc");
		goto revamp;
		break;
	case 12:
		printf("You Selected Print Management\n");
		printf("Executing................\n");
		system("printmanagement.msc ");
		goto revamp;
		break;
	case 13:
		printf("You Selected Performance Monitor\n");
		printf("Executing................\n");
		system("perfmon.msc ");
		goto revamp;
		break;
	case 14:
		printf("You Selected ODBC Data Sources\n");
		printf("Now please prefer one bit size ---> \n");
		printf("\t\t\tEither\n");
		printf("\t\t\t1. 32bit\n");
		printf("\t\t\tor\n");
		printf("\t\t\t2. 64bit\n");
		printf("Input Choice Here----> ");
		scanf_s("%d", &bit);
		if (bit == 1)
		{
			printf("Executing................\n");
			_spawnl(P_WAIT, "C:\\Windows\\SysWoW64\\odbcad32.exe", "Using spawnl", NULL);
		}
		else if (bit == 2)
		{
			printf("Executing................\n");
			_spawnl(P_WAIT, "C:\\Windows\\System32\\odbcad32.exe", "Using spawnl", NULL);
		}
		goto revamp;
	case 15:
		printf("You Selected Local Security Policy\n");
		printf("Executing................\n");
		_spawnl(P_WAIT, "C:\\Windows\\System32\\SecEdit.exe", "Using spawnl", NULL);
		goto revamp;
		break;
	case 16:
		printf("You Selected iSCSI Initiator\n");
		printf("Executing................\n");
		system("iscsicpl");
		goto revamp;
		break;
	case 17:
		printf("You Selected Component Services\n");
		printf("Executing................\n");
		system("dcomcnfg");
		goto revamp;
		break;
	case 0:
		printf("Good Bye\n");
		exit(0);
		return (EXIT_SUCCESS);
	default:
		printf("No Such Tool Found\n");

	}
	_getch();
}

