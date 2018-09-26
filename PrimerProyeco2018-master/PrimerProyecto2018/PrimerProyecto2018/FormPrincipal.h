#pragma once
#include "Contenedor.h";

namespace PrimerProyecto2018 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormPrincipal
	/// </summary>
	public ref class FormPrincipal : public System::Windows::Forms::Form
	{
	public:
		FormPrincipal(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~FormPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  tbId;
	private: System::Windows::Forms::TextBox^  tbTipoProducto;


	private: System::Windows::Forms::TextBox^  tbMontoProducto;



	private: System::Windows::Forms::TextBox^  tbNomPersonaEncargada;


	private: System::Windows::Forms::TextBox^  tbNomEmpresa;



	private: System::Windows::Forms::Label^  label9;







































































private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::TextBox^  tbColumna;




private: System::Windows::Forms::Label^  label48;
private: System::Windows::Forms::ListBox^  lbColaA;




private: System::Windows::Forms::Label^  label51;
private: System::Windows::Forms::ListBox^  lbPilaA;
private: System::Windows::Forms::Button^  btnSacarContenedor;
private: System::Windows::Forms::Button^  btnSalir;
private: System::Windows::Forms::TextBox^  textBox1;


























private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::ListBox^  lbPilaB;

private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::ListBox^  lbColaB;

private: System::Windows::Forms::Button^  button3;








	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tbId = (gcnew System::Windows::Forms::TextBox());
			this->tbTipoProducto = (gcnew System::Windows::Forms::TextBox());
			this->tbMontoProducto = (gcnew System::Windows::Forms::TextBox());
			this->tbNomPersonaEncargada = (gcnew System::Windows::Forms::TextBox());
			this->tbNomEmpresa = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tbColumna = (gcnew System::Windows::Forms::TextBox());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->lbColaA = (gcnew System::Windows::Forms::ListBox());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->lbPilaA = (gcnew System::Windows::Forms::ListBox());
			this->btnSacarContenedor = (gcnew System::Windows::Forms::Button());
			this->btnSalir = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->lbPilaB = (gcnew System::Windows::Forms::ListBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->lbColaB = (gcnew System::Windows::Forms::ListBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(169, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ingrese sección de Contenedores:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Contenedor:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 62);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Columna :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 89);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(147, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Indentificador de Contenedor:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 119);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(117, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Nombre de la Empresa:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(13, 147);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(157, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Nombre de persona encargada:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(13, 180);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(103, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Monto del Producto:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(13, 208);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(92, 13);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Tipo de Producto:";
			// 
			// tbId
			// 
			this->tbId->Location = System::Drawing::Point(181, 89);
			this->tbId->Name = L"tbId";
			this->tbId->Size = System::Drawing::Size(148, 20);
			this->tbId->TabIndex = 8;
			// 
			// tbTipoProducto
			// 
			this->tbTipoProducto->Location = System::Drawing::Point(181, 208);
			this->tbTipoProducto->Name = L"tbTipoProducto";
			this->tbTipoProducto->Size = System::Drawing::Size(148, 20);
			this->tbTipoProducto->TabIndex = 9;
			// 
			// tbMontoProducto
			// 
			this->tbMontoProducto->Location = System::Drawing::Point(181, 180);
			this->tbMontoProducto->Name = L"tbMontoProducto";
			this->tbMontoProducto->Size = System::Drawing::Size(148, 20);
			this->tbMontoProducto->TabIndex = 10;
			// 
			// tbNomPersonaEncargada
			// 
			this->tbNomPersonaEncargada->Location = System::Drawing::Point(181, 147);
			this->tbNomPersonaEncargada->Name = L"tbNomPersonaEncargada";
			this->tbNomPersonaEncargada->Size = System::Drawing::Size(148, 20);
			this->tbNomPersonaEncargada->TabIndex = 11;
			// 
			// tbNomEmpresa
			// 
			this->tbNomEmpresa->Location = System::Drawing::Point(181, 119);
			this->tbNomEmpresa->Name = L"tbNomEmpresa";
			this->tbNomEmpresa->Size = System::Drawing::Size(148, 20);
			this->tbNomEmpresa->TabIndex = 12;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(16, 237);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(307, 13);
			this->label9->TabIndex = 13;
			this->label9->Text = L"---------------------------------------------------------------------------------"
				L"-------------------";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(19, 253);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(142, 23);
			this->button1->TabIndex = 85;
			this->button1->Text = L"Ingresar datos columna: ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FormPrincipal::button1_Click);
			// 
			// tbColumna
			// 
			this->tbColumna->Location = System::Drawing::Point(181, 54);
			this->tbColumna->Name = L"tbColumna";
			this->tbColumna->Size = System::Drawing::Size(148, 20);
			this->tbColumna->TabIndex = 87;
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(370, 21);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(175, 13);
			this->label48->TabIndex = 89;
			this->label48->Text = L"Contenedores Ingresados Columna:";
			// 
			// lbColaA
			// 
			this->lbColaA->FormattingEnabled = true;
			this->lbColaA->Location = System::Drawing::Point(370, 40);
			this->lbColaA->Name = L"lbColaA";
			this->lbColaA->Size = System::Drawing::Size(206, 199);
			this->lbColaA->TabIndex = 88;
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Location = System::Drawing::Point(370, 283);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(249, 13);
			this->label51->TabIndex = 93;
			this->label51->Text = L"Pasos a seguir contenedores Ingresados Columna :";
			// 
			// lbPilaA
			// 
			this->lbPilaA->FormattingEnabled = true;
			this->lbPilaA->Location = System::Drawing::Point(370, 302);
			this->lbPilaA->Name = L"lbPilaA";
			this->lbPilaA->Size = System::Drawing::Size(206, 199);
			this->lbPilaA->TabIndex = 92;
			// 
			// btnSacarContenedor
			// 
			this->btnSacarContenedor->Location = System::Drawing::Point(370, 507);
			this->btnSacarContenedor->Name = L"btnSacarContenedor";
			this->btnSacarContenedor->Size = System::Drawing::Size(206, 23);
			this->btnSacarContenedor->TabIndex = 96;
			this->btnSacarContenedor->Text = L"Sacar Contenedor Columna A";
			this->btnSacarContenedor->UseVisualStyleBackColor = true;
			this->btnSacarContenedor->Click += gcnew System::EventHandler(this, &FormPrincipal::btnSacarContenedor_Click);
			// 
			// btnSalir
			// 
			this->btnSalir->Location = System::Drawing::Point(815, 548);
			this->btnSalir->Name = L"btnSalir";
			this->btnSalir->Size = System::Drawing::Size(75, 23);
			this->btnSalir->TabIndex = 97;
			this->btnSalir->Text = L"Salir";
			this->btnSalir->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(189, 13);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(140, 20);
			this->textBox1->TabIndex = 98;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(644, 283);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(249, 13);
			this->label18->TabIndex = 117;
			this->label18->Text = L"Pasos a seguir contenedores Ingresados Columna :";
			// 
			// lbPilaB
			// 
			this->lbPilaB->FormattingEnabled = true;
			this->lbPilaB->Location = System::Drawing::Point(687, 302);
			this->lbPilaB->Name = L"lbPilaB";
			this->lbPilaB->Size = System::Drawing::Size(206, 199);
			this->lbPilaB->TabIndex = 116;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(684, 16);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(175, 13);
			this->label19->TabIndex = 115;
			this->label19->Text = L"Contenedores Ingresados Columna:";
			this->label19->Click += gcnew System::EventHandler(this, &FormPrincipal::label19_Click);
			// 
			// lbColaB
			// 
			this->lbColaB->FormattingEnabled = true;
			this->lbColaB->Location = System::Drawing::Point(684, 40);
			this->lbColaB->Name = L"lbColaB";
			this->lbColaB->Size = System::Drawing::Size(206, 199);
			this->lbColaB->TabIndex = 114;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(684, 507);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(206, 23);
			this->button3->TabIndex = 118;
			this->button3->Text = L"Sacar Contenedor Columna B";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &FormPrincipal::button3_Click);
			// 
			// FormPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(904, 586);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->lbPilaB);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->lbColaB);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->btnSalir);
			this->Controls->Add(this->btnSacarContenedor);
			this->Controls->Add(this->label51);
			this->Controls->Add(this->lbPilaA);
			this->Controls->Add(this->label48);
			this->Controls->Add(this->lbColaA);
			this->Controls->Add(this->tbColumna);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->tbNomEmpresa);
			this->Controls->Add(this->tbNomPersonaEncargada);
			this->Controls->Add(this->tbMontoProducto);
			this->Controls->Add(this->tbTipoProducto);
			this->Controls->Add(this->tbId);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"FormPrincipal";
			this->Text = L"FormPrincipal";
			this->Load += gcnew System::EventHandler(this, &FormPrincipal::FormPrincipal_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label49_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void listBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}

	private:
		System::Collections::Stack^ PilaContenedor = gcnew System::Collections::Stack();
		 
		//Boton ingresar datos columna A
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	Contenedor ^NuevoContenedor;
	NuevoContenedor = gcnew Contenedor;
	NuevoContenedor->Columna = tbColumna->Text;
	NuevoContenedor->Identificacion = tbId->Text;
	NuevoContenedor->NomEmpresa = tbNomEmpresa->Text;
	NuevoContenedor->NombPersonaEncargada = tbNomPersonaEncargada->Text;
	NuevoContenedor->MontoProducto = System::Convert::ToInt32(tbMontoProducto->Text);
	NuevoContenedor->TipoProducto = tbTipoProducto->Text;


	//Columna A
	if (tbColumna->Text == "") {
		MessageBox::Show("Ingrese la letra de la columna");
	}
	else{
		if (tbColumna->Text == "A" || tbColumna->Text == "b") {
			if (tbId->Text == "") {
				MessageBox::Show("Ingrese Id del contenedor");
			}
			else{
				if (tbId->Text != "") {
					if (tbMontoProducto->Text == "") {
						MessageBox::Show("Ingrese el monto del producto del contenedor");
					}
					else{
						if (tbMontoProducto->Text != "") {
							if (tbNomEmpresa->Text == "") {
								MessageBox::Show("Ingrese Nombre de la empresa");
							}
							else{
								if (tbNomEmpresa->Text != "") {
									if (tbNomPersonaEncargada->Text == "") {
										MessageBox::Show("Ingrese el nombre de la persona encargada");
									}
									else{
										if (tbNomPersonaEncargada->Text != "") {
											if (tbTipoProducto->Text == "") {
												MessageBox::Show("Ingres tipo de producto del contenedor");
											}
											else{
												if (tbTipoProducto->Text != "") {
													lbColaA->Items->Add(NuevoContenedor->ObtenerTexto());
														MessageBox::Show("Contenedor Agregado exitosamente");
														tbColumna->Text = "";
														tbId->Text = "";
														tbMontoProducto->Text = "";
														tbNomEmpresa->Text = "";
														tbNomPersonaEncargada->Text = "";
														tbTipoProducto->Text = "";
														PilaContenedor->Push(NuevoContenedor);
												}
												else
												{
													MessageBox::Show("LLenar los espacios en blanco");
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}	


	//Columna B
	if (tbColumna->Text == "") {
		MessageBox::Show("Ingrese la letra de la columna");
	}
	else {
		if (tbColumna->Text == "B" || tbColumna->Text == "b") {
			if (tbId->Text == "") {
				MessageBox::Show("Ingrese Id del contenedor");
			}
			else {
				if (tbId->Text != "") {
					if (tbMontoProducto->Text == "") {
						MessageBox::Show("Ingrese el monto del producto del contenedor");
					}
					else {
						if (tbMontoProducto->Text != "") {
							if (tbNomEmpresa->Text == "") {
								MessageBox::Show("Ingrese Nombre de la empresa");
							}
							else {
								if (tbNomEmpresa->Text != "") {
									if (tbNomPersonaEncargada->Text == "") {
										MessageBox::Show("Ingrese el nombre de la persona encargada");
									}
									else {
										if (tbNomPersonaEncargada->Text != "") {
											if (tbTipoProducto->Text == "") {
												MessageBox::Show("Ingres tipo de producto del contenedor");
											}
											else {
												if (tbTipoProducto->Text != "") {
													lbColaB->Items->Add(NuevoContenedor->ObtenerTexto());
													MessageBox::Show("Contenedor Agregado exitosamente");
													tbColumna->Text = "";
													tbId->Text = "";
													tbMontoProducto->Text = "";
													tbNomEmpresa->Text = "";
													tbNomPersonaEncargada->Text = "";
													tbTipoProducto->Text = "";
													PilaContenedor->Push(NuevoContenedor);
												}
												else
												{
													MessageBox::Show("LLenar los espacios en blanco");
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}
//Boton columna A
private: System::Void btnSacarContenedor_Click(System::Object^  sender, System::EventArgs^  e) {
	
		if (PilaContenedor->Count > 0) {
			if (tbColumna->Text == "A" || tbColumna->Text == "a") {


				Contenedor^ ContenedorEnPila = (Contenedor^)PilaContenedor->Pop();
				MessageBox::Show("El Contenedor a remover es: " + ContenedorEnPila->ObtenerTexto());

				lbPilaA->Items->Add(ContenedorEnPila->ObtenerTexto());
			}
			else
			{
				MessageBox::Show("No hay mas contenedores a mover");
			}
		}
	}


//Boton de sacar Columna B
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {


	
	if (PilaContenedor->Count > 0)
	{
		System::Collections::Stack^ PilaContenedortemp = PilaContenedor;
		Contenedor^ ContenedorEnPila = (Contenedor^)PilaContenedor->Pop();
		System::String^ dummy = ContenedorEnPila->ObtenerTexto();
		

		if (ContenedorEnPila->Columna == "B" || ContenedorEnPila->Columna == "b")
		{
		
			
			MessageBox::Show("El Contenedor a remover es: " + ContenedorEnPila->ObtenerTexto());

			lbPilaB->Items->Add(ContenedorEnPila->ObtenerTexto());
		}
		else{
			MessageBox::Show("No hay mas contenedores a mover");
		}
	}	
}



private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		   
}
private: System::Void FormPrincipal_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label19_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
