﻿//

#define UNLOADED_FILE   1
#include <idc.idc>

static main(void)
{
  // set 'loading idc file' mode
  set_inf_attr(INF_GENFLAGS, INFFL_LOADIDC|get_inf_attr(INF_GENFLAGS));
  GenInfo();            // various settings
  Segments();           // segmentation
  Enums();              // enumerations
  Structures();         // structure types
  ApplyStrucTInfos();   // structure type infos
  Patches();            // manual patches
  SegRegs();            // segment register values
  Bytes();              // individual bytes (code,data)
  Functions();          // function definitions
  // clear 'loading idc file' mode
  set_inf_attr(INF_GENFLAGS, ~INFFL_LOADIDC&get_inf_attr(INF_GENFLAGS));
}

//------------------------------------------------------------------------
// General information

static GenInfo(void) {

        delete_all_segments();    // purge database
	set_processor_type("metapc", SETPROC_USER);
	set_inf_attr(INF_COMPILER, 0);
	set_inf_attr(INF_STRLIT_BREAK, 0xA);
	set_flag(INF_CMTFLAG, SW_ALLCMT, 0);
	set_flag(INF_OUTFLAGS, OFLG_SHOW_VOID, 0);
	set_inf_attr(INF_XREFNUM, 2);
	set_flag(INF_OUTFLAGS, OFLG_SHOW_AUTO, 1);
	set_inf_attr(INF_INDENT, 16);
	set_inf_attr(INF_COMMENT, 40);
	set_inf_attr(INF_MAXREF, 0x10);
}

//------------------------------------------------------------------------
// Information about segmentation

static Segments(void) {
	set_selector(0X1,0);
	;
	add_segm_ex(0X150000,0X156000,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X150000,"seg000");
	SegClass (0X150000,"CODE");
	SegDefReg(0x150000,"es",0x0);
	SegDefReg(0x150000,"ss",0x0);
	SegDefReg(0x150000,"ds",0x0);
	SegDefReg(0x150000,"fs",0x0);
	SegDefReg(0x150000,"gs",0x0);
	set_segm_type(0X150000,2);
	set_inf_attr(INF_LOW_OFF, 0x150000);
	set_inf_attr(INF_HIGH_OFF, 0x156000);
}

//------------------------------------------------------------------------
// Information about enum types

static Enums(void) {
        auto id;
        begin_type_updating(UTP_ENUM);
        end_type_updating(UTP_ENUM);
}

//------------------------------------------------------------------------
// Information about type information for structure members

static ApplyStrucTInfos() {
}

//------------------------------------------------------------------------
// Information about structure types

static Structures(void) {
        auto id;
        begin_type_updating(UTP_STRUCT);
}

//------------------------------------------------------------------------
// Information about bytes

