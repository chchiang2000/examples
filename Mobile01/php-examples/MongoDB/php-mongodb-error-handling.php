<?php
// MongoDB 伺服器設定
$dbhost = 'localhost';
$dbname = 'test';

// 連線到 MongoDB 伺服器
/*
$mongoClient = new MongoClient('mongodb://' . $dbhost)
	or exit("connect to MongoDB $dbhost error!");
*/

$mongoClient = new MongoDB\Driver\Manager('mongodb://' . $dbhost)
	or exit("connect to MongoDB $dbhost error!");

$db = $mongoClient->$dbname;

/*
// 取得 demo 這個 collection
$cDemo = $db->demo;

// 要儲存的資料
$record = array(
  'firstName' => 'G.T.',
  'lastName' => 'Wang',
  'roles' => array('developer', 'webmaster')
);

// 將資料儲存至 demo 這個 collection 中
$cDemo->save($record);

// 設定查詢條件
$queryCondition = array(
  'firstName' => 'G.T.',
  'lastName' => 'Wang'
);

// 查詢資料
$result = $cDemo->findOne($queryCondition);

// 輸出資料
print_r($result);
*/

?>
