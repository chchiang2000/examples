<?php

/*
$client = new MongoDB\Client(
    'mongodb+srv://river:river@gettingstarted-shard-00-00.pvk3r.mongodb.net/GettingStarted?retryWrites=true&w=majority'
);

$db = $client->test;
*/

// **************************************
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

$collection = $db->sample_mflix->sessions;

echo "hello1";

// $document = $collection->findOne(['_id' => 'ObjectId("5a97f9c91c807bb9c6eb5fb4")']);
$document = $collection->findOne(['user_id' => 't3qulfeem@kwiv5.6ur']);

echo "hello2";

var_dump($document);

echo "hello3";

?>