static Bytes_0(void) {
        auto x;
#define id x

	update_extra_cmt		(0X150000,	E_PREV + 0,	"; File Name   : C:\\Users\\admin\\Desktop\\150000.bin");
	update_extra_cmt		(0X150000,	E_PREV + 1,	"; Format      : Binary file");
	update_extra_cmt		(0X150000,	E_PREV + 2,	"; Base Address: 0000h Range: 150000h - 156000h Loaded length: 6000h");
	create_insn	(x=0X150000);
	op_hex		(x,	1);
	create_insn	(x=0X15001C);
	op_hex		(x,	1);
	create_insn	(0X1500EE);
	create_insn	(0X1500FD);
	create_insn	(0X1500FF);
	create_insn	(x=0X150109);
	op_hex		(x,	1);
	create_insn	(0X15010F);
	create_insn	(0X150122);
	create_insn	(0X150134);
	create_insn	(0X15013F);
	create_insn	(x=0X15016B);
	op_stkvar	(x,	1);
	create_insn	(0X150180);
	create_insn	(0X150185);
	create_insn	(0X150194);
	create_insn	(x=0X1501AA);
	op_hex		(x,	1);
	create_insn	(0X1501DC);
	create_insn	(0X150208);
	create_insn	(x=0X15025B);
	op_hex		(x,	1);
	create_insn	(x=0X150270);
	op_hex		(x,	1);
	create_insn	(0X1502E2);
	create_insn	(0X150389);
	create_insn	(0X150430);
	create_byte	(0X150487);
	make_array	(0X150487,	0X2);
	create_insn	(0X150489);
	create_insn	(0X150491);
	create_byte	(0X1504BF);
	make_array	(0X1504BF,	0X2);
	create_insn	(0X1504C1);
	create_insn	(0X1504D6);
	create_insn	(x=0X1504DB);
	op_stkvar	(x,	1);
	create_insn	(0X15056C);
	create_insn	(x=0X15056D);
	op_hex		(x,	1);
	create_insn	(0X150574);
	create_insn	(0X150579);
	create_insn	(x=0X15057A);
	op_hex		(x,	1);
	create_insn	(0X150580);
	create_insn	(x=0X1505B1);
	op_stkvar	(x,	0);
	create_insn	(x=0X1505B5);
	op_hex		(x,	1);
	create_insn	(0X1505D0);
	create_byte	(0X1505F2);
	create_insn	(0X1505F3);
	create_insn	(x=0X1505F4);
	op_hex		(x,	1);
	create_insn	(x=0X1505FB);
	op_stkvar	(x,	1);
	create_insn	(x=0X1505FF);
	op_stkvar	(x,	1);
	create_insn	(x=0X150604);
	op_hex		(x,	1);
	create_insn	(0X150620);
	create_insn	(0X150629);
	create_insn	(0X150635);
	create_insn	(x=0X15063B);
	op_hex		(x,	1);
	create_insn	(x=0X15068F);
	op_hex		(x,	1);
	create_insn	(x=0X1506A0);
	op_hex		(x,	1);
	create_insn	(x=0X1506DC);
	op_hex		(x,	1);
	create_insn	(0X1506E9);
	create_insn	(0X150702);
	create_insn	(x=0X15071C);
	op_hex		(x,	1);
	create_insn	(x=0X150731);
	op_hex		(x,	1);
	create_insn	(0X150756);
	create_insn	(0X150758);
	create_insn	(x=0X15075A);
	op_stkvar	(x,	1);
	create_insn	(x=0X15076A);
	op_hex		(x,	1);
	create_insn	(x=0X15078A);
	op_stkvar	(x,	1);
	create_insn	(x=0X150790);
	op_stkvar	(x,	1);
	create_insn	(x=0X1507B3);
	op_hex		(x,	1);
	create_insn	(x=0X1507C3);
	op_hex		(x,	1);
	create_insn	(x=0X1507DA);
	op_stkvar	(x,	0);
	create_insn	(x=0X1507E8);
	op_stkvar	(x,	1);
	create_insn	(x=0X1507F8);
	op_hex		(x,	1);
	create_insn	(0X150812);
	create_insn	(0X15081A);
	create_insn	(0X15081C);
	create_insn	(x=0X15083C);
	op_hex		(x,	1);
	create_insn	(x=0X150851);
	op_hex		(x,	1);
	create_insn	(x=0X150892);
	op_hex		(x,	1);
	create_insn	(x=0X150936);
	op_hex		(x,	1);
	create_insn	(x=0X150993);
	op_hex		(x,	1);
	create_insn	(x=0X1509FB);
	op_hex		(x,	1);
	create_insn	(x=0X150A73);
	op_hex		(x,	1);
	create_insn	(x=0X150A7D);
	op_hex		(x,	1);
	create_byte	(0X150AB0);
	make_array	(0X150AB0,	0X2);
	create_insn	(0X150AB2);
	create_insn	(x=0X150AB6);
	op_hex		(x,	1);
	create_insn	(0X150ADE);
	create_insn	(x=0X150AE0);
	op_hex		(x,	1);
	make_array	(0X150AEE,	0X2);
	create_insn	(0X150AF0);
	create_insn	(0X150B11);
	create_insn	(x=0X150B2D);
	op_hex		(x,	1);
	create_insn	(x=0X150B8B);
	op_hex		(x,	1);
	create_insn	(x=0X150BD7);
	op_hex		(x,	1);
	create_insn	(x=0X150BFA);
	op_hex		(x,	1);
	create_insn	(0X150C18);
	create_insn	(x=0X150C3A);
	op_hex		(x,	1);
	create_insn	(x=0X150C72);
	op_hex		(x,	1);
	create_insn	(x=0X150CB5);
	op_hex		(x,	1);
	create_insn	(0X150CD8);
	create_insn	(x=0X150CEF);
	op_hex		(x,	1);
	create_insn	(x=0X150D17);
	op_hex		(x,	1);
	create_insn	(0X150D1E);
	create_insn	(0X150D29);
	create_insn	(x=0X150D60);
	op_hex		(x,	1);
	create_insn	(0X150DBB);
	create_insn	(x=0X150DBC);
	op_hex		(x,	1);
	create_insn	(0X150DC9);
	create_insn	(x=0X150E00);
	op_hex		(x,	1);
	create_insn	(0X150E40);
	create_insn	(x=0X150E45);
	op_hex		(x,	1);
	create_insn	(0X150E52);
	create_insn	(x=0X150EDE);
	op_hex		(x,	1);
	create_insn	(0X150EF2);
	create_byte	(0X150EF9);
	make_array	(0X150EF9,	0X2);
	create_insn	(0X150EFB);
	create_insn	(0X150F06);
	create_insn	(0X150F11);
	create_insn	(x=0X150F12);
	op_hex		(x,	1);
	create_byte	(0X150F20);
	make_array	(0X150F20,	0X2);
	create_insn	(x=0X150F22);
	op_hex		(x,	1);
	create_insn	(x=0X150F7C);
	op_hex		(x,	1);
	create_insn	(0X150F99);
	create_insn	(x=0X150FAB);
	op_hex		(x,	1);
	create_insn	(x=0X150FD4);
	op_hex		(x,	1);
	create_insn	(x=0X151016);
	op_hex		(x,	1);
	create_insn	(x=0X15105F);
	op_hex		(x,	1);
	create_insn	(x=0X1510A1);
	op_hex		(x,	1);
	create_insn	(x=0X1510E8);
	op_hex		(x,	1);
	create_insn	(x=0X151120);
	op_hex		(x,	1);
	create_insn	(x=0X15117B);
	op_hex		(x,	1);
	create_insn	(x=0X1511CD);
	op_hex		(x,	1);
	create_insn	(x=0X15120E);
	op_hex		(x,	1);
	create_insn	(x=0X15123F);
	op_hex		(x,	1);
	create_insn	(x=0X15127E);
	op_hex		(x,	1);
	create_insn	(0X151292);
	create_insn	(x=0X151306);
	op_hex		(x,	1);
	create_insn	(x=0X15130C);
	op_stkvar	(x,	0);
	create_insn	(0X151315);
	create_insn	(0X151331);
	create_insn	(x=0X151333);
	op_hex		(x,	1);
	create_insn	(x=0X15133A);
	op_hex		(x,	1);
	create_byte	(0X15134B);
	make_array	(0X15134B,	0X2);
	create_insn	(0X15134D);
	create_insn	(0X151352);
	create_insn	(0X151363);
	create_insn	(x=0X151365);
	op_hex		(x,	1);
	create_insn	(x=0X15136D);
	op_hex		(x,	1);
	create_byte	(0X15137C);
	make_array	(0X15137C,	0X2);
	create_insn	(0X15137E);
	create_insn	(0X15138C);
	create_insn	(0X15138D);
	create_insn	(0X1513A2);
	create_insn	(x=0X1513A3);
	op_hex		(x,	1);
	create_insn	(x=0X1513AA);
	op_stkvar	(x,	1);
	create_insn	(x=0X1513AE);
	op_hex		(x,	1);
	create_insn	(0X1513CF);
	make_array	(0X1513D5,	0X3);
	create_dword	(0X1513D8);
	make_array	(0X1513D8,	0X9);
	create_byte	(0X1513FC);
	create_insn	(0X1513FD);
	create_insn	(x=0X1513FE);
	op_stkvar	(x,	1);
	create_insn	(0X151403);
	create_insn	(x=0X151419);
	op_hex		(x,	1);
	create_insn	(x=0X151422);
	op_hex		(x,	1);
	create_insn	(0X15142D);
	create_insn	(0X15146D);
	create_insn	(x=0X151478);
	op_hex		(x,	1);
	create_insn	(x=0X15147F);
	op_hex		(x,	1);
	create_insn	(x=0X1514BD);
	op_hex		(x,	1);
	create_insn	(x=0X1514CB);
	op_hex		(x,	1);
	create_insn	(0X1514F4);
	create_insn	(0X151502);
	create_insn	(0X151511);
	create_insn	(0X151531);
	create_byte	(0X15153B);
	create_byte	(0X15153D);
	make_array	(0X15153D,	0X3);
	create_dword	(0X151540);
	make_array	(0X151540,	0X11);
	create_byte	(0X151584);
	make_array	(0X151584,	0X3);
	create_insn	(0X151587);
	create_insn	(0X1515AE);
	create_insn	(0X1515B3);
	create_insn	(0X1515B9);
	create_insn	(0X1515C5);
	create_word	(0X1515DA);
	create_dword	(0X1515DC);
	make_array	(0X1515DC,	0X24);
	create_insn	(0X15166C);
	create_insn	(0X15169E);
	create_insn	(0X1516A0);
	create_insn	(x=0X15171F);
	op_stkvar	(x,	1);
	create_insn	(x=0X151797);
	op_stkvar	(x,	1);
	create_insn	(x=0X1517A4);
	op_stkvar	(x,	1);
	create_insn	(0X1517FD);
	create_insn	(x=0X151835);
	op_stkvar	(x,	1);
	create_insn	(0X151842);
	create_insn	(0X151854);
	create_insn	(x=0X151855);
	op_hex		(x,	1);
	create_insn	(0X15185C);
	create_word	(0X15186E);
	create_byte	(0X151871);
	make_array	(0X151871,	0X3);
	create_dword	(0X151874);
	make_array	(0X151874,	0XE);
	create_byte	(0X1518AD);
	make_array	(0X1518AD,	0X2);
	create_insn	(0X1518AF);
	create_word	(0X1518D6);
	create_byte	(0X1518D9);
	make_array	(0X1518D9,	0X3);
	create_dword	(0X1518DC);
	make_array	(0X1518DC,	0X14);
	create_byte	(0X15192C);
	create_insn	(0X15192D);
	create_insn	(0X151942);
	create_word	(0X151956);
	create_word	(0X15195A);
	create_dword	(0X15195C);
	make_array	(0X15195C,	0X11);
	create_byte	(0X1519A0);
	create_insn	(0X1519A1);
	create_insn	(x=0X1519AF);
	op_hex		(x,	1);
	create_insn	(x=0X1519BC);
	op_hex		(x,	1);
	create_insn	(0X1519C8);
	create_byte	(0X1519DD);
	make_array	(0X1519DD,	0X3);
	create_dword	(0X1519E0);
	make_array	(0X1519E0,	0X21);
	create_byte	(0X151A64);
	make_array	(0X151A64,	0X2);
	create_insn	(0X151A66);
	create_insn	(0X151A77);
	create_insn	(0X151A84);
	create_insn	(x=0X151A9A);
	op_hex		(x,	1);
	create_insn	(0X151AA6);
	create_insn	(0X151AA8);
	create_insn	(x=0X151AAA);
	op_hex		(x,	1);
	create_insn	(0X151AC1);
	create_insn	(0X151ACA);
	create_insn	(0X151ADE);
	create_insn	(x=0X151AE1);
	op_hex		(x,	1);
	create_insn	(x=0X151AF3);
	op_hex		(x,	1);
	create_byte	(0X151AFB);
	create_dword	(0X151AFC);
	create_strlit	(0X151B00,	0X151B51);
	set_name	(0X151B00,	"aHttpsDriveGoog");
	make_array	(0X151B51,	0X3);
	create_dword	(0X151B54);
	create_insn	(0X151B58);
	create_insn	(x=0X151B67);
	op_hex		(x,	1);
	create_insn	(x=0X151B7F);
	op_hex		(x,	1);
	create_strlit	(0X153056,	0X153064);
	set_name	(0X153056,	"aInternetopena");
	create_byte	(0X153065);
	make_array	(0X153065,	0X3);
	create_byte	(0X153069);
	make_array	(0X153069,	0X3);
	create_strlit	(0X15306C,	0X15307E);
	set_name	(0X15306C,	"aNternetsetopti");
	create_word	(0X15307E);
	create_dword	(0X153080);
	make_array	(0X153080,	0XC);
	create_insn	(0X1530B0);
	create_byte	(0X1530C7);
	create_byte	(0X1530C8);
	create_insn	(0X1530C9);
	create_dword	(0X1530E0);
	create_byte	(0X1530E4);
	make_array	(0X1530E4,	0X3);
	create_insn	(0X1530E7);
	create_insn	(x=0X15310A);
	op_hex		(x,	0);
	create_insn	(x=0X153121);
	op_hex		(x,	1);
	create_byte	(0X153123);
	create_insn	(0X153124);
	create_dword	(0X153130);
	make_array	(0X153130,	0X3);
	create_byte	(0X15313C);
	make_array	(0X15313C,	0X2);
	create_insn	(0X15313E);
	create_dword	(0X153148);
	make_array	(0X153148,	0X2);
	create_byte	(0X153150);
	make_array	(0X153150,	0X3);
	create_insn	(0X153153);
	create_insn	(x=0X153161);
	op_hex		(x,	1);
	create_insn	(x=0X1531A0);
	op_hex		(x,	0);
	create_insn	(x=0X1531BA);
	op_hex		(x,	1);
	create_word	(0X1531E2);
	create_dword	(0X1531E4);
	create_byte	(0X1531E8);
	make_array	(0X1531E8,	0X3);
	create_insn	(0X1531EB);
	create_byte	(0X153247);
	create_insn	(0X153248);
	create_byte	(0X153255);
	create_insn	(0X153256);
	create_insn	(x=0X153269);
	op_hex		(x,	1);
	create_byte	(0X15328B);
	create_insn	(x=0X15328C);
	op_hex		(x,	0);
	create_byte	(0X15329F);
	create_insn	(0X1532A0);
	create_byte	(0X1532C9);
	create_insn	(x=0X1532CA);
	op_hex		(x,	0);
	create_insn	(x=0X153302);
	op_hex		(x,	0);
	create_byte	(0X153314);
	make_array	(0X153314,	0X2);
	create_insn	(0X153316);
	create_insn	(x=0X15335A);
	op_hex		(x,	1);
	create_insn	(x=0X153377);
	op_hex		(x,	0);
	create_byte	(0X1533A3);
	create_strlit	(0X1533A6,	0X1533AC);
	set_name	(0X1533A6,	"aSer32");
	create_byte	(0X1533AC);
	make_array	(0X1533AC,	0X2);
	create_insn	(0X1533AE);
	create_byte	(0X1533D3);
	create_byte	(0X1533D4);
	make_array	(0X1533D4,	0X3);
	create_byte	(0X1533D7);
	create_byte	(0X1533D9);
	make_array	(0X1533D9,	0X2);
	create_insn	(0X1533DB);
	create_insn	(x=0X153414);
	op_hex		(x,	1);
	create_word	(0X153432);
	create_byte	(0X153434);
	create_insn	(0X153435);
	create_byte	(0X15344D);
	make_array	(0X15344D,	0X3);
	create_insn	(0X153450);
	create_byte	(0X1534E4);
	make_array	(0X1534E4,	0X2);
	create_word	(0X1534E6);
	create_insn	(0X1534E8);
	create_insn	(x=0X15350C);
	op_hex		(x,	1);
	create_word	(0X153526);
	create_byte	(0X153528);
	make_array	(0X153528,	0X2);
	create_insn	(0X15352A);
	create_byte	(0X153557);
	create_strlit	(0X15355A,	0X153567);
	set_name	(0X15355A,	"aHellexecutew");
	create_insn	(0X153567);
	create_byte	(0X153573);
	create_byte	(0X153575);
	make_array	(0X153575,	0X3);
	create_word	(0X15357A);
	create_dword	(0X15357C);
	make_array	(0X15357C,	0X6);
	create_insn	(0X153594);
	create_insn	(x=0X153597);
	op_hex		(x,	1);
	create_insn	(x=0X1535AC);
	op_hex		(x,	1);
	create_insn	(x=0X1535C5);
	op_hex		(x,	1);
	create_byte	(0X1535CB);
	create_byte	(0X1535CD);
	make_array	(0X1535CD,	0X3);
	create_byte	(0X1535D1);
	make_array	(0X1535D1,	0X3);
	create_dword	(0X1535D4);
	make_array	(0X1535D4,	0X81);
	create_byte	(0X1537D8);
	make_array	(0X1537D8,	0X2);
	create_insn	(0X1537DA);
	create_insn	(x=0X1537F7);
	op_hex		(x,	1);
	create_insn	(0X153818);
	create_insn	(0X15381A);
	create_insn	(x=0X153822);
	op_stkvar	(x,	1);
	create_insn	(x=0X153825);
	op_stkvar	(x,	1);
	create_insn	(x=0X153828);
	op_hex		(x,	1);
	create_insn	(0X15385E);
	create_insn	(x=0X153861);
	op_hex		(x,	1);
	create_insn	(x=0X153867);
	op_stkvar	(x,	1);
	create_insn	(x=0X15386B);
	op_stkvar	(x,	1);
	create_insn	(0X153886);
	create_insn	(0X153888);
	create_insn	(x=0X15389F);
	op_hex		(x,	1);
	create_insn	(x=0X1538A5);
	op_stkvar	(x,	1);
	create_insn	(x=0X1538A9);
	op_stkvar	(x,	0);
	create_insn	(x=0X1538D2);
	op_stkvar	(x,	0);
	create_insn	(x=0X1538F7);
	op_stkvar	(x,	1);
	create_insn	(0X15390A);
	create_insn	(0X15390C);
	create_insn	(0X15391C);
	make_array	(0X15394A,	0X2);
	create_insn	(0X15394C);
	create_insn	(0X15396D);
	create_insn	(x=0X15396F);
	op_stkvar	(x,	1);
	create_byte	(0X153991);
	make_array	(0X153991,	0X2);
	create_insn	(0X153993);
	create_insn	(x=0X153994);
	op_stkvar	(x,	1);
	create_insn	(x=0X1539A9);
	op_stkvar	(x,	1);
	create_insn	(x=0X1539AF);
	op_stkvar	(x,	1);
	create_insn	(x=0X1539B3);
	op_stkvar	(x,	1);
	create_byte	(0X1539D9);
	make_array	(0X1539D9,	0X2);
	create_insn	(0X1539DB);
	create_insn	(0X1539DC);
	create_insn	(0X1539EB);
	create_insn	(x=0X1539ED);
	op_stkvar	(x,	1);
	create_insn	(x=0X1539FA);
	op_hex		(x,	1);
	create_byte	(0X153A1B);
	make_array	(0X153A1B,	0X2);
	create_insn	(0X153A1D);
	create_insn	(0X153A2C);
	create_insn	(0X153A2E);
	create_insn	(0X153A40);
	create_insn	(0X153A4E);
	create_insn	(0X153A54);
	create_insn	(0X153A72);
	create_byte	(0X153A73);
	make_array	(0X153A73,	0X2);
	create_insn	(0X153A75);
	create_insn	(0X153A81);
	create_insn	(0X153AEB);
	create_insn	(0X153AEF);
	create_byte	(0X153AF7);
	make_array	(0X153AF7,	0X2);
	create_insn	(0X153AF9);
	create_insn	(x=0X153B0B);
	op_stkvar	(x,	0);
	create_insn	(0X153B1A);
	create_insn	(x=0X153B22);
	op_stkvar	(x,	0);
	create_insn	(x=0X153B5E);
	op_stkvar	(x,	0);
	create_insn	(x=0X153B62);
	op_stkvar	(x,	0);
	create_insn	(x=0X153B7B);
	op_stkvar	(x,	1);
	create_insn	(x=0X153B83);
	op_hex		(x,	1);
	create_insn	(x=0X153B8C);
	op_stkvar	(x,	1);
	create_insn	(x=0X153B9C);
	op_hex		(x,	1);
	create_insn	(x=0X153BB5);
	op_hex		(x,	1);
	create_insn	(x=0X153BDA);
	op_stkvar	(x,	1);
	create_insn	(x=0X153C01);
	op_hex		(x,	1);
	create_insn	(x=0X153C2C);
	op_hex		(x,	1);
	create_insn	(0X153C3F);
	create_insn	(x=0X153C70);
	op_hex		(x,	1);
	create_insn	(0X153CD0);
	create_insn	(x=0X153CD1);
	op_hex		(x,	1);
	create_insn	(x=0X153CD8);
	op_stkvar	(x,	1);
	create_insn	(x=0X153CE1);
	op_stkvar	(x,	1);
	create_insn	(x=0X153CE7);
	op_stkvar	(x,	1);
	create_insn	(x=0X153D18);
	op_hex		(x,	1);
	create_insn	(0X153D44);
	create_insn	(0X153D62);
	create_insn	(x=0X153D66);
	op_hex		(x,	1);
	create_insn	(x=0X153D6D);
	op_stkvar	(x,	1);
	create_insn	(x=0X153D71);
	op_stkvar	(x,	1);
	create_insn	(x=0X153D75);
	op_stkvar	(x,	1);
	create_insn	(x=0X153DB8);
	op_hex		(x,	1);
	create_insn	(0X153DDA);
	create_insn	(0X153DDC);
	create_insn	(x=0X153DDE);
	op_stkvar	(x,	1);
	create_insn	(x=0X153DE2);
	op_stkvar	(x,	1);
	create_insn	(0X153DFC);
	create_insn	(0X153DFE);
	create_insn	(x=0X153E0E);
	op_hex		(x,	1);
	create_insn	(0X153E17);
	create_insn	(0X153E1A);
	create_insn	(0X153E1F);
	create_insn	(x=0X153E2B);
	op_hex		(x,	1);
	create_insn	(0X153E30);
	create_insn	(0X153E35);
	set_name	(0X153E35,	"nullsub_1");
	create_insn	(0X153E36);
	create_byte	(0X153E7F);
	create_dword	(0X153E80);
	make_array	(0X153E80,	0XBB);
	create_byte	(0X15416C);
	make_array	(0X15416C,	0X2);
	create_insn	(0X15416E);
	create_insn	(x=0X154261);
	op_hex		(x,	1);
	create_insn	(0X154272);
	create_insn	(0X154280);
	create_byte	(0X154305);
	make_array	(0X154305,	0X3);
	create_word	(0X15430A);
	create_dword	(0X15430C);
	make_array	(0X15430C,	0X73D);
}

