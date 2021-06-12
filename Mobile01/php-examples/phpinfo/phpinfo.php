<?php

// echo "hello";

phpinfo();

// PHPLIB 1.1 + mongodb-1.2 or later
/*
$client = new MongoDB\Client(
    'mongodb://river:river@gettingstarted-shard-00-00.pvk3r.mongodb.net:27017,gettingstarted-shard-00-01.pvk3r.mongodb.net:27017,gettingstarted-shard-00-02.pvk3r.mongodb.net:27017/sample_mflix?ssl=true&replicaSet=atlas-kvze8q-shard-0&authSource=admin&retryWrites=true&w=majority');

echo "test";

$db = $client->test;
*/


// PHPLIB 1.3 + mongodb-1.4 or later
/*
$client = new MongoDB\Client(
    'mongodb+srv://river:river@gettingstarted.pvk3r.mongodb.net/GettingStarted?retryWrites=true&w=majority');

echo "test";

$db = $client->test;
*/

// echo "hello";

?>
