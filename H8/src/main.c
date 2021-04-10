#include "define.h"
#include "serial.h"
#include "lib.h"

volatile int g_value = 10;

int main( void )
{
    // シリアルデバイス初期化
    serial_init( SERIAL_DEFAULT_DEVICE );

    puts( "Hello World\n" );

#if 0
	// 数値出力
    putxval( 0x10, 0 );
    puts( "\n" );
    putxval( 0xffff, 0 );
    puts( "\n" );
#endif
	putxval(g_value, 0);
	puts("\n");
	g_value = 20;
	putxval(g_value, 0);
	puts("\n");

    // 無限ループで停止
    while( 1 )
    {
        ;
    }

    return 0;

}
