<!--
SPDX-FileCopyrightText: 2024 Pablo Portas López <pablo.portas@udc.es>

SPDX-License-Identifier: CC-BY-NC-4.0
-->

# El Compilador - CLion

<tldr>Configura tu entorno de programación y compilador CLion by JetBrains.</tldr>

<tip>Copyright Material Original © Francisco Abel Cedrón Santaeufemia</tip>

Para poder trabajar en tu ordenador con el entorno de programación y compilador CLion, es necesario crear una cuenta en
JetBrains [Enlace](https://jetbrains.com). Cada cuenta es individual y debe hacerse con el email de la UDC de cada
alumno. Con esta cuenta creada se puede utilizar el entorno de desarrollo tanto en vuestros ordenadores personales como
en vuestra cuenta individual en los ordenadores de los laboratorios de la Facultad. Para la solicitud de la cuenta y la
configuración disponéis de los siguientes tutoriales.

<procedure>
<title>Creación de una cuenta de JetBrains</title>
<step>

Para poder crear una cuenta en JetBrains es necesario acudir a la web [](https://jetbrains.com). En la página de
JetBrains es necesario seleccionar el icono de usuario para poder acceder a la página de login.

![Web-JetBrains.png](Web-JetBrains.png){thumbnail="true"}

</step>
<step>

Una vez en la página de login hay que introducir el correo de la **UDC** en el formulario **“Not registered yet?”** para
después pulsar a continuación el botón de **Sign Up**.

![Login-JetBrains.png](Login-JetBrains.png){thumbnail="true"}

</step>
<step>

A continuación es necesario accede al correo de la **UDC** (https://outlook.office.com) para acceder al mensaje que
habrá
enviado JetBrains. En el correo recibido por JetBrains hay un enlace con el texto **“Confirm your account”** para poder
confirmar la cuenta creada.

![ConfirmMail-JetBrains.png](ConfirmMail-JetBrains.png){thumbnail="true"}

</step>
<step>

En esta página se introducen los datos de la cuenta y la contraseña para poder usar todos los productos que ofrece
JetBrains para después pulsar el botón de **Submit**.

![Welcome-JetBrains.png](Welcome-JetBrains.png){thumbnail="true"}

</step>
<step>

A continuación, se redirecciona a una página que indica que no hay ninguna licencia. Ahora toca el turno de acceder
obtener la licencia de estudiante, para ello es necesario pulsar en el enlace **“Apply for a free student or teacher
license”**.

![NoLicenses-JetBrains.png](NoLicenses-JetBrains.png){thumbnail="true"}

</step>
<step>

Para poder acceder a la licencia de estudiantes es necesario pulsar el botón de **Apply Now**.

![ApplyLicense-JetBrains.png](ApplyLicense-JetBrains.png){thumbnail="true"}

</step>
<step>

En este paso es necesario indicar que se es estudiante (**I’m a student**) y rellenar los campos del formulario para
después pulsar el botón de **“Apply for free products”**.

![StudentLicense-JetBrains.png](StudentLicense-JetBrains.png){thumbnail="true"}

</step>
<step>

Al consultar el correo de la **UDC** se podrá ver que hay un correo para confirmar la adquisición del pack educacional
para lo que habrá que ir al enlace **“Confirm request”**.

![EmailStudentLicense-JetBrains.png](EmailStudentLicense-JetBrains.png){thumbnail="true"}

</step>
<step>

El siguiente paso es aceptar la licencia para proceder con la activación del producto

![AgreementLicense1-JetBrains.png](AgreementLicense1-JetBrains.png){thumbnail="true"}

![AgreementLicense2-JetBrains.png](AgreementLicense2-JetBrains.png){thumbnail="true"}

</step>
</procedure>

### Configuración CLion

<tabs>
<tab title="Windows" filter="win">
<emphasis>Guía de configuración para instalar CLion en un equipo con Windows 10 de 64 bits</emphasis>
<note>Esta guía sigue siendo compatible con versiones posteriores de Windows (64 bits)</note>
<procedure>
<step>

**Preparación del entorno**

El primer paso es instalar el compilador y una serie de herramientas que permitirán compilar, ejecutar y depurar los
programas creados mediante un IDE.

Para hacer una instalación rápida y sencilla se recomienda usar **MinGW**. Para poder descargarlo basta con ir al
siguiente
enlace [](https://sourceforge.net/projects/mingw-w64/files/) y descargar el archivo _**x86_64-posix-seh**_.

![MiniGW.png](MiniGW.png){thumbnail="true"}

Una vez se tenga descargado el archivo hay que descomprimirlo y se dispondrá de una carpeta llamada ``mingw64`` que debe
ser copiada en ``C:\`` para que CLion pueda encontrarlo y configurar MinGW automáticamente.

</step>
<step>

**Instalación de CLion**

En el siguiente enlace se puede encontrar el archivo que permite descargar
CLion: [](https://www.jetbrains.com/es-es/clion/download/)

A continuación, solo hay que seguir el proceso de instalación como se muestra en las imágenes:

![SetupCLion1.png](SetupCLion1.png)

![SetupCLion2.png](SetupCLion2.png)

Se recomienda habilitar todas las opciones de instalación:

![SetupCLion3.png](SetupCLion3.png){thumbnail="true"}

![SetupCLion4.png](SetupCLion4.png)

![SetupCLion5.png](SetupCLion5.png)

Para evitar posibles problemas con alguna configuración que no se completase es recomendable reiniciar el equipo.

![SetupCLion6.png](SetupCLion6.png)

Con esto la instalación de CLion está lista.

</step>
<step>

**Configuración de CLion**

<note>

Desde mayo de 2022 JetBrains ha ido progresivamente actualizando la interfaz de usuario de sus
IDEs. <a href="https://blog.jetbrains.com/idea/2022/05/take-part-in-the-new-ui-preview-for-your-jetbrains-ide/">Blog
Post</a>

Las capturas de pantalla pueden variar del programa actual.

</note>

La primera vez que se ejecute CLion aparecerá un asistente para su configuración.

El primer paso es seleccionar la apariencia del entorno (fondo oscuro o claro). Pulsa sobre ellas para ver la
previsualización y selecciona la que sea más agradable para tu gusto.

![ConfigCLion1.png](ConfigCLion1.png)

La siguiente parte es la configuración de algunos plugins. Configúralos si sabes lo que son. En esta asignatura no
usaremos ninguno de ellos así que si no los conoces simplemente puedes pulsar Next.

![ConfigCLion2.png](ConfigCLion2.png)

La siguiente ventana que aparece también es de plugins y se recomienda no instalar ninguno a no ser que se esté
familiarizado con ellos:

![ConfigCLion3.png](ConfigCLion3.png)

Si habéis instalado MinGW como aparece en la guía CLion lo detectará automáticamente. Al principio está detectando las
herramientas necesarias. Este proceso le puede llevar un par de minutos.

![ConfigCLion4.png](ConfigCLion4.png){thumbnail="true"}

Cuando detecte toda la configuración aparecerá como en la siguiente imagen:

![ConfigCLion5.png](ConfigCLion5.png){thumbnail="true"}

Por último, es necesario introducir los datos de la cuenta que se ha creado en JetBrains.

![ConfigCLion6.png](ConfigCLion6.png){thumbnail="true"}

Ahora podrás crear un nuevo proyecto para ver si funciona correctamente. Para ello es necesario seleccionar **New
Project**.

![ConfigCLion7.png](ConfigCLion7.png)

En esta asignatura se crearán programas en C para ello es necesario seleccionar en la barra izquierda la opción de **C
Executable** (en la imagen aparece resaltada en azul).

![ConfigCLion8.png](ConfigCLion8.png){thumbnail="true"}

Una vez que termina de configurar el proyecto aparecerá la siguiente ventana con un código de ejemplo ya creado.

![ConfigCLion9.png](ConfigCLion9.png){thumbnail="true"}

En este paso es recomendable ejecutar el proyecto para ver que se logra una ejecución correcta del programa. Para ello
es necesario pulsar el botón de play verde que hay en la parte superior derecha de la pantalla. (Si no aparece en verde
es que aún está configurando el proyecto, se paciente y espera un minuto).

![ConfigCLion91.png](ConfigCLion91.png){thumbnail="true"}

Se puede ver en la imagen anterior que apareció una sección en la parte inferior y aparece el texto ``Hello, World!``
Indicando que el programa se ejecutó correctamente.

</step>
</procedure>
</tab>

<tab title="macOS" filter="macos">

<emphasis>Guía de configuración para instalar CLion en un equipo con macOS Catalina</emphasis>
<note>Esta guía sigue siendo compatible con versiones posteriores de macOS</note>

<procedure>
<step>

**Preparación del entorno**

El primer paso es instalar el compilador y una serie de herramientas que permitirán compilar, ejecutar y depurar los
programas creados mediante un IDE. Para ello es necesario tener instalado Xcode.

La instalación de Xcode se realiza a través de la App Store.

![XCodeAppStore1.png](XCodeAppStore1.png)

![XCodeAppStore2.png](XCodeAppStore2.png)

Para que se instalen las CLI requeridas para CLion, es necesario ejecutar la aplicación. Nos pedirá que aceptemos los
términos de licencia.

![XCodeAppStore3.png](XCodeAppStore3.png)

Acto seguido, Xcode instalará los componentes necesarios.

![XCodeAppStore4.png](XCodeAppStore4.png)

Una vez finalicen la instalación se puede cerrar Xcode.

</step>
<step>

**Instalación de CLion**

En el siguiente enlace se puede encontrar el archivo que permite descargar
CLion: [](https://www.jetbrains.com/es-es/clion/download/)

Al abrir el archivo se solicitará se copie en la carpeta de aplicaciones.

![CLionInstalation01.png](CLionInstalation01.png)

![CLionInstalation02.png](CLionInstalation02.png)

</step>
<step>

**Configuración de CLion**

<note>

Desde mayo de 2022 JetBrains ha ido progresivamente actualizando la interfaz de usuario de sus
IDEs. <a href="https://blog.jetbrains.com/idea/2022/05/take-part-in-the-new-ui-preview-for-your-jetbrains-ide/">Blog
Post</a>

Las capturas de pantalla pueden variar del programa actual.

</note>

La primera vez que se ejecute CLion aparecerá un asistente para su configuración.

Antes de su ejecución macOS lanza un aviso de que es una aplicación descargada de internet. Simplemente hay que pulsar
en abrir.

![CLionInstalation03.png](CLionInstalation03.png)

Una vez abierto, el primer paso será aceptar las condiciones

![CLionInstalation04.png](CLionInstalation04.png)

El siguiente paso es seleccionar la apariencia del entorno (fondo oscuro o claro). Pulsa sobre ellas para ver la
previsualización y selecciona la que sea más agradable para tu gusto.

![CLionInstalation05.png](CLionInstalation05.png)

La siguiente parte es la configuración de algunos plugins. Configúralos si sabes lo que son. En esta asignatura no
usaremos ninguno de ellos así que si no los conoces simplemente puedes pulsar Next.

![CLionInstalation06.png](CLionInstalation06.png)

La siguiente ventana que aparece también es de plugins. Se recomienda no instalar ninguno a no ser que se esté
familiarizado con ellos:

![CLionInstalation07.png](CLionInstalation07.png)

El siguiente paso es introducir la cuenta que tiene asociada la licencia de Jetbrains.

![CLionInstalation08.png](CLionInstalation08.png){thumbnail="true"}

Si habéis instalado Xcode CLion lo detectará automáticamente. Al principio está detectando las herramientas necesarias.
Este proceso le puede llevar un par de minutos.

![CLionInstalation09.png](CLionInstalation09.png)

Cuando detecte toda la configuración aparecerá como en la siguiente imagen:

![CLionInstalation10.png](CLionInstalation10.png)

Ahora podrás crear un nuevo proyecto para ver si funciona correctamente. Para ello es necesario seleccionar _New
Project_.

![CLionInstalation11.png](CLionInstalation11.png)

En esta asignatura se crearán programas en C para ello es necesario seleccionar en la barra izquierda la opción de _C
Executable_ (en la imagen aparece resaltada en azul).

![CLionInstalation12.png](CLionInstalation12.png){thumbnail="true"}

Una vez que termina de configurar el proyecto aparecerá la siguiente ventana con un código de ejemplo ya creado.

![CLionInstalation13.png](CLionInstalation13.png){thumbnail="true"}

En este paso es recomendable ejecutar el proyecto para ver que se logra una ejecución correcta del programa. Para ello
es necesario pulsar el botón de _play_ verde que hay en la parte superior derecha de la pantalla. (Si no aparece en
verde es que aún está configurando el proyecto, sé paciente y espera un minuto).

![CLionInstalation14.png](CLionInstalation14.png){thumbnail="true"}

Se puede ver en la imagen anterior que apareció una sección en la parte inferior y aparece el texto ``Hello, World!``
Indicando que el programa se ejecutó correctamente.

</step>
</procedure>
</tab>

<tab title="VDI">

<emphasis>Guía de configuración para CLion en los equipos de la FIC</emphasis>

<note>Esta guía está orientada a alumnos/as de la Facultade de Informática da Coruña <b>FIC</b>.</note>

<procedure>
<step>

**Usar CLion en las máquinas de la FIC desde los laboratorios wifi**

Para usar las máquinas del laboratorio desde un ordenador basta con conectarse a ellas a través de VDI. Los pasos de
cómo instalar y configurar el entorno están en el siguiente
enlace: [](https://axudatic.udc.gal/display/SIC/Escritorio+virtual+VDI#expand-Manuaiseguas)

Una vez se tenga instalado el VDI basta con introducir las credenciales de conexión.

![VDIConfig01.png](VDIConfig01.png)

A continuación, se selecciona la imagen de la FIC para poder acceder a la versión del sistema operativo
instalado en los laboratorios.

![VDIConfig02.png](VDIConfig02.png)

</step>
<step>

**Usar CLion en las máquinas de la FIC**

En los ordenadores de los laboratorios está instalado CLion, con lo que se puede buscar en el menú para ejecutarlo.

![VDIConfig03.png](VDIConfig03.png)

Al usarlo por primera vez se solicitará el tipo de activación. Se deja marcada la opción “Activate” para usar una
licencia y el tipo de licencia a usar es con una cuenta de JetBrains (opción “JetBrains account”). Se introducen el
correo y la contraseña de la cuenta de JetBrains creada y se pulsa el botón Activate.

![VDIConfig04.png](VDIConfig04.png){thumbnail="true"}

Si los datos introducidos son los correctos CLion se iniciará

![VDIConfig05.png](VDIConfig05.png)

Una vez se cargue CLion se puede empezar a usar. Para comprobar que se ejecuta correctamente se puede ejecutar un
programa. Para ello es necesario pulsar la opción de _“+ New Project”_.

![VDIConfig06.png](VDIConfig06.png)

En las opciones de nuevo proyecto es necesario indicar que se usará una ejecutable de C (opción
_“C Executable”_ en el menú izquierdo).

NOTA: El nombre de la carpeta donde se guarde el proyecto es el nombre que CLion usará para el proyecto creado.

![VDIConfig07.png](VDIConfig07.png){thumbnail="true"}

Si al arrancar aparece el mensaje de _“Environment (MinGW/Cygwin/Visual Studio/WSL is not selected Configure”_ es que el
entorno de C no está configurado, para configurarlo es necesario pulsar en el enlace Configure.

![VDIConfig08.png](VDIConfig08.png){thumbnail="true"}

Como las máquinas de la FIC tienen el entorno instalado solo es necesario esperar a que CLion lo encuentre.

![VDIConfig09.png](VDIConfig09.png){thumbnail="true"}

Una vez que CLion encuentre el entorno todas las opciones tendrán cargada la configuración correcta y se puede pulsar el
botón de OK.

![VDIConfig10.png](VDIConfig10.png){thumbnail="true"}

Para comprobar que el entorno funciona correctamente basta con compilar y ejecutar el programa que ha creado por
defecto. Para ello se pulsa el botón de _play_ que aparece en la parte superior derecha he imprimirá en la parte
inferior ``Hello, World!``.

![VDIConfig11.png](VDIConfig11.png){thumbnail="true"}

</step>
</procedure>
</tab>
</tabs>
