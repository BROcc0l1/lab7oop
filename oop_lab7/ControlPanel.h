#pragma once

#include "sattelite.h"


namespace ooplab7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	/// <summary>
	/// Summary for ControlPanel
	/// </summary>
	public ref class ControlPanel : public System::Windows::Forms::Form
	{
	public:
		ControlPanel(void)
		{
			InitializeComponent();
			printOutput("");
			sattelite = new Sattelite(false, Point3D(0,0,0), 100.0, 0.0, 3);
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ControlPanel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  tool_panel;
	private: System::Windows::Forms::Panel^  toolPanelMid;
	protected:


	private: System::Windows::Forms::Panel^  toolPanelLeft;

	private: System::Windows::Forms::Label^  locationLabel;
	private: System::Windows::Forms::Label^  speedLabel;

	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  autoPilotLabel;

	private: System::Windows::Forms::Label^  locationData;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  moveToX;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  moveToZ;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  moveToY;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::TextBox^  accelerateBy;
	private: System::Windows::Forms::Button^  accelerateButton;
	private: System::Windows::Forms::Label^  speedData;




	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  autoPilotData;





	protected:






	public: System::Windows::Forms::ListBox^  outputLog;
			void printOutput(String^ s) {
				this->outputLog->Items->Insert(0, s);
			}
	protected:

	private: Sattelite* sattelite;
	private: System::Windows::Forms::Button^  moveButton;
	private: System::Windows::Forms::Button^  autoPilotSwitch;



	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ControlPanel::typeid));
			this->outputLog = (gcnew System::Windows::Forms::ListBox());
			this->moveButton = (gcnew System::Windows::Forms::Button());
			this->autoPilotSwitch = (gcnew System::Windows::Forms::Button());
			this->tool_panel = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->autoPilotData = (gcnew System::Windows::Forms::Label());
			this->autoPilotLabel = (gcnew System::Windows::Forms::Label());
			this->toolPanelMid = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->accelerateBy = (gcnew System::Windows::Forms::TextBox());
			this->accelerateButton = (gcnew System::Windows::Forms::Button());
			this->speedData = (gcnew System::Windows::Forms::Label());
			this->speedLabel = (gcnew System::Windows::Forms::Label());
			this->toolPanelLeft = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->moveToZ = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->moveToY = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->moveToX = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->locationData = (gcnew System::Windows::Forms::Label());
			this->locationLabel = (gcnew System::Windows::Forms::Label());
			this->tool_panel->SuspendLayout();
			this->panel1->SuspendLayout();
			this->toolPanelMid->SuspendLayout();
			this->panel3->SuspendLayout();
			this->toolPanelLeft->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// outputLog
			// 
			this->outputLog->BackColor = System::Drawing::Color::Black;
			this->outputLog->Dock = System::Windows::Forms::DockStyle::Right;
			this->outputLog->Font = (gcnew System::Drawing::Font(L"Consolas", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->outputLog->ForeColor = System::Drawing::Color::Lime;
			this->outputLog->FormattingEnabled = true;
			this->outputLog->ItemHeight = 20;
			this->outputLog->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"=============== LOG ===============" });
			this->outputLog->Location = System::Drawing::Point(582, 0);
			this->outputLog->Name = L"outputLog";
			this->outputLog->ScrollAlwaysVisible = true;
			this->outputLog->Size = System::Drawing::Size(400, 553);
			this->outputLog->TabIndex = 0;
			// 
			// moveButton
			// 
			this->moveButton->Location = System::Drawing::Point(5, 100);
			this->moveButton->Name = L"moveButton";
			this->moveButton->Size = System::Drawing::Size(170, 35);
			this->moveButton->TabIndex = 1;
			this->moveButton->Text = L"MOVE TO POINT:";
			this->moveButton->UseVisualStyleBackColor = true;
			this->moveButton->Click += gcnew System::EventHandler(this, &ControlPanel::moveButton_Click);
			// 
			// autoPilotSwitch
			// 
			this->autoPilotSwitch->Location = System::Drawing::Point(21, 100);
			this->autoPilotSwitch->Name = L"autoPilotSwitch";
			this->autoPilotSwitch->Size = System::Drawing::Size(142, 70);
			this->autoPilotSwitch->TabIndex = 2;
			this->autoPilotSwitch->Text = L"ENABLE";
			this->autoPilotSwitch->UseVisualStyleBackColor = true;
			this->autoPilotSwitch->Click += gcnew System::EventHandler(this, &ControlPanel::autoPilotSwitch_Click);
			// 
			// tool_panel
			// 
			this->tool_panel->Controls->Add(this->panel1);
			this->tool_panel->Controls->Add(this->toolPanelMid);
			this->tool_panel->Controls->Add(this->toolPanelLeft);
			this->tool_panel->Dock = System::Windows::Forms::DockStyle::Top;
			this->tool_panel->Location = System::Drawing::Point(0, 0);
			this->tool_panel->Name = L"tool_panel";
			this->tool_panel->Size = System::Drawing::Size(582, 201);
			this->tool_panel->TabIndex = 3;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->autoPilotData);
			this->panel1->Controls->Add(this->autoPilotSwitch);
			this->panel1->Controls->Add(this->autoPilotLabel);
			this->panel1->Location = System::Drawing::Point(390, 10);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(184, 190);
			this->panel1->TabIndex = 3;
			// 
			// autoPilotData
			// 
			this->autoPilotData->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->autoPilotData->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->autoPilotData->ForeColor = System::Drawing::Color::Red;
			this->autoPilotData->Location = System::Drawing::Point(0, 35);
			this->autoPilotData->Name = L"autoPilotData";
			this->autoPilotData->Size = System::Drawing::Size(188, 45);
			this->autoPilotData->TabIndex = 3;
			this->autoPilotData->Text = L"OFF";
			this->autoPilotData->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// autoPilotLabel
			// 
			this->autoPilotLabel->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->autoPilotLabel->Dock = System::Windows::Forms::DockStyle::Top;
			this->autoPilotLabel->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->autoPilotLabel->ForeColor = System::Drawing::Color::LimeGreen;
			this->autoPilotLabel->Location = System::Drawing::Point(0, 0);
			this->autoPilotLabel->Name = L"autoPilotLabel";
			this->autoPilotLabel->Size = System::Drawing::Size(184, 45);
			this->autoPilotLabel->TabIndex = 1;
			this->autoPilotLabel->Text = L"AUTOPILOT";
			this->autoPilotLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// toolPanelMid
			// 
			this->toolPanelMid->Controls->Add(this->panel3);
			this->toolPanelMid->Controls->Add(this->accelerateButton);
			this->toolPanelMid->Controls->Add(this->speedData);
			this->toolPanelMid->Controls->Add(this->speedLabel);
			this->toolPanelMid->Location = System::Drawing::Point(199, 10);
			this->toolPanelMid->Name = L"toolPanelMid";
			this->toolPanelMid->Size = System::Drawing::Size(184, 190);
			this->toolPanelMid->TabIndex = 2;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->accelerateBy);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel3->Location = System::Drawing::Point(0, 141);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(184, 49);
			this->panel3->TabIndex = 4;
			// 
			// label7
			// 
			this->label7->Location = System::Drawing::Point(124, 7);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(38, 40);
			this->label7->TabIndex = 2;
			this->label7->Text = L"m/s";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(24, 7);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(38, 40);
			this->label6->TabIndex = 1;
			this->label6->Text = L"BY:";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// accelerateBy
			// 
			this->accelerateBy->Location = System::Drawing::Point(68, 16);
			this->accelerateBy->MaxLength = 4;
			this->accelerateBy->Name = L"accelerateBy";
			this->accelerateBy->Size = System::Drawing::Size(50, 22);
			this->accelerateBy->TabIndex = 0;
			// 
			// accelerateButton
			// 
			this->accelerateButton->Location = System::Drawing::Point(4, 100);
			this->accelerateButton->Name = L"accelerateButton";
			this->accelerateButton->Size = System::Drawing::Size(175, 35);
			this->accelerateButton->TabIndex = 3;
			this->accelerateButton->Text = L"ACCELERATE";
			this->accelerateButton->UseVisualStyleBackColor = true;
			this->accelerateButton->Click += gcnew System::EventHandler(this, &ControlPanel::accelerateButton_Click);
			// 
			// speedData
			// 
			this->speedData->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->speedData->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->speedData->ForeColor = System::Drawing::Color::LimeGreen;
			this->speedData->Location = System::Drawing::Point(-3, 35);
			this->speedData->Name = L"speedData";
			this->speedData->Size = System::Drawing::Size(188, 45);
			this->speedData->TabIndex = 2;
			this->speedData->Text = L"0 m/s";
			this->speedData->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// speedLabel
			// 
			this->speedLabel->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->speedLabel->Dock = System::Windows::Forms::DockStyle::Top;
			this->speedLabel->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->speedLabel->ForeColor = System::Drawing::Color::LimeGreen;
			this->speedLabel->Location = System::Drawing::Point(0, 0);
			this->speedLabel->Name = L"speedLabel";
			this->speedLabel->Size = System::Drawing::Size(184, 45);
			this->speedLabel->TabIndex = 1;
			this->speedLabel->Text = L"SPEED";
			this->speedLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// toolPanelLeft
			// 
			this->toolPanelLeft->Controls->Add(this->panel2);
			this->toolPanelLeft->Controls->Add(this->locationData);
			this->toolPanelLeft->Controls->Add(this->locationLabel);
			this->toolPanelLeft->Controls->Add(this->moveButton);
			this->toolPanelLeft->Location = System::Drawing::Point(10, 10);
			this->toolPanelLeft->Name = L"toolPanelLeft";
			this->toolPanelLeft->Size = System::Drawing::Size(180, 190);
			this->toolPanelLeft->TabIndex = 1;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->moveToZ);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->moveToY);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->moveToX);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, 141);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(180, 49);
			this->panel2->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(164, 12);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(14, 30);
			this->label4->TabIndex = 6;
			this->label4->Text = L")";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// moveToZ
			// 
			this->moveToZ->Location = System::Drawing::Point(124, 17);
			this->moveToZ->MaxLength = 4;
			this->moveToZ->Name = L"moveToZ";
			this->moveToZ->Size = System::Drawing::Size(37, 22);
			this->moveToZ->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(108, 17);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(19, 28);
			this->label3->TabIndex = 4;
			this->label3->Text = L",";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// moveToY
			// 
			this->moveToY->Location = System::Drawing::Point(69, 17);
			this->moveToY->MaxLength = 4;
			this->moveToY->Name = L"moveToY";
			this->moveToY->Size = System::Drawing::Size(37, 22);
			this->moveToY->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(58, 20);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(12, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L",";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// moveToX
			// 
			this->moveToX->Location = System::Drawing::Point(16, 17);
			this->moveToX->MaxLength = 4;
			this->moveToX->Name = L"moveToX";
			this->moveToX->Size = System::Drawing::Size(37, 22);
			this->moveToX->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(4, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(16, 30);
			this->label1->TabIndex = 0;
			this->label1->Text = L"(";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// locationData
			// 
			this->locationData->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->locationData->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->locationData->ForeColor = System::Drawing::Color::LimeGreen;
			this->locationData->Location = System::Drawing::Point(0, 35);
			this->locationData->Name = L"locationData";
			this->locationData->Size = System::Drawing::Size(180, 45);
			this->locationData->TabIndex = 1;
			this->locationData->Text = L"(0,0,0)";
			this->locationData->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// locationLabel
			// 
			this->locationLabel->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->locationLabel->Dock = System::Windows::Forms::DockStyle::Top;
			this->locationLabel->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->locationLabel->ForeColor = System::Drawing::Color::LimeGreen;
			this->locationLabel->Location = System::Drawing::Point(0, 0);
			this->locationLabel->Name = L"locationLabel";
			this->locationLabel->Size = System::Drawing::Size(180, 45);
			this->locationLabel->TabIndex = 0;
			this->locationLabel->Text = L"LOCATION";
			this->locationLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ControlPanel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(982, 553);
			this->Controls->Add(this->tool_panel);
			this->Controls->Add(this->outputLog);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"ControlPanel";
			this->Text = L"ControlPanel";
			this->tool_panel->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->toolPanelMid->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->toolPanelLeft->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion



private: 
	System::Void moveButton_Click(System::Object^  sender, System::EventArgs^  e) {
	
		int x, y, z;
		try {
			x = System::Convert::ToInt32(moveToX->Text);
			y = System::Convert::ToInt32(moveToY->Text);
			z = System::Convert::ToInt32(moveToZ->Text);
			Point3D* whereToGo = new Point3D(x, y, z);
			printOutput(sattelite->moveMessage(whereToGo));
			locationData->Text = "(" + System::Convert::ToString(x) + "," + System::Convert::ToString(y) + "," + System::Convert::ToString(z) + ")";
		}
		catch (...) {
			printOutput("Input error.");
		}
	
	}
	private: 
	System::Void autoPilotSwitch_Click(System::Object^  sender, System::EventArgs^  e) {
		sattelite->toggleAutoPilot();
		if (sattelite->isOnAutoPilot()) {
			autoPilotData->ForeColor = System::Drawing::Color::LimeGreen;
			autoPilotData->Text = L"ON";
			printOutput("Autopilot enabled.");
		} else {
			autoPilotData->ForeColor = System::Drawing::Color::Red;
			autoPilotData->Text = L"OFF";
			printOutput("Autopilot disabled.");
		}
	}
	
private: 
	System::Void accelerateButton_Click(System::Object^  sender, System::EventArgs^  e) {
		int x;
		try {
			x = System::Convert::ToInt32(accelerateBy->Text);
			
			if (x > 0) printOutput("Accelerating by " + System::Convert::ToString(x) + " m/s.");
			if (x < 0) printOutput("Slowing down by " + System::Convert::ToString(-x) + " m/s.");
			while (x != 0) {
				if (x > 0) {
					sattelite->speed++;
					x--;
				}
				if (x < 0) {
					if (sattelite->speed == 0) break;
					sattelite->speed--;
					x++;
				}
				
				// ADD THREADING
				speedData->Text = System::Convert::ToString(sattelite->speed) + " m/s";
			}
		}
		catch (...) {
			printOutput("Input error.");
		}
	}

};
}
