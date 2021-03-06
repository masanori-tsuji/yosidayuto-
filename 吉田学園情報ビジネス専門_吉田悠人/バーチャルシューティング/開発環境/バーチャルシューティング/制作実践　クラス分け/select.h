#ifndef _SELECT_H_
#define _SELECT_H_

#include "main.h"
#include "scene.h"
//----------------------------------------------
//マクロ定義
//----------------------------------------------
#define MAX_NUMBER 2

//------------------------------------
//前置処理
//------------------------------------
class CSelectBg;
class CButton;
class CWindow;
class CScore;
class CNumber;
class CWeapon_Ui;
class CTelopText;
//------------------------------------
//クラス処理
//------------------------------------
class CSelect:public CScene
{
public:
	CSelect();	//コンストラクタ
	~CSelect();	//デストラクタ
	static CSelect*	Create(void);	//生成処理

	typedef enum
	{
		NUMBER_TYPE_LIEF = 0,
		NUMBER_TYPE_SPEED,
		NUMBER_TYPE_MAX
	}NUMBER_TYPE;

	HRESULT			Init(void);		//初期化処理
	void			Uninit(void);	//終了処理
	void			Update(void);	//更新処理
	void			Draw(void);		//描画処理
	static CNumber	*GetNumber(NUMBER_TYPE NumberType);	//ナンバーゲット
	static CWeapon_Ui*GetWeaponUi(int nWeaponUi);		//ウェポンUIゲット
	static CScore	*GetScore(void);					//スコアゲット
	static CScore	*GetMinusScore(void);				//消費スコアゲット

	static CTelopText *GetpTelopText(void) { return m_pTelopText; }
private:
	static	CWeapon_Ui			*m_pWindowUi[2];
	CWindow				*m_pWindow;
	CSelectBg			*m_pSelectBg;				//背景クラス
	CButton				*m_pButton[6];				//ボタンクラス
	static CScore		*m_pScore;					//スコアクラス
	static CScore		*m_pMinusScore;			//消費スコアクラス
	static CNumber		*Number[NUMBER_TYPE_MAX];	//ナンバークラス
	static CTelopText	*m_pTelopText;				//テロップテキストクラス
};


#endif