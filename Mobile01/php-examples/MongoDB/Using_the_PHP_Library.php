<?php

require 'vendor/autoload.php';

// $dbhost = 'river:river@gettingstarted-shard-00-00.pvk3r.mongodb.net:27017';
// $dbhost = 'localhost:27017';

// $dbname = 'GettingStarted';
// $dbname = 'local';

// echo (class_exists("MongoDB\Driver\Manager")), "<br>";

echo "test<br>";

// $mongoClient = new MongoDB\Driver\Manager('mongodb://' . $dbhost);

// $mongoClient = new MongoClient('mongodb://' . $dbhost);

echo "test1<br>";

// $db = $mongoClient->$dbname;
$database = (new  MongoDB\Client)->local;

echo "Hello World!<br>";

$cursor = $database->command(['listCollections' => 1]);

foreach ($cursor as $collection) {
    echo $collection['name'], "\n";
}

echo "<br>";

// $collection = $db->startup_log;

// $collection = $db->sample_mflix->sessions;

// $collection = (new MongoDB\Client)->local->startup_log;

// $collection = (new MongoDB\Client)->GettingStarted->sample_mflix->sessions;

echo "test2<br>";

// $document = $collection->find( [ 'user_id' => 't3qulfeem@kwiv5.6ur' ] );

// $document = $collection>findOne(['user_id' => 't3qulfeem@kwiv5.6ur']);

echo "test3<br>";

// var_dump($document);
// var_dump($collection);
var_dump($cursor);

echo "<br>";

echo "test4<br>";

?>
