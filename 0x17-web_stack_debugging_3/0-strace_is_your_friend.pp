# web stack debugging today is a Wordpress website running on a LAMP stack

exec { 'Fix wordpress site':
  command  => "sudo sed -i 's/.phpp/.php/' /var/www/html/wp-settings.php",
  provider => shell,
}
