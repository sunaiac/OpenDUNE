/* $Id$ */

#ifndef GLOBAL_H
#define GLOBAL_H

MSVC_PACKED_BEGIN
typedef struct struct_7B68 {
	/* 0(1) */ PACK uint8  variable_0;  /*<! ?? */
	/* 1(1) */ PACK uint8  variable_1;  /*<! ?? */
	/* 2(4) */ PACK csip32 variable_2;  /*<! CS:IP of a function. */
} GCC_PACKED struct_7B68;
MSVC_PACKED_END
assert_compile(sizeof(struct_7B68) == 0x6);

MSVC_PACKED_BEGIN
/**
 * At segment 353F there is a big blob of all kinds of variables and constants.
 *  This struct tries to map all those.
 */
typedef struct GlobalData {
	/* 0000()    */ PACK uint8   unknown_0000[0x0004];
	/* 0004(43)  */ PACK char   string_0004[43];            /*!< "Borland C++ - Copyright 1991 Borland Intl." NULL terminated. */
	/* 002F(14)  */ PACK char   string_002F[14];            /*!< "Divide error\r\n" not NULL terminated. */
	/* 003D(30)  */ PACK char   string_003D[30];            /*!< "Abnormal program termination\r\n" not NULL terminated. */
	/* 005B(4)   */ PACK csip32 oldInterrupt00;             /*!< CS:IP of original INT00 handler. */
	/* 005F(4)   */ PACK csip32 oldInterrupt04;             /*!< CS:IP of original INT04 handler. */
	/* 0063(4)   */ PACK csip32 oldInterrupt05;             /*!< CS:IP of original INT05 handler. */
	/* 0067(4)   */ PACK csip32 oldInterrupt06;             /*!< CS:IP of original INT06 handler. */
	/* 006B()    */ PACK uint8   unknown_006B[0x000A];
	/* 0075(2)   */ PACK uint16 environmentSize;            /*!< Size of environment in bytes. */
	/* 0077(2)   */ PACK uint16 environmentSegment;         /*!< Environment segment. */
	/* 0079(2)   */ PACK uint16 variable_0079;              /*!< ?? Something related to number of environment variables. */
	/* 007B(2)   */ PACK uint16 PSP;                        /*!< Program Segment Prefix. */
	/* 007D(1)   */ PACK uint8  majorDOSVersion;            /*!< DOS major version. */
	/* 007E(1)   */ PACK uint8  minorDOSVersion;            /*!< DOS minor version. */
	/* 007F(2)   */ PACK uint16 variable_007F;              /*!< ?? Something related to files. */
	/* 0081(4)   */ PACK uint32 systemTime;                 /*!< System time. */
	/* 0085()    */ PACK uint8   unknown_0085[0x0004];
	/* 0089(2)   */ PACK uint16 variable_0089;              /*!< ?? Something related to memory. */
	/* 008B()    */ PACK uint8   unknown_008B[0x0002];
	/* 008D(2)   */ PACK uint16 variable_008D;              /*!< ?? Something related to memory. */
	/* 008F()    */ PACK uint8   unknown_008F[0x0002];
	/* 0091(2)   */ PACK uint16 memorySize;                 /*!< Size of memory in paragraphs. */
	/* 0093()    */ PACK uint8   unknown_0093[0x0009];
	/* 009C(2)   */ PACK uint16 variable_009C;              /*!< ?? */
	/* 009E(2)   */ PACK uint16 variable_009E;              /*!< ?? */
	/* 00A0(2)   */ PACK uint16 variable_00A0;              /*!< ?? */
	/* 00A2(2)   */ PACK uint16 variable_00A2;              /*!< ?? */
	/* 00A4()    */ PACK uint8   unknown_00A4[0x0004];
	/* 00A8(10)  */ PACK char   string_00A8[10];            /*!< "new8p.fnt" NULL terminated. */
	/* 00B2(10)  */ PACK char   string_00B2[10];            /*!< "DUNE2.EXE" NULL terminated. */
	/* 00BC(10)  */ PACK char   string_00BC[9];             /*!< "DUNE.CFG" NULL terminated. */
	/* 00C5(152) */ PACK char   string_00C5[152];           /*!< "\r\nThe setup program must be run first.\r\n"
	                                                         *   "\r\nZuerst mu� das Setup-Programm betrieben werden.\r\n"
	                                                         *   "\r\nLe programme de configuration doit d'abord �tre lanc�.\r\n"
	                                                         *   "\r\n" NULL terminated. */
	/* 015D(36)  */ PACK char   string_015D[36];            /*!< "Insufficient memory by %ld bytes.\r\n" NULL terminated. */
	/* 0181(29)  */ PACK char   string_0181[29];            /*!< "Unrecognized graphic mode!\r\n" NULL terminated. */
	/* 019E(121) */ PACK char   string_019D[121];           /*!< "Program in memory: %ld\n"
	                                                         *   "Buffer allocations: %ld\n"
	                                                         *   "Misc allocations: %ld\"
	                                                         *   "Spare RAM: %ld\"
	                                                         *   "DOS prompt memory free must be %ld.\n" NULL terminated. */
	/* 0217()    */ PACK uint8   unknown_0217[0x209D];
	/* 22B4(12)  */ PACK char   string_22B4[12];            /*!< "PROFILE.INI" NULL terminated. */
	/* 22C0(8)   */ PACK char   string_22C0[8];             /*!< "IBM.PAL" NULL terminated. */
	/* 22C8()    */ PACK uint8   unknown_22C8[0x0028];
	/* 22F0(13)  */ PACK char   string_22F0[13];            /*!< "_SAVE000.DAT" NULL terminated. */
	/* 22FD(13)  */ PACK char   string_22FD[13];            /*!< "SAVEFAME.DAT" NULL terminated. */
	/* 230A(12)  */ PACK char   string_230A[12];            /*!< "ONETIME.DAT" NULL terminated. */
	/* 2316()    */ PACK uint8   unknown_2316[0x12D2];
	/* 35E8(4)   */ PACK csip32 unitStartPos;               /*!< CS:IP of Unit array. */
	/* 35EC(2)   */ PACK uint16 unitCount;                  /*!< Amount of Units on the map. */
	/* 35EE(4)   */ PACK csip32 airUnitStartPos;            /*!< CS:IP of AirUnit array. */
	/* 35F2(2)   */ PACK uint16 airUnitCount;               /*!< Amount of AirUnits on the map. */
	/* 35F4(4)   */ PACK csip32 buildingStartPos;           /*!< CS:IP of Building array. */
	/* 35F8(2)   */ PACK uint16 buildingCount;              /*!< Amount of Buildings on the map. */
	/* 35FA(4)   */ PACK csip32 houseStartPos;              /*!< CS:IP of house array. */
	/* 35FE(2)   */ PACK uint16 houseCount;                 /*!< Amount of houses on the map. */
	/* 3600()    */ PACK uint8   unknown_3600[0x01A0];
	/* 37A0(2)   */ PACK uint16 variable_37A0;              /*!< ?? */
	/* 37A2()    */ PACK uint8   unknown_37A2[0x0014];
	/* 37B6(2)   */ PACK uint16 variable_37B6;              /*!< ?? */
	/* 37B8()    */ PACK uint8   unknown_37B8[0x0038];
	/* 37F0(180) */ PACK uint8  variable_37F0[180];         /*!< ?? It is an array of HOUSE_INDEX_MAX size at most (possible just 3), with a struct size of 0x1E. Position might be wrong. */
	/* 38A4()    */ PACK uint8   unknown_38A4[0x000C];
	/* 38B0(2)   */ PACK uint16 variable_38B0;              /*!< ?? */
	/* 38B2(2)   */ PACK uint16 variable_38B2;              /*!< ?? */
	/* 38B4()    */ PACK uint8   unknown_38B4[0x0008];
	/* 38BC(2)   */ PACK uint16 variable_38BC;              /*!< ?? If non-zero, Unit_Find/Building_Find skips Unit/Buildings with flag 0x4 off (being-built flag?). */
	/* 38BE()    */ PACK uint8   unknown_38BE[0x0008];
	/* 38C6(2)   */ PACK uint16 variable_38C6;              /*!< ?? */
	/* 38C8(2)   */ PACK uint16 variable_38C8;              /*!< ?? */
	/* 38CA()    */ PACK uint8   unknown_38CA[0x0010];
	/* 38DA(4)   */ PACK csip32 variable_38DA;              /*!< ?? */
	/* 38DE(4)   */ PACK csip32 variable_38DE;              /*!< ?? */
	/* 38E2()    */ PACK uint8   unknown_38E2[0x0020];
	/* 3902(2)   */ PACK uint16 variable_3902;              /*!< ?? */
	/* 3904()    */ PACK uint8   unknown_3904[0x00EA];
	/* 39EE(4)   */ PACK csip32 variable_39EE;              /*!< ?? Pointer to an array of building information */
	/* 39F2()    */ PACK uint8   unknown_39F2[0x001C];
	/* 3A0E(2)   */ PACK uint16 variable_3A0E;              /*!< ?? */
	/* 3A10(2)   */ PACK uint16 variable_3A10;              /*!< ?? */
	/* 3A12()    */ PACK uint8   unknown_3A12[0x001A];
	/* 3A2C(2)   */ PACK uint16 variable_3A2C;              /*!< ?? */
	/* 3A2E(2)   */ PACK uint16 variable_3A2E;              /*!< ?? */
	/* 3A30(2)   */ PACK uint16 variable_3A30;              /*!< ?? */
	/* 3A32(2)   */ PACK uint16 variable_3A32;              /*!< ?? */
	/* 3A34()    */ PACK uint8   unknown_3A34[0x0004];
	/* 3A38(2)   */ PACK uint16 playerHouseID;              /*!< The House the player is controlling. */
	/* 3A3A()    */ PACK uint8   unknown_3A3A[0x00FA];
	/* 3B34(2)   */ PACK uint16 variable_3B34;              /*!< ?? */
	/* 3B36(2)   */ PACK uint16 variable_3B36;              /*!< ?? */
	/* 3B38()    */ PACK uint8   unknown_3B38[0x0018];
	/* 3B50(2)   */ PACK uint16 variable_3B50;              /*!< ?? */
	/* 3B52(2)   */ PACK uint16 variable_3B52;              /*!< ?? */
	/* 3B54()    */ PACK uint8   unknown_3B54[0x00DE];
	/* 3C32(4)   */ PACK csip32 variable_3C32;              /*!< ?? */
	/* 3C36(4)   */ PACK csip32 variable_3C36;              /*!< ?? */
	/* 3C3A(4)   */ PACK csip32 variable_3C3A;              /*!< ?? */
	/* 3C3E(4)   */ PACK csip32 variable_3C3E;              /*!< ?? */
	/* 3C42(4)   */ PACK csip32 variable_3C42;              /*!< ?? */
	/* 3C46(2)   */ PACK csip32 variable_3C46;              /*!< ?? */
	/* 3C48(2)   */ PACK csip32 variable_3C48;              /*!< ?? */
	/* 3C4A()    */ PACK uint8   unknown_3C4A[0x26B4];
	/* 6302(2)   */ PACK uint16 variable_6302;              /*!< ?? */
	/* 6304()    */ PACK uint8   unknown_6304[0x000C];
	/* 6310(2)   */ PACK uint16 variable_6310;              /*!< ?? */
	/* 6312(2)   */ PACK uint16 variable_6312;              /*!< ?? */
	/* 6314()    */ PACK uint8   unknown_6314[0x0030];
	/* 6344(2)   */ PACK uint16 variable_6344;              /*!< ?? */
	/* 6346()    */ PACK uint8   unknown_6346[0x000C];
	/* 6352(2)   */ PACK uint16 variable_6352;              /*!< ?? */
	/* 6354(2)   */ PACK uint16 variable_6354;              /*!< ?? */
	/* 6356()    */ PACK uint8   unknown_6356[0x0016];
	/* 636C(2)   */ PACK uint16 variable_636C;              /*!< ?? */
	/* 636E()    */ PACK uint8   unknown_636E[0x0004];
	/* 6372(2)   */ PACK uint16 variable_6372;              /*!< ?? */
	/* 6374()    */ PACK uint8   unknown_6374[0x0028];
	/* 639C(2)   */ PACK uint16 variable_639C;              /*!< ?? */
	/* 639E()    */ PACK uint8   unknown_639E[0x000C];
	/* 63AA(2)   */ PACK uint16 variable_63AA;              /*!< ?? 63AA and 63AC are 1 element of an array of unknown size. */
	/* 63AC(2)   */ PACK uint16 variable_63AC;              /*!< ?? 63AA and 63AC are 1 element of an array of unknown size. */
	/* 63AE()    */ PACK uint8   unknown_63AE[0x0018];
	/* 63C6(2)   */ PACK uint16 variable_63C6;              /*!< ?? 63C6, 63C8, 63CE and 63D0 are 1 element of an array of unknown size.*/
	/* 63C8(2)   */ PACK uint16 variable_63C8;              /*!< ?? 63C6, 63C8, 63CE and 63D0 are 1 element of an array of unknown size.*/
	/* 63CA()    */ PACK uint8   unknown_63CA[0x0004];
	/* 63CE(2)   */ PACK uint16 variable_63CE;              /*!< ?? 63C6, 63C8, 63CE and 63D0 are 1 element of an array of unknown size.*/
	/* 63D0(2)   */ PACK uint16 variable_63D0;              /*!< ?? 63C6, 63C8, 63CE and 63D0 are 1 element of an array of unknown size.*/
	/* 63D2()    */ PACK uint8   unknown_63D2[0x009C];
	/* 646E(2)   */ PACK uint16 variable_646E;              /*!< ?? 646E, 6470, 6476 and 6478 are 1 element of an array of unknown size. */
	/* 6470(2)   */ PACK uint16 variable_6470;              /*!< ?? 646E, 6470, 6476 and 6478 are 1 element of an array of unknown size. */
	/* 6472()    */ PACK uint8   unknown_6472[0x0004];
	/* 6476(2)   */ PACK uint16 variable_6476;              /*!< ?? 646E, 6470, 6476 and 6478 are 1 element of an array of unknown size. */
	/* 6478(2)   */ PACK uint16 variable_6478;              /*!< ?? 646E, 6470, 6476 and 6478 are 1 element of an array of unknown size. */
	/* 647A()    */ PACK uint8   unknown_647A[0x022A];
	/* 66A4(4)   */ PACK csip32 callbackAfterMouse;         /*!< CS:IP of routine called after mouse change. */
	/* 66A8(12)  */ PACK uint8   unknown_66A8[0x000C];
	/* 66B4(4)   */ PACK csip32 callbackBeforeMouse;        /*!< CS:IP of routine called before mouse change. */
	/* 66B8()    */ PACK uint8   unknown_66B8[0x05C0];
	/* 6C78(2)   */ PACK uint16 snapX;                      /*!< Snap mouse to grid, x-axis. */
	/* 6C7A(2)   */ PACK uint16 snapY;                      /*!< Snap mouse to grid, y-axis. */
	/* 6C7C(2)   */ PACK uint16 snapGreyX;                  /*!< Grey zone for snapping, x-axis. */
	/* 6C7E(2)   */ PACK uint16 snapGreyY;                  /*!< Grey zone for snapping, y-axis. */
	/* 6C80()    */ PACK uint8   unknown_6C80[0x0053];
	/* 6CD3(2)   */ PACK uint16 variable_6CD3;              /*!< ?? */
	/* 6CD5(2)   */ PACK uint16 variable_6CD5;              /*!< ?? */
	/* 6CD7(2)   */ PACK uint16 variable_6CD7;              /*!< ?? */
	/* 6CD9(2)   */ PACK uint16 variable_6CD9;              /*!< ?? */
	/* 6CDB(2)   */ PACK uint16 variable_6CDB;              /*!< ?? */
	/* 6CDD(2)   */ PACK uint16 variable_6CDD;              /*!< ?? */
	/* 6CDF(2)   */ PACK uint16 variable_6CDF;              /*!< ?? */
	/* 6CE1(2)   */ PACK uint16 variable_6CE1;              /*!< ?? */
	/* 6CE3(2)   */ PACK uint16 variable_6CE3;              /*!< ?? */
	/* 6CE5(2)   */ PACK uint16 variable_6CE5;              /*!< ?? */
	/* 6CE7(2)   */ PACK uint16 variable_6CE7;              /*!< ?? */
	/* 6CE9(2)   */ PACK uint16 variable_6CE9;              /*!< ?? */
	/* 6CEB(2)   */ PACK uint16 variable_6CEB;              /*!< ?? */
	/* 6CED(2)   */ PACK uint16 variable_6CED;              /*!< ?? */
	/* 6CEF(2)   */ PACK uint16 variable_6CEF;              /*!< ?? */
	/* 6CF1(2)   */ PACK uint16 variable_6CF1;              /*!< ?? */
	/* 6CF3(2)   */ PACK uint16 variable_6CF3;              /*!< ?? */
	/* 6CF5(2)   */ PACK uint16 variable_6CF5;              /*!< ?? */
	/* 6CF7(2)   */ PACK uint16 variable_6CF7;              /*!< ?? */
	/* 6CF9(2)   */ PACK uint16 variable_6CF9;              /*!< ?? */
	/* 6CFB()    */ PACK uint8   unknown_6CFB[0x030F];
	/* 700A(2)   */ PACK uint16 variable_700A;              /*!< ?? */
	/* 700C(2)   */ PACK uint16 variable_700C;              /*!< ?? */
	/* 700E(2)   */ PACK uint16 inputFlags;                 /*!< Flags for input. See InputFlagsEnum. */
	/* 7010(1)   */ PACK uint8  mouseMode;                  /*!< Mouse mode. See InputMouseMode. */
	/* 7011(2)   */ PACK uint16 variable_7011;              /*!< ?? */
	/* 7013(2)   */ PACK uint16 variable_7013;              /*!< ?? */
	/* 7015(2)   */ PACK uint16 variable_7015;              /*!< ?? */
	/* 7017()    */ PACK uint8   unknown_7017[0x0004];
	/* 701B(2)   */ PACK uint16 variable_701B;              /*!< ?? */
	/* 701D()    */ PACK uint8   unknown_701D[0x0041];
	/* 705E(2)   */ PACK uint16 mouseLock;                  /*!< Lock for when handling mouse movement. */
	/* 7060(2)   */ PACK uint16 mouseX;                     /*!< Current X position of the mouse. */
	/* 7062(2)   */ PACK uint16 mouseY;                     /*!< Current Y position of the mouse. */
	/* 7064(4)   */ PACK uint8   unknown_7064[0x0004];
	/* 7068(2)   */ PACK uint16 doubleWidth;                /*!< If non-zero, the X-position given by mouse is twice the real value. */
	/* 706A(2)   */ PACK uint16 variable_706A;              /*!< ?? If non-zero, mouse movement is not registered. */
	/* 706C(2)   */ PACK uint8   unknown_706C[0x0002];
	/* 706E(2)   */ PACK uint16 variable_706E;              /*!< ?? */
	/* 7070(2)   */ PACK uint8   unknown_7070[0x0002];
	/* 7072(2)   */ PACK uint16 variable_7072;              /*!< ?? */
	/* 7074(8)   */ PACK uint8   unknown_7074[0x0008];
	/* 707C(2)   */ PACK uint16 mousePrevX;                 /*!< Previous X position. */
	/* 707E(2)   */ PACK uint16 mousePrevY;                 /*!< Previous Y position. */
	/* 7080(2)   */ PACK uint16 regionFlags;                /*!< Flags: 0x4000 - Mouse still inside region, 0x8000 - Region check. */
	/* 7082(2)   */ PACK uint16 regionMinX;                 /*!< Region - minimum value for X position. */
	/* 7084(2)   */ PACK uint16 regionMinY;                 /*!< Region - minimum value for Y position. */
	/* 7086(2)   */ PACK uint16 regionMaxX;                 /*!< Region - maximum value for X position. */
	/* 7088(2)   */ PACK uint16 regionMaxY;                 /*!< Region - maximum value for Y position. */
	/* 708A()    */ PACK uint8   unknown_708A[0x0008];
	/* 7092(2)   */ PACK uint16 variable_7092;              /*!< Parameter 1 for proc at 66B4. */
	/* 7094(2)   */ PACK uint16 variable_7094;              /*!< Paramerer 2 for proc at 66B4. */
	/* 7096(1)   */ PACK uint8  mouseInstalled;             /*!< If non-zero, the mouse callback is installed. */
	/* 7097(1)   */ PACK uint8  variable_7097;              /*!< ?? If non-zero, no mouse handling. */
	/* 7098(1)   */ PACK uint8  variable_7098;              /*!< ?? If zero, no mouse handling. */
	/* 7099(1)   */ PACK uint8  prevButtonState;            /*!< Previous mouse button state. */
	/* 709A()    */ PACK uint8   unknown_709A[0x060C];
	/* 76A6(2)   */ PACK uint16 variable_76A6;              /*!< ?? */
	/* 76A8()    */ PACK uint8   unknown_76A8[0x0012];
	/* 76BA(2)   */ PACK uint16 variable_76BA;              /*!< ?? */
	/* 76BC()    */ PACK uint8   unknown_76BC[0x0102];
	/* 77BE(4)   */ PACK csip32 variable_77BE;              /*!< ?? CS:IP of a function called in emu_Terminate(). */
	/* 77C2(4)   */ PACK csip32 variable_77C2;              /*!< ?? CS:IP of a function called in emu_Terminate(). */
	/* 77C6(4)   */ PACK csip32 variable_77C6;              /*!< ?? CS:IP of a function called in emu_Terminate(). */
	/* 77CA()    */ PACK uint8   unknown_77CA[0x0190];
	/* 795A(2)   */ PACK uint16 variable_795A;              /*!< Size of array of opened file status. */
	/* 795C(40)  */ PACK uint16 variable_795C[20];          /*!< Array of opened file status (0 when closed). */
	/* 7984(2)   */ PACK uint16 variable_7984;              /*!< ?? Something related to files. */
	/* 7986(2)   */ PACK uint16 variable_7986;              /*!< ?? Something related to files. */
	/* 7988(2)   */ PACK uint16 variable_7988;              /*!< ?? Something related to files. */
	/* 798A(1)   */ PACK uint8  variable_798A;              /*!< ?? Something related to files. */
	/* 798B()    */ PACK uint8   unknown_798B[0x00DD];
	/* 7A68(2)   */ PACK uint16 variable_7A68;              /*!< ?? Something related to required memory. */
	/* 7A6A()    */ PACK uint8   unknown_7A6A[0x00FE];
	/* 7B68(36)  */ PACK struct_7B68 variable_7B68[6];      /*!< ?? */
	/* 7B8C()    */ PACK uint8   unknown_7B8C[0x08AC];      /*!< ?? 0x1F62 bytes cleared at start. */
	/* 8438(6)   */ PACK uint8  unitFindStruct[6];          /*!< Default find struct used if noone given to emu_Unit_FindFirst/FindNext. */
	/* 843E(408) */ PACK csip32 unitArray[102];             /*!< Array with CS:IP of AirUnit, always gap-less. */
	/* 85D6(6)   */ PACK uint8  airUnitFindStruct[6];       /*!< Default find struct used if noone given to emu_AirUnit_FindFirst/FindNext. */
	/* 85DC(64)  */ PACK csip32 airUnitArray[16];           /*!< Array with CS:IP of AirUnit, always gap-less. */
	/* 861C(6)   */ PACK uint8  buildingFindStruct[6];      /*!< Default find struct used if none given to emu_Building_FindFirst/FindNext. */
	/* 8622(328) */ PACK csip32 buildingArray[82];          /*!< Array with CS:IP of Building, always gap-less. */
	/* 876A()    */ PACK uint8   unknown_876A[0x0050];
	/* 87BA(6)   */ PACK uint8  houseFindStruct[6];         /*!< Default find struct used if none given to emu_House_FindFirst/FindNext. */
	/* 87C0(24)  */ PACK csip32 houseArray[6];              /*!< Array with CS:IP of House, always gap-less. */
	/* 87D8()    */ PACK uint8   unknown_87D8[0x1094];
	/* 986C(1)   */ PACK uint8  variable_986C;              /*!< ?? */
	/* 986D()    */ PACK uint8   unknown_986D[0x0074];
	/* 98E1(10)  */ PACK uint8  variable_98E1[10];          /*!< Config data. */
	/* 98EB()    */ PACK uint8   unknown_98EB[0x009F];
	/* 998A(4)   */ PACK csip32 variable_998A;              /*!< ?? */
	/* 998E()    */ PACK uint8   unknown_998E[0x0061];
	/* 99EF(4)   */ PACK csip32 variable_99EF;              /*!< ?? */
	/* 99F3(4)   */ PACK csip32 variable_99F3;              /*!< ?? */
} GCC_PACKED GlobalData;
MSVC_PACKED_END
assert_compile(sizeof(GlobalData) == 0x99F7);

extern uint16 emu_Global_GetIP(void *ptr, uint16 segment);

extern GlobalData *g_global;

#endif /* GLOBAL_H */