static Functions_0(void) {

	add_func    (0X1500EE,0X1500FD);
	set_func_flags(0X1500EE,0x400);
	add_func    (0X1500FF,0X150109);
	set_func_flags(0X1500FF,0x400);
	add_func    (0X15010F,0X150122);
	set_func_flags(0X15010F,0x400);
	add_func    (0X150134,0X15017F);
	set_func_flags(0X150134,0x4000);
	set_frame_size(0X150134, 0, 0, 0X8);
	add_func    (0X150185,0X150194);
	set_func_flags(0X150185,0x400);
	add_func    (0X150194,0X1501DC);
	set_func_flags(0X150194,0x400);
	add_func    (0X1501DC,0X150208);
	set_func_flags(0X1501DC,0x400);
	add_func    (0X150208,0X150389);
	set_func_flags(0X150208,0x400);
	add_func    (0X150389,0X150430);
	set_func_flags(0X150389,0);
	add_func    (0X150491,0X1504D6);
	set_func_flags(0X150491,0x4400);
	set_frame_size(0X150491, 0, 0, 0);
	add_func    (0X1504DB,0X15056B);
	set_func_flags(0X1504DB,0x4400);
	set_frame_size(0X1504DB, 0, 0, 0X4);
	add_func    (0X150574,0X150579);
	set_func_flags(0X150574,0x480);
	add_func    (0X150580,0X1505D0);
	set_func_flags(0X150580,0x400);
	set_frame_size(0X150580, 0X1C, 0, 0);
	add_func    (0X1505D0,0X1505F2);
	set_func_flags(0X1505D0,0x4400);
	set_frame_size(0X1505D0, 0, 0, 0X4);
	add_func    (0X1505FB,0X150620);
	set_func_flags(0X1505FB,0x4400);
	set_frame_size(0X1505FB, 0, 0, 0X8);
	add_func    (0X150620,0X150629);
	set_func_flags(0X150620,0x400);
	add_func    (0X150629,0X150635);
	set_func_flags(0X150629,0x400);
	add_func    (0X150635,0X1506E9);
	set_func_flags(0X150635,0x4400);
	set_frame_size(0X150635, 0, 0, 0);
	add_func    (0X1506E9,0X150702);
	set_func_flags(0X1506E9,0x400);
	add_func    (0X150702,0X150756);
	set_func_flags(0X150702,0x4400);
	set_frame_size(0X150702, 0, 0, 0);
	add_func    (0X150758,0X15081A);
	set_func_flags(0X150758,0x4400);
	set_frame_size(0X150758, 0X38, 0, 0X10);
	add_func    (0X15081C,0X150C18);
	set_func_flags(0X15081C,0x400);
	add_func    (0X150C18,0X150CD8);
	set_func_flags(0X150C18,0x400);
	add_func    (0X150CD8,0X150D1E);
	set_func_flags(0X150CD8,0x400);
	add_func    (0X150D1E,0X150D29);
	set_func_flags(0X150D1E,0x400);
	add_func    (0X150D29,0X150DBB);
	set_func_flags(0X150D29,0x4400);
	set_frame_size(0X150D29, 0, 0, 0);
	add_func    (0X150DC9,0X150E40);
	set_func_flags(0X150DC9,0x4400);
	set_frame_size(0X150DC9, 0, 0, 0);
	add_func    (0X150E52,0X150F20);
	set_func_flags(0X150E52,0x4400);
	set_frame_size(0X150E52, 0, 0, 0);
	add_func    (0X150F22,0X150F99);
	set_func_flags(0X150F22,0x400);
	add_func    (0X150F99,0X151306);
	set_func_flags(0X150F99,0x4400);
	set_frame_size(0X150F99, 0, 0, 0);
	add_func    (0X15130C,0X151315);
	set_func_flags(0X15130C,0x400);
	set_frame_size(0X15130C, 0, 0, 0);
	add_func    (0X151315,0X151331);
	set_func_flags(0X151315,0x400);
	add_func    (0X151331,0X15134B);
	set_func_flags(0X151331,0x400);
	add_func    (0X151352,0X151363);
	set_func_flags(0X151352,0x400);
	add_func    (0X15138D,0X1513A2);
	set_func_flags(0X15138D,0x4400);
	set_frame_size(0X15138D, 0X4, 0, 0);
	add_func    (0X1513A2,0X1513CF);
	set_func_flags(0X1513A2,0x4400);
	set_frame_size(0X1513A2, 0X4, 0, 0X4);
	add_func    (0X1513CF,0X1513D5);
	set_func_flags(0X1513CF,0x4400);
	set_frame_size(0X1513CF, 0, 0, 0);
	add_func    (0X1513FD,0X151403);
	set_func_flags(0X1513FD,0x4400);
	set_frame_size(0X1513FD, 0, 0, 0);
	add_func    (0X151511,0X151531);
	set_func_flags(0X151511,0x400);
	add_func    (0X151531,0X15153A);
	set_func_flags(0X151531,0x400);
	add_func    (0X151587,0X1515AE);
	set_func_flags(0X151587,0x4400);
	set_frame_size(0X151587, 0, 0, 0);
	add_func    (0X1515B3,0X1515B9);
	set_func_flags(0X1515B3,0x400);
	add_func    (0X1515C5,0X1515DA);
	set_func_flags(0X1515C5,0x400);
	add_func    (0X15166C,0X15169E);
	set_func_flags(0X15166C,0x400);
	add_func    (0X1516A0,0X151854);
	set_func_flags(0X1516A0,0x4400);
	set_frame_size(0X1516A0, 0X58, 0, 0X8);
	add_func    (0X15185C,0X15186E);
	set_func_flags(0X15185C,0x400);
	add_func    (0X1518AF,0X1518D6);
	set_func_flags(0X1518AF,0x400);
	add_func    (0X15192D,0X151942);
	set_func_flags(0X15192D,0);
	add_func    (0X151942,0X151955);
	set_func_flags(0X151942,0x400);
	add_func    (0X1519A1,0X1519C8);
	set_func_flags(0X1519A1,0x400);
	add_func    (0X1519C8,0X1519DC);
	set_func_flags(0X1519C8,0x400);
	add_func    (0X151A66,0X151A77);
	set_func_flags(0X151A66,0x400);
	add_func    (0X151A77,0X151A84);
	set_func_flags(0X151A77,0x400);
	add_func    (0X151AA8,0X151AC1);
	set_func_flags(0X151AA8,0x400);
	add_func    (0X151AC1,0X151ACA);
	set_func_flags(0X151AC1,0x400);
	add_func    (0X151ADE,0X151AFB);
	set_func_flags(0X151ADE,0x4400);
	set_frame_size(0X151ADE, 0, 0, 0);
	add_func    (0X15381A,0X15385E);
	set_func_flags(0X15381A,0x4410);
	set_frame_size(0X15381A, 0, 4, 0X8);
	add_func    (0X153867,0X153886);
	set_func_flags(0X153867,0x4400);
	set_frame_size(0X153867, 0, 0, 0X8);
	add_func    (0X153888,0X15390A);
	set_func_flags(0X153888,0x4400);
	set_frame_size(0X153888, 0, 0, 0X8);
	add_func    (0X15390C,0X15391C);
	set_func_flags(0X15390C,0x400);
	add_func    (0X15391C,0X15396D);
	set_func_flags(0X15391C,0x4400);
	set_frame_size(0X15391C, 0, 0, 0);
	add_func    (0X15396D,0X153991);
	set_func_flags(0X15396D,0x4400);
	set_frame_size(0X15396D, 0, 0, 0X4);
	add_func    (0X153993,0X1539A9);
	set_func_flags(0X153993,0x4400);
	set_frame_size(0X153993, 0, 0, 0X4);
	add_func    (0X1539A9,0X1539D9);
	set_func_flags(0X1539A9,0x4400);
	set_frame_size(0X1539A9, 0, 0, 0XC);
	add_func    (0X1539DC,0X1539EB);
	set_func_flags(0X1539DC,0x4400);
	set_frame_size(0X1539DC, 0, 0, 0);
	add_func    (0X1539ED,0X153A1B);
	set_func_flags(0X1539ED,0x4400);
	set_frame_size(0X1539ED, 0, 0, 0X4);
	add_func    (0X153A1D,0X153A2C);
	set_func_flags(0X153A1D,0x4400);
	set_frame_size(0X153A1D, 0, 0, 0);
	add_func    (0X153A2E,0X153A40);
	set_func_flags(0X153A2E,0x4400);
	set_frame_size(0X153A2E, 0, 0, 0);
	add_func    (0X153A4E,0X153A54);
	set_func_flags(0X153A4E,0x400);
	add_func    (0X153A54,0X153A72);
	set_func_flags(0X153A54,0x400);
	add_func    (0X153A81,0X153AEB);
	set_func_flags(0X153A81,0x4400);
	set_frame_size(0X153A81, 0, 0, 0);
	add_func    (0X153AEF,0X153AF7);
	set_func_flags(0X153AEF,0x400);
	add_func    (0X153AF9,0X153B1A);
	set_func_flags(0X153AF9,0x400);
	set_frame_size(0X153AF9, 0, 0, 0);
	add_func    (0X153B1A,0X153DDA);
	set_func_flags(0X153B1A,0x4400);
	set_frame_size(0X153B1A, 0, 0, 0X1C);
	add_func    (0X153DDC,0X153DFC);
	set_func_flags(0X153DDC,0x4400);
	set_frame_size(0X153DDC, 0, 0, 0X4);
	add_func    (0X153DFE,0X153E17);
	set_func_flags(0X153DFE,0x400);
	add_func    (0X153E17,0X153E1A);
	set_func_flags(0X153E17,0x400);
	add_func    (0X153E1F,0X153E30);
	set_func_flags(0X153E1F,0x400);
	add_func    (0X153E35,0X153E36);
	set_func_flags(0X153E35,0x4440);
	set_frame_size(0X153E35, 0, 0, 0);
	add_func    (0X15416E,0X154272);
	set_func_flags(0X15416E,0x400);
}

//------------------------------------------------------------------------
// Information about functions

static Functions(void) {

	Functions_0();
}

//------------------------------------------------------------------------
// Information about segment registers

static SegRegs(void) {
	split_sreg_range(0X150000,"es",0,3);
	split_sreg_range(0X1542D2,"es",0,3);
	split_sreg_range(0X150000,"ss",0,3);
	split_sreg_range(0X1542ED,"ss",0,3);
	split_sreg_range(0X150000,"ds",0,3);
	split_sreg_range(0X150000,"fs",0,3);
	split_sreg_range(0X150000,"gs",0,3);
}

//------------------------------------------------------------------------
// Information about all patched bytes:

static Patches(void) {
}

//------------------------------------------------------------------------
// Call all byte feature functions:

static Bytes(void) {
	Bytes_0();
        end_type_updating(UTP_STRUCT);
}

// End of file.
