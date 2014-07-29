
#include <string>
#include "pict.h" // for ePicType
class cDialog;

enum eStrType {STRT_MONST, STRT_ITEM, STRT_TER, STRT_BUTTON};

bool cre(short val,short min,short max,const char *text1,const char *text2,cDialog* parent) ;
void display_strings(char *text1, char *text2,
	char *title,short sound_num,short graphic_num,short graphic_type,cDialog* parent);
void put_choice_pics(short g_type);
pic_num_t choose_graphic(short cur_choice,ePicType g_type,cDialog* parent);
short choose_text_res(std::string res_list,short first_t,short last_t,short cur_choice,cDialog* parent,const char *title);
short choose_text(eStrType list, short cur_choice, cDialog* parent,const char* title);
void edit_text_str(short which_str,short mode);
void edit_spec_enc(short which_node,short mode,cDialog* parent);
short get_fresh_spec(short which_mode);
void edit_spec_text(short mode,short *str1,short *str2,cDialog* parent);
void edit_dialog_text(short mode,short *str1,cDialog* parent);
void edit_spec_text(short mode,short *str1,short *str2,cDialog* parent);
short edit_special_num(short mode,short what_start);
void edit_scen_intro();
bool edit_area_rect_str(short which_str,short mode);
void make_cursor_sword() ;
void edit_dialog_text(short mode,short *str1,cDialog* parent);

