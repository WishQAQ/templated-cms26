<?php
$z[0]=Array("field","\$ID = @me; \$sql = \"SELECT * FROM `dede_arctype` WHERE id=\$ID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); \$relID = \"\$row[reid]\"; if(\$relID == 0) {@me = \$row[typename];}else{\$sql = \"SELECT `typename` FROM `dede_arctype` WHERE id=\$relID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); @me = \$row[typename];}",141,525);
$z[0][4]['name']="typeid";
$z[0][4]['runphp']="yes";
$z[1]=Array("channel","\r\n        <li><a href=\"[field:typeurl/]\" target=\"\">[field:typename/]</a><i></i></li>\r\n        ",601,818);
$z[1][4]['type']="son";
$z[1][4]['currentstyle']="<li class='current'><a href='~typelink~'>~typename~</a><i></i></li>";

?>