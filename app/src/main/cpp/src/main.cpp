#include <jni.h>
#include <string>
#include "TicTacToeGame.h"

extern "C"
JNIEXPORT jstring

JNICALL
Java_com_guesswh0o_tictactoe_1ndk_MainActivity_startGame(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";

    TicTacToeGame tacToeGame = TicTacToeGame();

    return env->NewStringUTF(tacToeGame.playGame().c_str());
}
