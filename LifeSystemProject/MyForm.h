#pragma once

namespace LifeSystemProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms::DataVisualization::Charting;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{

	public:
		MyForm(void)
		{
			InitializeComponent();
			
			timer->Enabled = true;
			DateTime now = DateTime::Now;
			
			//chart1 brain activity settings
			chart1->ChartAreas[0]->AxisY->Maximum = 100;
			chart1->ChartAreas[0]->AxisY->Minimum = -5;

			chart1->ChartAreas[0]->AxisX->LabelStyle->Format = "H:mm:ss";
			chart1->Series[0]->XValueType = ChartValueType::DateTime;

			chart1->ChartAreas[0]->AxisX->Minimum = now.ToOADate();
			chart1->ChartAreas[0]->AxisX->Maximum = now.AddMinutes(1).ToOADate();

			chart1->ChartAreas[0]->AxisX->IntervalType = DateTimeIntervalType::Seconds;
			chart1->ChartAreas[0]->AxisX->Interval = 8;

			//chart1 chss 
			chart1->Series[1]->XValueType = ChartValueType::DateTime;

			//chart1 Pulse 
			chart1->Series[2]->XValueType = ChartValueType::DateTime;

			//chart1 Breathe 
			chart1->Series[3]->XValueType = ChartValueType::DateTime;
		}
	
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	private: System::Windows::Forms::CheckBox^ checkBoxBreath;
	private: System::Windows::Forms::CheckBox^ checkBoxPulse;
	private: System::Windows::Forms::CheckBox^ checkBoxCHSS;
	private: System::Windows::Forms::CheckBox^ checkBoxbrain;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel3;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ kvtLabelCost;

	private: System::Windows::Forms::Label^ kvtLabel;
	private: System::Windows::Forms::Label^ oxygenLabelCost;





	private: System::Windows::Forms::Label^ oxygenLabel;
	private: System::Windows::Forms::Label^ O2LevelLabel;
	private: System::Windows::Forms::Label^ CO2LevelLabel;
	private: System::Windows::Forms::Label^ DiaLabel;


	private: System::Windows::Forms::Label^ SysLabel;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;



	private: System::Windows::Forms::Label^ label8;



	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::Timer^ timer;
	private: System::ComponentModel::IContainer^ components;


