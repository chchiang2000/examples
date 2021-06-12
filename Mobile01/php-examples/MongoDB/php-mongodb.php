<?php
// MongoDB 伺服器設定
// $dbhost = 'localhost';
$dbhost = 'river:river@gettingstarted-shard-00-00.pvk3r.mongodb.net:27017';

// $dbname = 'test';
$dbname = 'GettingStarted';

// 連線到 MongoDB 伺服器
// $mongoClient = new MongoClient('mongodb://' . $dbhost);

$mongoClient = new MongoDB\Driver\Manager('mongodb://' . $dbhost);

// echo "test";

$db = $mongoClient->$dbname;


// 取得 demo 這個 collection
// $cDemo = $db->demo;

// 取得 sample_mflix 的 movies collection
$cDemo = $db->sample_mflix.movies;

// 要儲存的資料
/*
$record = array(
  'firstName' => 'G.T.',
  'lastName' => 'Wang',
  'roles' => array('developer', 'webmaster')
);
*/

// 將資料儲存至 demo 這個 collection 中
// $cDemo->save($record);

// 設定查詢條件
/*
$queryCondition = array(
  'firstName' => 'G.T.',
  'lastName' => 'Wang'
);
*/

$queryCondition = array(
  'title' => 'Blacksmith Scene',
  'fullplot' => 'A stationary camera looks at a large anvil with a blacksmith behind it...'
);

// 查詢資料
$result = $cDemo->findOne($queryCondition);

echo "test";

// 輸出資料
print_r($result);

echo "hello";

?>
