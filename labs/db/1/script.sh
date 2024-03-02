#!/bin/bash

docker-compose up -d

echo "[OK] Waiting for MySQL to be ready..."
while ! docker-compose exec mysql-db mysqladmin ping -h"localhost" --silent; do
    sleep 1
done

docker-compose exec mysql-db mysql -u root -ppassword test <<EOF
-- Create the disciplines table
CREATE TABLE disciplines (
  discipline_id INT AUTO_INCREMENT PRIMARY KEY,
  discipline_name VARCHAR(255) NOT NULL,
  report_form ENUM('credit', 'exam') NOT NULL
);

-- Create the student_info table
CREATE TABLE student_info (
  student_id INT AUTO_INCREMENT PRIMARY KEY,
  student_name VARCHAR(255) NOT NULL,
  student_email VARCHAR(255) NOT NULL,
  birthdate DATE NOT NULL
);

-- Create the marks table with foreign keys
CREATE TABLE marks (
  mark_id INT AUTO_INCREMENT PRIMARY KEY,
  discipline_id INT,
  student_id INT,
  mark_value INT CHECK(mark_value >= 0 AND mark_value <= 100) NOT NULL,
  FOREIGN KEY (discipline_id) REFERENCES disciplines(discipline_id),
  FOREIGN KEY (student_id) REFERENCES student_info(student_id)
);

EOF

# Insert some data into the tables
docker-compose exec mysql-db mysql -u root -ppassword test <<EOF
-- Insert data into the disciplines table
INSERT INTO disciplines (discipline_name, report_form) VALUES
('Math', 'credit'),
('Physics', 'exam'),
('Chemistry', 'credit'),
('Biology', 'exam');

-- Insert data into the student_info table
INSERT INTO student_info (student_name, student_email, birthdate) VALUES
('John Doe', 'foo@a.com', '1990-01-01'),
('Jane Doe', 'facv@da.com', '1991-01-01'),
('Alice', 'ddad@dad.com', '1992-01-01'),

-- Insert data into the marks table
INSERT INTO marks (discipline_id, student_id, mark_value) VALUES
(1, 1, 90),
(1, 2, 80),
(1, 3, 70),
(2, 1, 60),
(2, 2, 70),
(2, 3, 80),
(3, 1, 90),
(3, 2, 80),
(3, 3, 70),
(4, 1, 60),
(4, 2, 70),
(4, 3, 80);
EOF

echo "[OK] MySQL is ready!"

docker-compose exec mysql-db mysql -u root -ppassword test <<EOF > ./result.txt
-- Select all the data from the disciplines table
SELECT * FROM disciplines;

-- Select all the data from the student_info table
SELECT * FROM student_info;

-- Select all the data from the marks table
SELECT * FROM marks;
EOF

echo "[OK] Data has been inserted into the tables!"

cat ./result.txt

# Stop the MySQL container
docker-compose down -v
