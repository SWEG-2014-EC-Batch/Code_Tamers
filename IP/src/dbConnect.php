<?php
    class Database {
        private $host = "movie_db";
        private $db_name = "docker_db";
        private $username = "root";
        private $password = "1234dbq";
        private static $instance = null;
        private $conn;
    
        // Private constructor to prevent multiple instances
        private function __construct() {
            $this->conn = new PDO("mysql:host=" . $this->host . ";dbname=" . $this->db_name, $this->username, $this->password);
            $this->conn->exec("set names utf8");
        }
    
        // Get the single instance of the database connection
        public static function getInstance() {
            if (!self::$instance) {
                self::$instance = new Database();
            }
    
            return self::$instance;
        }
    
        // Get the connection
        public function getConnection() {
            return $this->conn;
        }
    }

    






    // class dbConnect {
    //     private $servername = "db";
    //     private $dbname = 'docker_database';
    //     private $username = "root";
    //     private $password = "1234dbq";
    //     public $conn;

    //     public function connect() {
    //         $this->conn = null;

    //         try {
    //             $this->conn = new PDO('mysql:host=' . $this->servername . ';dbname = '. $this->dbname , $this->username, $this->password);
    //             $this->conn->exec("set names utf8");
    //         } catch(PDOException $e) {
    //             echo "Connection failed: " . $e->getMessage();
    //         }
    //         return $this->conn;
    //     }
    // }
?>
