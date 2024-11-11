# 企画
DDONのハイセプターのようなアクションゲームを作りたい
### DDONにおけるハイセプターの面白さ、足りないところ

#### 面白い点
- 魔法と剣技のアクションのスピード感
- 縦横空間での移動の激しさ、空中アクション
#### 足りないところ
- 魔法の種類
- 使えるアビリティが4つ
- 魔法を使用したフィールドギミック
### 解決策
- 状態異常魔法、移動魔法の追加
- 職業固有アクションを減らし、自由なアビリティ配置を実現する
- 移動魔法などでフィールドギミックのスキップなどオープンワールド的な楽しみ方
### 作るべきゲームの概要
- プレイヤーは魔法剣士となり世界各地を冒険する
- フィールドやダンジョンにアビリティの書が配置される
- レベルの増加、装備の向上、アビリティレベルの上昇によって強くなる
- アビリティは８つセットできる
- アビリティは攻撃、バフデバフ、移動、ギミックなど多岐にわたる
- アビリティを駆使して、フィールドを探索、敵を倒す
---
# 要件定義
## 開発完了要件(α版)
### プレイヤー
- レベル、ステータスの存在
- 装備機能の実装
- 移動、ジャンプ，シンプルな攻撃、インタラクト機能
- プレイヤーが任意にセットできるアビリティ機能
### アビリティ
- 5のアビリティ
  - ２の攻撃アビリティ、バフ、デバフ、移動系
### アイテム
- 3のアイテム
  - 使用アイテム、アビリティの書、だいじなもの(鍵などフラグ管理アイテム)
### 装備 
- 5の装備
  - 頭、上半身、下半身、アクセサリー１、アクセサリー２
### 敵
- 2の敵
### フィールド
- １つのダンジョン
  - ２つのギミック
---
## 開発環境
UnrealEngineを使用
## タスク分解
| 機能      | 説明                                         | 優先度 |
| -------- | -------------------------------------------- | ------ |
| 基本操作  | 移動、ジャンプ，攻撃、インタラクト | 1      |
|ステータス機能の実装| 再利用可能なステータス|1|
|敵の作成|敵のステータス，攻撃パターン|1|
|アビリティ作成|装備可能，アビリティの作成|1|
|アイテムの作成|アイテムの作成|1|
|装備|装備の作成|2|
|装備変更機能の作成|装備品を装備，外す|3|
|フィールドの作成|ギミックを持つフィールド|3|

## スケジュール
|タスク|予定|
|---|---|
|外部設計|3日|
|内部設計(全体)|3日|
|各内部設計(詳細)|7日|
|各実装，テスト|7日|


## 業務フロー
- 外部設計
- 内部設計(全体)
- 各機能ごと
  -  内部設計詳細
  - 実装
  - テスト