	protected:



	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series10 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series11 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series12 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->checkBoxBreath = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxPulse = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxCHSS = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxbrain = (gcnew System::Windows::Forms::CheckBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->kvtLabelCost = (gcnew System::Windows::Forms::Label());
			this->kvtLabel = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->oxygenLabelCost = (gcnew System::Windows::Forms::Label());
			this->oxygenLabel = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->O2LevelLabel = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->CO2LevelLabel = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->DiaLabel = (gcnew System::Windows::Forms::Label());
			this->SysLabel = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->SuspendLayout();
			// 
			// timer
			// 
			this->timer->Interval = 1000;
			this->timer->Tick += gcnew System::EventHandler(this, &MyForm::timer_Tick);
			// 
			// label1
			// 
			this->label1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label1->Location = System::Drawing::Point(3, 3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(221, 48);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Количество потребляемой электорэнергии";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// splitContainer1
			// 
			this->splitContainer1->BackColor = System::Drawing::Color::PowderBlue;
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(3, 18);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->label18);
			this->splitContainer1->Panel1->Controls->Add(this->label17);
			this->splitContainer1->Panel1->Controls->Add(this->label16);
			this->splitContainer1->Panel1->Controls->Add(this->label15);
			this->splitContainer1->Panel1->Controls->Add(this->checkBoxBreath);
			this->splitContainer1->Panel1->Controls->Add(this->checkBoxPulse);
			this->splitContainer1->Panel1->Controls->Add(this->checkBoxCHSS);
			this->splitContainer1->Panel1->Controls->Add(this->checkBoxbrain);
			this->splitContainer1->Panel1->Controls->Add(this->chart1);
			this->splitContainer1->Size = System::Drawing::Size(1164, 392);
			this->splitContainer1->SplitterDistance = 1134;
			this->splitContainer1->TabIndex = 0;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(1055, 311);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(14, 16);
			this->label18->TabIndex = 8;
			this->label18->Text = L"0";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(1055, 258);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(14, 16);
			this->label17->TabIndex = 7;
			this->label17->Text = L"0";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(1055, 283);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(14, 16);
			this->label16->TabIndex = 6;
			this->label16->Text = L"0";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(1055, 229);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(14, 16);
			this->label15->TabIndex = 5;
			this->label15->Text = L"0";
			// 
			// checkBoxBreath
			// 
			this->checkBoxBreath->AutoSize = true;
			this->checkBoxBreath->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->checkBoxBreath->Checked = true;
			this->checkBoxBreath->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBoxBreath->Location = System::Drawing::Point(942, 310);
			this->checkBoxBreath->Name = L"checkBoxBreath";
			this->checkBoxBreath->Size = System::Drawing::Size(85, 20);
			this->checkBoxBreath->TabIndex = 4;
			this->checkBoxBreath->Text = L"Дыхание";
			this->checkBoxBreath->UseVisualStyleBackColor = false;
			this->checkBoxBreath->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxBreath_CheckedChanged);
			// 
			// checkBoxPulse
			// 
			this->checkBoxPulse->AutoSize = true;
			this->checkBoxPulse->BackColor = System::Drawing::Color::NavajoWhite;
			this->checkBoxPulse->Checked = true;
			this->checkBoxPulse->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBoxPulse->Location = System::Drawing::Point(942, 283);
			this->checkBoxPulse->Name = L"checkBoxPulse";
			this->checkBoxPulse->Size = System::Drawing::Size(69, 20);
			this->checkBoxPulse->TabIndex = 3;
			this->checkBoxPulse->Text = L"Пульс";
			this->checkBoxPulse->UseVisualStyleBackColor = false;
			this->checkBoxPulse->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxPulse_CheckedChanged);
			// 
			// checkBoxCHSS
			// 
			this->checkBoxCHSS->AutoSize = true;
			this->checkBoxCHSS->BackColor = System::Drawing::Color::LightPink;
			this->checkBoxCHSS->Checked = true;
			this->checkBoxCHSS->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBoxCHSS->Location = System::Drawing::Point(942, 256);
			this->checkBoxCHSS->Name = L"checkBoxCHSS";
			this->checkBoxCHSS->Size = System::Drawing::Size(56, 20);
			this->checkBoxCHSS->TabIndex = 2;
			this->checkBoxCHSS->Text = L"ЧСС";
			this->checkBoxCHSS->UseVisualStyleBackColor = false;
			this->checkBoxCHSS->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxCHSS_CheckedChanged);
			// 
			// checkBoxbrain
			// 
			this->checkBoxbrain->AutoSize = true;
			this->checkBoxbrain->BackColor = System::Drawing::Color::LightCyan;
			this->checkBoxbrain->Checked = true;
			this->checkBoxbrain->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBoxbrain->Location = System::Drawing::Point(942, 229);
			this->checkBoxbrain->Name = L"checkBoxbrain";
			this->checkBoxbrain->Size = System::Drawing::Size(97, 20);
			this->checkBoxbrain->TabIndex = 1;
			this->checkBoxbrain->Text = L"Акт. мозга";
			this->checkBoxbrain->UseVisualStyleBackColor = false;
			this->checkBoxbrain->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxbrain_CheckedChanged);
			// 
			// chart1
			// 
			this->chart1->BorderlineColor = System::Drawing::Color::Gray;
			chartArea3->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart1->Legends->Add(legend3);
			this->chart1->Location = System::Drawing::Point(15, 13);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::None;
			series9->ChartArea = L"ChartArea1";
			series9->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series9->Legend = L"Legend1";
			series9->MarkerBorderWidth = 3;
			series9->Name = L"Активность мозга";
			series10->ChartArea = L"ChartArea1";
			series10->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series10->Color = System::Drawing::Color::Red;
			series10->Legend = L"Legend1";
			series10->MarkerBorderWidth = 3;
			series10->Name = L"Частота сердечных\nсокращений";
			series11->ChartArea = L"ChartArea1";
			series11->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series11->Color = System::Drawing::Color::Gold;
			series11->Legend = L"Legend1";
			series11->MarkerBorderWidth = 3;
			series11->MarkerStep = 20;
			series11->Name = L"Пульс";
			series12->ChartArea = L"ChartArea1";
			series12->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series12->Color = System::Drawing::Color::LimeGreen;
			series12->LabelBorderColor = System::Drawing::Color::Transparent;
			series12->LabelForeColor = System::Drawing::Color::MediumSeaGreen;
			series12->Legend = L"Legend1";
			series12->MarkerBorderWidth = 3;
			series12->Name = L"Дыхание";
			series12->YValuesPerPoint = 2;
			this->chart1->Series->Add(series9);
			this->chart1->Series->Add(series10);
			this->chart1->Series->Add(series11);
			this->chart1->Series->Add(series12);
			this->chart1->Size = System::Drawing::Size(1146, 364);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->splitContainer1);
			this->groupBox1->Location = System::Drawing::Point(18, 15);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1170, 413);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Показатели";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->kvtLabelCost);
			this->panel1->Controls->Add(this->kvtLabel);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(21, 456);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(238, 131);
			this->panel1->TabIndex = 2;
			// 
			// kvtLabelCost
			// 
			this->kvtLabelCost->AutoSize = true;
			this->kvtLabelCost->Location = System::Drawing::Point(60, 92);
			this->kvtLabelCost->Name = L"kvtLabelCost";
			this->kvtLabelCost->Size = System::Drawing::Size(14, 16);
			this->kvtLabelCost->TabIndex = 5;
			this->kvtLabelCost->Text = L"0";
			// 
			// kvtLabel
			// 
			this->kvtLabel->AutoSize = true;
			this->kvtLabel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->kvtLabel->Location = System::Drawing::Point(60, 58);
			this->kvtLabel->Name = L"kvtLabel";
			this->kvtLabel->Size = System::Drawing::Size(14, 16);
			this->kvtLabel->TabIndex = 4;
			this->kvtLabel->Text = L"0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(8, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(34, 16);
			this->label3->TabIndex = 3;
			this->label3->Text = L"руб.";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(8, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"кВт*ч:";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->oxygenLabelCost);
			this->panel2->Controls->Add(this->oxygenLabel);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Location = System::Drawing::Point(283, 458);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(220, 129);
			this->panel2->TabIndex = 4;
			// 
			// oxygenLabelCost
			// 
			this->oxygenLabelCost->AutoSize = true;
			this->oxygenLabelCost->Location = System::Drawing::Point(74, 92);
			this->oxygenLabelCost->Name = L"oxygenLabelCost";
			this->oxygenLabelCost->Size = System::Drawing::Size(14, 16);
			this->oxygenLabelCost->TabIndex = 5;
			this->oxygenLabelCost->Text = L"0";
			// 
			// oxygenLabel
			// 
			this->oxygenLabel->AutoSize = true;
			this->oxygenLabel->Location = System::Drawing::Point(74, 57);
			this->oxygenLabel->Name = L"oxygenLabel";
			this->oxygenLabel->Size = System::Drawing::Size(14, 16);
			this->oxygenLabel->TabIndex = 4;
			this->oxygenLabel->Text = L"0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(10, 92);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(34, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"руб.";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(10, 57);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(56, 16);
			this->label5->TabIndex = 2;
			this->label5->Text = L"мл/мин:";
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(3, 1);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(198, 47);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Количество потребляемого кислорода";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->O2LevelLabel);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Location = System::Drawing::Point(515, 458);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(212, 60);
			this->panel3->TabIndex = 5;
			// 
			// O2LevelLabel
			// 
			this->O2LevelLabel->AutoSize = true;
			this->O2LevelLabel->Location = System::Drawing::Point(34, 33);
			this->O2LevelLabel->Name = L"O2LevelLabel";
			this->O2LevelLabel->Size = System::Drawing::Size(14, 16);
			this->O2LevelLabel->TabIndex = 4;
			this->O2LevelLabel->Text = L"0";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 32);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(22, 16);
			this->label8->TabIndex = 3;
			this->label8->Text = L"%:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(12, 10);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(188, 16);
			this->label9->TabIndex = 1;
			this->label9->Text = L"уровень кислорода в крови";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel4->Controls->Add(this->CO2LevelLabel);
			this->panel4->Controls->Add(this->label7);
			this->panel4->Controls->Add(this->label10);
			this->panel4->Location = System::Drawing::Point(515, 524);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(212, 63);
			this->panel4->TabIndex = 6;
			// 
			// CO2LevelLabel
			// 
			this->CO2LevelLabel->AutoSize = true;
			this->CO2LevelLabel->Location = System::Drawing::Point(36, 43);
			this->CO2LevelLabel->Name = L"CO2LevelLabel";
			this->CO2LevelLabel->Size = System::Drawing::Size(14, 16);
			this->CO2LevelLabel->TabIndex = 3;
			this->CO2LevelLabel->Text = L"0";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 42);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(22, 16);
			this->label7->TabIndex = 2;
			this->label7->Text = L"%:";
			// 
			// label10
			// 
			this->label10->Location = System::Drawing::Point(12, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(162, 36);
			this->label10->TabIndex = 1;
			this->label10->Text = L"уровень углекислого газа  в крови";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel5->Controls->Add(this->DiaLabel);
			this->panel5->Controls->Add(this->SysLabel);
			this->panel5->Controls->Add(this->label11);
			this->panel5->Controls->Add(this->label12);
			this->panel5->Controls->Add(this->label13);
			this->panel5->Location = System::Drawing::Point(745, 458);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(222, 127);
			this->panel5->TabIndex = 5;
			// 
			// DiaLabel
			// 
			this->DiaLabel->AutoSize = true;
			this->DiaLabel->Location = System::Drawing::Point(159, 92);
			this->DiaLabel->Name = L"DiaLabel";
			this->DiaLabel->Size = System::Drawing::Size(14, 16);
			this->DiaLabel->TabIndex = 5;
			this->DiaLabel->Text = L"0";
			// 
			// SysLabel
			// 
			this->SysLabel->AutoSize = true;
			this->SysLabel->Location = System::Drawing::Point(158, 57);
			this->SysLabel->Name = L"SysLabel";
			this->SysLabel->Size = System::Drawing::Size(14, 16);
			this->SysLabel->TabIndex = 4;
			this->SysLabel->Text = L"0";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(12, 92);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(140, 16);
			this->label11->TabIndex = 3;
			this->label11->Text = L"Диастолическое АД:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(12, 57);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(132, 16);
			this->label12->TabIndex = 2;
			this->label12->Text = L"Систолическое АД:";
			// 
			// label13
			// 
			this->label13->Location = System::Drawing::Point(11, 7);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(207, 38);
			this->label13->TabIndex = 1;
			this->label13->Text = L"Артериальное давление (мм рт. ст.)";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel6->Controls->Add(this->button2);
			this->panel6->Controls->Add(this->button1);
			this->panel6->Location = System::Drawing::Point(988, 458);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(194, 126);
			this->panel6->TabIndex = 7;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Honeydew;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Location = System::Drawing::Point(19, 10);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(151, 49);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Включить подачу кислорода";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LavenderBlush;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(19, 65);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(151, 52);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Отлючить подачу кислорода";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->ForeColor = System::Drawing::Color::ForestGreen;
			this->label14->Location = System::Drawing::Point(26, 611);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(609, 22);
			this->label14->TabIndex = 8;
			this->label14->Text = L"Система работает корректно. Показатели пациента в пределах нормы";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1200, 645);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->groupBox1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MyForm";
			this->Text = L"Система жизнеобспечения";
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
		private: double _countSeconds = 0; // секунды для показателей
		private: double _countSecondsIndicators = 0; // секунды для индикаторов

		private: double _countKvt; // кВт
		private: double _countKvtCost = 0; // кВт в рублях

		private: double _countOxygen = 0; // o2
		private: double _countOxygenCost = 0; // o2 в рублях

		private: DateTime timeNow; // Поле для хранения текущего времени

		static bool buttonOxygControl = false; // Отключение кислорода
		static double O2LevelBlood; // Поле для хранения текущего уровня кислорода в крови 
		static double CO2LevelBlood; // Поле для хранения текущего уровня углекислого газа в крови 

		static double SysLevel; // Поле для хранения текущего уровня кислорода в крови 
		static double DiaLevel; // Поле для хранения текущего уровня углекислого газа в крови 

		static double ChssValue; // Поле для хранения чсс 
		static double PulseValue; // Поле для хранения пульса 

		static double BrainActivity; // Поле для хранения пульса 

		private: System::Void timer_Tick(System::Object^ sender, System::EventArgs^ e) {
			timeNow = DateTime::Now; // Обновляем текущее время на каждом тик таймера
			Random^ random = gcnew Random(timeNow.Millisecond);
			Random^ randomSecond = gcnew Random();
			double randomBrain = SimulateBrainActivity(random, PulseValue, this);
			double randomCHSS = SimulateCHSS(random, this);
			double randomPulse = SimulatePulse(random, this);
			double randomBreath = SimulateBreath(random, this);


			// Проверяем состояние чекбокса перед добавлением данных
			if (this->checkBoxbrain->Checked) {
				this->chart1->Series[0]->Points->AddXY(timeNow, randomBrain);
			}
			if (this->checkBoxCHSS->Checked) {
				this->chart1->Series[1]->Points->AddXY(timeNow, randomCHSS);
			}
			if (this->checkBoxPulse->Checked) {
				this->chart1->Series[2]->Points->AddXY(timeNow, randomPulse);
			}
			if (this->checkBoxBreath->Checked) {
				this->chart1->Series[3]->Points->AddXY(timeNow, randomBreath);
			}


			_countSeconds++;
			_countSecondsIndicators++;

			if (_countSeconds == 60) {
				_countSeconds = 0;

				chart1->ChartAreas[0]->AxisX->Minimum = timeNow.ToOADate();
				chart1->ChartAreas[0]->AxisX->Maximum = timeNow.AddMinutes(1).ToOADate();

				chart1->ChartAreas[0]->AxisX->IntervalType = DateTimeIntervalType::Seconds;
				chart1->ChartAreas[0]->AxisX->Interval = 5;
			}

			if (_countSecondsIndicators == 1) {
				_countSecondsIndicators = 0;

				_countKvt += 0.0025;
				_countKvtCost += 0.25;

				_countOxygen += 12.5;
				_countOxygenCost += 0.295;

				this->kvtLabel->Text = System::Convert::ToString(_countKvt);
				this->kvtLabelCost->Text = System::Convert::ToString(_countKvtCost);


				if (buttonOxygControl != true) {
					this->oxygenLabel->Text = System::Convert::ToString(System::Math::Round(_countOxygen, 1));
					this->oxygenLabelCost->Text = System::Convert::ToString(System::Math::Round(_countOxygenCost, 1));

					this->O2LevelLabel->Text = System::Convert::ToString(System::Math::Round(SimulateO2Level(random), 1));
					this->CO2LevelLabel->Text = System::Convert::ToString(System::Math::Round(SimulateCO2Level(random), 1));

					this->SysLabel->Text = System::Convert::ToString(System::Math::Round(SimulateSys(random), 1));
					this->DiaLabel->Text = System::Convert::ToString(System::Math::Round(SimulateDia(random), 1));
				}
				else {
					this->O2LevelLabel->Text = System::Convert::ToString(System::Math::Round(SimulateO2Level(random), 1));
					this->CO2LevelLabel->Text = System::Convert::ToString(System::Math::Round(SimulateCO2Level(random), 1));

					this->SysLabel->Text = System::Convert::ToString(System::Math::Round(SimulateSys(random), 1));
					this->DiaLabel->Text = System::Convert::ToString(System::Math::Round(SimulateDia(random), 1));
				}

			}

		}
			  
		private:
			static double SimulateBrainActivity(Random^ random, double val, MyForm^ form)
			{
				if (buttonOxygControl != true) {
					double baseBrainActivity = random->Next(8, 12);
					double noise = random->NextDouble() * 10 - 5;
					BrainActivity = baseBrainActivity + noise;
					form->label15->Text = System::Math::Round(BrainActivity, 2).ToString();
					return BrainActivity;
				}
				else if (buttonOxygControl == true)
				{
					if (val > 20) {
						BrainActivity += 1;
						form->label15->Text = System::Math::Round(BrainActivity, 2).ToString();
						return BrainActivity;
					}
					else if(val < 20){
						form->label15->Text = System::Math::Round(BrainActivity, 2).ToString();
						BrainActivity = val;
						return BrainActivity;
					}
				} 
			}
			static double SimulatePulse(Random^ random, MyForm^ form)
			{
				if (buttonOxygControl != true) {
					double basePulse = random->Next(60, 80);
					double noise = random->NextDouble() * 10 - 5;
					PulseValue = basePulse + noise;
					form->label16->Text = System::Math::Round(PulseValue, 2).ToString();
					return PulseValue;
				}
				else if (buttonOxygControl == true)
				{
					if (PulseValue > 0) {
						int min = PulseValue - 1;
						double basePulse = random->Next(min, PulseValue);
						PulseValue = basePulse;
						form->label16->Text = System::Math::Round(PulseValue, 2).ToString();
						PulseValue -= 0.5;
						return PulseValue;
					}
					else if (PulseValue < 20) {
						PulseValue = 0;
						form->label16->Text = System::Math::Round(PulseValue, 2).ToString();
						return 0;
					}

				}
			}

			static double SimulateCHSS(Random^ random, MyForm^ form)
			{
				if (buttonOxygControl != true) {
					double baseCHSS = random->Next(80, 90);
					double noise = random->NextDouble() * 15 - 5;
					ChssValue = baseCHSS + noise;
					form->label17->Text = System::Math::Round(ChssValue, 2).ToString();
					return ChssValue;
				}
				else if (buttonOxygControl == true)
				{
					if (ChssValue > 0) {
						int min = ChssValue - 1;
						double baseCHSS = random->Next(min, ChssValue);
						double noise = random->NextDouble() * 2 - 1;
						ChssValue = baseCHSS + noise;
						form->label17->Text = System::Math::Round(ChssValue, 2).ToString();
						ChssValue -= 3;
						return ChssValue;
					}
					else if (ChssValue <= 0) {
						ChssValue = 0;
						form->label17->Text = System::Math::Round(ChssValue, 2).ToString();
						return 0;
					}

				}
			}
			static double SimulateBreath(Random^ random, MyForm^ form)
			{
				if (buttonOxygControl != true) {
					double baseBreath = random->Next(25, 40);
					double noise = random->NextDouble() * 10 - 5;
					form->label18->Text = System::Math::Round((baseBreath + noise), 2).ToString();
					return baseBreath + noise;
				}
				else if (buttonOxygControl == true)
				{
					form->label18->Text = "0";
					return 0;

				}
			}



			static double SimulateO2Level(Random^ random)
			{
				if (buttonOxygControl != true) {
					double randomO2Level = random->Next(70, 80);
					double noise = random->NextDouble() * 2 - 1;
					O2LevelBlood = randomO2Level + noise;
					return O2LevelBlood;
				}
				else if(buttonOxygControl == true)
				{
					if (O2LevelBlood > 0) {
						int min = O2LevelBlood - 1;
						double randomO2Level = random->Next(min, O2LevelBlood);
						double noise = random->NextDouble() * 2 - 1;
						O2LevelBlood = randomO2Level + noise;
						O2LevelBlood -= 0.001;
						if (O2LevelBlood < 0) {
							return 0;
						}
						return O2LevelBlood;
					}
					
				}
			}
			static double SimulateCO2Level(Random^ random)
			{
				if (buttonOxygControl != true) {
					double randomCO2Level = random->Next(3, 5);
					double noise = random->NextDouble() * 2 - 1;
					CO2LevelBlood = randomCO2Level + noise;
					return CO2LevelBlood;
				}
				else if (buttonOxygControl == true)
				{
					if (CO2LevelBlood < 10) {
						int max = CO2LevelBlood + 0.001;
						double randomCO2Level = random->Next(CO2LevelBlood, max);
						double noise = random->NextDouble() * 2 - 0.001;
						CO2LevelBlood = randomCO2Level + noise;
						CO2LevelBlood += 0.0001;
						return CO2LevelBlood;
					}
					else if (CO2LevelBlood > 10) {
						return CO2LevelBlood;
					}

				}

			}
			static double SimulateSys(Random^ random)
			{
				if (buttonOxygControl != true) {
					double randomSys = random->Next(120, 125);
					double noise = random->NextDouble() * 2 - 1;
					SysLevel = randomSys + noise;
					return SysLevel;
				}
				else if (buttonOxygControl == true)
				{
					if (SysLevel > 0) {
						int min = SysLevel - 2;
						double randomSys = random->Next(min, SysLevel);
						double noise = random->NextDouble() * 2 - 1;
						SysLevel = randomSys + noise;
						SysLevel -= 0.1;
						if (SysLevel < 0) {
							return 0;
						}
						return SysLevel;
					}

				}
			}
			static double SimulateDia(Random^ random)
			{
				if (buttonOxygControl != true) {
					double randomDia = random->Next(60, 90);
					double noise = random->NextDouble() * 2 - 1;
					DiaLevel = randomDia + noise;
					return DiaLevel;
				}
				else if (buttonOxygControl == true)
				{
					if (DiaLevel > 0) {
						int min = DiaLevel - 2;
						double randomDia = random->Next(min, DiaLevel);
						double noise = random->NextDouble() * 2 - 1;
						DiaLevel = DiaLevel + noise;
						DiaLevel -= 0.1;
						if (DiaLevel < 0) {
							return 0;
						}
						return DiaLevel;
					}

				}


			}
		


		// Очищаем данные, если чекбокс не отмечен
		private: System::Void checkBoxbrain_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (!this->checkBoxbrain->Checked) {
				this->chart1->Series[0]->Points->Clear();
			}
		}
		private: System::Void checkBoxCHSS_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (!this->checkBoxCHSS->Checked) {
				this->chart1->Series[1]->Points->Clear();
			}
		}
		private: System::Void checkBoxPulse_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (!this->checkBoxPulse->Checked) {
				this->chart1->Series[2]->Points->Clear();
			}
		}
		private: System::Void checkBoxBreath_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (!this->checkBoxBreath->Checked) {
				this->chart1->Series[3]->Points->Clear(); 
			}
		}

		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			buttonOxygControl = true;
			if (buttonOxygControl == true) {
				this->label14->ForeColor = Color::Crimson;
				this->label14->Text = "СИСТЕМА ПОДАЧИ КИСЛОРОДА ОТКЛЮЧЕНА! ВКЛЮЧИТЕ ПОДАЧУ КИСЛОРОДА";
			}
		}
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			buttonOxygControl = false;
			if (buttonOxygControl == false) {
				this->label14->ForeColor = Color::ForestGreen;
				this->label14->Text = "Система работает корректно. Показатели пациента в пределах нормы";
			}
		}
};
}
