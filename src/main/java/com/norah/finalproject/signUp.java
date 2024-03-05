package com.norah.finalproject;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;
import android.widget.Toolbar;

import com.google.firebase.auth.FirebaseAuth;
import com.google.firebase.database.DatabaseReference;
import com.google.firebase.database.FirebaseDatabase;

public class signUp extends AppCompatActivity {

    private Button SignUp_Button;
    private EditText EditText1, EditText2, EditText3, EditText4;
    private TextView loginTxtView;
    private FirebaseAuth mAuth;
    private FirebaseDatabase database;
    private DatabaseReference userDetailsReference;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate( savedInstanceState );
        setContentView( R.layout.sign_up );
        Toolbar toolbar = findViewById(  )
    }
}
