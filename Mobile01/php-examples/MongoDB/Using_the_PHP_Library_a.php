<?php
// require 'vendor/autoload.php'; // include Composer's autoloader

$mongoClient = new MongoDB\Client("mongodb://river:river@gettingstarted.pvk3r.mongodb.net:27017");

// **************************************
// MongoDB 伺服器設定
// $dbhost = 'localhost';
// $dbhost = 'river:river@gettingstarted-shard-00-00.pvk3r.mongodb.net:27017';

// $dbname = 'test';
$dbname = 'GettingStarted';

// 連線到 MongoDB 伺服器
// $mongoClient = new MongoClient('mongodb://' . $dbhost);

// $mongoClient = new MongoDB\Driver\Manager('mongodb://' . $dbhost);

$db = $mongoClient->$dbname;

echo "test1";


$collection = $db->sample_mflix->sessions;

$result = $collection->find( [ 'user_id' => 't3qulfeem@kwiv5.6ur' ] );

foreach ($result as $entry) {
    echo $entry['_id'], ': ', $entry['jwt'], "\n";
}

?>
