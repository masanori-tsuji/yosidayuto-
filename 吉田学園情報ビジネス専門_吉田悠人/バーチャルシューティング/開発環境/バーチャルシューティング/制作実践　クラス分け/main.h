#pragma once
//=============================================================================
//
// メイン処理 [main.h]　
// ポリゴン処理 
//
//=============================================================================

//----------------------------------------------------------------------------------------
// ヘッダファイルのインクルード
//----------------------------------------------------------------------------------------
#include <Windows.h>
#include<dinput.h>
#include "d3dx9.h"
#include"XAudio2.h"		//サウンド処理

//----------------------------------------------------------------------------------------
// ライブラリファイルのリンク
//----------------------------------------------------------------------------------------
#pragma comment(lib, "d3d9.lib")
#pragma comment(lib, "d3dx9.lib")
#pragma comment(lib, "dxguid.lib")
#pragma comment(lib, "winmm.lib")
#pragma comment(lib,"dinput8.lib")//入力処理に必要
//----------------------------------------------------------------------------------------
// マクロ定義
//----------------------------------------------------------------------------------------
#define SCREEN_WIDTH	(1280)
#define SCREEN_HEIGHT	(720)

#define FVF_VERTEX_2D (D3DFVF_XYZRHW | D3DFVF_DIFFUSE|D3DFVF_TEX1)
#define MAX_SCENE 500			//ポリゴンの最大数
#define DIRECTINPUT_VERSION (0x0800) 
//*****************************************************************************
//前方宣言
//*****************************************************************************
//class CRenderer;
//class CScene;
//*****************************************************************************
// プロトタイプ宣言
//*****************************************************************************
int GetFPS(void);				//FPSの取得

//----------------------------------------------------------------------------------------
// グローバル変数
//----------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------
// 構造体定義
//----------------------------------------------------------------------------------------
typedef struct
{
	D3DXVECTOR3		pos;//頂点座標
	float			rhw;//座標変換要係数（１．０ｆで固定）
	D3DCOLOR		col;//頂点カラー
	D3DXVECTOR2		tex;//テクスチャ座標
}VERTEX_2D;