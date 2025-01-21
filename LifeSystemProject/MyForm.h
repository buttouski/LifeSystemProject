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
			chart1->ChartAreas[0]->AxisY->Maximum = 50;
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
	
	
	private:
		int _countSeconds = 0;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	private: System::Windows::Forms::CheckBox^ checkBoxBreath;
	private: System::Windows::Forms::CheckBox^ checkBoxPulse;
	private: System::Windows::Forms::CheckBox^ checkBoxCHSS;
	private: System::Windows::Forms::CheckBox^ checkBoxbrain;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::GroupBox^ groupBox1;







		   int limitTemp = 35;


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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->checkBoxbrain = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxCHSS = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxPulse = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxBreath = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// timer
			// 
			this->timer->Interval = 1000;
			this->timer->Tick += gcnew System::EventHandler(this, &MyForm::timer_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(40, 319);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"label1";
			// 
			// splitContainer1
			// 
			this->splitContainer1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(3, 18);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->checkBoxBreath);
			this->splitContainer1->Panel1->Controls->Add(this->checkBoxPulse);
			this->splitContainer1->Panel1->Controls->Add(this->checkBoxCHSS);
			this->splitContainer1->Panel1->Controls->Add(this->checkBoxbrain);
			this->splitContainer1->Panel1->Controls->Add(this->chart1);
			this->splitContainer1->Size = System::Drawing::Size(1004, 262);
			this->splitContainer1->SplitterDistance = 969;
			this->splitContainer1->TabIndex = 0;
			// 
			// chart1
			// 
			this->chart1->BorderlineColor = System::Drawing::Color::Gray;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(15, 13);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::None;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Legend = L"Legend1";
			series1->MarkerBorderWidth = 3;
			series1->Name = L"Активность мозга";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Color = System::Drawing::Color::Red;
			series2->Legend = L"Legend1";
			series2->MarkerBorderWidth = 3;
			series2->Name = L"Частота сердечных\nсокращений";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Color = System::Drawing::Color::Gold;
			series3->Legend = L"Legend1";
			series3->MarkerBorderWidth = 3;
			series3->MarkerStep = 20;
			series3->Name = L"Пульс";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series4->Color = System::Drawing::Color::LimeGreen;
			series4->LabelBorderColor = System::Drawing::Color::Transparent;
			series4->LabelForeColor = System::Drawing::Color::MediumSeaGreen;
			series4->Legend = L"Legend1";
			series4->MarkerBorderWidth = 3;
			series4->Name = L"Дыхание";
			series4->YValuesPerPoint = 2;
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Series->Add(series3);
			this->chart1->Series->Add(series4);
			this->chart1->Size = System::Drawing::Size(920, 234);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &MyForm::chart1_Click);
			// 
			// checkBoxbrain
			// 
			this->checkBoxbrain->AutoSize = true;
			this->checkBoxbrain->BackColor = System::Drawing::Color::LightCyan;
			this->checkBoxbrain->Checked = true;
			this->checkBoxbrain->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBoxbrain->Location = System::Drawing::Point(776, 125);
			this->checkBoxbrain->Name = L"checkBoxbrain";
			this->checkBoxbrain->Size = System::Drawing::Size(147, 20);
			this->checkBoxbrain->TabIndex = 1;
			this->checkBoxbrain->Text = L"Активность мозга";
			this->checkBoxbrain->UseVisualStyleBackColor = false;
			this->checkBoxbrain->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxbrain_CheckedChanged);
			// 
			// checkBoxCHSS
			// 
			this->checkBoxCHSS->AutoSize = true;
			this->checkBoxCHSS->BackColor = System::Drawing::Color::LightPink;
			this->checkBoxCHSS->Location = System::Drawing::Point(776, 152);
			this->checkBoxCHSS->Name = L"checkBoxCHSS";
			this->checkBoxCHSS->Size = System::Drawing::Size(56, 20);
			this->checkBoxCHSS->TabIndex = 2;
			this->checkBoxCHSS->Text = L"ЧСС";
			this->checkBoxCHSS->UseVisualStyleBackColor = false;
			this->checkBoxCHSS->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxCHSS_CheckedChanged);
			// 
			// checkBoxPulse
			// 
			this->checkBoxPulse->AutoSize = true;
			this->checkBoxPulse->BackColor = System::Drawing::Color::NavajoWhite;
			this->checkBoxPulse->Location = System::Drawing::Point(776, 179);
			this->checkBoxPulse->Name = L"checkBoxPulse";
			this->checkBoxPulse->Size = System::Drawing::Size(69, 20);
			this->checkBoxPulse->TabIndex = 3;
			this->checkBoxPulse->Text = L"Пульс";
			this->checkBoxPulse->UseVisualStyleBackColor = false;
			this->checkBoxPulse->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxPulse_CheckedChanged);
			// 
			// checkBoxBreath
			// 
			this->checkBoxBreath->AutoSize = true;
			this->checkBoxBreath->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->checkBoxBreath->Location = System::Drawing::Point(776, 206);
			this->checkBoxBreath->Name = L"checkBoxBreath";
			this->checkBoxBreath->Size = System::Drawing::Size(85, 20);
			this->checkBoxBreath->TabIndex = 4;
			this->checkBoxBreath->Text = L"Дыхание";
			this->checkBoxBreath->UseVisualStyleBackColor = false;
			this->checkBoxBreath->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxBreath_CheckedChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->splitContainer1);
			this->groupBox1->Location = System::Drawing::Point(18, 15);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1010, 283);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Показатели";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1050, 473);
			this->Controls->Add(this->label1);
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {

		}

		private: DateTime timeNow; // Поле для хранения текущего времени

		private: System::Void timer_Tick(System::Object^ sender, System::EventArgs^ e) {
			timeNow = DateTime::Now; // Обновляем текущее время на каждом тик таймера
			Random^ random = gcnew Random(timeNow.Millisecond);
			double randomBrain = random->Next(0, 41);
			double randomCHSS = random->Next(0, 30);
			double randomPulse = random->Next(30, 40);
			double randomBreath = random->Next(0, 25);

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
			if (_countSeconds == 60) {
				_countSeconds = 0;

				chart1->ChartAreas[0]->AxisX->Minimum = timeNow.ToOADate();
				chart1->ChartAreas[0]->AxisX->Maximum = timeNow.AddMinutes(1).ToOADate();

				chart1->ChartAreas[0]->AxisX->IntervalType = DateTimeIntervalType::Seconds;
				chart1->ChartAreas[0]->AxisX->Interval = 5;
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
};
}
