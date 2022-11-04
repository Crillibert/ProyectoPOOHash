#pragma once
#include <msclr/marshal_cppstd.h>
#include <time.h>
#include "Triangulo.h"
#include "Rectangulo.h"
#include "Cuadrado.h"
#include "listaDoble.h"
namespace ProyectoPOOHash {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		listaDoble^ numeritos = gcnew listaDoble;
		listaDoble^ Figura = gcnew listaDoble;
		listaDoble^ Color = gcnew listaDoble;
		listaDoble^ ID = gcnew listaDoble;
		Hashtable^ listaHash = gcnew Hashtable();
	private: Stopwatch stopwatch;
	private: int _ticks;
	public: int identificador = 0;
	private: System::Windows::Forms::Button^ button_busc_list;
	private: System::Windows::Forms::Button^ button_busc_hash;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	public:


	public:
		int idActual = 0;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	protected:
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label_area;
	private: System::Windows::Forms::Label^ label_tipo;
	private: System::Windows::Forms::Label^ label_perimetro;
	private: System::Windows::Forms::Label^ label_color;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::Button^ button_generar;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label_area = (gcnew System::Windows::Forms::Label());
			this->label_tipo = (gcnew System::Windows::Forms::Label());
			this->label_perimetro = (gcnew System::Windows::Forms::Label());
			this->label_color = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button_generar = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button_busc_list = (gcnew System::Windows::Forms::Button());
			this->button_busc_hash = (gcnew System::Windows::Forms::Button());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			this->SuspendLayout();
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(57, 107);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(55, 20);
			this->numericUpDown1->TabIndex = 0;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Visible = false;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(57, 133);
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(55, 20);
			this->numericUpDown2->TabIndex = 1;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown2->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 81);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->Visible = false;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Triangulo", L"Cuadrado", L"Rectangulo" });
			this->comboBox1->Location = System::Drawing::Point(12, 36);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(100, 21);
			this->comboBox1->TabIndex = 4;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(147, 32);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(160, 69);
			this->listBox1->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(14, 109);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Lado 1";
			this->label2->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(14, 140);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Lado 2";
			this->label1->Visible = false;
			// 
			// btn2
			// 
			this->btn2->Location = System::Drawing::Point(12, 159);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(100, 22);
			this->btn2->TabIndex = 38;
			this->btn2->Text = L"Guardar";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Visible = false;
			this->btn2->Click += gcnew System::EventHandler(this, &MyForm::btn2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 60);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 13);
			this->label3->TabIndex = 39;
			this->label3->Text = L"Color";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(9, 20);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(36, 13);
			this->label4->TabIndex = 40;
			this->label4->Text = L"Figura";
			this->label4->Visible = false;
			// 
			// label_area
			// 
			this->label_area->AutoSize = true;
			this->label_area->Location = System::Drawing::Point(154, 114);
			this->label_area->Name = L"label_area";
			this->label_area->Size = System::Drawing::Size(32, 13);
			this->label_area->TabIndex = 41;
			this->label_area->Text = L"Area:";
			// 
			// label_tipo
			// 
			this->label_tipo->AutoSize = true;
			this->label_tipo->Location = System::Drawing::Point(154, 140);
			this->label_tipo->Name = L"label_tipo";
			this->label_tipo->Size = System::Drawing::Size(31, 13);
			this->label_tipo->TabIndex = 42;
			this->label_tipo->Text = L"Tipo:";
			// 
			// label_perimetro
			// 
			this->label_perimetro->AutoSize = true;
			this->label_perimetro->Location = System::Drawing::Point(225, 114);
			this->label_perimetro->Name = L"label_perimetro";
			this->label_perimetro->Size = System::Drawing::Size(54, 13);
			this->label_perimetro->TabIndex = 43;
			this->label_perimetro->Text = L"Perimetro:";
			// 
			// label_color
			// 
			this->label_color->AutoSize = true;
			this->label_color->Location = System::Drawing::Point(225, 140);
			this->label_color->Name = L"label_color";
			this->label_color->Size = System::Drawing::Size(31, 13);
			this->label_color->TabIndex = 44;
			this->label_color->Text = L"Color";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(23, 202);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(256, 13);
			this->label5->TabIndex = 45;
			this->label5->Text = L"---------------------------------------------------------------------------------"
				L"--";
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->numericUpDown3->Location = System::Drawing::Point(12, 244);
			this->numericUpDown3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(55, 20);
			this->numericUpDown3->TabIndex = 46;
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// button_generar
			// 
			this->button_generar->Location = System::Drawing::Point(12, 270);
			this->button_generar->Name = L"button_generar";
			this->button_generar->Size = System::Drawing::Size(75, 23);
			this->button_generar->TabIndex = 47;
			this->button_generar->Text = L"Generar";
			this->button_generar->UseVisualStyleBackColor = true;
			this->button_generar->Click += gcnew System::EventHandler(this, &MyForm::button_generar_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// button_busc_list
			// 
			this->button_busc_list->Location = System::Drawing::Point(12, 384);
			this->button_busc_list->Name = L"button_busc_list";
			this->button_busc_list->Size = System::Drawing::Size(75, 44);
			this->button_busc_list->TabIndex = 48;
			this->button_busc_list->Text = L"Buscar en Lista";
			this->button_busc_list->UseVisualStyleBackColor = true;
			this->button_busc_list->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button_busc_hash
			// 
			this->button_busc_hash->Location = System::Drawing::Point(12, 434);
			this->button_busc_hash->Name = L"button_busc_hash";
			this->button_busc_hash->Size = System::Drawing::Size(75, 44);
			this->button_busc_hash->TabIndex = 49;
			this->button_busc_hash->Text = L"Buscar en Hash";
			this->button_busc_hash->UseVisualStyleBackColor = true;
			this->button_busc_hash->Click += gcnew System::EventHandler(this, &MyForm::button_busc_hash_Click);
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(147, 236);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(160, 238);
			this->listBox2->TabIndex = 50;
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(12, 358);
			this->numericUpDown4->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(55, 20);
			this->numericUpDown4->TabIndex = 51;
			this->numericUpDown4->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(9, 342);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(88, 13);
			this->label6->TabIndex = 52;
			this->label6->Text = L"Numero a buscar";
			this->label6->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 228);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(92, 13);
			this->label7->TabIndex = 53;
			this->label7->Text = L"Numero a generar";
			this->label7->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(323, 495);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->numericUpDown4);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->button_busc_hash);
			this->Controls->Add(this->button_busc_list);
			this->Controls->Add(this->button_generar);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label_color);
			this->Controls->Add(this->label_perimetro);
			this->Controls->Add(this->label_tipo);
			this->Controls->Add(this->label_area);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		public: System::Void calcularTriangulo()
		{
			Triangulo triangulo = Triangulo();
			triangulo.id++;
			string t = triangulo.Nombre;
			string id = triangulo.ID;
			string c = triangulo.Color;
			String^ tString = gcnew System::String(t.c_str());
			String^ idString = gcnew System::String(c.c_str());
			String^ cString = gcnew System::String(id.c_str());
			triangulo.lado = Convert::ToInt16(this->numericUpDown1->Text);
			triangulo.lado1 = Convert::ToInt16(this->numericUpDown1->Text);
			triangulo.base = Convert::ToInt16(this->numericUpDown2->Text);
			cString = this->textBox1->Text;
			c = msclr::interop::marshal_as<std::string>(cString);
			triangulo.Color = c;
			identificador++;
			idString = Convert::ToString(identificador);
			label_area -> Text = "Area:" + triangulo.CalcArea().ToString();
			label_perimetro ->Text = "Perimetro:" + triangulo.CalcPerm().ToString();
			label_tipo->Text = "Tipo:" + tString;
			label_color->Text = "Color:" + cString;
			listBox1->Items->Add(cString + "." + tString + "." + idString +"\n");
		}
		public: System::Void calcularCuadrado()
		{
			Cuadrado cuadrado = Cuadrado();
			cuadrado.id++;
			string t = cuadrado.Nombre;
			string id = cuadrado.ID;
			string c = cuadrado.Color;
			String^ tString = gcnew System::String(t.c_str());
			String^ idString = gcnew System::String(c.c_str());
			String^ cString = gcnew System::String(id.c_str());
			cuadrado.lado = Convert::ToInt16(this->numericUpDown1->Text);
			cuadrado.lado1 = Convert::ToInt16(this->numericUpDown1->Text);
			cuadrado.base = Convert::ToInt16(this->numericUpDown2->Text);
			cString = this->textBox1->Text;
			c = msclr::interop::marshal_as<std::string>(cString);
			cuadrado.Color = c;
			identificador++;
			idString = Convert::ToString(identificador);
			label_area->Text = "Area:" + cuadrado.CalcularArea().ToString();
			label_perimetro->Text = "Perimetro:" + cuadrado.CalcularPerimetro().ToString();
			label_tipo->Text = "Tipo:" + tString;
			label_color->Text = "Color:" + cString;
			listBox1->Items->Add(cString + "." + tString + "." + idString + "\n");
		}
		public: System::Void calcularRectangulo()
		  {
			  Rectangulo rectangulo = Rectangulo();
			  rectangulo.id++;
			  string t = rectangulo.Nombre;
			  string id = rectangulo.ID;
			  string c = rectangulo.Color;
			  String^ tString = gcnew System::String(t.c_str());
			  String^ idString = gcnew System::String(c.c_str());
			  String^ cString = gcnew System::String(id.c_str());
			  rectangulo.lado = Convert::ToInt16(this->numericUpDown1->Text);
			  rectangulo.lado1 = Convert::ToInt16(this->numericUpDown1->Text);			
			  rectangulo.base = Convert::ToInt16(this->numericUpDown2->Text);
			  cString = this->textBox1->Text;
			  c = msclr::interop::marshal_as<std::string>(cString);
			  rectangulo.Color = c;
			  identificador++;
			  idString = Convert::ToString(identificador);
			  label_area->Text = "Area:" + rectangulo.CalcArea().ToString();
			  label_perimetro->Text = "Perimetro:" + rectangulo.CalcPer().ToString();
			  label_tipo->Text = "Tipo:" + tString;
			  label_color->Text = "Color:" + cString;
			  listBox1->Items->Add(cString + "." + tString + "." + idString + "\n");
			  }

