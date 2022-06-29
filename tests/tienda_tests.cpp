#include <gtest/gtest.h>
#include "/home/alessandro/TareaProgramada3/src/tienda.h"
#include <string>

using namespace std;

namespace
{
    TEST(Tienda_Tests, Tests_Crear_Tienda)
    {
        /// AAA
        // Arrange - configurar el escenario
        Tienda *tienda = new Tienda ("Tienda1", "www.tienda1.com", "Av.39A, C.106B", "22907465");

        // Act - ejecute la operación
        string nombreActual = tienda->ObtenerNombreT();
        string direccionIActual = tienda->ObtenerDireccionI();
        string direccionFActual = tienda->ObtenerDireccionF();
        string telefonoActual = tienda->ObtenerTelefono();

        string nombreEsperado = "Tienda1";
        string direccionIEsperada = "www.tienda1.com";
        string direccionFEsperada = "Av.39A, C.106B";
        string telefonoEsperado = "22907465";

        // Assert - valide los resultados
        EXPECT_EQ(nombreActual, nombreEsperado);
        EXPECT_EQ(direccionIActual, direccionIEsperada);
        EXPECT_EQ(direccionFActual, direccionFEsperada);
        EXPECT_EQ(telefonoActual, telefonoEsperado);

    }


}