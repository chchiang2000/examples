<?php

require 'vendor/autoload.php';

// $dbhost = 'river:river@gettingstarted-shard-00-00.pvk3r.mongodb.net:27017';
$dbhost = 'localhost:27017';

// $dbname = 'GettingStarted';
$dbname = 'test';

echo (class_exists("MongoDB\Driver\Manager")), "<br>";

echo "test";

$mongoClient = new MongoDB\Driver\Manager('mongodb://' . $dbhost);

$db = $mongoClient->$dbname;

echo "Hello World!";
?>
