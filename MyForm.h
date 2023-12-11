#pragma once
#include "Client.h"
#include "Commande.h"
#include <fstream>
#include <iostream>

namespace Project1 {

	using namespace System::Data::SqlClient;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			c = gcnew NS_Site::Commande();
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
		NS_Site::Commande^ c;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Button^ button8;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Button^ button10;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label17;




	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(1008, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(590, 298);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->Visible = false;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(904, 251);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(216, 145);
			this->button1->TabIndex = 1;
			this->button1->Text = L"S\'inscrire";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(304, 263);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(202, 128);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Se connecter";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1034, 528);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(149, 103);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Valider";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(601, 273);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 16);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Email";
			this->label1->Visible = false;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(557, 381);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Mot de passe";
			this->label2->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(657, 270);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(230, 22);
			this->textBox1->TabIndex = 6;
			this->textBox1->Visible = false;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(657, 378);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(230, 22);
			this->textBox2->TabIndex = 7;
			this->textBox2->Visible = false;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(376, 78);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(36, 16);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Nom";
			this->label3->Visible = false;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(459, 72);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(499, 22);
			this->textBox3->TabIndex = 9;
			this->textBox3->Visible = false;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(376, 153);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 16);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Prénom";
			this->label4->Visible = false;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(459, 147);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(499, 22);
			this->textBox4->TabIndex = 11;
			this->textBox4->Visible = false;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(314, 223);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(123, 16);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Date de Naissance";
			this->label5->Visible = false;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(462, 223);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(496, 22);
			this->textBox5->TabIndex = 13;
			this->textBox5->Visible = false;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(1034, 119);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(181, 138);
			this->button4->TabIndex = 14;
			this->button4->Text = L"Valider l\'inscription";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(584, 175);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(303, 78);
			this->button5->TabIndex = 15;
			this->button5->Text = L"Commander";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(1191, 449);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(107, 47);
			this->button6->TabIndex = 16;
			this->button6->Text = L"Ajouter";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Visible = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(119, 381);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(107, 47);
			this->button7->TabIndex = 17;
			this->button7->Text = L"Modifier";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Visible = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(39, 3);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(499, 298);
			this->dataGridView2->TabIndex = 18;
			this->dataGridView2->Visible = false;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(271, 381);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(107, 47);
			this->button8->TabIndex = 19;
			this->button8->Text = L"Supprimer";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Visible = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(1099, 415);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(62, 16);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Quantité :";
			this->label6->Visible = false;
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(1192, 412);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(106, 22);
			this->textBox6->TabIndex = 23;
			this->textBox6->Visible = false;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			this->label14->Visible = false;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(119, 336);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 22);
			this->textBox7->TabIndex = 24;
			this->textBox7->Visible = false;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(198, 304);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 22);
			this->textBox8->TabIndex = 25;
			this->textBox8->Visible = false;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox8_TextChanged);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(1458, 409);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 22);
			this->textBox9->TabIndex = 26;
			this->textBox9->Visible = false;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox9_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(1374, 412);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(42, 16);
			this->label7->TabIndex = 27;
			this->label7->Text = L"Nom :";
			this->label7->Visible = false;
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(159, 528);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(155, 103);
			this->button10->TabIndex = 29;
			this->button10->Text = L"retour";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Visible = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(156, 304);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(36, 16);
			this->label8->TabIndex = 31;
			this->label8->Text = L"Nom";
			this->label8->Visible = false;
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(47, 339);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(56, 16);
			this->label9->TabIndex = 32;
			this->label9->Text = L"Quantité";
			this->label9->Visible = false;
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(661, 389);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(145, 124);
			this->button12->TabIndex = 33;
			this->button12->Text = L"Finaliser la commande";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Visible = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(480, 317);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(128, 120);
			this->button13->TabIndex = 34;
			this->button13->Text = L"Payer en 1x";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Visible = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(862, 317);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(128, 120);
			this->button14->TabIndex = 35;
			this->button14->Text = L"Payer en 3x";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Visible = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(658, 147);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(99, 16);
			this->label10->TabIndex = 36;
			this->label10->Text = L"Nom du titulaire";
			this->label10->Visible = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(667, 342);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(96, 16);
			this->label11->TabIndex = 37;
			this->label11->Text = L"Cryptogramme";
			this->label11->Visible = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(654, 263);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(109, 16);
			this->label12->TabIndex = 38;
			this->label12->Text = L"Numéro de Carte";
			this->label12->Visible = false;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(683, 366);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(64, 22);
			this->textBox10->TabIndex = 39;
			this->textBox10->Visible = false;
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox10_TextChanged);
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(573, 292);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(255, 22);
			this->textBox11->TabIndex = 40;
			this->textBox11->Visible = false;
			this->textBox11->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox11_TextChanged);
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(573, 175);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(255, 22);
			this->textBox12->TabIndex = 41;
			this->textBox12->Visible = false;
			this->textBox12->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox12_TextChanged);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(670, 519);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(113, 103);
			this->button15->TabIndex = 42;
			this->button15->Text = L"PAYER";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Visible = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(1134, 646);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(143, 63);
			this->button16->TabIndex = 43;
			this->button16->Text = L"Se déconnecter";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Visible = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(680, 97);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(14, 16);
			this->label14->TabIndex = 45;
			this->label14->Text = L"0";
			this->label14->Visible = false;
			this->label14->Click += gcnew System::EventHandler(this, &MyForm::label14_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(700, 97);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(14, 16);
			this->label15->TabIndex = 46;
			this->label15->Text = L"€";
			this->label15->Visible = false;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label16->Location = System::Drawing::Point(601, 14);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(301, 16);
			this->label16->TabIndex = 47;
			this->label16->Text = L"BIENVENUE SUR  VOLTFACE ELECTRONIQUE";
			this->label16->Click += gcnew System::EventHandler(this, &MyForm::label16_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(159, 528);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(155, 103);
			this->button9->TabIndex = 48;
			this->button9->Text = L"Retour";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Visible = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click_1);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(658, 14);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(185, 16);
			this->label17->TabIndex = 49;
			this->label17->Text = L"GÉNÉRATION DE FACTURE";
			this->label17->Visible = false;
			this->label17->Click += gcnew System::EventHandler(this, &MyForm::label17_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(1597, 711);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Visible = true;
		this->textBox2->Visible = true;
		this->textBox3->Visible = true;
		this->textBox4->Visible = true;
		this->textBox5->Visible = true;
		this->button4->Visible = true;
		this->button1->Visible = false;
		this->button2->Visible = false;
		this->label1->Visible = true;
		this->label2->Visible = true;
		this->label3->Visible = true;
		this->label4->Visible = true;
		this->label5->Visible = true;
		this->button10->Visible = true;

	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		NS_Site::Client^ a;
		a = gcnew NS_Site::Client();
		a->setNom(textBox3->Text);
		a->setPrenom(textBox4->Text);
		a->setDateNais(textBox5->Text);
		a->setEmail(textBox1->Text);
		a->setMDP(textBox2->Text);
		if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "" || textBox4->Text == "" || textBox5->Text == "") {
			MessageBox::Show("Une ou plusieurs cases sont vides", "Succès", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			// Insertion des données dans la table Client
			String^ query = "INSERT INTO Client(Nom, Prenom, DateNais, Email, MDP) VALUES('" + a->getNom() + "','" + a->getPrenom() + "','" + a->getDateNais() + "','" + a->getEmail() + "','" + a->getMDP() + "')";
			String^ connectionString = "Server=MSI\\SQLEXPRESS;Database=Projet;Integrated Security=True;";

			// Créer une connexion SQL
			SqlConnection^ connection = gcnew SqlConnection(connectionString);

			try {
				// Ouvrir la connexion
				connection->Open();

				// Créer une commande SQL avec la requête
				SqlCommand^ command = gcnew SqlCommand(query, connection);

				// Exécuter la commande (dans ce cas, l'insertion)
				command->ExecuteNonQuery();

				// Optionnel : Afficher un message de réussite

			}
			catch (Exception^ ex) {
				// Gérer les erreurs
				MessageBox::Show("Erreur lors de l'insertion : " + ex->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			finally {
				// Fermer la connexion
				connection->Close();
			}

			// Vérification du nombre d'occurrences dans la table Client avec l'email donné
			String^ countQuery = "SELECT COUNT(*) FROM Client WHERE Email='" + a->getEmail() + "'";
			SqlConnection^ countConnection = gcnew SqlConnection(connectionString);

			try {
				// Ouvrir la connexion
				countConnection->Open();

				// Créer une commande SQL avec la requête
				SqlCommand^ countCommand = gcnew SqlCommand(countQuery, countConnection);

				// Exécuter la commande
				int rowCount = Convert::ToInt32(countCommand->ExecuteScalar());

				if (rowCount == 2) {
					// Suppression des données de la table Client
					String^ deleteQuery = "DELETE FROM Client WHERE Email='" + a->getEmail() + "' AND Nom='" + a->getNom() + "'";
					SqlConnection^ deleteConnection = gcnew SqlConnection(connectionString);

					try {
						// Ouvrir la connexion
						deleteConnection->Open();

						// Créer une commande SQL avec la requête
						SqlCommand^ deleteCommand = gcnew SqlCommand(deleteQuery, deleteConnection);

						// Exécuter la commande (dans ce cas, la suppression)
						deleteCommand->ExecuteNonQuery();

						// Optionnel : Afficher un message de réussite
						MessageBox::Show("Erreur sur la création du compte/Email déjà utilisée", "Succès", MessageBoxButtons::OK, MessageBoxIcon::Information);
						textBox1->Text = "";
						textBox2->Text = "";
						textBox3->Text = "";
						textBox4->Text = "";
						textBox5->Text = "";
					}
					catch (Exception^ ex) {
						// Gérer les erreurs
						MessageBox::Show("Erreur lors de la suppression : " + ex->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
					finally {
						// Fermer la connexion
						deleteConnection->Close();
					}
				}
				else {
					MessageBox::Show("Compte créé", "Succès", MessageBoxButtons::OK, MessageBoxIcon::Information);
					this->button10->Visible = false;
					textBox1->Text = "";
					textBox2->Text = "";
					textBox3->Text = "";
					textBox4->Text = "";
					textBox5->Text = "";
					this->button5->Visible = true;
					this->label1->Visible = false;
					this->label2->Visible = false;
					this->label3->Visible = false;
					this->label4->Visible = false;
					this->label5->Visible = false;
					this->textBox1->Visible = false;
					this->textBox2->Visible = false;
					this->textBox3->Visible = false;
					this->textBox4->Visible = false;
					this->textBox5->Visible = false;
					this->button4->Visible = false;
					this->button16->Visible = true;

				}
			}
			catch (Exception^ ex) {
				// Gérer les erreurs
				MessageBox::Show("Erreur lors de la vérification du nombre d'occurrences : " + ex->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			finally {
				// Fermer la connexion
				countConnection->Close();
			}
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->button16->Visible = false;
		this->button1->Visible = false;
		this->button2->Visible = false;
		this->textBox1->Visible = true;
		this->label1->Visible = true;
		this->textBox2->Visible = true;
		this->label2->Visible = true;
		this->button3->Visible = true;
		this->button10->Visible = true;
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ connectionstring = "Data Source=MSI\\SQLEXPRESS;Initial Catalog=Projet;Integrated Security=True;Encrypt=False;";
		SqlConnection^ sqlConn = gcnew SqlConnection(connectionstring);
		try {
			sqlConn->Open();
			String^ Query = "SELECT * FROM client";

			SqlDataAdapter^ adapter = gcnew SqlDataAdapter(Query, sqlConn);
			DataTable^ table = gcnew DataTable();

			// Remplir la DataTable avec les résultats de la requête SQL
			adapter->Fill(table);

			// Lier la DataTable au DataGridView
			dataGridView1->DataSource = table;
		}
		catch (SqlException^ ex) {
			// Gérer les exceptions liées à la base de données
			MessageBox::Show("Erreur : " + ex->Message);
		}
		finally {
			sqlConn->Close();
		}
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		NS_Site::Client^ b;
		b = gcnew NS_Site::Client();
		b->setEmail(textBox1->Text);
		b->setMDP(textBox2->Text);

		String^ connectionString = "Server=MSI\\SQLEXPRESS;Database=Projet;Integrated Security=True;";


		// Vérification du nombre d'occurrences dans la table Client avec l'email donné
		String^ countQuery = "SELECT COUNT(*) FROM Client WHERE Email='" + b->getEmail() + "' AND MDP ='" + b->getMDP() + "'";
		SqlConnection^ countConnection = gcnew SqlConnection(connectionString);

		try {
			// Ouvrir la connexion
			countConnection->Open();

			// Créer une commande SQL avec la requête
			SqlCommand^ countCommand = gcnew SqlCommand(countQuery, countConnection);

			// Exécuter la commande
			int rowCount = Convert::ToInt32(countCommand->ExecuteScalar());

			if (rowCount == 1) {
				MessageBox::Show("Vous êtes connectés", "Succès", MessageBoxButtons::OK, MessageBoxIcon::Information);

				this->textBox1->Visible = false;
				this->textBox2->Visible = false;
				this->label1->Visible = false;
				this->label2->Visible = false;
				this->button3->Visible = false;
				this->textBox2->Text = "";
				this->textBox1->Text = "";
				/*this->dataGridView1->Visible = true;*/
				this->button5->Visible = true;
				this->button10->Visible = false;
				this->button16->Visible = true;


			}

			else {
				MessageBox::Show("Mot de passe ou Email erroné : ", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		catch (Exception^ ex) {
			// Gérer les erreurs
			MessageBox::Show("Erreur lors de la vérification du nombre d'occurrences : " + ex->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			// Fermer la connexion
			countConnection->Close();
		}

	}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ connectionstring = "Data Source=MSI\\SQLEXPRESS;Initial Catalog=Projet;Integrated Security=True;Encrypt=False;";
		SqlConnection^ sqlConn = gcnew SqlConnection(connectionstring);
		try {
			sqlConn->Open();
			String^ Query = "SELECT * FROM Catalogue";

			SqlDataAdapter^ adapter = gcnew SqlDataAdapter(Query, sqlConn);
			DataTable^ table = gcnew DataTable();

			// Remplir la DataTable avec les résultats de la requête SQL
			adapter->Fill(table);

			// Lier la DataTable au DataGridView
			dataGridView1->DataSource = table;
		}
		catch (SqlException^ ex) {
			// Gérer les exceptions liées à la base de données
			MessageBox::Show("Erreur : " + ex->Message);
		}
		finally {
			sqlConn->Close();
		}
		String^ connection = "Data Source=MSI\\SQLEXPRESS;Initial Catalog=Projet;Integrated Security=True;Encrypt=False;";
		SqlConnection^ countConnection = gcnew SqlConnection(connection);

		try {
			// Ouvrir la connexion
			countConnection->Open();
			String^ countQuery = "SELECT * FROM Art";

			// Créer une commande SQL avec la requête
			SqlDataAdapter^ countCommand = gcnew SqlDataAdapter(countQuery, countConnection);
			DataTable^ Table = gcnew DataTable();
			countCommand->Fill(Table);

			dataGridView2->DataSource = Table;
		}
		catch (Exception^ ex) {
			// Gérer les erreurs
			MessageBox::Show("Erreur lors de la vérification du nombre d'occurrences : " + ex->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			// Fermer la connexion
			countConnection->Close();
		}
		this->dataGridView1->Visible = true;
		this->label8->Visible = true;
		this->label9->Visible = true;
		this->button7->Visible = true;
		this->textBox7->Visible = true;
		this->textBox8->Visible = true;
		this->button8->Visible = true;
		this->button12->Visible = true;
		this->button5->Visible = false;
		this->button6->Visible = true;
		this->label6->Visible = true;
		this->label7->Visible = true;
		this->textBox6->Visible = true;
		this->textBox9->Visible = true;
		this->dataGridView2->Visible = true;
		this->button12->Visible = true;
		this->label14->Visible = true;
		this->label15->Visible = true;
		/*this->dataGridView1->Visible = true;*/

	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		this->button1->Visible = true;
		this->button2->Visible = true;
		this->button3->Visible = false;
		this->button4->Visible = false;
		this->button5->Visible = false;
		this->button6->Visible = false;
		this->button7->Visible = false;
		this->button8->Visible = false;
		this->button10->Visible = false;
		this->label1->Visible = false;
		this->label2->Visible = false;
		this->label3->Visible = false;
		this->label4->Visible = false;
		this->label5->Visible = false;
		this->label6->Visible = false;
		this->label7->Visible = false;
		this->textBox1->Visible = false;
		this->textBox2->Visible = false;
		this->textBox3->Visible = false;
		this->textBox4->Visible = false;
		this->textBox5->Visible = false;
		this->textBox6->Visible = false;
		this->textBox7->Visible = false;
		this->textBox8->Visible = false;
		this->textBox9->Visible = false;
		this->dataGridView2->Visible = false;
		this->button12->Visible = false;
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {

		this->dataGridView2->Visible = true;
		this->button5->Visible = true;
		this->label8->Visible = true;
		this->label9->Visible = true;
		this->button7->Visible = true;
		this->textBox7->Visible = true;
		this->textBox8->Visible = true;
		this->button8->Visible = true;
		this->button12->Visible = true;
		String^ connectionstring = "Data Source=MSI\\SQLEXPRESS;Initial Catalog=Projet;Integrated Security=True;Encrypt=False;";
		SqlConnection^ sqlConn = gcnew SqlConnection(connectionstring);
		try {
			sqlConn->Open();
			String^ Query = "SELECT * FROM Art";

			SqlDataAdapter^ adapter = gcnew SqlDataAdapter(Query, sqlConn);
			DataTable^ table = gcnew DataTable();

			// Remplir la DataTable avec les résultats de la requête SQL
			adapter->Fill(table);

			// Lier la DataTable au DataGridView
			dataGridView2->DataSource = table;
		}
		catch (SqlException^ ex) {
			// Gérer les exceptions liées à la base de données
			MessageBox::Show("Erreur : " + ex->Message);
		}
		finally {
			sqlConn->Close();
		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {


		String^ connectionstring = "Data Source=MSI\\SQLEXPRESS;Initial Catalog=Projet;Integrated Security=True;Encrypt=False;";
		SqlConnection^ sqlConn = gcnew SqlConnection(connectionstring);
		//Commande^

		String^ connectionstring2 = "Data Source=MSI\\SQLEXPRESS;Initial Catalog=Projet;Integrated Security=True;Encrypt=False;";
		SqlConnection^ sqlConn2 = gcnew SqlConnection(connectionstring2);
		//Commande^
		String^ Ref = "";
		try {
			// Ouvrir la connexion
			sqlConn2->Open();

			// Définir la commande SQL
			String^ sqlCommandString = "SELECT PrixArt FROM Catalogue WHERE NomArt = '" + textBox9->Text + "';";
			Console::WriteLine("Requête SQL : " + sqlCommandString);
			SqlCommand^ sqlCommand = gcnew SqlCommand(sqlCommandString, sqlConn2);

			// Exécuter la commande et obtenir le résultat dans un DataReader
			SqlDataReader^ reader = sqlCommand->ExecuteReader();

			// Vérifier s'il y a des lignes dans le résultat
			if (reader->Read()) {
				// Lire la valeur de la colonne spécifiée (dans cet exemple, "NomColonne")
				int valeurColonne = reader->GetInt32(0);
				int valeurquantié = Convert::ToInt32(textBox6->Text);
				Console::WriteLine("Valeur de PrixArt : " + valeurColonne);
				Console::WriteLine("Valeur de Quantité : " + valeurquantié);
				int prix = valeurColonne * valeurquantié;
				try {
					sqlConn->Open();
					if (textBox9->Text == "Souris") { Ref = "1"; }
					if (textBox9->Text == "GPU") { Ref = "2"; }
					if (textBox9->Text == "Clavier") { Ref = "3"; }
					String^ queryString = "INSERT INTO Art(RefArt, Quant, NomArt, PrixTotArt) VALUES('" + Ref + "'," + textBox6->Text + ",'" + textBox9->Text + "'," + prix + ")";

					SqlDataAdapter^ adapter = gcnew SqlDataAdapter(queryString, sqlConn);
					DataTable^ table = gcnew DataTable();

					// Remplir la DataTable avec les résultats de la requête SQL
					adapter->Fill(table);

					// Lier la DataTable au DataGridView
					dataGridView2->DataSource = table;
					MessageBox::Show("Objet ajouté", "Succès", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				catch (SqlException^ ex) {
					// Gérer les exceptions liées à la base de données
					MessageBox::Show("Erreur : " + ex->Message);
				}
				finally {
					sqlConn->Close();
				}

				c->setPrixTot(valeurColonne, valeurquantié);
			}
			try {
				sqlConn->Open();


				String^ queryString = "SELECT * FROM Art";

				SqlDataAdapter^ adapter = gcnew SqlDataAdapter(queryString, sqlConn);
				DataTable^ table = gcnew DataTable();

				// Remplir la DataTable avec les résultats de la requête SQL
				adapter->Fill(table);

				// Lier la DataTable au DataGridView
				dataGridView2->DataSource = table;
			}
			catch (SqlException^ ex) {
				// Gérer les exceptions liées à la base de données
				MessageBox::Show("Erreur : " + ex->Message);
			}
			finally {
				sqlConn->Close();
			}


			// Fermer le DataReader
			reader->Close();
		}
		catch (Exception^ e) {
			// Gérer les exceptions
			Console::WriteLine("Erreur : " + e->Message);
		}
		finally {
			// Fermer la connexion
			if (sqlConn->State == ConnectionState::Open) {
				sqlConn->Close();
			}
		}

		
		int prixTotal = c->getPrixTot();
		label14->Text = "Prix Total : " + prixTotal.ToString();
	}
	private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ connectionstring = "Data Source=MSI\\SQLEXPRESS;Initial Catalog=Projet;Integrated Security=True;Encrypt=False;";
		SqlConnection^ sqlConn = gcnew SqlConnection(connectionstring);
		try {
			sqlConn->Open();
			String^ Query = "UPDATE dbo.Art SET  Quant = " + textBox7->Text + " WHERE NomArt = '" + textBox8->Text + "'; ";

			SqlDataAdapter^ adapter = gcnew SqlDataAdapter(Query, sqlConn);
			DataTable^ table = gcnew DataTable();

			// Remplir la DataTable avec les résultats de la requête SQL
			adapter->Fill(table);

			// Lier la DataTable au DataGridView
			dataGridView1->DataSource = table;

			Query = "SELECT * FROM Art";

			adapter = gcnew SqlDataAdapter(Query, sqlConn);
			DataTable^ table2 = gcnew DataTable();

			// Remplir la DataTable avec les résultats de la requête SQL
			adapter->Fill(table2);

			// Lier la DataTable au DataGridView
			dataGridView2->DataSource = table2;


			Query = "SELECT * FROM Catalogue";

			adapter = gcnew SqlDataAdapter(Query, sqlConn);
			DataTable^ table3 = gcnew DataTable();

			// Remplir la DataTable avec les résultats de la requête SQL
			adapter->Fill(table3);

			// Lier la DataTable au DataGridView
			dataGridView1->DataSource = table3;
		}
		catch (SqlException^ ex) {
			// Gérer les exceptions liées à la base de données
			MessageBox::Show("Erreur : " + ex->Message);
		}
		finally {
			sqlConn->Close();
		}
		
		
	}
	private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ connectionstring = "Data Source=MSI\\SQLEXPRESS;Initial Catalog=Projet;Integrated Security=True;Encrypt=False;";
		SqlConnection^ sqlConn = gcnew SqlConnection(connectionstring);
		try {
			sqlConn->Open();
			String^ queryString = "DELETE FROM Art WHERE NomArt='" + textBox8->Text + "'";

			SqlDataAdapter^ adapter = gcnew SqlDataAdapter(queryString, sqlConn);
			DataTable^ table = gcnew DataTable();

			// Remplir la DataTable avec les résultats de la requête SQL
			adapter->Fill(table);

			// Lier la DataTable au DataGridView
			dataGridView2->DataSource = table;

			String^ Query = "SELECT * FROM Art";

			adapter = gcnew SqlDataAdapter(Query, sqlConn);
			DataTable^ table2 = gcnew DataTable();

			// Remplir la DataTable avec les résultats de la requête SQL
			adapter->Fill(table2);

			// Lier la DataTable au DataGridView
			dataGridView2->DataSource = table2;
		}
		catch (SqlException^ ex) {
			// Gérer les exceptions liées à la base de données
			MessageBox::Show("Erreur : " + ex->Message);
		}
		finally {
			sqlConn->Close();
		}
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		this->button14->Visible = true;
		this->button13->Visible = true;
		this->button12->Visible = false;
		this->dataGridView1->Visible = false;
		this->button6->Visible = false;
		this->button7->Visible = false;
		this->button8->Visible = false;
		this->textBox8->Visible = false;
		this->textBox7->Visible = false;
		this->textBox6->Visible = false;
		this->textBox9->Visible = false;
		this->label6->Visible = false;
		this->label7->Visible = false;
		this->label8->Visible = false;
		this->label9->Visible = false;
		this->button9->Visible = true;


	}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label14->Visible = false;
		this->label15->Visible = false;
		this->dataGridView2->Visible = false;
		this->button5->Visible = false;
		this->button13->Visible = false;
		this->button14->Visible = false;
		this->button12->Visible = false;
		this->label10->Visible = true;
		this->label11->Visible = true;
		this->label12->Visible = true;
		this->textBox12->Visible = true;
		this->textBox11->Visible = true;
		this->textBox10->Visible = true;
		this->button9->Visible = false;
		this->button15->Visible = true;
	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		this->button15->Visible = true;
		this->button9->Visible = false;
		this->button14->Visible = false;
		this->label14->Visible = false;
		this->label15->Visible = false;
		this->dataGridView2->Visible = false;
		this->button5->Visible = false;
		this->button13->Visible = false;
		this->button12->Visible = false;
		this->label10->Visible = true;
		this->label11->Visible = true;
		this->label12->Visible = true;
		this->textBox12->Visible = true;
		this->textBox11->Visible = true;
		this->textBox10->Visible = true;
	}
	private: System::Void textBox12_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox11_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox10_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox10->Text = "";
		this->textBox11->Text = "";
		this->textBox12->Text = "";
		this->label16->Visible = true;
		this->label17->Visible = false;
		this->button9->Visible = false;
		this->label14->Visible = false;
		this->label15->Visible = false;
		this->dataGridView1->Visible = false;
		this->dataGridView2->Visible = false;
		this->button1->Visible = true;
		this->button2->Visible = true;
		this->button3->Visible = false;
		this->button4->Visible = false;
		this->button5->Visible = false;
		this->button6->Visible = false;
		this->button7->Visible = false;
		this->button8->Visible = false;
		this->button10->Visible = false;
		this->button12->Visible = false;
		this->button13->Visible = false;
		this->button14->Visible = false,
			this->button15->Visible = false;
		this->button16->Visible = false;
		this->textBox1->Visible = false;
		this->textBox2->Visible = false;
		this->textBox3->Visible = false;
		this->textBox4->Visible = false;
		this->textBox5->Visible = false;
		this->textBox6->Visible = false;
		this->textBox7->Visible = false;
		this->textBox8->Visible = false;
		this->textBox9->Visible = false;
		this->textBox10->Visible = false;
		this->textBox11->Visible = false;
		this->textBox12->Visible = false;
		this->label1->Visible = false;
		this->label2->Visible = false;
		this->label3->Visible = false;
		this->label4->Visible = false;
		this->label5->Visible = false;
		this->label6->Visible = false;
		this->label7->Visible = false;
		this->label8->Visible = false;
		this->label9->Visible = false;
		this->label10->Visible = false;
		this->label11->Visible = false;
		this->label12->Visible = false;
		this->label14->Visible = false;
		this->label15->Visible = false;
		String^ connectionstring = "Data Source=MSI\\SQLEXPRESS;Initial Catalog=Projet;Integrated Security=True;Encrypt=False;";
		SqlConnection^ sqlConn = gcnew SqlConnection(connectionstring);

		try {
			sqlConn->Open();

			// Supprimer toutes les lignes de la table "Art"
			String^ deleteQuery = "DELETE FROM Art";
			SqlCommand^ deleteCommand = gcnew SqlCommand(deleteQuery, sqlConn);
			deleteCommand->ExecuteNonQuery();


		}
		catch (SqlException^ ex) {
			// Gérer les exceptions liées à la base de données
			MessageBox::Show("Erreur : " + ex->Message);
		}
		finally {
			sqlConn->Close();
		}
		c->~Commande();
	}
	private: System::Void button9_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView1->Visible = true;
		this->label8->Visible = true;
		this->label9->Visible = true;
		this->button7->Visible = true;
		this->textBox7->Visible = true;
		this->textBox8->Visible = true;
		this->button8->Visible = true;
		this->button12->Visible = true;
		this->button5->Visible = false;
		this->button6->Visible = true;
		this->label6->Visible = true;
		this->label7->Visible = true;
		this->textBox6->Visible = true;
		this->textBox9->Visible = true;
		this->dataGridView2->Visible = true;
		this->button12->Visible = true;
		this->button9->Visible = false;
	}
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox10->Text == "" || textBox11->Text == "" || textBox12->Text == "") {
			MessageBox::Show("Une ou plusieurs cases sont vides", "Succès", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			using std::cerr;
			using std::cout;
			using std::endl;
			using std::fstream;
			using std::ofstream;
			using std::string;

			String^ a = textBox4->Text->ToString();
			fstream outfile;

			string filename3("output3.txt");
			FILE* o_file = fopen(filename3.c_str(), "w+");
			if (o_file) {
				//fwrite(a.c_str(), 1, a.size(), o_file);
				cerr << "Done Writing!" << endl;
			}
			this->label16->Visible = false;
			this->textBox10->Text = "";
			this->textBox11->Text = "";
			this->textBox12->Text = "";
			this->textBox10->Visible = false;
			this->textBox11->Visible = false;
			this->textBox12->Visible = false;
			this->label17->Visible = true;
			this->button15->Visible = false;
			this->label10->Visible = false;
			this->label11->Visible = false;
			this->label12->Visible = false;
		}
	}
	private: System::Void label17_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
