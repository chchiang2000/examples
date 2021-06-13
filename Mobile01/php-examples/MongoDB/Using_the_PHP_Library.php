<?php

$dbhost = 'river:river@gettingstarted-shard-00-00.pvk3r.mongodb.net:27017';

$dbname = 'GettingStarted';

echo (class_exists("MongoDB\Driver\Manager")), "<br>";

$mongoClient = new MongoDB\Driver\Manager('mongodb://' . $dbhost);

$db = $mongoClient->$dbname;

echo "Hello World!";
?>
