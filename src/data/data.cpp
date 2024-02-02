#include <string>
#include <vector>
#include "data.hpp"

using namespace std;

int num_mons = 151;

Species* create_dex(int& length){
    length = num_mons;
    Species* dex = new Species[num_mons];



	Species _0;
	_0.name = "Bulbasaur";
	_0.stats[0] = 45;
	_0.stats[1] = 49;
	_0.stats[2] = 49;
	_0.stats[3] = 45;
	_0.stats[4] = 65;
	_0.types[0] = 10;
	_0.types[1] = 3;
	dex[0] = _0;


	Species _1;
	_1.name = "Ivysaur";
	_1.stats[0] = 60;
	_1.stats[1] = 62;
	_1.stats[2] = 63;
	_1.stats[3] = 60;
	_1.stats[4] = 80;
	_1.types[0] = 10;
	_1.types[1] = 3;
	dex[1] = _1;


	Species _2;
	_2.name = "Venusaur";
	_2.stats[0] = 80;
	_2.stats[1] = 82;
	_2.stats[2] = 83;
	_2.stats[3] = 80;
	_2.stats[4] = 100;
	_2.types[0] = 10;
	_2.types[1] = 3;
	dex[2] = _2;


	Species _3;
	_3.name = "Charmander";
	_3.stats[0] = 39;
	_3.stats[1] = 52;
	_3.stats[2] = 43;
	_3.stats[3] = 65;
	_3.stats[4] = 50;
	_3.types[0] = 8;
	_3.types[1] = -1;
	dex[3] = _3;


	Species _4;
	_4.name = "Charmeleon";
	_4.stats[0] = 58;
	_4.stats[1] = 64;
	_4.stats[2] = 58;
	_4.stats[3] = 80;
	_4.stats[4] = 65;
	_4.types[0] = 8;
	_4.types[1] = -1;
	dex[4] = _4;


	Species _5;
	_5.name = "Charizard";
	_5.stats[0] = 78;
	_5.stats[1] = 84;
	_5.stats[2] = 78;
	_5.stats[3] = 100;
	_5.stats[4] = 85;
	_5.types[0] = 8;
	_5.types[1] = 2;
	dex[5] = _5;


	Species _6;
	_6.name = "Squirtle";
	_6.stats[0] = 44;
	_6.stats[1] = 48;
	_6.stats[2] = 65;
	_6.stats[3] = 43;
	_6.stats[4] = 50;
	_6.types[0] = 9;
	_6.types[1] = -1;
	dex[6] = _6;


	Species _7;
	_7.name = "Wartortle";
	_7.stats[0] = 59;
	_7.stats[1] = 63;
	_7.stats[2] = 80;
	_7.stats[3] = 58;
	_7.stats[4] = 65;
	_7.types[0] = 9;
	_7.types[1] = -1;
	dex[7] = _7;


	Species _8;
	_8.name = "Blastoise";
	_8.stats[0] = 79;
	_8.stats[1] = 83;
	_8.stats[2] = 100;
	_8.stats[3] = 78;
	_8.stats[4] = 85;
	_8.types[0] = 9;
	_8.types[1] = -1;
	dex[8] = _8;


	Species _9;
	_9.name = "Caterpie";
	_9.stats[0] = 45;
	_9.stats[1] = 30;
	_9.stats[2] = 35;
	_9.stats[3] = 45;
	_9.stats[4] = 20;
	_9.types[0] = 6;
	_9.types[1] = -1;
	dex[9] = _9;


	Species _10;
	_10.name = "Metapod";
	_10.stats[0] = 50;
	_10.stats[1] = 20;
	_10.stats[2] = 55;
	_10.stats[3] = 30;
	_10.stats[4] = 25;
	_10.types[0] = 6;
	_10.types[1] = -1;
	dex[10] = _10;


	Species _11;
	_11.name = "Butterfree";
	_11.stats[0] = 60;
	_11.stats[1] = 45;
	_11.stats[2] = 50;
	_11.stats[3] = 70;
	_11.stats[4] = 80;
	_11.types[0] = 6;
	_11.types[1] = 2;
	dex[11] = _11;


	Species _12;
	_12.name = "Weedle";
	_12.stats[0] = 40;
	_12.stats[1] = 35;
	_12.stats[2] = 30;
	_12.stats[3] = 50;
	_12.stats[4] = 20;
	_12.types[0] = 6;
	_12.types[1] = 3;
	dex[12] = _12;


	Species _13;
	_13.name = "Kakuna";
	_13.stats[0] = 45;
	_13.stats[1] = 25;
	_13.stats[2] = 50;
	_13.stats[3] = 35;
	_13.stats[4] = 25;
	_13.types[0] = 6;
	_13.types[1] = 3;
	dex[13] = _13;


	Species _14;
	_14.name = "Beedrill";
	_14.stats[0] = 65;
	_14.stats[1] = 80;
	_14.stats[2] = 40;
	_14.stats[3] = 75;
	_14.stats[4] = 45;
	_14.types[0] = 6;
	_14.types[1] = 3;
	dex[14] = _14;


	Species _15;
	_15.name = "Pidgey";
	_15.stats[0] = 40;
	_15.stats[1] = 45;
	_15.stats[2] = 40;
	_15.stats[3] = 56;
	_15.stats[4] = 35;
	_15.types[0] = 0;
	_15.types[1] = 2;
	dex[15] = _15;


	Species _16;
	_16.name = "Pidgeotto";
	_16.stats[0] = 63;
	_16.stats[1] = 60;
	_16.stats[2] = 55;
	_16.stats[3] = 71;
	_16.stats[4] = 50;
	_16.types[0] = 0;
	_16.types[1] = 2;
	dex[16] = _16;


	Species _17;
	_17.name = "Pidgeot";
	_17.stats[0] = 83;
	_17.stats[1] = 80;
	_17.stats[2] = 75;
	_17.stats[3] = 91;
	_17.stats[4] = 70;
	_17.types[0] = 0;
	_17.types[1] = 2;
	dex[17] = _17;


	Species _18;
	_18.name = "Rattata";
	_18.stats[0] = 30;
	_18.stats[1] = 56;
	_18.stats[2] = 35;
	_18.stats[3] = 72;
	_18.stats[4] = 25;
	_18.types[0] = 0;
	_18.types[1] = -1;
	dex[18] = _18;


	Species _19;
	_19.name = "Raticate";
	_19.stats[0] = 55;
	_19.stats[1] = 81;
	_19.stats[2] = 60;
	_19.stats[3] = 97;
	_19.stats[4] = 50;
	_19.types[0] = 0;
	_19.types[1] = -1;
	dex[19] = _19;


	Species _20;
	_20.name = "Spearow";
	_20.stats[0] = 40;
	_20.stats[1] = 60;
	_20.stats[2] = 30;
	_20.stats[3] = 70;
	_20.stats[4] = 31;
	_20.types[0] = 0;
	_20.types[1] = 2;
	dex[20] = _20;


	Species _21;
	_21.name = "Fearow";
	_21.stats[0] = 65;
	_21.stats[1] = 90;
	_21.stats[2] = 65;
	_21.stats[3] = 100;
	_21.stats[4] = 61;
	_21.types[0] = 0;
	_21.types[1] = 2;
	dex[21] = _21;


	Species _22;
	_22.name = "Ekans";
	_22.stats[0] = 35;
	_22.stats[1] = 60;
	_22.stats[2] = 44;
	_22.stats[3] = 55;
	_22.stats[4] = 40;
	_22.types[0] = 3;
	_22.types[1] = -1;
	dex[22] = _22;


	Species _23;
	_23.name = "Arbok";
	_23.stats[0] = 60;
	_23.stats[1] = 85;
	_23.stats[2] = 69;
	_23.stats[3] = 80;
	_23.stats[4] = 65;
	_23.types[0] = 3;
	_23.types[1] = -1;
	dex[23] = _23;


	Species _24;
	_24.name = "Pikachu";
	_24.stats[0] = 35;
	_24.stats[1] = 55;
	_24.stats[2] = 30;
	_24.stats[3] = 90;
	_24.stats[4] = 50;
	_24.types[0] = 11;
	_24.types[1] = -1;
	dex[24] = _24;


	Species _25;
	_25.name = "Raichu";
	_25.stats[0] = 60;
	_25.stats[1] = 90;
	_25.stats[2] = 55;
	_25.stats[3] = 100;
	_25.stats[4] = 90;
	_25.types[0] = 11;
	_25.types[1] = -1;
	dex[25] = _25;


	Species _26;
	_26.name = "Sandshrew";
	_26.stats[0] = 50;
	_26.stats[1] = 75;
	_26.stats[2] = 85;
	_26.stats[3] = 40;
	_26.stats[4] = 30;
	_26.types[0] = 4;
	_26.types[1] = -1;
	dex[26] = _26;


	Species _27;
	_27.name = "Sandslash";
	_27.stats[0] = 75;
	_27.stats[1] = 100;
	_27.stats[2] = 110;
	_27.stats[3] = 65;
	_27.stats[4] = 55;
	_27.types[0] = 4;
	_27.types[1] = -1;
	dex[27] = _27;


	Species _28;
	_28.name = "Nidoran-F";
	_28.stats[0] = 55;
	_28.stats[1] = 47;
	_28.stats[2] = 52;
	_28.stats[3] = 41;
	_28.stats[4] = 40;
	_28.types[0] = 3;
	_28.types[1] = -1;
	dex[28] = _28;


	Species _29;
	_29.name = "Nidorina";
	_29.stats[0] = 70;
	_29.stats[1] = 62;
	_29.stats[2] = 67;
	_29.stats[3] = 56;
	_29.stats[4] = 55;
	_29.types[0] = 3;
	_29.types[1] = -1;
	dex[29] = _29;


	Species _30;
	_30.name = "Nidoqueen";
	_30.stats[0] = 90;
	_30.stats[1] = 82;
	_30.stats[2] = 87;
	_30.stats[3] = 76;
	_30.stats[4] = 75;
	_30.types[0] = 3;
	_30.types[1] = 4;
	dex[30] = _30;


	Species _31;
	_31.name = "Nidoran-M";
	_31.stats[0] = 46;
	_31.stats[1] = 57;
	_31.stats[2] = 40;
	_31.stats[3] = 50;
	_31.stats[4] = 40;
	_31.types[0] = 3;
	_31.types[1] = -1;
	dex[31] = _31;


	Species _32;
	_32.name = "Nidorino";
	_32.stats[0] = 61;
	_32.stats[1] = 72;
	_32.stats[2] = 57;
	_32.stats[3] = 65;
	_32.stats[4] = 55;
	_32.types[0] = 3;
	_32.types[1] = -1;
	dex[32] = _32;


	Species _33;
	_33.name = "Nidoking";
	_33.stats[0] = 81;
	_33.stats[1] = 92;
	_33.stats[2] = 77;
	_33.stats[3] = 85;
	_33.stats[4] = 75;
	_33.types[0] = 3;
	_33.types[1] = 4;
	dex[33] = _33;


	Species _34;
	_34.name = "Clefairy";
	_34.stats[0] = 70;
	_34.stats[1] = 45;
	_34.stats[2] = 48;
	_34.stats[3] = 35;
	_34.stats[4] = 60;
	_34.types[0] = 0;
	_34.types[1] = -1;
	dex[34] = _34;


	Species _35;
	_35.name = "Clefable";
	_35.stats[0] = 95;
	_35.stats[1] = 70;
	_35.stats[2] = 73;
	_35.stats[3] = 60;
	_35.stats[4] = 85;
	_35.types[0] = 0;
	_35.types[1] = -1;
	dex[35] = _35;


	Species _36;
	_36.name = "Vulpix";
	_36.stats[0] = 38;
	_36.stats[1] = 41;
	_36.stats[2] = 40;
	_36.stats[3] = 65;
	_36.stats[4] = 65;
	_36.types[0] = 8;
	_36.types[1] = -1;
	dex[36] = _36;


	Species _37;
	_37.name = "Ninetales";
	_37.stats[0] = 73;
	_37.stats[1] = 76;
	_37.stats[2] = 75;
	_37.stats[3] = 100;
	_37.stats[4] = 100;
	_37.types[0] = 8;
	_37.types[1] = -1;
	dex[37] = _37;


	Species _38;
	_38.name = "Jigglypuff";
	_38.stats[0] = 115;
	_38.stats[1] = 45;
	_38.stats[2] = 20;
	_38.stats[3] = 20;
	_38.stats[4] = 25;
	_38.types[0] = 0;
	_38.types[1] = -1;
	dex[38] = _38;


	Species _39;
	_39.name = "Wigglytuff";
	_39.stats[0] = 140;
	_39.stats[1] = 70;
	_39.stats[2] = 45;
	_39.stats[3] = 45;
	_39.stats[4] = 50;
	_39.types[0] = 0;
	_39.types[1] = -1;
	dex[39] = _39;


	Species _40;
	_40.name = "Zubat";
	_40.stats[0] = 40;
	_40.stats[1] = 45;
	_40.stats[2] = 35;
	_40.stats[3] = 55;
	_40.stats[4] = 40;
	_40.types[0] = 3;
	_40.types[1] = 2;
	dex[40] = _40;


	Species _41;
	_41.name = "Golbat";
	_41.stats[0] = 75;
	_41.stats[1] = 80;
	_41.stats[2] = 70;
	_41.stats[3] = 90;
	_41.stats[4] = 75;
	_41.types[0] = 3;
	_41.types[1] = 2;
	dex[41] = _41;


	Species _42;
	_42.name = "Oddish";
	_42.stats[0] = 45;
	_42.stats[1] = 50;
	_42.stats[2] = 55;
	_42.stats[3] = 30;
	_42.stats[4] = 75;
	_42.types[0] = 10;
	_42.types[1] = 3;
	dex[42] = _42;


	Species _43;
	_43.name = "Gloom";
	_43.stats[0] = 60;
	_43.stats[1] = 65;
	_43.stats[2] = 70;
	_43.stats[3] = 40;
	_43.stats[4] = 85;
	_43.types[0] = 10;
	_43.types[1] = 3;
	dex[43] = _43;


	Species _44;
	_44.name = "Vileplume";
	_44.stats[0] = 75;
	_44.stats[1] = 80;
	_44.stats[2] = 85;
	_44.stats[3] = 50;
	_44.stats[4] = 100;
	_44.types[0] = 10;
	_44.types[1] = 3;
	dex[44] = _44;


	Species _45;
	_45.name = "Paras";
	_45.stats[0] = 35;
	_45.stats[1] = 70;
	_45.stats[2] = 55;
	_45.stats[3] = 25;
	_45.stats[4] = 55;
	_45.types[0] = 6;
	_45.types[1] = 10;
	dex[45] = _45;


	Species _46;
	_46.name = "Parasect";
	_46.stats[0] = 60;
	_46.stats[1] = 95;
	_46.stats[2] = 80;
	_46.stats[3] = 30;
	_46.stats[4] = 80;
	_46.types[0] = 6;
	_46.types[1] = 10;
	dex[46] = _46;


	Species _47;
	_47.name = "Venonat";
	_47.stats[0] = 60;
	_47.stats[1] = 55;
	_47.stats[2] = 50;
	_47.stats[3] = 45;
	_47.stats[4] = 40;
	_47.types[0] = 6;
	_47.types[1] = 3;
	dex[47] = _47;


	Species _48;
	_48.name = "Venomoth";
	_48.stats[0] = 70;
	_48.stats[1] = 65;
	_48.stats[2] = 60;
	_48.stats[3] = 90;
	_48.stats[4] = 90;
	_48.types[0] = 6;
	_48.types[1] = 3;
	dex[48] = _48;


	Species _49;
	_49.name = "Diglett";
	_49.stats[0] = 10;
	_49.stats[1] = 55;
	_49.stats[2] = 25;
	_49.stats[3] = 95;
	_49.stats[4] = 45;
	_49.types[0] = 4;
	_49.types[1] = -1;
	dex[49] = _49;


	Species _50;
	_50.name = "Dugtrio";
	_50.stats[0] = 35;
	_50.stats[1] = 80;
	_50.stats[2] = 50;
	_50.stats[3] = 120;
	_50.stats[4] = 70;
	_50.types[0] = 4;
	_50.types[1] = -1;
	dex[50] = _50;


	Species _51;
	_51.name = "Meowth";
	_51.stats[0] = 40;
	_51.stats[1] = 45;
	_51.stats[2] = 35;
	_51.stats[3] = 90;
	_51.stats[4] = 40;
	_51.types[0] = 0;
	_51.types[1] = -1;
	dex[51] = _51;


	Species _52;
	_52.name = "Persian";
	_52.stats[0] = 65;
	_52.stats[1] = 70;
	_52.stats[2] = 60;
	_52.stats[3] = 115;
	_52.stats[4] = 65;
	_52.types[0] = 0;
	_52.types[1] = -1;
	dex[52] = _52;


	Species _53;
	_53.name = "Psyduck";
	_53.stats[0] = 50;
	_53.stats[1] = 52;
	_53.stats[2] = 48;
	_53.stats[3] = 55;
	_53.stats[4] = 50;
	_53.types[0] = 9;
	_53.types[1] = -1;
	dex[53] = _53;


	Species _54;
	_54.name = "Golduck";
	_54.stats[0] = 80;
	_54.stats[1] = 82;
	_54.stats[2] = 78;
	_54.stats[3] = 85;
	_54.stats[4] = 80;
	_54.types[0] = 9;
	_54.types[1] = -1;
	dex[54] = _54;


	Species _55;
	_55.name = "Mankey";
	_55.stats[0] = 40;
	_55.stats[1] = 80;
	_55.stats[2] = 35;
	_55.stats[3] = 70;
	_55.stats[4] = 35;
	_55.types[0] = 1;
	_55.types[1] = -1;
	dex[55] = _55;


	Species _56;
	_56.name = "Primeape";
	_56.stats[0] = 65;
	_56.stats[1] = 105;
	_56.stats[2] = 60;
	_56.stats[3] = 95;
	_56.stats[4] = 60;
	_56.types[0] = 1;
	_56.types[1] = -1;
	dex[56] = _56;


	Species _57;
	_57.name = "Growlithe";
	_57.stats[0] = 55;
	_57.stats[1] = 70;
	_57.stats[2] = 45;
	_57.stats[3] = 60;
	_57.stats[4] = 50;
	_57.types[0] = 8;
	_57.types[1] = -1;
	dex[57] = _57;


	Species _58;
	_58.name = "Arcanine";
	_58.stats[0] = 90;
	_58.stats[1] = 110;
	_58.stats[2] = 80;
	_58.stats[3] = 95;
	_58.stats[4] = 80;
	_58.types[0] = 8;
	_58.types[1] = -1;
	dex[58] = _58;


	Species _59;
	_59.name = "Poliwag";
	_59.stats[0] = 40;
	_59.stats[1] = 50;
	_59.stats[2] = 40;
	_59.stats[3] = 90;
	_59.stats[4] = 40;
	_59.types[0] = 9;
	_59.types[1] = -1;
	dex[59] = _59;


	Species _60;
	_60.name = "Poliwhirl";
	_60.stats[0] = 65;
	_60.stats[1] = 65;
	_60.stats[2] = 65;
	_60.stats[3] = 90;
	_60.stats[4] = 50;
	_60.types[0] = 9;
	_60.types[1] = -1;
	dex[60] = _60;


	Species _61;
	_61.name = "Poliwrath";
	_61.stats[0] = 90;
	_61.stats[1] = 85;
	_61.stats[2] = 95;
	_61.stats[3] = 70;
	_61.stats[4] = 70;
	_61.types[0] = 9;
	_61.types[1] = 1;
	dex[61] = _61;


	Species _62;
	_62.name = "Abra";
	_62.stats[0] = 25;
	_62.stats[1] = 20;
	_62.stats[2] = 15;
	_62.stats[3] = 90;
	_62.stats[4] = 105;
	_62.types[0] = 12;
	_62.types[1] = -1;
	dex[62] = _62;


	Species _63;
	_63.name = "Kadabra";
	_63.stats[0] = 40;
	_63.stats[1] = 35;
	_63.stats[2] = 30;
	_63.stats[3] = 105;
	_63.stats[4] = 120;
	_63.types[0] = 12;
	_63.types[1] = -1;
	dex[63] = _63;


	Species _64;
	_64.name = "Alakazam";
	_64.stats[0] = 55;
	_64.stats[1] = 50;
	_64.stats[2] = 45;
	_64.stats[3] = 120;
	_64.stats[4] = 135;
	_64.types[0] = 12;
	_64.types[1] = -1;
	dex[64] = _64;


	Species _65;
	_65.name = "Machop";
	_65.stats[0] = 70;
	_65.stats[1] = 80;
	_65.stats[2] = 50;
	_65.stats[3] = 35;
	_65.stats[4] = 35;
	_65.types[0] = 1;
	_65.types[1] = -1;
	dex[65] = _65;


	Species _66;
	_66.name = "Machoke";
	_66.stats[0] = 80;
	_66.stats[1] = 100;
	_66.stats[2] = 70;
	_66.stats[3] = 45;
	_66.stats[4] = 50;
	_66.types[0] = 1;
	_66.types[1] = -1;
	dex[66] = _66;


	Species _67;
	_67.name = "Machamp";
	_67.stats[0] = 90;
	_67.stats[1] = 130;
	_67.stats[2] = 80;
	_67.stats[3] = 55;
	_67.stats[4] = 65;
	_67.types[0] = 1;
	_67.types[1] = -1;
	dex[67] = _67;


	Species _68;
	_68.name = "Bellsprout";
	_68.stats[0] = 50;
	_68.stats[1] = 75;
	_68.stats[2] = 35;
	_68.stats[3] = 40;
	_68.stats[4] = 70;
	_68.types[0] = 10;
	_68.types[1] = 3;
	dex[68] = _68;


	Species _69;
	_69.name = "Weepinbell";
	_69.stats[0] = 65;
	_69.stats[1] = 90;
	_69.stats[2] = 50;
	_69.stats[3] = 55;
	_69.stats[4] = 85;
	_69.types[0] = 10;
	_69.types[1] = 3;
	dex[69] = _69;


	Species _70;
	_70.name = "Victreebel";
	_70.stats[0] = 80;
	_70.stats[1] = 105;
	_70.stats[2] = 65;
	_70.stats[3] = 70;
	_70.stats[4] = 100;
	_70.types[0] = 10;
	_70.types[1] = 3;
	dex[70] = _70;


	Species _71;
	_71.name = "Tentacool";
	_71.stats[0] = 40;
	_71.stats[1] = 40;
	_71.stats[2] = 35;
	_71.stats[3] = 70;
	_71.stats[4] = 100;
	_71.types[0] = 9;
	_71.types[1] = 3;
	dex[71] = _71;


	Species _72;
	_72.name = "Tentacruel";
	_72.stats[0] = 80;
	_72.stats[1] = 70;
	_72.stats[2] = 65;
	_72.stats[3] = 100;
	_72.stats[4] = 120;
	_72.types[0] = 9;
	_72.types[1] = 3;
	dex[72] = _72;


	Species _73;
	_73.name = "Geodude";
	_73.stats[0] = 40;
	_73.stats[1] = 80;
	_73.stats[2] = 100;
	_73.stats[3] = 20;
	_73.stats[4] = 30;
	_73.types[0] = 5;
	_73.types[1] = 4;
	dex[73] = _73;


	Species _74;
	_74.name = "Graveler";
	_74.stats[0] = 55;
	_74.stats[1] = 95;
	_74.stats[2] = 115;
	_74.stats[3] = 35;
	_74.stats[4] = 45;
	_74.types[0] = 5;
	_74.types[1] = 4;
	dex[74] = _74;


	Species _75;
	_75.name = "Golem";
	_75.stats[0] = 80;
	_75.stats[1] = 110;
	_75.stats[2] = 130;
	_75.stats[3] = 45;
	_75.stats[4] = 55;
	_75.types[0] = 5;
	_75.types[1] = 4;
	dex[75] = _75;


	Species _76;
	_76.name = "Ponyta";
	_76.stats[0] = 50;
	_76.stats[1] = 85;
	_76.stats[2] = 55;
	_76.stats[3] = 90;
	_76.stats[4] = 65;
	_76.types[0] = 8;
	_76.types[1] = -1;
	dex[76] = _76;


	Species _77;
	_77.name = "Rapidash";
	_77.stats[0] = 65;
	_77.stats[1] = 100;
	_77.stats[2] = 70;
	_77.stats[3] = 105;
	_77.stats[4] = 80;
	_77.types[0] = 8;
	_77.types[1] = -1;
	dex[77] = _77;


	Species _78;
	_78.name = "Slowpoke";
	_78.stats[0] = 90;
	_78.stats[1] = 65;
	_78.stats[2] = 65;
	_78.stats[3] = 15;
	_78.stats[4] = 40;
	_78.types[0] = 9;
	_78.types[1] = 12;
	dex[78] = _78;


	Species _79;
	_79.name = "Slowbro";
	_79.stats[0] = 95;
	_79.stats[1] = 75;
	_79.stats[2] = 110;
	_79.stats[3] = 30;
	_79.stats[4] = 80;
	_79.types[0] = 9;
	_79.types[1] = 12;
	dex[79] = _79;


	Species _80;
	_80.name = "Magnemite";
	_80.stats[0] = 25;
	_80.stats[1] = 35;
	_80.stats[2] = 70;
	_80.stats[3] = 45;
	_80.stats[4] = 95;
	_80.types[0] = 11;
	_80.types[1] = -1;
	dex[80] = _80;


	Species _81;
	_81.name = "Magneton";
	_81.stats[0] = 50;
	_81.stats[1] = 60;
	_81.stats[2] = 95;
	_81.stats[3] = 70;
	_81.stats[4] = 120;
	_81.types[0] = 11;
	_81.types[1] = -1;
	dex[81] = _81;


	Species _82;
	_82.name = "Farfetch’d";
	_82.stats[0] = 52;
	_82.stats[1] = 65;
	_82.stats[2] = 55;
	_82.stats[3] = 60;
	_82.stats[4] = 58;
	_82.types[0] = 0;
	_82.types[1] = 2;
	dex[82] = _82;


	Species _83;
	_83.name = "Doduo";
	_83.stats[0] = 35;
	_83.stats[1] = 85;
	_83.stats[2] = 45;
	_83.stats[3] = 75;
	_83.stats[4] = 35;
	_83.types[0] = 0;
	_83.types[1] = 2;
	dex[83] = _83;


	Species _84;
	_84.name = "Dodrio";
	_84.stats[0] = 60;
	_84.stats[1] = 110;
	_84.stats[2] = 70;
	_84.stats[3] = 100;
	_84.stats[4] = 60;
	_84.types[0] = 0;
	_84.types[1] = 2;
	dex[84] = _84;


	Species _85;
	_85.name = "Seel";
	_85.stats[0] = 65;
	_85.stats[1] = 45;
	_85.stats[2] = 55;
	_85.stats[3] = 45;
	_85.stats[4] = 70;
	_85.types[0] = 9;
	_85.types[1] = -1;
	dex[85] = _85;


	Species _86;
	_86.name = "Dewgong";
	_86.stats[0] = 90;
	_86.stats[1] = 70;
	_86.stats[2] = 80;
	_86.stats[3] = 70;
	_86.stats[4] = 95;
	_86.types[0] = 9;
	_86.types[1] = 13;
	dex[86] = _86;


	Species _87;
	_87.name = "Grimer";
	_87.stats[0] = 80;
	_87.stats[1] = 80;
	_87.stats[2] = 50;
	_87.stats[3] = 25;
	_87.stats[4] = 40;
	_87.types[0] = 3;
	_87.types[1] = -1;
	dex[87] = _87;


	Species _88;
	_88.name = "Muk";
	_88.stats[0] = 105;
	_88.stats[1] = 105;
	_88.stats[2] = 75;
	_88.stats[3] = 50;
	_88.stats[4] = 65;
	_88.types[0] = 3;
	_88.types[1] = -1;
	dex[88] = _88;


	Species _89;
	_89.name = "Shellder";
	_89.stats[0] = 30;
	_89.stats[1] = 65;
	_89.stats[2] = 100;
	_89.stats[3] = 40;
	_89.stats[4] = 45;
	_89.types[0] = 9;
	_89.types[1] = -1;
	dex[89] = _89;


	Species _90;
	_90.name = "Cloyster";
	_90.stats[0] = 50;
	_90.stats[1] = 95;
	_90.stats[2] = 180;
	_90.stats[3] = 70;
	_90.stats[4] = 85;
	_90.types[0] = 9;
	_90.types[1] = 13;
	dex[90] = _90;


	Species _91;
	_91.name = "Gastly";
	_91.stats[0] = 30;
	_91.stats[1] = 35;
	_91.stats[2] = 30;
	_91.stats[3] = 80;
	_91.stats[4] = 100;
	_91.types[0] = 7;
	_91.types[1] = 3;
	dex[91] = _91;


	Species _92;
	_92.name = "Haunter";
	_92.stats[0] = 45;
	_92.stats[1] = 50;
	_92.stats[2] = 45;
	_92.stats[3] = 95;
	_92.stats[4] = 115;
	_92.types[0] = 7;
	_92.types[1] = 3;
	dex[92] = _92;


	Species _93;
	_93.name = "Gengar";
	_93.stats[0] = 60;
	_93.stats[1] = 65;
	_93.stats[2] = 60;
	_93.stats[3] = 110;
	_93.stats[4] = 130;
	_93.types[0] = 7;
	_93.types[1] = 3;
	dex[93] = _93;


	Species _94;
	_94.name = "Onix";
	_94.stats[0] = 35;
	_94.stats[1] = 45;
	_94.stats[2] = 160;
	_94.stats[3] = 70;
	_94.stats[4] = 30;
	_94.types[0] = 5;
	_94.types[1] = 4;
	dex[94] = _94;


	Species _95;
	_95.name = "Drowzee";
	_95.stats[0] = 60;
	_95.stats[1] = 48;
	_95.stats[2] = 45;
	_95.stats[3] = 42;
	_95.stats[4] = 90;
	_95.types[0] = 12;
	_95.types[1] = -1;
	dex[95] = _95;


	Species _96;
	_96.name = "Hypno";
	_96.stats[0] = 85;
	_96.stats[1] = 73;
	_96.stats[2] = 70;
	_96.stats[3] = 67;
	_96.stats[4] = 115;
	_96.types[0] = 12;
	_96.types[1] = -1;
	dex[96] = _96;


	Species _97;
	_97.name = "Krabby";
	_97.stats[0] = 30;
	_97.stats[1] = 105;
	_97.stats[2] = 90;
	_97.stats[3] = 50;
	_97.stats[4] = 25;
	_97.types[0] = 9;
	_97.types[1] = -1;
	dex[97] = _97;


	Species _98;
	_98.name = "Kingler";
	_98.stats[0] = 55;
	_98.stats[1] = 130;
	_98.stats[2] = 115;
	_98.stats[3] = 75;
	_98.stats[4] = 50;
	_98.types[0] = 9;
	_98.types[1] = -1;
	dex[98] = _98;


	Species _99;
	_99.name = "Voltorb";
	_99.stats[0] = 40;
	_99.stats[1] = 30;
	_99.stats[2] = 50;
	_99.stats[3] = 100;
	_99.stats[4] = 55;
	_99.types[0] = 11;
	_99.types[1] = -1;
	dex[99] = _99;


	Species _100;
	_100.name = "Electrode";
	_100.stats[0] = 60;
	_100.stats[1] = 50;
	_100.stats[2] = 70;
	_100.stats[3] = 140;
	_100.stats[4] = 80;
	_100.types[0] = 11;
	_100.types[1] = -1;
	dex[100] = _100;


	Species _101;
	_101.name = "Exeggcute";
	_101.stats[0] = 60;
	_101.stats[1] = 40;
	_101.stats[2] = 80;
	_101.stats[3] = 40;
	_101.stats[4] = 60;
	_101.types[0] = 10;
	_101.types[1] = 12;
	dex[101] = _101;


	Species _102;
	_102.name = "Exeggutor";
	_102.stats[0] = 95;
	_102.stats[1] = 95;
	_102.stats[2] = 85;
	_102.stats[3] = 55;
	_102.stats[4] = 125;
	_102.types[0] = 10;
	_102.types[1] = 12;
	dex[102] = _102;


	Species _103;
	_103.name = "Cubone";
	_103.stats[0] = 50;
	_103.stats[1] = 50;
	_103.stats[2] = 95;
	_103.stats[3] = 35;
	_103.stats[4] = 40;
	_103.types[0] = 4;
	_103.types[1] = -1;
	dex[103] = _103;


	Species _104;
	_104.name = "Marowak";
	_104.stats[0] = 60;
	_104.stats[1] = 80;
	_104.stats[2] = 110;
	_104.stats[3] = 45;
	_104.stats[4] = 50;
	_104.types[0] = 4;
	_104.types[1] = -1;
	dex[104] = _104;


	Species _105;
	_105.name = "Hitmonlee";
	_105.stats[0] = 50;
	_105.stats[1] = 120;
	_105.stats[2] = 53;
	_105.stats[3] = 87;
	_105.stats[4] = 35;
	_105.types[0] = 1;
	_105.types[1] = -1;
	dex[105] = _105;


	Species _106;
	_106.name = "Hitmonchan";
	_106.stats[0] = 50;
	_106.stats[1] = 105;
	_106.stats[2] = 79;
	_106.stats[3] = 76;
	_106.stats[4] = 35;
	_106.types[0] = 1;
	_106.types[1] = -1;
	dex[106] = _106;


	Species _107;
	_107.name = "Lickitung";
	_107.stats[0] = 90;
	_107.stats[1] = 55;
	_107.stats[2] = 75;
	_107.stats[3] = 30;
	_107.stats[4] = 60;
	_107.types[0] = 0;
	_107.types[1] = -1;
	dex[107] = _107;


	Species _108;
	_108.name = "Koffing";
	_108.stats[0] = 40;
	_108.stats[1] = 65;
	_108.stats[2] = 95;
	_108.stats[3] = 35;
	_108.stats[4] = 60;
	_108.types[0] = 3;
	_108.types[1] = -1;
	dex[108] = _108;


	Species _109;
	_109.name = "Weezing";
	_109.stats[0] = 65;
	_109.stats[1] = 90;
	_109.stats[2] = 120;
	_109.stats[3] = 60;
	_109.stats[4] = 85;
	_109.types[0] = 3;
	_109.types[1] = -1;
	dex[109] = _109;


	Species _110;
	_110.name = "Rhyhorn";
	_110.stats[0] = 80;
	_110.stats[1] = 85;
	_110.stats[2] = 95;
	_110.stats[3] = 25;
	_110.stats[4] = 30;
	_110.types[0] = 4;
	_110.types[1] = 5;
	dex[110] = _110;


	Species _111;
	_111.name = "Rhydon";
	_111.stats[0] = 105;
	_111.stats[1] = 130;
	_111.stats[2] = 120;
	_111.stats[3] = 40;
	_111.stats[4] = 45;
	_111.types[0] = 4;
	_111.types[1] = 5;
	dex[111] = _111;


	Species _112;
	_112.name = "Chansey";
	_112.stats[0] = 250;
	_112.stats[1] = 5;
	_112.stats[2] = 5;
	_112.stats[3] = 50;
	_112.stats[4] = 105;
	_112.types[0] = 0;
	_112.types[1] = -1;
	dex[112] = _112;


	Species _113;
	_113.name = "Tangela";
	_113.stats[0] = 65;
	_113.stats[1] = 55;
	_113.stats[2] = 115;
	_113.stats[3] = 60;
	_113.stats[4] = 100;
	_113.types[0] = 10;
	_113.types[1] = -1;
	dex[113] = _113;


	Species _114;
	_114.name = "Kangaskhan";
	_114.stats[0] = 105;
	_114.stats[1] = 95;
	_114.stats[2] = 80;
	_114.stats[3] = 90;
	_114.stats[4] = 40;
	_114.types[0] = 0;
	_114.types[1] = -1;
	dex[114] = _114;


	Species _115;
	_115.name = "Horsea";
	_115.stats[0] = 30;
	_115.stats[1] = 40;
	_115.stats[2] = 70;
	_115.stats[3] = 60;
	_115.stats[4] = 70;
	_115.types[0] = 9;
	_115.types[1] = -1;
	dex[115] = _115;


	Species _116;
	_116.name = "Seadra";
	_116.stats[0] = 55;
	_116.stats[1] = 65;
	_116.stats[2] = 95;
	_116.stats[3] = 85;
	_116.stats[4] = 95;
	_116.types[0] = 9;
	_116.types[1] = -1;
	dex[116] = _116;


	Species _117;
	_117.name = "Goldeen";
	_117.stats[0] = 45;
	_117.stats[1] = 67;
	_117.stats[2] = 60;
	_117.stats[3] = 63;
	_117.stats[4] = 50;
	_117.types[0] = 9;
	_117.types[1] = -1;
	dex[117] = _117;


	Species _118;
	_118.name = "Seaking";
	_118.stats[0] = 80;
	_118.stats[1] = 92;
	_118.stats[2] = 65;
	_118.stats[3] = 68;
	_118.stats[4] = 80;
	_118.types[0] = 9;
	_118.types[1] = -1;
	dex[118] = _118;


	Species _119;
	_119.name = "Staryu";
	_119.stats[0] = 30;
	_119.stats[1] = 45;
	_119.stats[2] = 55;
	_119.stats[3] = 85;
	_119.stats[4] = 70;
	_119.types[0] = 9;
	_119.types[1] = -1;
	dex[119] = _119;


	Species _120;
	_120.name = "Starmie";
	_120.stats[0] = 60;
	_120.stats[1] = 75;
	_120.stats[2] = 85;
	_120.stats[3] = 115;
	_120.stats[4] = 100;
	_120.types[0] = 9;
	_120.types[1] = 12;
	dex[120] = _120;


	Species _121;
	_121.name = "Mr. Mime";
	_121.stats[0] = 40;
	_121.stats[1] = 45;
	_121.stats[2] = 65;
	_121.stats[3] = 90;
	_121.stats[4] = 100;
	_121.types[0] = 12;
	_121.types[1] = -1;
	dex[121] = _121;


	Species _122;
	_122.name = "Scyther";
	_122.stats[0] = 70;
	_122.stats[1] = 110;
	_122.stats[2] = 80;
	_122.stats[3] = 105;
	_122.stats[4] = 55;
	_122.types[0] = 6;
	_122.types[1] = 2;
	dex[122] = _122;


	Species _123;
	_123.name = "Jynx";
	_123.stats[0] = 65;
	_123.stats[1] = 50;
	_123.stats[2] = 35;
	_123.stats[3] = 95;
	_123.stats[4] = 95;
	_123.types[0] = 13;
	_123.types[1] = 12;
	dex[123] = _123;


	Species _124;
	_124.name = "Electabuzz";
	_124.stats[0] = 65;
	_124.stats[1] = 83;
	_124.stats[2] = 57;
	_124.stats[3] = 105;
	_124.stats[4] = 85;
	_124.types[0] = 11;
	_124.types[1] = -1;
	dex[124] = _124;


	Species _125;
	_125.name = "Magmar";
	_125.stats[0] = 65;
	_125.stats[1] = 95;
	_125.stats[2] = 57;
	_125.stats[3] = 93;
	_125.stats[4] = 85;
	_125.types[0] = 8;
	_125.types[1] = -1;
	dex[125] = _125;


	Species _126;
	_126.name = "Pinsir";
	_126.stats[0] = 65;
	_126.stats[1] = 125;
	_126.stats[2] = 100;
	_126.stats[3] = 85;
	_126.stats[4] = 55;
	_126.types[0] = 6;
	_126.types[1] = -1;
	dex[126] = _126;


	Species _127;
	_127.name = "Tauros";
	_127.stats[0] = 75;
	_127.stats[1] = 100;
	_127.stats[2] = 95;
	_127.stats[3] = 110;
	_127.stats[4] = 70;
	_127.types[0] = 0;
	_127.types[1] = -1;
	dex[127] = _127;


	Species _128;
	_128.name = "Magikarp";
	_128.stats[0] = 20;
	_128.stats[1] = 10;
	_128.stats[2] = 55;
	_128.stats[3] = 80;
	_128.stats[4] = 20;
	_128.types[0] = 9;
	_128.types[1] = -1;
	dex[128] = _128;


	Species _129;
	_129.name = "Gyarados";
	_129.stats[0] = 95;
	_129.stats[1] = 125;
	_129.stats[2] = 79;
	_129.stats[3] = 81;
	_129.stats[4] = 100;
	_129.types[0] = 9;
	_129.types[1] = 2;
	dex[129] = _129;


	Species _130;
	_130.name = "Lapras";
	_130.stats[0] = 130;
	_130.stats[1] = 85;
	_130.stats[2] = 80;
	_130.stats[3] = 60;
	_130.stats[4] = 95;
	_130.types[0] = 9;
	_130.types[1] = 13;
	dex[130] = _130;


	Species _131;
	_131.name = "Ditto";
	_131.stats[0] = 48;
	_131.stats[1] = 48;
	_131.stats[2] = 48;
	_131.stats[3] = 48;
	_131.stats[4] = 48;
	_131.types[0] = 0;
	_131.types[1] = -1;
	dex[131] = _131;


	Species _132;
	_132.name = "Eevee";
	_132.stats[0] = 55;
	_132.stats[1] = 55;
	_132.stats[2] = 50;
	_132.stats[3] = 55;
	_132.stats[4] = 65;
	_132.types[0] = 0;
	_132.types[1] = -1;
	dex[132] = _132;


	Species _133;
	_133.name = "Vaporeon";
	_133.stats[0] = 130;
	_133.stats[1] = 65;
	_133.stats[2] = 60;
	_133.stats[3] = 65;
	_133.stats[4] = 110;
	_133.types[0] = 9;
	_133.types[1] = -1;
	dex[133] = _133;


	Species _134;
	_134.name = "Jolteon";
	_134.stats[0] = 65;
	_134.stats[1] = 65;
	_134.stats[2] = 60;
	_134.stats[3] = 130;
	_134.stats[4] = 110;
	_134.types[0] = 11;
	_134.types[1] = -1;
	dex[134] = _134;


	Species _135;
	_135.name = "Flareon";
	_135.stats[0] = 65;
	_135.stats[1] = 130;
	_135.stats[2] = 60;
	_135.stats[3] = 65;
	_135.stats[4] = 110;
	_135.types[0] = 8;
	_135.types[1] = -1;
	dex[135] = _135;


	Species _136;
	_136.name = "Porygon";
	_136.stats[0] = 65;
	_136.stats[1] = 60;
	_136.stats[2] = 70;
	_136.stats[3] = 40;
	_136.stats[4] = 75;
	_136.types[0] = 0;
	_136.types[1] = -1;
	dex[136] = _136;


	Species _137;
	_137.name = "Omanyte";
	_137.stats[0] = 35;
	_137.stats[1] = 40;
	_137.stats[2] = 100;
	_137.stats[3] = 35;
	_137.stats[4] = 90;
	_137.types[0] = 5;
	_137.types[1] = 9;
	dex[137] = _137;


	Species _138;
	_138.name = "Omastar";
	_138.stats[0] = 70;
	_138.stats[1] = 60;
	_138.stats[2] = 125;
	_138.stats[3] = 55;
	_138.stats[4] = 115;
	_138.types[0] = 5;
	_138.types[1] = 9;
	dex[138] = _138;


	Species _139;
	_139.name = "Kabuto";
	_139.stats[0] = 30;
	_139.stats[1] = 80;
	_139.stats[2] = 90;
	_139.stats[3] = 55;
	_139.stats[4] = 45;
	_139.types[0] = 5;
	_139.types[1] = 9;
	dex[139] = _139;


	Species _140;
	_140.name = "Kabutops";
	_140.stats[0] = 60;
	_140.stats[1] = 115;
	_140.stats[2] = 105;
	_140.stats[3] = 80;
	_140.stats[4] = 70;
	_140.types[0] = 5;
	_140.types[1] = 9;
	dex[140] = _140;


	Species _141;
	_141.name = "Aerodactyl";
	_141.stats[0] = 80;
	_141.stats[1] = 105;
	_141.stats[2] = 65;
	_141.stats[3] = 130;
	_141.stats[4] = 60;
	_141.types[0] = 5;
	_141.types[1] = 2;
	dex[141] = _141;


	Species _142;
	_142.name = "Snorlax";
	_142.stats[0] = 160;
	_142.stats[1] = 110;
	_142.stats[2] = 65;
	_142.stats[3] = 30;
	_142.stats[4] = 65;
	_142.types[0] = 0;
	_142.types[1] = -1;
	dex[142] = _142;


	Species _143;
	_143.name = "Articuno";
	_143.stats[0] = 90;
	_143.stats[1] = 85;
	_143.stats[2] = 100;
	_143.stats[3] = 85;
	_143.stats[4] = 125;
	_143.types[0] = 13;
	_143.types[1] = 2;
	dex[143] = _143;


	Species _144;
	_144.name = "Zapdos";
	_144.stats[0] = 90;
	_144.stats[1] = 90;
	_144.stats[2] = 85;
	_144.stats[3] = 100;
	_144.stats[4] = 125;
	_144.types[0] = 11;
	_144.types[1] = 2;
	dex[144] = _144;


	Species _145;
	_145.name = "Moltres";
	_145.stats[0] = 90;
	_145.stats[1] = 100;
	_145.stats[2] = 90;
	_145.stats[3] = 90;
	_145.stats[4] = 125;
	_145.types[0] = 8;
	_145.types[1] = 2;
	dex[145] = _145;


	Species _146;
	_146.name = "Dratini";
	_146.stats[0] = 41;
	_146.stats[1] = 64;
	_146.stats[2] = 45;
	_146.stats[3] = 50;
	_146.stats[4] = 50;
	_146.types[0] = 14;
	_146.types[1] = -1;
	dex[146] = _146;


	Species _147;
	_147.name = "Dragonair";
	_147.stats[0] = 61;
	_147.stats[1] = 84;
	_147.stats[2] = 65;
	_147.stats[3] = 70;
	_147.stats[4] = 70;
	_147.types[0] = 14;
	_147.types[1] = -1;
	dex[147] = _147;


	Species _148;
	_148.name = "Dragonite";
	_148.stats[0] = 91;
	_148.stats[1] = 134;
	_148.stats[2] = 95;
	_148.stats[3] = 80;
	_148.stats[4] = 100;
	_148.types[0] = 14;
	_148.types[1] = 2;
	dex[148] = _148;


	Species _149;
	_149.name = "Mewtwo";
	_149.stats[0] = 106;
	_149.stats[1] = 110;
	_149.stats[2] = 90;
	_149.stats[3] = 130;
	_149.stats[4] = 154;
	_149.types[0] = 12;
	_149.types[1] = -1;
	dex[149] = _149;


	Species _150;
	_150.name = "Mew";
	_150.stats[0] = 100;
	_150.stats[1] = 100;
	_150.stats[2] = 100;
	_150.stats[3] = 100;
	_150.stats[4] = 100;
	_150.types[0] = 12;
	_150.types[1] = -1;
	dex[150] = _150;
	return dex;
}
