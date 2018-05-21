package com.guesswh0o.tictactoe_ndk;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    // Used to load the 'native-lib' library on application startup.
    static {
        System.loadLibrary("tic_tac_toe-lib");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        // Example of a call to a native method
        TextView tv = (TextView) findViewById(R.id.sample_text);
        tv.setText(startGame());
    }

    /**
     * A native method that is implemented by the 'tic_tac_toe-lib' native library,
     * which is packaged with this application.
     */
    public native String startGame();

}
