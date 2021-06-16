<?php

require 'vendor/autoload.php';

// $dbhost = 'river:river@gettingstarted-shard-00-00.pvk3r.mongodb.net:27017';
$dbhost = 'localhost:27017';

// $dbname = 'GettingStarted';
$dbname = 'local';

// echo (class_exists("MongoDB\Driver\Manager")), "<br>";

// echo "test<br>";

$mongoClient = new MongoDB\Driver\Manager('mongodb://' . $dbhost);

// $mongoClient = new MongoClient('mongodb://' . $dbhost);

// echo "test1<br>";

$db = $mongoClient->$dbname;

// echo "Hello World!<br>";

$collection = $db->startup_log;

echo "test2";

?>