#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		int indice = comboBox1->SelectedIndex;
		switch (indice)
		{
		case 0:
			numericUpDown1->Visible = true;
			numericUpDown2->Visible = true;
			btn2->Visible = true;
			textBox1->Visible = true;
			label1 -> Visible = true;
			label2->Visible = true;
			break;
		case 1:
			numericUpDown1->Visible = true;
			numericUpDown2->Visible = false;
			btn2->Visible = true;
			textBox1->Visible = true;
			label1->Visible = false;
			label2->Visible = true;
			break;
		case 2:
			numericUpDown1->Visible = true;
			numericUpDown2->Visible = true;
			btn2->Visible = true;
			textBox1->Visible = true;
			label1->Visible = true;
			label2->Visible = true;
			break;
		default:
			break;
		}
	}
private: System::Void button_generar_Click(System::Object^ sender, System::EventArgs^ e) 
{
	button_generar->Enabled = false;
	srand(time(NULL));
	int aleatorios = Convert::ToInt16(numericUpDown3->Text);
	for (int i = 0; i < aleatorios; i++)
	{
		String^ posicion = Convert::ToString(i);
		String^ valor = Convert::ToString(rand() % 100);
		numeritos->InsertarNuevo(valor);
		listaHash->Add(posicion, valor); 
		listBox2->Items->Add(posicion + ". " + valor + "\n");
	}
	MessageBox::Show("Numeros Generados");
}
private: System::Void btn2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	int indice = comboBox1->SelectedIndex;
	switch (indice)
	{
	case 0:
		calcularTriangulo();
		break;
	case 1:
		calcularCuadrado();
		break;
	case 2:
		calcularRectangulo();
		break;
	default:
		break;
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	stopwatch.Reset();
	stopwatch.Start();
	timer1->Start();
	String^ buscar = numericUpDown4->Text;
	int puesto = numeritos->Buscar(buscar);
	timer1->Stop();
	stopwatch.Stop();
	String^ tiempo = stopwatch.Elapsed.ToString();
	if (puesto == -1)
	{
		MessageBox::Show("No existe ese elemento");
	}
	else
	{
		MessageBox::Show(buscar + " Esta en la pocision " + Convert::ToString(puesto));
		MessageBox::Show("Tiempo:"+tiempo);
	}
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) 
{
	_ticks++;

}
private: System::Void button_busc_hash_Click(System::Object^ sender, System::EventArgs^ e) 
{
	stopwatch.Reset();
	stopwatch.Start();
	timer1->Start();
	String^ buscar = numericUpDown4->Text;
	int i = 0;
	String^ puesto;
	bool encontrado = false;
	/*for each (String^ valor in listaHash->Values)
	{
		if (valor == buscar)
		{
			encontrado = true;
			puesto = i;
			break;
		}
	}*/
	/*if (listaHash->ContainsValue(buscar))
	{
		encontrado = true;
	}*/
	ICollection^ c = listaHash->Keys;
	for each (String^ var in c)
	{
		String^ value = Convert::ToString(listaHash[var]);
		if (buscar == value)
		{
			encontrado = true;
			puesto = var;
		}
	}
	timer1->Stop();
	stopwatch.Stop();
	String^ tiempo = stopwatch.Elapsed.ToString();
	if (!encontrado)
	{
		MessageBox::Show("No existe ese elemento");
	}
	else
	{
		MessageBox::Show(buscar + " Esta en la pocision " + puesto);
		MessageBox::Show("Tiempo:" + tiempo);
	}
}
};
}