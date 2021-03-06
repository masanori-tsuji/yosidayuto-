#ifndef _TITLE_H_
#define _TITLE_H_
//----------------------------------------------
//ヘッダーファイル
//----------------------------------------------
#include "main.h"
#include "scene.h"
//----------------------------------------------
//マクロ定義
//----------------------------------------------
#define MAX_TITLE 1
#define MAX_PATTERN 2		//アニメーションの最大枚数

//----------------------------------------------
//前置処理
//----------------------------------------------
class CScene2d;
//------------------------------------
//クラス処理
//------------------------------------
class CTitle :public CScene
{
public:
	CTitle();							//コンストラクタ
	~CTitle();							//デストラクタ

	static HRESULT	Load(void);		//テクスチャ読み込み
	static void		Unload(void);	//テクスチャの破棄
	static CTitle	*Create(void);	//生成処理

	HRESULT			Init(void);		//初期化処理
	void			Uninit(void);	//終了処理
	void			Update(void);	//更新処理
	void			Draw(void);		//描画処理

private:

	static LPDIRECT3DTEXTURE9	m_apTexture[MAX_TITLE];	//テクスチャへのポインタ
	CScene2d					*m_apScene2D[MAX_TITLE];	//2Dポリゴンの数
	
	//typedef struct
	//{
	//	D3DXVECTOR3				m_Pos;			//位置
	//	D3DXVECTOR3				m_Size;			//サイズ
	//}DATA;
	//static	DATA				m_Data[MAX_TITLE];	//ポリゴンデータ
	
	LPDIRECT3DVERTEXBUFFER9		m_pVtxBuff;				//頂点バッファへのポインタ
	int							m_nCounterAnim;			//アニメーションカウンター
	int							m_nPatternAnim[MAX_PATTERN];			//アニメーションパターンNo
	bool						m_bFade;
};



#endif