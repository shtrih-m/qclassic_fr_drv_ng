#include "qclassic_interface.h"
#include <QDebug>
#include <QMetaObject>
#include <QMetaProperty>
#include <classic_interface.h>

int QClassicFrDrvNg::AddLD()
{
    return m_pimpl->AddLD();
}

int QClassicFrDrvNg::Beep()
{
    return m_pimpl->Beep();
}

int QClassicFrDrvNg::Buy()
{
    return m_pimpl->Buy();
}

int QClassicFrDrvNg::BuyEx()
{
    return m_pimpl->BuyEx();
}

int QClassicFrDrvNg::CancelCheck()
{
    return m_pimpl->CancelCheck();
}

int QClassicFrDrvNg::CashIncome()
{
    return m_pimpl->CashIncome();
}

int QClassicFrDrvNg::CashOutcome()
{
    return m_pimpl->CashOutcome();
}

int QClassicFrDrvNg::Charge()
{
    return m_pimpl->Charge();
}

int QClassicFrDrvNg::CheckSubTotal()
{
    return m_pimpl->CheckSubTotal();
}

int QClassicFrDrvNg::CloseCheck()
{
    return m_pimpl->CloseCheck();
}

int QClassicFrDrvNg::ConfirmDate()
{
    return m_pimpl->ConfirmDate();
}

int QClassicFrDrvNg::Connect()
{
    return m_pimpl->Connect();
}

int QClassicFrDrvNg::ContinuePrint()
{
    return m_pimpl->ContinuePrint();
}

int QClassicFrDrvNg::Correction()
{
    return m_pimpl->Correction();
}

int QClassicFrDrvNg::CutCheck()
{
    return m_pimpl->CutCheck();
}

int QClassicFrDrvNg::DampRequest()
{
    return m_pimpl->DampRequest();
}

int QClassicFrDrvNg::DeleteLD()
{
    return m_pimpl->DeleteLD();
}

int QClassicFrDrvNg::Disconnect()
{
    return m_pimpl->Disconnect();
}

int QClassicFrDrvNg::Discount()
{
    return m_pimpl->Discount();
}

int QClassicFrDrvNg::DozeOilCheck()
{
    return m_pimpl->DozeOilCheck();
}

int QClassicFrDrvNg::Draw()
{
    return m_pimpl->Draw();
}

int QClassicFrDrvNg::EKLZDepartmentReportInDatesRange()
{
    return m_pimpl->EKLZDepartmentReportInDatesRange();
}

int QClassicFrDrvNg::EKLZDepartmentReportInSessionsRange()
{
    return m_pimpl->EKLZDepartmentReportInSessionsRange();
}

int QClassicFrDrvNg::EKLZJournalOnSessionNumber()
{
    return m_pimpl->EKLZJournalOnSessionNumber();
}

int QClassicFrDrvNg::EKLZSessionReportInDatesRange()
{
    return m_pimpl->EKLZSessionReportInDatesRange();
}

int QClassicFrDrvNg::EKLZSessionReportInSessionsRange()
{
    return m_pimpl->EKLZSessionReportInSessionsRange();
}

int QClassicFrDrvNg::ExchangeBytes()
{
    return m_pimpl->ExchangeBytes();
}

int QClassicFrDrvNg::FeedDocument()
{
    return m_pimpl->FeedDocument();
}

int QClassicFrDrvNg::Fiscalization()
{
    return m_pimpl->Fiscalization();
}

int QClassicFrDrvNg::FiscalReportForDatesRange()
{
    return m_pimpl->FiscalReportForDatesRange();
}

int QClassicFrDrvNg::FiscalReportForSessionRange()
{
    return m_pimpl->FiscalReportForSessionRange();
}

int QClassicFrDrvNg::GetActiveLD()
{
    return m_pimpl->GetActiveLD();
}

int QClassicFrDrvNg::EnumLD()
{
    return m_pimpl->EnumLD();
}

int QClassicFrDrvNg::GetCashReg()
{
    return m_pimpl->GetCashReg();
}

int QClassicFrDrvNg::GetCountLD()
{
    return m_pimpl->GetCountLD();
}

int QClassicFrDrvNg::GetData()
{
    return m_pimpl->GetData();
}

int QClassicFrDrvNg::GetDeviceMetrics()
{
    return m_pimpl->GetDeviceMetrics();
}

int QClassicFrDrvNg::GetECRStatus()
{
    return m_pimpl->GetECRStatus();
}

int QClassicFrDrvNg::GetShortECRStatus()
{
    return m_pimpl->GetShortECRStatus();
}

int QClassicFrDrvNg::GetExchangeParam()
{
    return m_pimpl->GetExchangeParam();
}

int QClassicFrDrvNg::GetFieldStruct()
{
    return m_pimpl->GetFieldStruct();
}

int QClassicFrDrvNg::GetFiscalizationParameters()
{
    return m_pimpl->GetFiscalizationParameters();
}

int QClassicFrDrvNg::GetFMRecordsSum()
{
    return m_pimpl->GetFMRecordsSum();
}

int QClassicFrDrvNg::GetLastFMRecordDate()
{
    return m_pimpl->GetLastFMRecordDate();
}

int QClassicFrDrvNg::GetLiterSumCounter()
{
    return m_pimpl->GetLiterSumCounter();
}

int QClassicFrDrvNg::GetOperationReg()
{
    return m_pimpl->GetOperationReg();
}

int QClassicFrDrvNg::GetParamLD()
{
    return m_pimpl->GetParamLD();
}

int QClassicFrDrvNg::GetRangeDatesAndSessions()
{
    return m_pimpl->GetRangeDatesAndSessions();
}

int QClassicFrDrvNg::GetRKStatus()
{
    return m_pimpl->GetRKStatus();
}

int QClassicFrDrvNg::GetTableStruct()
{
    return m_pimpl->GetTableStruct();
}

int QClassicFrDrvNg::InitFM()
{
    return m_pimpl->InitFM();
}

int QClassicFrDrvNg::InitTable()
{
    return m_pimpl->InitTable();
}

int QClassicFrDrvNg::InterruptDataStream()
{
    return m_pimpl->InterruptDataStream();
}

int QClassicFrDrvNg::InterruptFullReport()
{
    return m_pimpl->InterruptFullReport();
}

int QClassicFrDrvNg::InterruptTest()
{
    return m_pimpl->InterruptTest();
}

int QClassicFrDrvNg::LaunchRK()
{
    return m_pimpl->LaunchRK();
}

int QClassicFrDrvNg::LoadLineData()
{
    return m_pimpl->LoadLineData();
}

int QClassicFrDrvNg::OilSale()
{
    return m_pimpl->OilSale();
}

int QClassicFrDrvNg::OpenCheck()
{
    return m_pimpl->OpenCheck();
}

int QClassicFrDrvNg::OpenDrawer()
{
    return m_pimpl->OpenDrawer();
}

int QClassicFrDrvNg::PrintBarCode()
{
    return m_pimpl->PrintBarCode();
}

int QClassicFrDrvNg::PrintDepartmentReport()
{
    return m_pimpl->PrintDepartmentReport();
}

int QClassicFrDrvNg::PrintDocumentTitle()
{
    return m_pimpl->PrintDocumentTitle();
}

int QClassicFrDrvNg::PrintOperationReg()
{
    return m_pimpl->PrintOperationReg();
}

int QClassicFrDrvNg::PrintReportWithCleaning()
{
    return m_pimpl->PrintReportWithCleaning();
}

int QClassicFrDrvNg::PrintReportWithoutCleaning()
{
    return m_pimpl->PrintReportWithoutCleaning();
}

int QClassicFrDrvNg::PrintString()
{
    return m_pimpl->PrintString();
}

int QClassicFrDrvNg::PrintWideString()
{
    return m_pimpl->PrintWideString();
}

int QClassicFrDrvNg::ReadEKLZDocumentOnKPK()
{
    return m_pimpl->ReadEKLZDocumentOnKPK();
}

int QClassicFrDrvNg::ReadEKLZSessionTotal()
{
    return m_pimpl->ReadEKLZSessionTotal();
}

int QClassicFrDrvNg::ReadLicense()
{
    return m_pimpl->ReadLicense();
}

int QClassicFrDrvNg::ReadTable()
{
    return m_pimpl->ReadTable();
}

int QClassicFrDrvNg::RepeatDocument()
{
    return m_pimpl->RepeatDocument();
}

int QClassicFrDrvNg::ResetAllTRK()
{
    return m_pimpl->ResetAllTRK();
}

int QClassicFrDrvNg::ResetRK()
{
    return m_pimpl->ResetRK();
}

int QClassicFrDrvNg::ResetSettings()
{
    return m_pimpl->ResetSettings();
}

int QClassicFrDrvNg::ResetSummary()
{
    return m_pimpl->ResetSummary();
}

int QClassicFrDrvNg::ReturnBuy()
{
    return m_pimpl->ReturnBuy();
}

int QClassicFrDrvNg::ReturnBuyEx()
{
    return m_pimpl->ReturnBuyEx();
}

int QClassicFrDrvNg::ReturnSale()
{
    return m_pimpl->ReturnSale();
}

int QClassicFrDrvNg::ReturnSaleEx()
{
    return m_pimpl->ReturnSaleEx();
}

int QClassicFrDrvNg::Sale()
{
    return m_pimpl->Sale();
}

int QClassicFrDrvNg::SaleEx()
{
    return m_pimpl->SaleEx();
}

int QClassicFrDrvNg::SetActiveLD()
{
    return m_pimpl->SetActiveLD();
}

int QClassicFrDrvNg::SetDate()
{
    return m_pimpl->SetDate();
}

int QClassicFrDrvNg::SetDozeInMilliliters()
{
    return m_pimpl->SetDozeInMilliliters();
}

int QClassicFrDrvNg::SetDozeInMoney()
{
    return m_pimpl->SetDozeInMoney();
}

int QClassicFrDrvNg::SetExchangeParam()
{
    return m_pimpl->SetExchangeParam();
}

int QClassicFrDrvNg::SetParamLD()
{
    return m_pimpl->SetParamLD();
}

int QClassicFrDrvNg::SetPointPosition()
{
    return m_pimpl->SetPointPosition();
}

int QClassicFrDrvNg::SetRKParameters()
{
    return m_pimpl->SetRKParameters();
}

int QClassicFrDrvNg::SetSerialNumber()
{
    return m_pimpl->SetSerialNumber();
}

int QClassicFrDrvNg::SetTime()
{
    return m_pimpl->SetTime();
}

int QClassicFrDrvNg::ShowProperties()
{
    return m_pimpl->ShowProperties();
}

int QClassicFrDrvNg::StopEKLZDocumentPrinting()
{
    return m_pimpl->StopEKLZDocumentPrinting();
}

int QClassicFrDrvNg::StopRK()
{
    return m_pimpl->StopRK();
}

int QClassicFrDrvNg::Storno()
{
    return m_pimpl->Storno();
}

int QClassicFrDrvNg::StornoEx()
{
    return m_pimpl->StornoEx();
}

int QClassicFrDrvNg::StornoCharge()
{
    return m_pimpl->StornoCharge();
}

int QClassicFrDrvNg::StornoDiscount()
{
    return m_pimpl->StornoDiscount();
}

int QClassicFrDrvNg::SummOilCheck()
{
    return m_pimpl->SummOilCheck();
}

int QClassicFrDrvNg::SysAdminCancelCheck()
{
    return m_pimpl->SysAdminCancelCheck();
}

int QClassicFrDrvNg::Test()
{
    return m_pimpl->Test();
}

int QClassicFrDrvNg::WriteLicense()
{
    return m_pimpl->WriteLicense();
}

int QClassicFrDrvNg::WriteTable()
{
    return m_pimpl->WriteTable();
}

int QClassicFrDrvNg::PrintStringWithFont()
{
    return m_pimpl->PrintStringWithFont();
}

int QClassicFrDrvNg::EKLZActivizationResult()
{
    return m_pimpl->EKLZActivizationResult();
}

int QClassicFrDrvNg::EKLZActivization()
{
    return m_pimpl->EKLZActivization();
}

int QClassicFrDrvNg::CloseEKLZArchive()
{
    return m_pimpl->CloseEKLZArchive();
}

int QClassicFrDrvNg::GetEKLZSerialNumber()
{
    return m_pimpl->GetEKLZSerialNumber();
}

int QClassicFrDrvNg::EKLZInterrupt()
{
    return m_pimpl->EKLZInterrupt();
}

int QClassicFrDrvNg::GetEKLZCode1Report()
{
    return m_pimpl->GetEKLZCode1Report();
}

int QClassicFrDrvNg::GetEKLZCode2Report()
{
    return m_pimpl->GetEKLZCode2Report();
}

int QClassicFrDrvNg::TestEKLZArchiveIntegrity()
{
    return m_pimpl->TestEKLZArchiveIntegrity();
}

int QClassicFrDrvNg::GetEKLZVersion()
{
    return m_pimpl->GetEKLZVersion();
}

int QClassicFrDrvNg::InitEKLZArchive()
{
    return m_pimpl->InitEKLZArchive();
}

int QClassicFrDrvNg::GetEKLZData()
{
    return m_pimpl->GetEKLZData();
}

int QClassicFrDrvNg::GetEKLZJournal()
{
    return m_pimpl->GetEKLZJournal();
}

int QClassicFrDrvNg::GetEKLZDocument()
{
    return m_pimpl->GetEKLZDocument();
}

int QClassicFrDrvNg::GetEKLZDepartmentReportInDatesRange()
{
    return m_pimpl->GetEKLZDepartmentReportInDatesRange();
}

int QClassicFrDrvNg::GetEKLZDepartmentReportInSessionsRange()
{
    return m_pimpl->GetEKLZDepartmentReportInSessionsRange();
}

int QClassicFrDrvNg::GetEKLZSessionReportInDatesRange()
{
    return m_pimpl->GetEKLZSessionReportInDatesRange();
}

int QClassicFrDrvNg::GetEKLZSessionReportInSessionsRange()
{
    return m_pimpl->GetEKLZSessionReportInSessionsRange();
}

int QClassicFrDrvNg::GetEKLZSessionTotal()
{
    return m_pimpl->GetEKLZSessionTotal();
}

int QClassicFrDrvNg::GetEKLZActivizationResult()
{
    return m_pimpl->GetEKLZActivizationResult();
}

int QClassicFrDrvNg::SetEKLZResultCode()
{
    return m_pimpl->SetEKLZResultCode();
}

int QClassicFrDrvNg::OpenFiscalSlipDocument()
{
    return m_pimpl->OpenFiscalSlipDocument();
}

int QClassicFrDrvNg::OpenStandardFiscalSlipDocument()
{
    return m_pimpl->OpenStandardFiscalSlipDocument();
}

int QClassicFrDrvNg::RegistrationOnSlipDocument()
{
    return m_pimpl->RegistrationOnSlipDocument();
}

int QClassicFrDrvNg::StandardRegistrationOnSlipDocument()
{
    return m_pimpl->StandardRegistrationOnSlipDocument();
}

int QClassicFrDrvNg::ChargeOnSlipDocument()
{
    return m_pimpl->ChargeOnSlipDocument();
}

int QClassicFrDrvNg::StandardChargeOnSlipDocument()
{
    return m_pimpl->StandardChargeOnSlipDocument();
}

int QClassicFrDrvNg::CloseCheckOnSlipDocument()
{
    return m_pimpl->CloseCheckOnSlipDocument();
}

int QClassicFrDrvNg::StandardCloseCheckOnSlipDocument()
{
    return m_pimpl->StandardCloseCheckOnSlipDocument();
}

int QClassicFrDrvNg::ConfigureSlipDocument()
{
    return m_pimpl->ConfigureSlipDocument();
}

int QClassicFrDrvNg::ConfigureStandardSlipDocument()
{
    return m_pimpl->ConfigureStandardSlipDocument();
}

int QClassicFrDrvNg::FillSlipDocumentWithUnfiscalInfo()
{
    return m_pimpl->FillSlipDocumentWithUnfiscalInfo();
}

int QClassicFrDrvNg::ClearSlipDocumentBufferString()
{
    return m_pimpl->ClearSlipDocumentBufferString();
}

int QClassicFrDrvNg::ClearSlipDocumentBuffer()
{
    return m_pimpl->ClearSlipDocumentBuffer();
}

int QClassicFrDrvNg::PrintSlipDocument()
{
    return m_pimpl->PrintSlipDocument();
}

int QClassicFrDrvNg::DiscountOnSlipDocument()
{
    return m_pimpl->DiscountOnSlipDocument();
}

int QClassicFrDrvNg::StandardDiscountOnSlipDocument()
{
    return m_pimpl->StandardDiscountOnSlipDocument();
}

int QClassicFrDrvNg::EjectSlipDocument()
{
    return m_pimpl->EjectSlipDocument();
}

int QClassicFrDrvNg::LoadLineDataEx()
{
    return m_pimpl->LoadLineDataEx();
}

int QClassicFrDrvNg::DrawEx()
{
    return m_pimpl->DrawEx();
}

int QClassicFrDrvNg::ConfigureGeneralSlipDocument()
{
    return m_pimpl->ConfigureGeneralSlipDocument();
}

int QClassicFrDrvNg::WideLoadLineData()
{
    return m_pimpl->WideLoadLineData();
}

int QClassicFrDrvNg::PrintTaxReport()
{
    return m_pimpl->PrintTaxReport();
}

int QClassicFrDrvNg::GetLongSerialNumberAndLongRNM()
{
    return m_pimpl->GetLongSerialNumberAndLongRNM();
}

int QClassicFrDrvNg::SetLongSerialNumber()
{
    return m_pimpl->SetLongSerialNumber();
}

int QClassicFrDrvNg::FiscalizationWithLongRNM()
{
    return m_pimpl->FiscalizationWithLongRNM();
}

int QClassicFrDrvNg::Connect2()
{
    return m_pimpl->Connect2();
}

int QClassicFrDrvNg::GetECRPrinterStatus()
{
    return m_pimpl->GetECRPrinterStatus();
}

int QClassicFrDrvNg::ServerConnect()
{
    return m_pimpl->ServerConnect();
}

int QClassicFrDrvNg::ServerDisconnect()
{
    return m_pimpl->ServerDisconnect();
}

int QClassicFrDrvNg::LockPort()
{
    return m_pimpl->LockPort();
}

int QClassicFrDrvNg::UnlockPort()
{
    return m_pimpl->UnlockPort();
}

int QClassicFrDrvNg::AdminUnlockPort()
{
    return m_pimpl->AdminUnlockPort();
}

int QClassicFrDrvNg::AdminUnlockPorts()
{
    return m_pimpl->AdminUnlockPorts();
}

int QClassicFrDrvNg::ServerCheckKey()
{
    return m_pimpl->ServerCheckKey();
}

int QClassicFrDrvNg::GetFontMetrics()
{
    return m_pimpl->GetFontMetrics();
}

int QClassicFrDrvNg::GetFreeLDNumber()
{
    return m_pimpl->GetFreeLDNumber();
}

int QClassicFrDrvNg::ReadTable2()
{
    return m_pimpl->ReadTable2();
}

int QClassicFrDrvNg::WriteTable2()
{
    return m_pimpl->WriteTable2();
}

void QClassicFrDrvNg::SetFieldMinValue(int value)
{
    return m_pimpl->SetFieldMinValue(value);
}

void QClassicFrDrvNg::SetFieldMaxValue(int value)
{
    return m_pimpl->SetFieldMaxValue(value);
}

int QClassicFrDrvNg::CashControlOpen()
{
    return m_pimpl->CashControlOpen();
}

int QClassicFrDrvNg::CashControlClose()
{
    return m_pimpl->CashControlClose();
}

int QClassicFrDrvNg::SaveParams()
{
    return m_pimpl->SaveParams();
}

int QClassicFrDrvNg::GetEKLZCode1Status()
{
    return m_pimpl->GetEKLZCode1Status();
}

int QClassicFrDrvNg::GetEKLZCode2Status()
{
    return m_pimpl->GetEKLZCode2Status();
}

int QClassicFrDrvNg::ReadWriteFM()
{
    return m_pimpl->ReadWriteFM();
}

int QClassicFrDrvNg::PrintHeader()
{
    return m_pimpl->PrintHeader();
}

int QClassicFrDrvNg::CloseCheckWithResult()
{
    return m_pimpl->CloseCheckWithResult();
}

int QClassicFrDrvNg::AboutBox()
{
    return m_pimpl->AboutBox();
}

int QClassicFrDrvNg::PresenterKeep()
{
    return m_pimpl->PresenterKeep();
}

int QClassicFrDrvNg::PresenterPush()
{
    return m_pimpl->PresenterPush();
}

int QClassicFrDrvNg::OpenScreen()
{
    return m_pimpl->OpenScreen();
}

int QClassicFrDrvNg::CloseScreen()
{
    return m_pimpl->CloseScreen();
}

int QClassicFrDrvNg::SetSCPassword()
{
    return m_pimpl->SetSCPassword();
}

bool QClassicFrDrvNg::MethodSupported()
{
    return m_pimpl->MethodSupported();
}

bool QClassicFrDrvNg::PropertySupported()
{
    return m_pimpl->PropertySupported();
}

int QClassicFrDrvNg::LockPortTimeout()
{
    return m_pimpl->LockPortTimeout();
}

int QClassicFrDrvNg::GetIBMStatus()
{
    return m_pimpl->GetIBMStatus();
}

int QClassicFrDrvNg::GetShortIBMStatus()
{
    return m_pimpl->GetShortIBMStatus();
}

int QClassicFrDrvNg::GetCommandParams()
{
    return m_pimpl->GetCommandParams();
}

int QClassicFrDrvNg::SetCommandParams()
{
    return m_pimpl->SetCommandParams();
}

int QClassicFrDrvNg::SaveCommandParams()
{
    return m_pimpl->SaveCommandParams();
}

int QClassicFrDrvNg::SetAllCommandsParams()
{
    return m_pimpl->SetAllCommandsParams();
}

int QClassicFrDrvNg::SetDefCommandsParams()
{
    return m_pimpl->SetDefCommandsParams();
}

int QClassicFrDrvNg::OpenSession()
{
    return m_pimpl->OpenSession();
}

int QClassicFrDrvNg::WaitForPrinting()
{
    return m_pimpl->WaitForPrinting();
}

int QClassicFrDrvNg::GetInterval()
{
    return m_pimpl->GetInterval();
}

int QClassicFrDrvNg::SetInterval()
{
    return m_pimpl->SetInterval();
}

int QClassicFrDrvNg::ShowTablesDlg()
{
    return m_pimpl->ShowTablesDlg();
}

int QClassicFrDrvNg::ShowPayParams()
{
    return m_pimpl->ShowPayParams();
}

int QClassicFrDrvNg::ReprintSlipDocument()
{
    return m_pimpl->ReprintSlipDocument();
}

int QClassicFrDrvNg::CardPayProperties()
{
    return m_pimpl->CardPayProperties();
}

int QClassicFrDrvNg::PrintLine()
{
    return m_pimpl->PrintLine();
}

int QClassicFrDrvNg::JournalClear()
{
    return m_pimpl->JournalClear();
}

int QClassicFrDrvNg::JournalGetRow()
{
    return m_pimpl->JournalGetRow();
}

int QClassicFrDrvNg::JournalInit()
{
    return m_pimpl->JournalInit();
}

int QClassicFrDrvNg::FindDevice()
{
    return m_pimpl->FindDevice();
}

int QClassicFrDrvNg::LoadParams()
{
    return m_pimpl->LoadParams();
}

int QClassicFrDrvNg::FinishDocument()
{
    return m_pimpl->FinishDocument();
}

int QClassicFrDrvNg::PrintTrailer()
{
    return m_pimpl->PrintTrailer();
}

int QClassicFrDrvNg::WaitForCheckClose()
{
    return m_pimpl->WaitForCheckClose();
}

int QClassicFrDrvNg::GetSummFactor()
{
    return m_pimpl->GetSummFactor();
}

int QClassicFrDrvNg::GetQuantityFactor()
{
    return m_pimpl->GetQuantityFactor();
}

int QClassicFrDrvNg::ReadDeviceMetrics()
{
    return m_pimpl->ReadDeviceMetrics();
}

int QClassicFrDrvNg::ReadEcrStatus()
{
    return m_pimpl->ReadEcrStatus();
}

int QClassicFrDrvNg::SaveState()
{
    return m_pimpl->SaveState();
}

int QClassicFrDrvNg::RestoreState()
{
    return m_pimpl->RestoreState();
}

int QClassicFrDrvNg::LoadImage()
{
    return m_pimpl->LoadImage();
}

int QClassicFrDrvNg::GetCashAcceptorStatus()
{
    return m_pimpl->GetCashAcceptorStatus();
}

int QClassicFrDrvNg::GetCashAcceptorRegisters()
{
    return m_pimpl->GetCashAcceptorRegisters();
}

int QClassicFrDrvNg::CashAcceptorReport()
{
    return m_pimpl->CashAcceptorReport();
}

int QClassicFrDrvNg::ClearResult()
{
    return m_pimpl->ClearResult();
}

int QClassicFrDrvNg::MasterPayClearBuffer()
{
    return m_pimpl->MasterPayClearBuffer();
}

int QClassicFrDrvNg::MasterPayAddTextBlock()
{
    return m_pimpl->MasterPayAddTextBlock();
}

int QClassicFrDrvNg::MasterPayCreateMac()
{
    return m_pimpl->MasterPayCreateMac();
}

int QClassicFrDrvNg::LoadBlockData()
{
    return m_pimpl->LoadBlockData();
}

int QClassicFrDrvNg::GetEKLZCode3Report()
{
    return m_pimpl->GetEKLZCode3Report();
}

int QClassicFrDrvNg::ReadModemParameter()
{
    return m_pimpl->ReadModemParameter();
}

int QClassicFrDrvNg::WriteModemParameter()
{
    return m_pimpl->WriteModemParameter();
}

int QClassicFrDrvNg::GetPortNames()
{
    return m_pimpl->GetPortNames();
}

int QClassicFrDrvNg::OutputReceipt()
{
    return m_pimpl->OutputReceipt();
}

int QClassicFrDrvNg::Sale2()
{
    return m_pimpl->Sale2();
}

int QClassicFrDrvNg::PrintCliche()
{
    return m_pimpl->PrintCliche();
}

int QClassicFrDrvNg::PrintBarcodeLine()
{
    return m_pimpl->PrintBarcodeLine();
}

int QClassicFrDrvNg::PrintBarcodeGraph()
{
    return m_pimpl->PrintBarcodeGraph();
}

int QClassicFrDrvNg::ResetECR()
{
    return m_pimpl->ResetECR();
}

int QClassicFrDrvNg::PrintZReportFromBuffer()
{
    return m_pimpl->PrintZReportFromBuffer();
}

int QClassicFrDrvNg::PrintZReportInBuffer()
{
    return m_pimpl->PrintZReportInBuffer();
}

int QClassicFrDrvNg::ClearPrintBuffer()
{
    return m_pimpl->ClearPrintBuffer();
}

int QClassicFrDrvNg::ReadPrintBufferLine()
{
    return m_pimpl->ReadPrintBufferLine();
}

int QClassicFrDrvNg::ReadPrintBufferLineNumber()
{
    return m_pimpl->ReadPrintBufferLineNumber();
}

int QClassicFrDrvNg::OpenNonfiscalDocument()
{
    return m_pimpl->OpenNonfiscalDocument();
}

int QClassicFrDrvNg::CloseNonFiscalDocument()
{
    return m_pimpl->CloseNonFiscalDocument();
}

int QClassicFrDrvNg::PrintAttribute()
{
    return m_pimpl->PrintAttribute();
}

int QClassicFrDrvNg::ReadModelParamValue()
{
    return m_pimpl->ReadModelParamValue();
}

int QClassicFrDrvNg::LoadCashControlParams()
{
    return m_pimpl->LoadCashControlParams();
}

int QClassicFrDrvNg::ReadBanknoteCount()
{
    return m_pimpl->ReadBanknoteCount();
}

int QClassicFrDrvNg::PrintOperationalTaxReport()
{
    return m_pimpl->PrintOperationalTaxReport();
}

int QClassicFrDrvNg::WaitConnection()
{
    return m_pimpl->WaitConnection();
}

int QClassicFrDrvNg::ReadModelParamDescription()
{
    return m_pimpl->ReadModelParamDescription();
}

int QClassicFrDrvNg::PrintBarcodeUsingPrinter()
{
    return m_pimpl->PrintBarcodeUsingPrinter();
}

int QClassicFrDrvNg::CloseCheckWithKPK()
{
    return m_pimpl->CloseCheckWithKPK();
}

int QClassicFrDrvNg::ReadEKLZActivizationParams()
{
    return m_pimpl->ReadEKLZActivizationParams();
}

int QClassicFrDrvNg::GetShortReportInDatesRange()
{
    return m_pimpl->GetShortReportInDatesRange();
}

int QClassicFrDrvNg::GetShortReportInSessionRange()
{
    return m_pimpl->GetShortReportInSessionRange();
}

int QClassicFrDrvNg::ReadLastReceipt()
{
    return m_pimpl->ReadLastReceipt();
}

int QClassicFrDrvNg::ReadLastReceiptLine()
{
    return m_pimpl->ReadLastReceiptLine();
}

int QClassicFrDrvNg::ReadLastReceiptMac()
{
    return m_pimpl->ReadLastReceiptMac();
}

int QClassicFrDrvNg::BeginDocument()
{
    return m_pimpl->BeginDocument();
}

int QClassicFrDrvNg::EndDocument()
{
    return m_pimpl->EndDocument();
}

int QClassicFrDrvNg::Print2DBarcode()
{
    return m_pimpl->Print2DBarcode();
}

int QClassicFrDrvNg::LoadAndPrint2DBarcode()
{
    return m_pimpl->LoadAndPrint2DBarcode();
}

int QClassicFrDrvNg::ExcisableOperation()
{
    return m_pimpl->ExcisableOperation();
}

int QClassicFrDrvNg::ReadReportBufferLine()
{
    return m_pimpl->ReadReportBufferLine();
}

int QClassicFrDrvNg::ReadParams()
{
    return m_pimpl->ReadParams();
}

int QClassicFrDrvNg::GetCashRegEx()
{
    return m_pimpl->GetCashRegEx();
}

int QClassicFrDrvNg::GetWareBaseCashRegs()
{
    return m_pimpl->GetWareBaseCashRegs();
}

int QClassicFrDrvNg::PrintCashierReport()
{
    return m_pimpl->PrintCashierReport();
}

int QClassicFrDrvNg::PrintHourlyReport()
{
    return m_pimpl->PrintHourlyReport();
}

int QClassicFrDrvNg::PrintWareReport()
{
    return m_pimpl->PrintWareReport();
}

int QClassicFrDrvNg::UpdateWare()
{
    return m_pimpl->UpdateWare();
}

int QClassicFrDrvNg::CheckFM()
{
    return m_pimpl->CheckFM();
}

int QClassicFrDrvNg::RemoveWare()
{
    return m_pimpl->RemoveWare();
}

int QClassicFrDrvNg::ReadErrorDescription()
{
    return m_pimpl->ReadErrorDescription();
}

int QClassicFrDrvNg::ReadLastErrorDescription()
{
    return m_pimpl->ReadLastErrorDescription();
}

int QClassicFrDrvNg::ReadWare()
{
    return m_pimpl->ReadWare();
}

int QClassicFrDrvNg::ReadModelParam()
{
    return m_pimpl->ReadModelParam();
}

int QClassicFrDrvNg::InitEEPROM()
{
    return m_pimpl->InitEEPROM();
}

int QClassicFrDrvNg::CheckConnection()
{
    return m_pimpl->CheckConnection();
}

int QClassicFrDrvNg::ChangeProtocol()
{
    return m_pimpl->ChangeProtocol();
}

int QClassicFrDrvNg::GetECRParams()
{
    return m_pimpl->GetECRParams();
}

int QClassicFrDrvNg::ShowImportDlg()
{
    return m_pimpl->ShowImportDlg();
}

int QClassicFrDrvNg::JournalOperation()
{
    return m_pimpl->JournalOperation();
}

int QClassicFrDrvNg::MFPActivization()
{
    return m_pimpl->MFPActivization();
}

int QClassicFrDrvNg::MFPCloseArchive()
{
    return m_pimpl->MFPCloseArchive();
}

int QClassicFrDrvNg::MFPGetPermitActivizationCode()
{
    return m_pimpl->MFPGetPermitActivizationCode();
}

int QClassicFrDrvNg::MFPGetCustomerCode()
{
    return m_pimpl->MFPGetCustomerCode();
}

int QClassicFrDrvNg::MFPPrepareActivization()
{
    return m_pimpl->MFPPrepareActivization();
}

int QClassicFrDrvNg::MFPSetCustomerCode()
{
    return m_pimpl->MFPSetCustomerCode();
}

int QClassicFrDrvNg::MFPSetPermitActivizationCode()
{
    return m_pimpl->MFPSetPermitActivizationCode();
}

int QClassicFrDrvNg::MFPGetPrepareActivizationResult()
{
    return m_pimpl->MFPGetPrepareActivizationResult();
}

int QClassicFrDrvNg::CloseCheckEx()
{
    return m_pimpl->CloseCheckEx();
}

int QClassicFrDrvNg::GetMFPCode3Status()
{
    return m_pimpl->GetMFPCode3Status();
}

int QClassicFrDrvNg::ClearReportBuffer()
{
    return m_pimpl->ClearReportBuffer();
}

int QClassicFrDrvNg::ShowAdditionalParams()
{
    return m_pimpl->ShowAdditionalParams();
}

int QClassicFrDrvNg::GetCloudCashdeskParams()
{
    return m_pimpl->GetCloudCashdeskParams();
}

int QClassicFrDrvNg::DrawScale()
{
    return m_pimpl->DrawScale();
}

int QClassicFrDrvNg::LoadGraphics512()
{
    return m_pimpl->LoadGraphics512();
}

int QClassicFrDrvNg::PrintGraphics512()
{
    return m_pimpl->PrintGraphics512();
}

int QClassicFrDrvNg::FNGetExpirationTime()
{
    return m_pimpl->FNGetExpirationTime();
}

int QClassicFrDrvNg::FNGetSerial()
{
    return m_pimpl->FNGetSerial();
}

int QClassicFrDrvNg::FNGetStatus()
{
    return m_pimpl->FNGetStatus();
}

int QClassicFrDrvNg::FNGetVersion()
{
    return m_pimpl->FNGetVersion();
}

int QClassicFrDrvNg::FNBeginFiscalization()
{
    return m_pimpl->FNBeginFiscalization();
}

int QClassicFrDrvNg::FNFiscalization()
{
    return m_pimpl->FNFiscalization();
}

int QClassicFrDrvNg::FNCancelDocument()
{
    return m_pimpl->FNCancelDocument();
}

int QClassicFrDrvNg::FNResetState()
{
    return m_pimpl->FNResetState();
}

int QClassicFrDrvNg::FNFindDocument()
{
    return m_pimpl->FNFindDocument();
}

int QClassicFrDrvNg::FNOpenSession()
{
    return m_pimpl->FNOpenSession();
}

int QClassicFrDrvNg::FNSendTLV()
{
    return m_pimpl->FNSendTLV();
}

int QClassicFrDrvNg::FNDiscountOperation()
{
    return m_pimpl->FNDiscountOperation();
}

int QClassicFrDrvNg::FNStorno()
{
    return m_pimpl->FNStorno();
}

int QClassicFrDrvNg::OFDExchange()
{
    return m_pimpl->OFDExchange();
}

int QClassicFrDrvNg::FNBeginCalculationStateReport()
{
    return m_pimpl->FNBeginCalculationStateReport();
}

int QClassicFrDrvNg::FNBeginCloseFiscalMode()
{
    return m_pimpl->FNBeginCloseFiscalMode();
}

int QClassicFrDrvNg::FNBeginCloseSession()
{
    return m_pimpl->FNBeginCloseSession();
}

int QClassicFrDrvNg::FNBeginCorrectionReceipt()
{
    return m_pimpl->FNBeginCorrectionReceipt();
}

int QClassicFrDrvNg::FNBeginOpenSession()
{
    return m_pimpl->FNBeginOpenSession();
}

int QClassicFrDrvNg::FNBeginRegistrationReport()
{
    return m_pimpl->FNBeginRegistrationReport();
}

int QClassicFrDrvNg::FNBuildCalculationStateReport()
{
    return m_pimpl->FNBuildCalculationStateReport();
}

int QClassicFrDrvNg::FNBuildCorrectionReceipt()
{
    return m_pimpl->FNBuildCorrectionReceipt();
}

int QClassicFrDrvNg::FNBuildRegistrationReport()
{
    return m_pimpl->FNBuildRegistrationReport();
}

int QClassicFrDrvNg::FNCloseFiscalMode()
{
    return m_pimpl->FNCloseFiscalMode();
}

int QClassicFrDrvNg::FNCloseSession()
{
    return m_pimpl->FNCloseSession();
}

int QClassicFrDrvNg::FNGetCurrentSessionParams()
{
    return m_pimpl->FNGetCurrentSessionParams();
}

int QClassicFrDrvNg::FNGetInfoExchangeStatus()
{
    return m_pimpl->FNGetInfoExchangeStatus();
}

int QClassicFrDrvNg::FNGetOFDTicketByDocNumber()
{
    return m_pimpl->FNGetOFDTicketByDocNumber();
}

int QClassicFrDrvNg::FNGetUnconfirmedDocCount()
{
    return m_pimpl->FNGetUnconfirmedDocCount();
}

int QClassicFrDrvNg::FNReadFiscalDocumentTLV()
{
    return m_pimpl->FNReadFiscalDocumentTLV();
}

int QClassicFrDrvNg::FNRequestFiscalDocumentTLV()
{
    return m_pimpl->FNRequestFiscalDocumentTLV();
}

int QClassicFrDrvNg::FNBuildReregistrationReport()
{
    return m_pimpl->FNBuildReregistrationReport();
}

int QClassicFrDrvNg::FNGetFiscalizationResult()
{
    return m_pimpl->FNGetFiscalizationResult();
}

int QClassicFrDrvNg::FNDiscountTaxOperation()
{
    return m_pimpl->FNDiscountTaxOperation();
}

int QClassicFrDrvNg::FNCloseCheckEx()
{
    return m_pimpl->FNCloseCheckEx();
}

int QClassicFrDrvNg::FNSendCustomerEmail()
{
    return m_pimpl->FNSendCustomerEmail();
}

int QClassicFrDrvNg::Annulment()
{
    return m_pimpl->Annulment();
}

int QClassicFrDrvNg::FNDiscountChargeRN()
{
    return m_pimpl->FNDiscountChargeRN();
}

int QClassicFrDrvNg::ExportTables()
{
    return m_pimpl->ExportTables();
}

int QClassicFrDrvNg::ImportTables()
{
    return m_pimpl->ImportTables();
}

int QClassicFrDrvNg::FNSendTag()
{
    return m_pimpl->FNSendTag();
}

int QClassicFrDrvNg::ReadSerialNumber()
{
    return m_pimpl->ReadSerialNumber();
}

int QClassicFrDrvNg::FNPrintOperatorConfirm()
{
    return m_pimpl->FNPrintOperatorConfirm();
}

int QClassicFrDrvNg::FNGetFiscalizationResultByNumber()
{
    return m_pimpl->FNGetFiscalizationResultByNumber();
}

int QClassicFrDrvNg::AnnulmentRB()
{
    return m_pimpl->AnnulmentRB();
}

int QClassicFrDrvNg::FNGetTagDescription()
{
    return m_pimpl->FNGetTagDescription();
}

int QClassicFrDrvNg::FNPrintDocument()
{
    return m_pimpl->FNPrintDocument();
}

int QClassicFrDrvNg::FNGetDocumentAsString()
{
    return m_pimpl->FNGetDocumentAsString();
}

int QClassicFrDrvNg::Ping()
{
    return m_pimpl->Ping();
}

int QClassicFrDrvNg::FNOperation()
{
    return m_pimpl->FNOperation();
}

int QClassicFrDrvNg::FNSendTLVOperation()
{
    return m_pimpl->FNSendTLVOperation();
}

int QClassicFrDrvNg::FNBuildCorrectionReceipt2()
{
    return m_pimpl->FNBuildCorrectionReceipt2();
}

int QClassicFrDrvNg::FNGetNonClearableSumm()
{
    return m_pimpl->FNGetNonClearableSumm();
}

int QClassicFrDrvNg::ResetSerialNumber()
{
    return m_pimpl->ResetSerialNumber();
}

int QClassicFrDrvNg::DBFindDocument()
{
    return m_pimpl->DBFindDocument();
}

int QClassicFrDrvNg::DBPrintDocument()
{
    return m_pimpl->DBPrintDocument();
}

int QClassicFrDrvNg::ReadKKTLicenses()
{
    return m_pimpl->ReadKKTLicenses();
}

int QClassicFrDrvNg::CloseCheckBel()
{
    return m_pimpl->CloseCheckBel();
}

int QClassicFrDrvNg::GetKKTLicenseByNumber()
{
    return m_pimpl->GetKKTLicenseByNumber();
}

int QClassicFrDrvNg::WriteKKTLicense()
{
    return m_pimpl->WriteKKTLicense();
}

int QClassicFrDrvNg::FNSendSenderEmail()
{
    return m_pimpl->FNSendSenderEmail();
}

int QClassicFrDrvNg::DBGetNextDocument()
{
    return m_pimpl->DBGetNextDocument();
}

int QClassicFrDrvNg::DBPrintNextDocument()
{
    return m_pimpl->DBPrintNextDocument();
}

int QClassicFrDrvNg::DBQueryDocumentsInSession()
{
    return m_pimpl->DBQueryDocumentsInSession();
}

int QClassicFrDrvNg::OnlinePay()
{
    return m_pimpl->OnlinePay();
}

int QClassicFrDrvNg::OPGetLastRequisite()
{
    return m_pimpl->OPGetLastRequisite();
}

int QClassicFrDrvNg::OPGetLastStatus()
{
    return m_pimpl->OPGetLastStatus();
}

int QClassicFrDrvNg::GenerateMonoToken()
{
    return m_pimpl->GenerateMonoToken();
}

int QClassicFrDrvNg::RebootKKT()
{
    return m_pimpl->RebootKKT();
}

int QClassicFrDrvNg::FNAddTag()
{
    return m_pimpl->FNAddTag();
}

int QClassicFrDrvNg::FNBeginSTLVTag()
{
    return m_pimpl->FNBeginSTLVTag();
}

int QClassicFrDrvNg::FNSendSTLVTag()
{
    return m_pimpl->FNSendSTLVTag();
}

int QClassicFrDrvNg::FNSendSTLVTagOperation()
{
    return m_pimpl->FNSendSTLVTagOperation();
}

int QClassicFrDrvNg::FNSendTagOperation()
{
    return m_pimpl->FNSendTagOperation();
}

int QClassicFrDrvNg::FNSendItemCodeData()
{
    return m_pimpl->FNSendItemCodeData();
}

int QClassicFrDrvNg::FNCheckItemBarcode()
{
    return m_pimpl->FNCheckItemBarcode();
}

int QClassicFrDrvNg::FNRequestRegistrationTLV()
{
    return m_pimpl->FNRequestRegistrationTLV();
}

int QClassicFrDrvNg::ReadLoaderVersion()
{
    return m_pimpl->ReadLoaderVersion();
}

int QClassicFrDrvNg::FNOpenCheckCorrection()
{
    return m_pimpl->FNOpenCheckCorrection();
}

int QClassicFrDrvNg::FNCountersSync()
{
    return m_pimpl->FNCountersSync();
}

int QClassicFrDrvNg::FNGetFreeMemoryResource()
{
    return m_pimpl->FNGetFreeMemoryResource();
}
int QClassicFrDrvNg::ReadCashDrawerSum()
{
    return m_pimpl->ReadCashDrawerSum();
}

int QClassicFrDrvNg::ReadFeatureLicenses()
{
    return m_pimpl->ReadFeatureLicenses();
}

int QClassicFrDrvNg::WriteFeatureLicenses()
{
    return m_pimpl->WriteFeatureLicenses();
}

int QClassicFrDrvNg::SetDeviceFunction()
{
    return m_pimpl->SetDeviceFunction();
}

int QClassicFrDrvNg::GetDeviceFunction()
{
    return m_pimpl->GetDeviceFunction();
}

int QClassicFrDrvNg::FNSendItemBarcode()
{
    return m_pimpl->FNSendItemBarcode();
}

int QClassicFrDrvNg::FNCheckItemBarcode2()
{
    return m_pimpl->FNCheckItemBarcode2();
}
int QClassicFrDrvNg::FNGetKMServerExchangeStatus()
{
    return m_pimpl->FNGetKMServerExchangeStatus();
}
int QClassicFrDrvNg::FNGetMarkingCodeWorkStatus()
{
    return m_pimpl->FNGetMarkingCodeWorkStatus();
}
int QClassicFrDrvNg::FNBeginReadNotifications()
{
    return m_pimpl->FNBeginReadNotifications();
}
int QClassicFrDrvNg::FNReadNotificationBlock()
{
    return m_pimpl->FNReadNotificationBlock();
}
int QClassicFrDrvNg::FNConfirmNotificationRead()
{
    return m_pimpl->FNConfirmNotificationRead();
}
int QClassicFrDrvNg::GetTagAsTLV()
{
    return m_pimpl->GetTagAsTLV();
}
int QClassicFrDrvNg::ReadRandomSequence()
{
    return m_pimpl->ReadRandomSequence();
}
int QClassicFrDrvNg::Authorization()
{
    return m_pimpl->Authorization();
}
int QClassicFrDrvNg::FNAcceptMarkingCode()
{
    return m_pimpl->FNAcceptMarkingCode();
}
int QClassicFrDrvNg::FNAcceptMakringCode()
{
    return m_pimpl->FNAcceptMakringCode();
}
int QClassicFrDrvNg::FNDeclineMarkingCode()
{
    return m_pimpl->FNDeclineMarkingCode();
}
int QClassicFrDrvNg::FNBindMarkingItem()
{
    return m_pimpl->FNBindMarkingItem();
}

int QClassicFrDrvNg::FNBeginReadArchive()
{
    return m_pimpl->FNBeginReadArchive();
}
int QClassicFrDrvNg::FNReadArchiveItem()
{
    return m_pimpl->FNReadArchiveItem();
}
int QClassicFrDrvNg::FNSaveArchive()
{
    return m_pimpl->FNSaveArchive();
}
int QClassicFrDrvNg::FNMarkingClearBuffer()
{
    return m_pimpl->FNMarkingClearBuffer();
}

void QClassicFrDrvNg::Set_LastDocumentNumber(int value)
{
    m_pimpl->Set_LastDocumentNumber(value);
}
int QClassicFrDrvNg::Get_LastDocumentNumber() const
{
    return m_pimpl->Get_LastDocumentNumber();
}
void QClassicFrDrvNg::Set_FirstDocumentNumber(int value)
{
    m_pimpl->Set_FirstDocumentNumber(value);
}
int QClassicFrDrvNg::Get_FirstDocumentNumber() const
{
    return m_pimpl->Get_FirstDocumentNumber();
}
void QClassicFrDrvNg::Set_FNArchiveType(int value)
{
    m_pimpl->Set_FNArchiveType(value);
}
int QClassicFrDrvNg::Get_FNArchiveType() const
{
    return m_pimpl->Get_FNArchiveType();
}
void QClassicFrDrvNg::Set_MarkingOnly(bool value)
{
    m_pimpl->Set_MarkingOnly(value);
}
bool QClassicFrDrvNg::Get_MarkingOnly() const
{
    return m_pimpl->Get_MarkingOnly();
}

bool QClassicFrDrvNg::Get_HasCashControlLicense() const
{
    return m_pimpl->Get_HasCashControlLicense();
}
int QClassicFrDrvNg::Get_SwapBytesMode() const
{
    return m_pimpl->Get_SwapBytesMode();
}
void QClassicFrDrvNg::Set_SwapBytesMode(int value)
{
    m_pimpl->Set_SwapBytesMode(value);
}
int QClassicFrDrvNg::Get_Tax4NameFont() const
{
    return m_pimpl->Get_Tax4NameFont();
}
void QClassicFrDrvNg::Set_Tax4NameFont(int value)
{
    m_pimpl->Set_Tax4NameFont(value);
}
QString QClassicFrDrvNg::Get_LineData() const
{
    return QString::fromStdString(m_pimpl->Get_LineData());
}
void QClassicFrDrvNg::Set_LineData(QString value)
{
    m_pimpl->Set_LineData((value.toStdString()));
}
int QClassicFrDrvNg::Get_Summ3Font() const
{
    return m_pimpl->Get_Summ3Font();
}
void QClassicFrDrvNg::Set_Summ3Font(int value)
{
    m_pimpl->Set_Summ3Font(value);
}
int QClassicFrDrvNg::Get_FontType() const
{
    return m_pimpl->Get_FontType();
}
void QClassicFrDrvNg::Set_FontType(int value)
{
    m_pimpl->Set_FontType(value);
}
int QClassicFrDrvNg::Get_Tax1RateFont() const
{
    return m_pimpl->Get_Tax1RateFont();
}
void QClassicFrDrvNg::Set_Tax1RateFont(int value)
{
    m_pimpl->Set_Tax1RateFont(value);
}
QString QClassicFrDrvNg::Get_GTIN() const
{
    return QString::fromStdString(m_pimpl->Get_GTIN());
}
void QClassicFrDrvNg::Set_GTIN(QString value)
{
    m_pimpl->Set_GTIN((value.toStdString()));
}
int QClassicFrDrvNg::Get_Department() const
{
    return m_pimpl->Get_Department();
}
void QClassicFrDrvNg::Set_Department(int value)
{
    m_pimpl->Set_Department(value);
}
quint32 QClassicFrDrvNg::Get_CashControlPassword() const
{
    return static_cast<uint32_t>(m_pimpl->Get_CashControlPassword());
}
void QClassicFrDrvNg::Set_CashControlPassword(quint32 value)
{
    m_pimpl->Set_CashControlPassword((static_cast<quint32>(value)));
}
QString QClassicFrDrvNg::Get_EKLZVersion() const
{
    return QString::fromStdString(m_pimpl->Get_EKLZVersion());
}
int QClassicFrDrvNg::Get_IBMLastBuyReceiptNumber() const
{
    return m_pimpl->Get_IBMLastBuyReceiptNumber();
}
int QClassicFrDrvNg::Get_DepartmentSymbolNumber() const
{
    return m_pimpl->Get_DepartmentSymbolNumber();
}
void QClassicFrDrvNg::Set_DepartmentSymbolNumber(int value)
{
    m_pimpl->Set_DepartmentSymbolNumber(value);
}
int QClassicFrDrvNg::Get_Summ3StringNumber() const
{
    return m_pimpl->Get_Summ3StringNumber();
}
void QClassicFrDrvNg::Set_Summ3StringNumber(int value)
{
    m_pimpl->Set_Summ3StringNumber(value);
}
int QClassicFrDrvNg::Get_MaxENQSendCount() const
{
    return m_pimpl->Get_MaxENQSendCount();
}
void QClassicFrDrvNg::Set_MaxENQSendCount(int value)
{
    m_pimpl->Set_MaxENQSendCount(value);
}
int QClassicFrDrvNg::Get_Summ4Font() const
{
    return m_pimpl->Get_Summ4Font();
}
void QClassicFrDrvNg::Set_Summ4Font(int value)
{
    m_pimpl->Set_Summ4Font(value);
}
int QClassicFrDrvNg::Get_Tax4SumStringNumber() const
{
    return m_pimpl->Get_Tax4SumStringNumber();
}
void QClassicFrDrvNg::Set_Tax4SumStringNumber(int value)
{
    m_pimpl->Set_Tax4SumStringNumber(value);
}
QString QClassicFrDrvNg::Get_TimeStr() const
{
    return QString::fromStdString(m_pimpl->Get_TimeStr());
}
void QClassicFrDrvNg::Set_TimeStr(QString value)
{
    m_pimpl->Set_TimeStr((value.toStdString()));
}
QDateTime QClassicFrDrvNg::Get_ECRSoftDate() const
{
    return QDateTime::fromMSecsSinceEpoch(static_cast<qint64>(1000) * m_pimpl->Get_ECRSoftDate());
}
QString QClassicFrDrvNg::Get_TagValueStr() const
{
    return QString::fromStdString(m_pimpl->Get_TagValueStr());
}
void QClassicFrDrvNg::Set_TagValueStr(QString value)
{
    m_pimpl->Set_TagValueStr((value.toStdString()));
}
int QClassicFrDrvNg::Get_ChangeSumFont() const
{
    return m_pimpl->Get_ChangeSumFont();
}
void QClassicFrDrvNg::Set_ChangeSumFont(int value)
{
    m_pimpl->Set_ChangeSumFont(value);
}
int QClassicFrDrvNg::Get_DataLength() const
{
    return m_pimpl->Get_DataLength();
}
void QClassicFrDrvNg::Set_DataLength(int value)
{
    m_pimpl->Set_DataLength(value);
}
QString QClassicFrDrvNg::Get_LDEscapeIP() const
{
    return QString::fromStdString(m_pimpl->Get_LDEscapeIP());
}
void QClassicFrDrvNg::Set_LDEscapeIP(QString value)
{
    m_pimpl->Set_LDEscapeIP((value.toStdString()));
}
int QClassicFrDrvNg::Get_OPBarcodeInputType() const
{
    return m_pimpl->Get_OPBarcodeInputType();
}
void QClassicFrDrvNg::Set_OPBarcodeInputType(int value)
{
    m_pimpl->Set_OPBarcodeInputType(value);
}
int QClassicFrDrvNg::Get_SubTotalFont() const
{
    return m_pimpl->Get_SubTotalFont();
}
void QClassicFrDrvNg::Set_SubTotalFont(int value)
{
    m_pimpl->Set_SubTotalFont(value);
}
int QClassicFrDrvNg::Get_StringNumber() const
{
    return m_pimpl->Get_StringNumber();
}
void QClassicFrDrvNg::Set_StringNumber(int value)
{
    m_pimpl->Set_StringNumber(value);
}
int QClassicFrDrvNg::Get_LDNumber() const
{
    return m_pimpl->Get_LDNumber();
}
void QClassicFrDrvNg::Set_LDNumber(int value)
{
    m_pimpl->Set_LDNumber(value);
}
QString QClassicFrDrvNg::Get_FiscalSignAsString() const
{
    return QString::fromStdString(m_pimpl->Get_FiscalSignAsString());
}
int QClassicFrDrvNg::Get_Tax3TurnOverOffset() const
{
    return m_pimpl->Get_Tax3TurnOverOffset();
}
void QClassicFrDrvNg::Set_Tax3TurnOverOffset(int value)
{
    m_pimpl->Set_Tax3TurnOverOffset(value);
}
int QClassicFrDrvNg::Get_ModelIndex() const
{
    return m_pimpl->Get_ModelIndex();
}
void QClassicFrDrvNg::Set_ModelIndex(int value)
{
    m_pimpl->Set_ModelIndex(value);
}
int QClassicFrDrvNg::Get_Summ2StringNumber() const
{
    return m_pimpl->Get_Summ2StringNumber();
}
void QClassicFrDrvNg::Set_Summ2StringNumber(int value)
{
    m_pimpl->Set_Summ2StringNumber(value);
}
bool QClassicFrDrvNg::Get_UseJournalRibbon() const
{
    return m_pimpl->Get_UseJournalRibbon();
}
void QClassicFrDrvNg::Set_UseJournalRibbon(bool value)
{
    m_pimpl->Set_UseJournalRibbon(value);
}
bool QClassicFrDrvNg::Get_TaxValue1Enabled() const
{
    return m_pimpl->Get_TaxValue1Enabled();
}
void QClassicFrDrvNg::Set_TaxValue1Enabled(bool value)
{
    m_pimpl->Set_TaxValue1Enabled(value);
}
int QClassicFrDrvNg::Get_ReadByte() const
{
    return m_pimpl->Get_ReadByte();
}
bool QClassicFrDrvNg::Get_ccUseTextAsWareName() const
{
    return m_pimpl->Get_ccUseTextAsWareName();
}
void QClassicFrDrvNg::Set_ccUseTextAsWareName(bool value)
{
    m_pimpl->Set_ccUseTextAsWareName(value);
}
int QClassicFrDrvNg::Get_EKLZOffset() const
{
    return m_pimpl->Get_EKLZOffset();
}
void QClassicFrDrvNg::Set_EKLZOffset(int value)
{
    m_pimpl->Set_EKLZOffset(value);
}
int QClassicFrDrvNg::Get_PaymentItemSign() const
{
    return m_pimpl->Get_PaymentItemSign();
}
void QClassicFrDrvNg::Set_PaymentItemSign(int value)
{
    m_pimpl->Set_PaymentItemSign(value);
}
int QClassicFrDrvNg::Get_TestNumber() const
{
    return m_pimpl->Get_TestNumber();
}
void QClassicFrDrvNg::Set_TestNumber(int value)
{
    m_pimpl->Set_TestNumber(value);
}
int QClassicFrDrvNg::Get_Tax1TurnOverStringNumber() const
{
    return m_pimpl->Get_Tax1TurnOverStringNumber();
}
void QClassicFrDrvNg::Set_Tax1TurnOverStringNumber(int value)
{
    m_pimpl->Set_Tax1TurnOverStringNumber(value);
}
QString QClassicFrDrvNg::Get_CashControlPort() const
{
    return QString::fromStdString(m_pimpl->Get_CashControlPort());
}
void QClassicFrDrvNg::Set_CashControlPort(QString value)
{
    m_pimpl->Set_CashControlPort((value.toStdString()));
}
int QClassicFrDrvNg::Get_DelayOnDisconnect() const
{
    return m_pimpl->Get_DelayOnDisconnect();
}
void QClassicFrDrvNg::Set_DelayOnDisconnect(int value)
{
    m_pimpl->Set_DelayOnDisconnect(value);
}
QString QClassicFrDrvNg::Get_KPKStr() const
{
    return QString::fromStdString(m_pimpl->Get_KPKStr());
}
int QClassicFrDrvNg::Get_Tax2NameOffset() const
{
    return m_pimpl->Get_Tax2NameOffset();
}
void QClassicFrDrvNg::Set_Tax2NameOffset(int value)
{
    m_pimpl->Set_Tax2NameOffset(value);
}
QString QClassicFrDrvNg::Get_TransferBytes() const
{
    return QString::fromStdString(m_pimpl->Get_TransferBytes());
}
void QClassicFrDrvNg::Set_TransferBytes(QString value)
{
    m_pimpl->Set_TransferBytes((value.toStdString()));
}
QString QClassicFrDrvNg::Get_KSAInfo() const
{
    return QString::fromStdString(m_pimpl->Get_KSAInfo());
}
void QClassicFrDrvNg::Set_KSAInfo(QString value)
{
    m_pimpl->Set_KSAInfo((value.toStdString()));
}
qint64 QClassicFrDrvNg::Get_CurrentDozeInMoney() const
{
    return static_cast<int64_t>(m_pimpl->Get_CurrentDozeInMoney());
}
void QClassicFrDrvNg::Set_CurrentDozeInMoney(qint64 value)
{
    m_pimpl->Set_CurrentDozeInMoney((static_cast<qint64>(value)));
}
QDateTime QClassicFrDrvNg::Get_Date2() const
{
    return QDateTime::fromMSecsSinceEpoch(static_cast<qint64>(1000) * m_pimpl->Get_Date2());
    ;
}
void QClassicFrDrvNg::Set_Date2(QDateTime value)
{
    m_pimpl->Set_Date2((static_cast<std::time_t>(value.toMSecsSinceEpoch() / static_cast<qint64>(1000))));
}
int QClassicFrDrvNg::Get_ModelParamCount() const
{
    return m_pimpl->Get_ModelParamCount();
}
int QClassicFrDrvNg::Get_OPTransactionType() const
{
    return m_pimpl->Get_OPTransactionType();
}
void QClassicFrDrvNg::Set_OPTransactionType(int value)
{
    m_pimpl->Set_OPTransactionType(value);
}
int QClassicFrDrvNg::Get_LicenseNumber() const
{
    return m_pimpl->Get_LicenseNumber();
}
void QClassicFrDrvNg::Set_LicenseNumber(int value)
{
    m_pimpl->Set_LicenseNumber(value);
}
quint64 QClassicFrDrvNg::Get_TagValueInt() const
{
    return static_cast<uint64_t>(m_pimpl->Get_TagValueInt());
}
void QClassicFrDrvNg::Set_TagValueInt(quint64 value)
{
    m_pimpl->Set_TagValueInt((static_cast<quint64>(value)));
}
qint64 QClassicFrDrvNg::Get_Summ7() const
{
    return static_cast<int64_t>(m_pimpl->Get_Summ7());
}
void QClassicFrDrvNg::Set_Summ7(qint64 value)
{
    m_pimpl->Set_Summ7((static_cast<qint64>(value)));
}
qint64 QClassicFrDrvNg::Get_Summ6() const
{
    return static_cast<int64_t>(m_pimpl->Get_Summ6());
}
void QClassicFrDrvNg::Set_Summ6(qint64 value)
{
    m_pimpl->Set_Summ6((static_cast<qint64>(value)));
}
qint64 QClassicFrDrvNg::Get_Summ5() const
{
    return static_cast<int64_t>(m_pimpl->Get_Summ5());
}
void QClassicFrDrvNg::Set_Summ5(qint64 value)
{
    m_pimpl->Set_Summ5((static_cast<qint64>(value)));
}
qint64 QClassicFrDrvNg::Get_Summ4() const
{
    return static_cast<int64_t>(m_pimpl->Get_Summ4());
}
void QClassicFrDrvNg::Set_Summ4(qint64 value)
{
    m_pimpl->Set_Summ4((static_cast<qint64>(value)));
}
qint64 QClassicFrDrvNg::Get_Summ3() const
{
    return static_cast<int64_t>(m_pimpl->Get_Summ3());
}
void QClassicFrDrvNg::Set_Summ3(qint64 value)
{
    m_pimpl->Set_Summ3((static_cast<qint64>(value)));
}
qint64 QClassicFrDrvNg::Get_Summ2() const
{
    return static_cast<int64_t>(m_pimpl->Get_Summ2());
}
void QClassicFrDrvNg::Set_Summ2(qint64 value)
{
    m_pimpl->Set_Summ2((static_cast<qint64>(value)));
}
qint64 QClassicFrDrvNg::Get_Summ1() const
{
    return static_cast<int64_t>(m_pimpl->Get_Summ1());
}
void QClassicFrDrvNg::Set_Summ1(qint64 value)
{
    m_pimpl->Set_Summ1((static_cast<qint64>(value)));
}
int QClassicFrDrvNg::Get_BlockNumber() const
{
    return m_pimpl->Get_BlockNumber();
}
void QClassicFrDrvNg::Set_BlockNumber(int value)
{
    m_pimpl->Set_BlockNumber(value);
}
int QClassicFrDrvNg::Get_Tax1TurnOverFont() const
{
    return m_pimpl->Get_Tax1TurnOverFont();
}
void QClassicFrDrvNg::Set_Tax1TurnOverFont(int value)
{
    m_pimpl->Set_Tax1TurnOverFont(value);
}
qint64 QClassicFrDrvNg::Get_Summ9() const
{
    return static_cast<int64_t>(m_pimpl->Get_Summ9());
}
void QClassicFrDrvNg::Set_Summ9(qint64 value)
{
    m_pimpl->Set_Summ9((static_cast<qint64>(value)));
}
qint64 QClassicFrDrvNg::Get_Summ8() const
{
    return static_cast<int64_t>(m_pimpl->Get_Summ8());
}
void QClassicFrDrvNg::Set_Summ8(qint64 value)
{
    m_pimpl->Set_Summ8((static_cast<qint64>(value)));
}
int QClassicFrDrvNg::Get_Tax2TurnOverOffset() const
{
    return m_pimpl->Get_Tax2TurnOverOffset();
}
void QClassicFrDrvNg::Set_Tax2TurnOverOffset(int value)
{
    m_pimpl->Set_Tax2TurnOverOffset(value);
}
int QClassicFrDrvNg::Get_ECRModeStatus() const
{
    return m_pimpl->Get_ECRModeStatus();
}
int QClassicFrDrvNg::Get_Summ3NameOffset() const
{
    return m_pimpl->Get_Summ3NameOffset();
}
void QClassicFrDrvNg::Set_Summ3NameOffset(int value)
{
    m_pimpl->Set_Summ3NameOffset(value);
}
QString QClassicFrDrvNg::Get_TableName() const
{
    return QString::fromStdString(m_pimpl->Get_TableName());
}
QString QClassicFrDrvNg::Get_StatusRKDescription() const
{
    return QString::fromStdString(m_pimpl->Get_StatusRKDescription());
}
QString QClassicFrDrvNg::Get_FMSoftVersion() const
{
    return QString::fromStdString(m_pimpl->Get_FMSoftVersion());
}
int QClassicFrDrvNg::Get_ResultCode() const
{
    return m_pimpl->Get_ResultCode();
}
qint64 QClassicFrDrvNg::Get_TaxValue() const
{
    return static_cast<int64_t>(m_pimpl->Get_TaxValue());
}
void QClassicFrDrvNg::Set_TaxValue(qint64 value)
{
    m_pimpl->Set_TaxValue((static_cast<qint64>(value)));
}
int QClassicFrDrvNg::Get_Tax2RateFont() const
{
    return m_pimpl->Get_Tax2RateFont();
}
void QClassicFrDrvNg::Set_Tax2RateFont(int value)
{
    m_pimpl->Set_Tax2RateFont(value);
}
bool QClassicFrDrvNg::Get_CloudCashdeskEnabled() const
{
    return m_pimpl->Get_CloudCashdeskEnabled();
}
void QClassicFrDrvNg::Set_CloudCashdeskEnabled(bool value)
{
    m_pimpl->Set_CloudCashdeskEnabled(value);
}
int QClassicFrDrvNg::Get_CommandTimeout() const
{
    return m_pimpl->Get_CommandTimeout();
}
void QClassicFrDrvNg::Set_CommandTimeout(int value)
{
    m_pimpl->Set_CommandTimeout(value);
}
bool QClassicFrDrvNg::Get_UseReceiptRibbon() const
{
    return m_pimpl->Get_UseReceiptRibbon();
}
void QClassicFrDrvNg::Set_UseReceiptRibbon(bool value)
{
    m_pimpl->Set_UseReceiptRibbon(value);
}
QString QClassicFrDrvNg::Get_KKTRegistrationNumber() const
{
    return QString::fromStdString(m_pimpl->Get_KKTRegistrationNumber());
}
void QClassicFrDrvNg::Set_KKTRegistrationNumber(QString value)
{
    m_pimpl->Set_KKTRegistrationNumber((value.toStdString()));
}
QString QClassicFrDrvNg::Get_Summ1AsString() const
{
    return QString::fromStdString(m_pimpl->Get_Summ1AsString());
}
QString QClassicFrDrvNg::Get_OPIdPayment() const
{
    return QString::fromStdString(m_pimpl->Get_OPIdPayment());
}
void QClassicFrDrvNg::Set_OPIdPayment(QString value)
{
    m_pimpl->Set_OPIdPayment((value.toStdString()));
}
int QClassicFrDrvNg::Get_TextOffset() const
{
    return m_pimpl->Get_TextOffset();
}
void QClassicFrDrvNg::Set_TextOffset(int value)
{
    m_pimpl->Set_TextOffset(value);
}
bool QClassicFrDrvNg::Get_CashControlUseTCP() const
{
    return m_pimpl->Get_CashControlUseTCP();
}
void QClassicFrDrvNg::Set_CashControlUseTCP(bool value)
{
    m_pimpl->Set_CashControlUseTCP(value);
}
int QClassicFrDrvNg::Get_OPRequisiteNumber() const
{
    return m_pimpl->Get_OPRequisiteNumber();
}
void QClassicFrDrvNg::Set_OPRequisiteNumber(int value)
{
    m_pimpl->Set_OPRequisiteNumber(value);
}
bool QClassicFrDrvNg::Get_ReportType() const
{
    return m_pimpl->Get_ReportType();
}
void QClassicFrDrvNg::Set_ReportType(bool value)
{
    m_pimpl->Set_ReportType(value);
}
int QClassicFrDrvNg::Get_IBMSessionMin() const
{
    return m_pimpl->Get_IBMSessionMin();
}
int QClassicFrDrvNg::Get_PrintBufferFormat() const
{
    return m_pimpl->Get_PrintBufferFormat();
}
void QClassicFrDrvNg::Set_PrintBufferFormat(int value)
{
    m_pimpl->Set_PrintBufferFormat(value);
}
double QClassicFrDrvNg::Get_BatteryVoltage() const
{
    return m_pimpl->Get_BatteryVoltage();
}
QByteArray QClassicFrDrvNg::Get_BlockData() const
{
    auto value = m_pimpl->Get_BlockData();
    return QByteArray(reinterpret_cast<const char*>(value.data()), value.size());
}
void QClassicFrDrvNg::Set_BlockData(QByteArray value)
{
    m_pimpl->Set_BlockData((std::vector<uint8_t>(value.begin(), value.end())));
}
int QClassicFrDrvNg::Get_Tax2SumFont() const
{
    return m_pimpl->Get_Tax2SumFont();
}
void QClassicFrDrvNg::Set_Tax2SumFont(int value)
{
    m_pimpl->Set_Tax2SumFont(value);
}
int QClassicFrDrvNg::Get_ContentsOfOperationRegister() const
{
    return m_pimpl->Get_ContentsOfOperationRegister();
}
int QClassicFrDrvNg::Get_PayDepartment() const
{
    return m_pimpl->Get_PayDepartment();
}
void QClassicFrDrvNg::Set_PayDepartment(int value)
{
    m_pimpl->Set_PayDepartment(value);
}
int QClassicFrDrvNg::Get_QuantityOffset() const
{
    return m_pimpl->Get_QuantityOffset();
}
void QClassicFrDrvNg::Set_QuantityOffset(int value)
{
    m_pimpl->Set_QuantityOffset(value);
}
QString QClassicFrDrvNg::Get_INN() const
{
    return QString::fromStdString(m_pimpl->Get_INN());
}
void QClassicFrDrvNg::Set_INN(QString value)
{
    m_pimpl->Set_INN((value.toStdString()));
}
QClassicFrDrvNg::TBarcodeAlignment QClassicFrDrvNg::Get_BarcodeAlignment() const
{
    return static_cast<TBarcodeAlignment>(m_pimpl->Get_BarcodeAlignment());
}
void QClassicFrDrvNg::Set_BarcodeAlignment(TBarcodeAlignment value)
{
    m_pimpl->Set_BarcodeAlignment((static_cast<classic_interface::TBarcodeAlignment>(value)));
}
int QClassicFrDrvNg::Get_ccHeaderLineCount() const
{
    return m_pimpl->Get_ccHeaderLineCount();
}
void QClassicFrDrvNg::Set_ccHeaderLineCount(int value)
{
    m_pimpl->Set_ccHeaderLineCount(value);
}
bool QClassicFrDrvNg::Get_Motor() const
{
    return m_pimpl->Get_Motor();
}
bool QClassicFrDrvNg::Get_Summ1Enabled() const
{
    return m_pimpl->Get_Summ1Enabled();
}
void QClassicFrDrvNg::Set_Summ1Enabled(bool value)
{
    m_pimpl->Set_Summ1Enabled(value);
}
int QClassicFrDrvNg::Get_FreeRegistration() const
{
    return m_pimpl->Get_FreeRegistration();
}
int QClassicFrDrvNg::Get_TotalFont() const
{
    return m_pimpl->Get_TotalFont();
}
void QClassicFrDrvNg::Set_TotalFont(int value)
{
    m_pimpl->Set_TotalFont(value);
}
bool QClassicFrDrvNg::Get_UseTaxDiscountBel() const
{
    return m_pimpl->Get_UseTaxDiscountBel();
}
void QClassicFrDrvNg::Set_UseTaxDiscountBel(bool value)
{
    m_pimpl->Set_UseTaxDiscountBel(value);
}
bool QClassicFrDrvNg::Get_IsPrinterRightSensorFailure() const
{
    return m_pimpl->Get_IsPrinterRightSensorFailure();
}
QString QClassicFrDrvNg::Get_FiscalSignOFD() const
{
    return QString::fromStdString(m_pimpl->Get_FiscalSignOFD());
}
void QClassicFrDrvNg::Set_FiscalSignOFD(QString value)
{
    m_pimpl->Set_FiscalSignOFD((value.toStdString()));
}
bool QClassicFrDrvNg::Get_ShowProgress() const
{
    return m_pimpl->Get_ShowProgress();
}
void QClassicFrDrvNg::Set_ShowProgress(bool value)
{
    m_pimpl->Set_ShowProgress(value);
}
QString QClassicFrDrvNg::Get_BarCode() const
{
    return QString::fromStdString(m_pimpl->Get_BarCode());
}
void QClassicFrDrvNg::Set_BarCode(QString value)
{
    m_pimpl->Set_BarCode((value.toStdString()));
}
bool QClassicFrDrvNg::Get_PortLocked() const
{
    return m_pimpl->Get_PortLocked();
}
int QClassicFrDrvNg::Get_ChangeSumOffset() const
{
    return m_pimpl->Get_ChangeSumOffset();
}
void QClassicFrDrvNg::Set_ChangeSumOffset(int value)
{
    m_pimpl->Set_ChangeSumOffset(value);
}
int QClassicFrDrvNg::Get_Tax2NameSymbolNumber() const
{
    return m_pimpl->Get_Tax2NameSymbolNumber();
}
void QClassicFrDrvNg::Set_Tax2NameSymbolNumber(int value)
{
    m_pimpl->Set_Tax2NameSymbolNumber(value);
}
int QClassicFrDrvNg::Get_RunningPeriod() const
{
    return m_pimpl->Get_RunningPeriod();
}
void QClassicFrDrvNg::Set_RunningPeriod(int value)
{
    m_pimpl->Set_RunningPeriod(value);
}
int QClassicFrDrvNg::Get_Summ1NameOffset() const
{
    return m_pimpl->Get_Summ1NameOffset();
}
void QClassicFrDrvNg::Set_Summ1NameOffset(int value)
{
    m_pimpl->Set_Summ1NameOffset(value);
}
int QClassicFrDrvNg::Get_OFDReadTimeout() const
{
    return m_pimpl->Get_OFDReadTimeout();
}
void QClassicFrDrvNg::Set_OFDReadTimeout(int value)
{
    m_pimpl->Set_OFDReadTimeout(value);
}
int QClassicFrDrvNg::Get_BlockType() const
{
    return m_pimpl->Get_BlockType();
}
void QClassicFrDrvNg::Set_BlockType(int value)
{
    m_pimpl->Set_BlockType(value);
}
int QClassicFrDrvNg::Get_CommandCount() const
{
    return m_pimpl->Get_CommandCount();
}
QString QClassicFrDrvNg::Get_LDIPAddress() const
{
    return QString::fromStdString(m_pimpl->Get_LDIPAddress());
}
void QClassicFrDrvNg::Set_LDIPAddress(QString value)
{
    m_pimpl->Set_LDIPAddress((value.toStdString()));
}
int QClassicFrDrvNg::Get_VertScale() const
{
    return m_pimpl->Get_VertScale();
}
void QClassicFrDrvNg::Set_VertScale(int value)
{
    m_pimpl->Set_VertScale(value);
}
int QClassicFrDrvNg::Get_MINValueOfField() const
{
    return m_pimpl->Get_MINValueOfField();
}
int QClassicFrDrvNg::Get_TotalStringNumber() const
{
    return m_pimpl->Get_TotalStringNumber();
}
void QClassicFrDrvNg::Set_TotalStringNumber(int value)
{
    m_pimpl->Set_TotalStringNumber(value);
}
int QClassicFrDrvNg::Get_CheckType() const
{
    return m_pimpl->Get_CheckType();
}
void QClassicFrDrvNg::Set_CheckType(int value)
{
    m_pimpl->Set_CheckType(value);
}
bool QClassicFrDrvNg::Get_JournalRibbonOpticalSensor() const
{
    return m_pimpl->Get_JournalRibbonOpticalSensor();
}
QString QClassicFrDrvNg::Get_StringForPrinting() const
{
    return QString::fromStdString(m_pimpl->Get_StringForPrinting());
}
void QClassicFrDrvNg::Set_StringForPrinting(QString value)
{
    m_pimpl->Set_StringForPrinting((value.toStdString()));
}
int QClassicFrDrvNg::Get_Tax1TurnOverOffset() const
{
    return m_pimpl->Get_Tax1TurnOverOffset();
}
void QClassicFrDrvNg::Set_Tax1TurnOverOffset(int value)
{
    m_pimpl->Set_Tax1TurnOverOffset(value);
}
int QClassicFrDrvNg::Get_CustomerCode() const
{
    return m_pimpl->Get_CustomerCode();
}
void QClassicFrDrvNg::Set_CustomerCode(int value)
{
    m_pimpl->Set_CustomerCode(value);
}
int QClassicFrDrvNg::Get_TotalOffset() const
{
    return m_pimpl->Get_TotalOffset();
}
void QClassicFrDrvNg::Set_TotalOffset(int value)
{
    m_pimpl->Set_TotalOffset(value);
}
bool QClassicFrDrvNg::Get_TaxValue5Enabled() const
{
    return m_pimpl->Get_TaxValue5Enabled();
}
void QClassicFrDrvNg::Set_TaxValue5Enabled(bool value)
{
    m_pimpl->Set_TaxValue5Enabled(value);
}
int QClassicFrDrvNg::Get_Tax3RateSymbolNumber() const
{
    return m_pimpl->Get_Tax3RateSymbolNumber();
}
void QClassicFrDrvNg::Set_Tax3RateSymbolNumber(int value)
{
    m_pimpl->Set_Tax3RateSymbolNumber(value);
}
bool QClassicFrDrvNg::Get_UseIPAddress() const
{
    return m_pimpl->Get_UseIPAddress();
}
void QClassicFrDrvNg::Set_UseIPAddress(bool value)
{
    m_pimpl->Set_UseIPAddress(value);
}
int QClassicFrDrvNg::Get_LineLength() const
{
    return m_pimpl->Get_LineLength();
}
void QClassicFrDrvNg::Set_LineLength(int value)
{
    m_pimpl->Set_LineLength(value);
}
quint32 QClassicFrDrvNg::Get_NewPasswordTI() const
{
    return static_cast<uint32_t>(m_pimpl->Get_NewPasswordTI());
}
void QClassicFrDrvNg::Set_NewPasswordTI(quint32 value)
{
    m_pimpl->Set_NewPasswordTI((static_cast<quint32>(value)));
}
bool QClassicFrDrvNg::Get_TaxValue3Enabled() const
{
    return m_pimpl->Get_TaxValue3Enabled();
}
void QClassicFrDrvNg::Set_TaxValue3Enabled(bool value)
{
    m_pimpl->Set_TaxValue3Enabled(value);
}
QString QClassicFrDrvNg::Get_PropertyName() const
{
    return QString::fromStdString(m_pimpl->Get_PropertyName());
}
void QClassicFrDrvNg::Set_PropertyName(QString value)
{
    m_pimpl->Set_PropertyName((value.toStdString()));
}
int QClassicFrDrvNg::Get_DocumentType() const
{
    return m_pimpl->Get_DocumentType();
}
void QClassicFrDrvNg::Set_DocumentType(int value)
{
    m_pimpl->Set_DocumentType(value);
}
QString QClassicFrDrvNg::Get_CommandName() const
{
    return QString::fromStdString(m_pimpl->Get_CommandName());
}
int QClassicFrDrvNg::Get_PrinterStatus() const
{
    return m_pimpl->Get_PrinterStatus();
}
int QClassicFrDrvNg::Get_KPKFont() const
{
    return m_pimpl->Get_KPKFont();
}
void QClassicFrDrvNg::Set_KPKFont(int value)
{
    m_pimpl->Set_KPKFont(value);
}
int QClassicFrDrvNg::Get_RegistrationNumber() const
{
    return m_pimpl->Get_RegistrationNumber();
}
void QClassicFrDrvNg::Set_RegistrationNumber(int value)
{
    m_pimpl->Set_RegistrationNumber(value);
}
QDateTime QClassicFrDrvNg::Get_Time() const
{
    return QDateTime::fromMSecsSinceEpoch(static_cast<qint64>(1000) * m_pimpl->Get_Time());
    ;
}
void QClassicFrDrvNg::Set_Time(QDateTime value)
{
    m_pimpl->Set_Time((static_cast<std::time_t>(value.toMSecsSinceEpoch() / static_cast<qint64>(1000))));
}
int QClassicFrDrvNg::Get_SyncTimeout() const
{
    return m_pimpl->Get_SyncTimeout();
}
void QClassicFrDrvNg::Set_SyncTimeout(int value)
{
    m_pimpl->Set_SyncTimeout(value);
}
int QClassicFrDrvNg::Get_SKNOStatus() const
{
    return m_pimpl->Get_SKNOStatus();
}
void QClassicFrDrvNg::Set_SKNOStatus(int value)
{
    m_pimpl->Set_SKNOStatus(value);
}
double QClassicFrDrvNg::Get_Quantity() const
{
    return m_pimpl->Get_Quantity();
}
void QClassicFrDrvNg::Set_Quantity(double value)
{
    m_pimpl->Set_Quantity(value);
}
quint32 QClassicFrDrvNg::Get_DriverRelease() const
{
    return static_cast<uint32_t>(m_pimpl->Get_DriverRelease());
}
bool QClassicFrDrvNg::Get_PresenterIn() const
{
    return m_pimpl->Get_PresenterIn();
}
int QClassicFrDrvNg::Get_ProtocolType() const
{
    return m_pimpl->Get_ProtocolType();
}
void QClassicFrDrvNg::Set_ProtocolType(int value)
{
    m_pimpl->Set_ProtocolType(value);
}
QString QClassicFrDrvNg::Get_UDescription() const
{
    return QString::fromStdString(m_pimpl->Get_UDescription());
}
QString QClassicFrDrvNg::Get_CPLogFile() const
{
    return QString::fromStdString(m_pimpl->Get_CPLogFile());
}
void QClassicFrDrvNg::Set_CPLogFile(QString value)
{
    m_pimpl->Set_CPLogFile((value.toStdString()));
}
int QClassicFrDrvNg::Get_Tax3SumStringNumber() const
{
    return m_pimpl->Get_Tax3SumStringNumber();
}
void QClassicFrDrvNg::Set_Tax3SumStringNumber(int value)
{
    m_pimpl->Set_Tax3SumStringNumber(value);
}
QString QClassicFrDrvNg::Get_TextBlock() const
{
    return QString::fromStdString(m_pimpl->Get_TextBlock());
}
void QClassicFrDrvNg::Set_TextBlock(QString value)
{
    m_pimpl->Set_TextBlock((value.toStdString()));
}
int QClassicFrDrvNg::Get_IBMSessionHour() const
{
    return m_pimpl->Get_IBMSessionHour();
}
int QClassicFrDrvNg::Get_PingTime() const
{
    return m_pimpl->Get_PingTime();
}
void QClassicFrDrvNg::Set_PingTime(int value)
{
    m_pimpl->Set_PingTime(value);
}
bool QClassicFrDrvNg::Get_CapOpenCheck() const
{
    return m_pimpl->Get_CapOpenCheck();
}
bool QClassicFrDrvNg::Get_FM1IsPresent() const
{
    return m_pimpl->Get_FM1IsPresent();
}
int QClassicFrDrvNg::Get_SerialNumberAsInteger() const
{
    return m_pimpl->Get_SerialNumberAsInteger();
}
int QClassicFrDrvNg::Get_CharHeight() const
{
    return m_pimpl->Get_CharHeight();
}
bool QClassicFrDrvNg::Get_AutoSensorValues() const
{
    return m_pimpl->Get_AutoSensorValues();
}
void QClassicFrDrvNg::Set_AutoSensorValues(bool value)
{
    m_pimpl->Set_AutoSensorValues(value);
}
int QClassicFrDrvNg::Get_PrintBarcodeText() const
{
    return m_pimpl->Get_PrintBarcodeText();
}
void QClassicFrDrvNg::Set_PrintBarcodeText(int value)
{
    m_pimpl->Set_PrintBarcodeText(value);
}
QDateTime QClassicFrDrvNg::Get_LastSessionDate() const
{
    return QDateTime::fromMSecsSinceEpoch(static_cast<qint64>(1000) * m_pimpl->Get_LastSessionDate());
    ;
}
void QClassicFrDrvNg::Set_LastSessionDate(QDateTime value)
{
    m_pimpl->Set_LastSessionDate((static_cast<std::time_t>(value.toMSecsSinceEpoch() / static_cast<qint64>(1000))));
}
QString QClassicFrDrvNg::Get_DocumentName() const
{
    return QString::fromStdString(m_pimpl->Get_DocumentName());
}
void QClassicFrDrvNg::Set_DocumentName(QString value)
{
    m_pimpl->Set_DocumentName((value.toStdString()));
}
int QClassicFrDrvNg::Get_Tax4SumOffset() const
{
    return m_pimpl->Get_Tax4SumOffset();
}
void QClassicFrDrvNg::Set_Tax4SumOffset(int value)
{
    m_pimpl->Set_Tax4SumOffset(value);
}
qint64 QClassicFrDrvNg::Get_RegSaleRec() const
{
    return static_cast<int64_t>(m_pimpl->Get_RegSaleRec());
}
int QClassicFrDrvNg::Get_ChangeStringNumber() const
{
    return m_pimpl->Get_ChangeStringNumber();
}
void QClassicFrDrvNg::Set_ChangeStringNumber(int value)
{
    m_pimpl->Set_ChangeStringNumber(value);
}
int QClassicFrDrvNg::Get_Tax4TurnOverFont() const
{
    return m_pimpl->Get_Tax4TurnOverFont();
}
void QClassicFrDrvNg::Set_Tax4TurnOverFont(int value)
{
    m_pimpl->Set_Tax4TurnOverFont(value);
}
int QClassicFrDrvNg::Get_StatusRK() const
{
    return m_pimpl->Get_StatusRK();
}
int QClassicFrDrvNg::Get_ECRMode() const
{
    return m_pimpl->Get_ECRMode();
}
bool QClassicFrDrvNg::Get_IsDrawerOpen() const
{
    return m_pimpl->Get_IsDrawerOpen();
}
QString QClassicFrDrvNg::Get_ResultCodeDescription() const
{
    return QString::fromStdString(m_pimpl->Get_ResultCodeDescription());
}
int QClassicFrDrvNg::Get_Tax4TurnOverStringNumber() const
{
    return m_pimpl->Get_Tax4TurnOverStringNumber();
}
void QClassicFrDrvNg::Set_Tax4TurnOverStringNumber(int value)
{
    m_pimpl->Set_Tax4TurnOverStringNumber(value);
}
int QClassicFrDrvNg::Get_Tax4NameOffset() const
{
    return m_pimpl->Get_Tax4NameOffset();
}
void QClassicFrDrvNg::Set_Tax4NameOffset(int value)
{
    m_pimpl->Set_Tax4NameOffset(value);
}
QByteArray QClassicFrDrvNg::Get_TLVData() const
{
    auto value = m_pimpl->Get_TLVData();
    return QByteArray(reinterpret_cast<const char*>(value.data()), value.size());
}
void QClassicFrDrvNg::Set_TLVData(QByteArray value)
{
    m_pimpl->Set_TLVData((std::vector<uint8_t>(value.begin(), value.end())));
}
QString QClassicFrDrvNg::Get_MFPNumber() const
{
    return QString::fromStdString(m_pimpl->Get_MFPNumber());
}
void QClassicFrDrvNg::Set_MFPNumber(QString value)
{
    m_pimpl->Set_MFPNumber((value.toStdString()));
}
int QClassicFrDrvNg::Get_QuantityOfOperations() const
{
    return m_pimpl->Get_QuantityOfOperations();
}
int QClassicFrDrvNg::Get_SubTotalSymbolNumber() const
{
    return m_pimpl->Get_SubTotalSymbolNumber();
}
void QClassicFrDrvNg::Set_SubTotalSymbolNumber(int value)
{
    m_pimpl->Set_SubTotalSymbolNumber(value);
}
QString QClassicFrDrvNg::Get_DiscountName() const
{
    return QString::fromStdString(m_pimpl->Get_DiscountName());
}
void QClassicFrDrvNg::Set_DiscountName(QString value)
{
    m_pimpl->Set_DiscountName((value.toStdString()));
}
bool QClassicFrDrvNg::Get_CarryStrings() const
{
    return m_pimpl->Get_CarryStrings();
}
void QClassicFrDrvNg::Set_CarryStrings(bool value)
{
    m_pimpl->Set_CarryStrings(value);
}
int QClassicFrDrvNg::Get_Summ1Font() const
{
    return m_pimpl->Get_Summ1Font();
}
void QClassicFrDrvNg::Set_Summ1Font(int value)
{
    m_pimpl->Set_Summ1Font(value);
}
bool QClassicFrDrvNg::Get_BatteryCondition() const
{
    return m_pimpl->Get_BatteryCondition();
}
int QClassicFrDrvNg::Get_SummSymbolNumber() const
{
    return m_pimpl->Get_SummSymbolNumber();
}
void QClassicFrDrvNg::Set_SummSymbolNumber(int value)
{
    m_pimpl->Set_SummSymbolNumber(value);
}
QString QClassicFrDrvNg::Get_License() const
{
    return QString::fromStdString(m_pimpl->Get_License());
}
void QClassicFrDrvNg::Set_License(QString value)
{
    m_pimpl->Set_License((value.toStdString()));
}
bool QClassicFrDrvNg::Get_JournalRibbonLever() const
{
    return m_pimpl->Get_JournalRibbonLever();
}
bool QClassicFrDrvNg::Get_CPLog() const
{
    return m_pimpl->Get_CPLog();
}
void QClassicFrDrvNg::Set_CPLog(bool value)
{
    m_pimpl->Set_CPLog(value);
}
int QClassicFrDrvNg::Get_SummOffset() const
{
    return m_pimpl->Get_SummOffset();
}
void QClassicFrDrvNg::Set_SummOffset(int value)
{
    m_pimpl->Set_SummOffset(value);
}
int QClassicFrDrvNg::Get_Tax4RateSymbolNumber() const
{
    return m_pimpl->Get_Tax4RateSymbolNumber();
}
void QClassicFrDrvNg::Set_Tax4RateSymbolNumber(int value)
{
    m_pimpl->Set_Tax4RateSymbolNumber(value);
}
qint64 QClassicFrDrvNg::Get_Summ11() const
{
    return static_cast<int64_t>(m_pimpl->Get_Summ11());
}
void QClassicFrDrvNg::Set_Summ11(qint64 value)
{
    m_pimpl->Set_Summ11((static_cast<qint64>(value)));
}
int QClassicFrDrvNg::Get_CopyOffset1() const
{
    return m_pimpl->Get_CopyOffset1();
}
void QClassicFrDrvNg::Set_CopyOffset1(int value)
{
    m_pimpl->Set_CopyOffset1(value);
}
qint64 QClassicFrDrvNg::Get_RegBuyReturnRec() const
{
    return static_cast<int64_t>(m_pimpl->Get_RegBuyReturnRec());
}
int QClassicFrDrvNg::Get_CopyOffset3() const
{
    return m_pimpl->Get_CopyOffset3();
}
void QClassicFrDrvNg::Set_CopyOffset3(int value)
{
    m_pimpl->Set_CopyOffset3(value);
}
int QClassicFrDrvNg::Get_CopyOffset2() const
{
    return m_pimpl->Get_CopyOffset2();
}
void QClassicFrDrvNg::Set_CopyOffset2(int value)
{
    m_pimpl->Set_CopyOffset2(value);
}
int QClassicFrDrvNg::Get_CopyOffset5() const
{
    return m_pimpl->Get_CopyOffset5();
}
void QClassicFrDrvNg::Set_CopyOffset5(int value)
{
    m_pimpl->Set_CopyOffset5(value);
}
int QClassicFrDrvNg::Get_CopyOffset4() const
{
    return m_pimpl->Get_CopyOffset4();
}
void QClassicFrDrvNg::Set_CopyOffset4(int value)
{
    m_pimpl->Set_CopyOffset4(value);
}
int QClassicFrDrvNg::Get_Tax1NameSymbolNumber() const
{
    return m_pimpl->Get_Tax1NameSymbolNumber();
}
void QClassicFrDrvNg::Set_Tax1NameSymbolNumber(int value)
{
    m_pimpl->Set_Tax1NameSymbolNumber(value);
}
int QClassicFrDrvNg::Get_LastFMRecordType() const
{
    return m_pimpl->Get_LastFMRecordType();
}
int QClassicFrDrvNg::Get_BanknoteCount() const
{
    return m_pimpl->Get_BanknoteCount();
}
bool QClassicFrDrvNg::Get_LicenseIsPresent() const
{
    return m_pimpl->Get_LicenseIsPresent();
}
int QClassicFrDrvNg::Get_RegistrationReasonCodeEx() const
{
    return m_pimpl->Get_RegistrationReasonCodeEx();
}
void QClassicFrDrvNg::Set_RegistrationReasonCodeEx(int value)
{
    m_pimpl->Set_RegistrationReasonCodeEx(value);
}
int QClassicFrDrvNg::Get_SubTotalStringNumber() const
{
    return m_pimpl->Get_SubTotalStringNumber();
}
void QClassicFrDrvNg::Set_SubTotalStringNumber(int value)
{
    m_pimpl->Set_SubTotalStringNumber(value);
}
int QClassicFrDrvNg::Get_ClicheOffset() const
{
    return m_pimpl->Get_ClicheOffset();
}
void QClassicFrDrvNg::Set_ClicheOffset(int value)
{
    m_pimpl->Set_ClicheOffset(value);
}
int QClassicFrDrvNg::Get_RequestDocumentType() const
{
    return m_pimpl->Get_RequestDocumentType();
}
void QClassicFrDrvNg::Set_RequestDocumentType(int value)
{
    m_pimpl->Set_RequestDocumentType(value);
}
QString QClassicFrDrvNg::Get_NameOperationReg() const
{
    return QString::fromStdString(m_pimpl->Get_NameOperationReg());
}
int QClassicFrDrvNg::Get_Tax3TurnOverSymbolNumber() const
{
    return m_pimpl->Get_Tax3TurnOverSymbolNumber();
}
void QClassicFrDrvNg::Set_Tax3TurnOverSymbolNumber(int value)
{
    m_pimpl->Set_Tax3TurnOverSymbolNumber(value);
}
int QClassicFrDrvNg::Get_BarcodeFirstLine() const
{
    return m_pimpl->Get_BarcodeFirstLine();
}
void QClassicFrDrvNg::Set_BarcodeFirstLine(int value)
{
    m_pimpl->Set_BarcodeFirstLine(value);
}
bool QClassicFrDrvNg::Get_LidPositionSensor() const
{
    return m_pimpl->Get_LidPositionSensor();
}
int QClassicFrDrvNg::Get_TransmitDocumentNumber() const
{
    return m_pimpl->Get_TransmitDocumentNumber();
}
int QClassicFrDrvNg::Get_LogMaxFileSize() const
{
    return m_pimpl->Get_LogMaxFileSize();
}
void QClassicFrDrvNg::Set_LogMaxFileSize(int value)
{
    m_pimpl->Set_LogMaxFileSize(value);
}
bool QClassicFrDrvNg::Get_IsBlockedByWrongTaxPassword() const
{
    return m_pimpl->Get_IsBlockedByWrongTaxPassword();
}
bool QClassicFrDrvNg::Get_FMOverflow() const
{
    return m_pimpl->Get_FMOverflow();
}
QString QClassicFrDrvNg::Get_NameCashReg() const
{
    return QString::fromStdString(m_pimpl->Get_NameCashReg());
}
int QClassicFrDrvNg::Get_ComNumber() const
{
    return m_pimpl->Get_ComNumber();
}
void QClassicFrDrvNg::Set_ComNumber(int value)
{
    m_pimpl->Set_ComNumber(value);
}
int QClassicFrDrvNg::Get_TCPConnectionTimeout() const
{
    return m_pimpl->Get_TCPConnectionTimeout();
}
void QClassicFrDrvNg::Set_TCPConnectionTimeout(int value)
{
    m_pimpl->Set_TCPConnectionTimeout(value);
}
qint64 QClassicFrDrvNg::Get_TaxValue3() const
{
    return static_cast<int64_t>(m_pimpl->Get_TaxValue3());
}
void QClassicFrDrvNg::Set_TaxValue3(qint64 value)
{
    m_pimpl->Set_TaxValue3((static_cast<qint64>(value)));
}
int QClassicFrDrvNg::Get_Tax1RateOffset() const
{
    return m_pimpl->Get_Tax1RateOffset();
}
void QClassicFrDrvNg::Set_Tax1RateOffset(int value)
{
    m_pimpl->Set_Tax1RateOffset(value);
}
int QClassicFrDrvNg::Get_ECRAdvancedMode() const
{
    return m_pimpl->Get_ECRAdvancedMode();
}
int QClassicFrDrvNg::Get_Tax3NameSymbolNumber() const
{
    return m_pimpl->Get_Tax3NameSymbolNumber();
}
void QClassicFrDrvNg::Set_Tax3NameSymbolNumber(int value)
{
    m_pimpl->Set_Tax3NameSymbolNumber(value);
}
bool QClassicFrDrvNg::Get_IsClearUnfiscalInfo() const
{
    return m_pimpl->Get_IsClearUnfiscalInfo();
}
void QClassicFrDrvNg::Set_IsClearUnfiscalInfo(bool value)
{
    m_pimpl->Set_IsClearUnfiscalInfo(value);
}
bool QClassicFrDrvNg::Get_EKLZIsPresent() const
{
    return m_pimpl->Get_EKLZIsPresent();
}
int QClassicFrDrvNg::Get_ReceiptOutputType() const
{
    return m_pimpl->Get_ReceiptOutputType();
}
void QClassicFrDrvNg::Set_ReceiptOutputType(int value)
{
    m_pimpl->Set_ReceiptOutputType(value);
}
int QClassicFrDrvNg::Get_BarcodeStartBlockNumber() const
{
    return m_pimpl->Get_BarcodeStartBlockNumber();
}
void QClassicFrDrvNg::Set_BarcodeStartBlockNumber(int value)
{
    m_pimpl->Set_BarcodeStartBlockNumber(value);
}
int QClassicFrDrvNg::Get_FontCount() const
{
    return m_pimpl->Get_FontCount();
}
int QClassicFrDrvNg::Get_ParamsPageIndex() const
{
    return m_pimpl->Get_ParamsPageIndex();
}
void QClassicFrDrvNg::Set_ParamsPageIndex(int value)
{
    m_pimpl->Set_ParamsPageIndex(value);
}
int QClassicFrDrvNg::Get_LDComNumber() const
{
    return m_pimpl->Get_LDComNumber();
}
void QClassicFrDrvNg::Set_LDComNumber(int value)
{
    m_pimpl->Set_LDComNumber(value);
}
QString QClassicFrDrvNg::Get_INNOFD() const
{
    return QString::fromStdString(m_pimpl->Get_INNOFD());
}
void QClassicFrDrvNg::Set_INNOFD(QString value)
{
    m_pimpl->Set_INNOFD((value.toStdString()));
}
QClassicFrDrvNg::TFinishDocumentMode QClassicFrDrvNg::Get_FinishDocumentMode() const
{
    return static_cast<TFinishDocumentMode>(m_pimpl->Get_FinishDocumentMode());
}
void QClassicFrDrvNg::Set_FinishDocumentMode(TFinishDocumentMode value)
{
    m_pimpl->Set_FinishDocumentMode((static_cast<classic_interface::TFinishDocumentMode>(value)));
}
int QClassicFrDrvNg::Get_LDTCPPort() const
{
    return m_pimpl->Get_LDTCPPort();
}
void QClassicFrDrvNg::Set_LDTCPPort(int value)
{
    m_pimpl->Set_LDTCPPort(value);
}
int QClassicFrDrvNg::Get_RoundingSumm() const
{
    return m_pimpl->Get_RoundingSumm();
}
void QClassicFrDrvNg::Set_RoundingSumm(int value)
{
    m_pimpl->Set_RoundingSumm(value);
}
int QClassicFrDrvNg::Get_OperationCode() const
{
    return m_pimpl->Get_OperationCode();
}
int QClassicFrDrvNg::Get_FMFlagsEx() const
{
    return m_pimpl->Get_FMFlagsEx();
}
int QClassicFrDrvNg::Get_ActivizationControlByte() const
{
    return m_pimpl->Get_ActivizationControlByte();
}
void QClassicFrDrvNg::Set_ActivizationControlByte(int value)
{
    m_pimpl->Set_ActivizationControlByte(value);
}
QString QClassicFrDrvNg::Get_URL() const
{
    return QString::fromStdString(m_pimpl->Get_URL());
}
void QClassicFrDrvNg::Set_URL(QString value)
{
    m_pimpl->Set_URL((value.toStdString()));
}
int QClassicFrDrvNg::Get_UMajorProtocolVersion() const
{
    return m_pimpl->Get_UMajorProtocolVersion();
}
int QClassicFrDrvNg::Get_TagValueLength() const
{
    return m_pimpl->Get_TagValueLength();
}
void QClassicFrDrvNg::Set_TagValueLength(int value)
{
    m_pimpl->Set_TagValueLength(value);
}
bool QClassicFrDrvNg::Get_FM2IsPresent() const
{
    return m_pimpl->Get_FM2IsPresent();
}
int QClassicFrDrvNg::Get_DiscountOnCheckSymbolNumber() const
{
    return m_pimpl->Get_DiscountOnCheckSymbolNumber();
}
void QClassicFrDrvNg::Set_DiscountOnCheckSymbolNumber(int value)
{
    m_pimpl->Set_DiscountOnCheckSymbolNumber(value);
}
int QClassicFrDrvNg::Get_WorkModeEx() const
{
    return m_pimpl->Get_WorkModeEx();
}
void QClassicFrDrvNg::Set_WorkModeEx(int value)
{
    m_pimpl->Set_WorkModeEx(value);
}
double QClassicFrDrvNg::Get_TagValueFVLN() const
{
    return m_pimpl->Get_TagValueFVLN();
}
void QClassicFrDrvNg::Set_TagValueFVLN(double value)
{
    m_pimpl->Set_TagValueFVLN(value);
}
int QClassicFrDrvNg::Get_SearchTimeout() const
{
    return m_pimpl->Get_SearchTimeout();
}
void QClassicFrDrvNg::Set_SearchTimeout(int value)
{
    m_pimpl->Set_SearchTimeout(value);
}
qint64 QClassicFrDrvNg::Get_RegBuyReturnSession() const
{
    return static_cast<int64_t>(m_pimpl->Get_RegBuyReturnSession());
}
int QClassicFrDrvNg::Get_MaxRecoverCount() const
{
    return m_pimpl->Get_MaxRecoverCount();
}
void QClassicFrDrvNg::Set_MaxRecoverCount(int value)
{
    m_pimpl->Set_MaxRecoverCount(value);
}
QString QClassicFrDrvNg::Get_AttributeValue() const
{
    return QString::fromStdString(m_pimpl->Get_AttributeValue());
}
void QClassicFrDrvNg::Set_AttributeValue(QString value)
{
    m_pimpl->Set_AttributeValue((value.toStdString()));
}
bool QClassicFrDrvNg::Get_LogMethods() const
{
    return m_pimpl->Get_LogMethods();
}
void QClassicFrDrvNg::Set_LogMethods(bool value)
{
    m_pimpl->Set_LogMethods(value);
}
QString QClassicFrDrvNg::Get_TransferByte() const
{
    return QString::fromStdString(m_pimpl->Get_TransferByte());
}
void QClassicFrDrvNg::Set_TransferByte(QString value)
{
    m_pimpl->Set_TransferByte((value.toStdString()));
}
int QClassicFrDrvNg::Get_ModelParamValue() const
{
    return m_pimpl->Get_ModelParamValue();
}
QClassicFrDrvNg::TConnectionType QClassicFrDrvNg::Get_LDConnectionType() const
{
    return static_cast<TConnectionType>(m_pimpl->Get_LDConnectionType());
}
void QClassicFrDrvNg::Set_LDConnectionType(TConnectionType value)
{
    m_pimpl->Set_LDConnectionType((static_cast<classic_interface::TConnectionType>(value)));
}
int QClassicFrDrvNg::Get_UModel() const
{
    return m_pimpl->Get_UModel();
}
bool QClassicFrDrvNg::Get_Connected() const
{
    return m_pimpl->Get_Connected();
}
void QClassicFrDrvNg::Set_Connected(bool value)
{
    m_pimpl->Set_Connected(value);
}
int QClassicFrDrvNg::Get_SummStringNumber() const
{
    return m_pimpl->Get_SummStringNumber();
}
void QClassicFrDrvNg::Set_SummStringNumber(int value)
{
    m_pimpl->Set_SummStringNumber(value);
}
int QClassicFrDrvNg::Get_RealPayDepartment() const
{
    return m_pimpl->Get_RealPayDepartment();
}
void QClassicFrDrvNg::Set_RealPayDepartment(int value)
{
    m_pimpl->Set_RealPayDepartment(value);
}
bool QClassicFrDrvNg::Get_TranslationEnabled() const
{
    return m_pimpl->Get_TranslationEnabled();
}
void QClassicFrDrvNg::Set_TranslationEnabled(bool value)
{
    m_pimpl->Set_TranslationEnabled(value);
}
bool QClassicFrDrvNg::Get_IsCheckMadeOut() const
{
    return m_pimpl->Get_IsCheckMadeOut();
}
QString QClassicFrDrvNg::Get_ECRModeDescription() const
{
    return QString::fromStdString(m_pimpl->Get_ECRModeDescription());
}
bool QClassicFrDrvNg::Get_PointPosition() const
{
    return m_pimpl->Get_PointPosition();
}
void QClassicFrDrvNg::Set_PointPosition(bool value)
{
    m_pimpl->Set_PointPosition(value);
}
int QClassicFrDrvNg::Get_DeviceCode() const
{
    return m_pimpl->Get_DeviceCode();
}
void QClassicFrDrvNg::Set_DeviceCode(int value)
{
    m_pimpl->Set_DeviceCode(value);
}
int QClassicFrDrvNg::Get_TextBlockNumber() const
{
    return m_pimpl->Get_TextBlockNumber();
}
void QClassicFrDrvNg::Set_TextBlockNumber(int value)
{
    m_pimpl->Set_TextBlockNumber(value);
}
bool QClassicFrDrvNg::Get_IsCheckClosed() const
{
    return m_pimpl->Get_IsCheckClosed();
}
bool QClassicFrDrvNg::Get_OFDExchangeSuspended() const
{
    return m_pimpl->Get_OFDExchangeSuspended();
}
void QClassicFrDrvNg::Set_OFDExchangeSuspended(bool value)
{
    m_pimpl->Set_OFDExchangeSuspended(value);
}
int QClassicFrDrvNg::Get_MFPStatus() const
{
    return m_pimpl->Get_MFPStatus();
}
void QClassicFrDrvNg::Set_MFPStatus(int value)
{
    m_pimpl->Set_MFPStatus(value);
}
quint32 QClassicFrDrvNg::Get_DriverMinorVersion() const
{
    return static_cast<uint32_t>(m_pimpl->Get_DriverMinorVersion());
}
int QClassicFrDrvNg::Get_Tax3NameOffset() const
{
    return m_pimpl->Get_Tax3NameOffset();
}
void QClassicFrDrvNg::Set_Tax3NameOffset(int value)
{
    m_pimpl->Set_Tax3NameOffset(value);
}
int QClassicFrDrvNg::Get_FNCurrentDocument() const
{
    return m_pimpl->Get_FNCurrentDocument();
}
void QClassicFrDrvNg::Set_FNCurrentDocument(int value)
{
    m_pimpl->Set_FNCurrentDocument(value);
}
QString QClassicFrDrvNg::Get_FileName() const
{
    return QString::fromStdString(m_pimpl->Get_FileName());
}
void QClassicFrDrvNg::Set_FileName(QString value)
{
    m_pimpl->Set_FileName((value.toStdString()));
}
bool QClassicFrDrvNg::Get_SlipDocumentIsMoving() const
{
    return m_pimpl->Get_SlipDocumentIsMoving();
}
int QClassicFrDrvNg::Get_StringQuantityInOperation() const
{
    return m_pimpl->Get_StringQuantityInOperation();
}
void QClassicFrDrvNg::Set_StringQuantityInOperation(int value)
{
    m_pimpl->Set_StringQuantityInOperation(value);
}
int QClassicFrDrvNg::Get_KPKNumber() const
{
    return m_pimpl->Get_KPKNumber();
}
void QClassicFrDrvNg::Set_KPKNumber(int value)
{
    m_pimpl->Set_KPKNumber(value);
}
QString QClassicFrDrvNg::Get_DriverVersion() const
{
    return QString::fromStdString(m_pimpl->Get_DriverVersion());
}
int QClassicFrDrvNg::Get_TCPPort() const
{
    return m_pimpl->Get_TCPPort();
}
void QClassicFrDrvNg::Set_TCPPort(int value)
{
    m_pimpl->Set_TCPPort(value);
}
QString QClassicFrDrvNg::Get_BarcodeHex() const
{
    return QString::fromStdString(m_pimpl->Get_BarcodeHex());
}
void QClassicFrDrvNg::Set_BarcodeHex(QString value)
{
    m_pimpl->Set_BarcodeHex((value.toStdString()));
}
int QClassicFrDrvNg::Get_Tax4NameSymbolNumber() const
{
    return m_pimpl->Get_Tax4NameSymbolNumber();
}
void QClassicFrDrvNg::Set_Tax4NameSymbolNumber(int value)
{
    m_pimpl->Set_Tax4NameSymbolNumber(value);
}
int QClassicFrDrvNg::Get_PortNumber() const
{
    return m_pimpl->Get_PortNumber();
}
void QClassicFrDrvNg::Set_PortNumber(int value)
{
    m_pimpl->Set_PortNumber(value);
}
int QClassicFrDrvNg::Get_GraphBufferType() const
{
    return m_pimpl->Get_GraphBufferType();
}
void QClassicFrDrvNg::Set_GraphBufferType(int value)
{
    m_pimpl->Set_GraphBufferType(value);
}
int QClassicFrDrvNg::Get_CorrectionType() const
{
    return m_pimpl->Get_CorrectionType();
}
void QClassicFrDrvNg::Set_CorrectionType(int value)
{
    m_pimpl->Set_CorrectionType(value);
}
int QClassicFrDrvNg::Get_CalculationSign() const
{
    return m_pimpl->Get_CalculationSign();
}
void QClassicFrDrvNg::Set_CalculationSign(int value)
{
    m_pimpl->Set_CalculationSign(value);
}
QString QClassicFrDrvNg::Get_SKNOIdentifier() const
{
    return QString::fromStdString(m_pimpl->Get_SKNOIdentifier());
}
void QClassicFrDrvNg::Set_SKNOIdentifier(QString value)
{
    m_pimpl->Set_SKNOIdentifier((value.toStdString()));
}
int QClassicFrDrvNg::Get_FileType() const
{
    return m_pimpl->Get_FileType();
}
void QClassicFrDrvNg::Set_FileType(int value)
{
    m_pimpl->Set_FileType(value);
}
qint64 QClassicFrDrvNg::Get_RegSaleReturnRec() const
{
    return static_cast<int64_t>(m_pimpl->Get_RegSaleReturnRec());
}
int QClassicFrDrvNg::Get_DepartmentStringNumber() const
{
    return m_pimpl->Get_DepartmentStringNumber();
}
void QClassicFrDrvNg::Set_DepartmentStringNumber(int value)
{
    m_pimpl->Set_DepartmentStringNumber(value);
}
qint64 QClassicFrDrvNg::Get_CheckResult() const
{
    return static_cast<int64_t>(m_pimpl->Get_CheckResult());
}
void QClassicFrDrvNg::Set_CheckResult(qint64 value)
{
    m_pimpl->Set_CheckResult((static_cast<qint64>(value)));
}
int QClassicFrDrvNg::Get_JournalRowCount() const
{
    return m_pimpl->Get_JournalRowCount();
}
QString QClassicFrDrvNg::Get_EscapeIP() const
{
    return QString::fromStdString(m_pimpl->Get_EscapeIP());
}
void QClassicFrDrvNg::Set_EscapeIP(QString value)
{
    m_pimpl->Set_EscapeIP((value.toStdString()));
}
bool QClassicFrDrvNg::Get_IsLastFMRecordCorrupted() const
{
    return m_pimpl->Get_IsLastFMRecordCorrupted();
}
int QClassicFrDrvNg::Get_CommandCode() const
{
    return m_pimpl->Get_CommandCode();
}
int QClassicFrDrvNg::Get_CommandRetryCount() const
{
    return m_pimpl->Get_CommandRetryCount();
}
void QClassicFrDrvNg::Set_CommandRetryCount(int value)
{
    m_pimpl->Set_CommandRetryCount(value);
}
int QClassicFrDrvNg::Get_OperationNameOffset() const
{
    return m_pimpl->Get_OperationNameOffset();
}
void QClassicFrDrvNg::Set_OperationNameOffset(int value)
{
    m_pimpl->Set_OperationNameOffset(value);
}
QString QClassicFrDrvNg::Get_ServerVersion() const
{
    return QString::fromStdString(m_pimpl->Get_ServerVersion());
}
int QClassicFrDrvNg::Get_TransmitQueueSize() const
{
    return m_pimpl->Get_TransmitQueueSize();
}
bool QClassicFrDrvNg::Get_FieldType() const
{
    return m_pimpl->Get_FieldType();
}
int QClassicFrDrvNg::Get_FMBuild() const
{
    return m_pimpl->Get_FMBuild();
}
bool QClassicFrDrvNg::Get_MobilePayEnabled() const
{
    return m_pimpl->Get_MobilePayEnabled();
}
void QClassicFrDrvNg::Set_MobilePayEnabled(bool value)
{
    m_pimpl->Set_MobilePayEnabled(value);
}
int QClassicFrDrvNg::Get_Tax1SumFont() const
{
    return m_pimpl->Get_Tax1SumFont();
}
void QClassicFrDrvNg::Set_Tax1SumFont(int value)
{
    m_pimpl->Set_Tax1SumFont(value);
}
bool QClassicFrDrvNg::Get_ComLogOnlyErrors() const
{
    return m_pimpl->Get_ComLogOnlyErrors();
}
void QClassicFrDrvNg::Set_ComLogOnlyErrors(bool value)
{
    m_pimpl->Set_ComLogOnlyErrors(value);
}
QString QClassicFrDrvNg::Get_ValueOfFieldString() const
{
    return QString::fromStdString(m_pimpl->Get_ValueOfFieldString());
}
void QClassicFrDrvNg::Set_ValueOfFieldString(QString value)
{
    m_pimpl->Set_ValueOfFieldString((value.toStdString()));
}
QString QClassicFrDrvNg::Get_ConnectionURI() const
{
    return QString::fromStdString(m_pimpl->Get_ConnectionURI());
}
void QClassicFrDrvNg::Set_ConnectionURI(QString value)
{
    m_pimpl->Set_ConnectionURI((value.toStdString()));
}
qint64 QClassicFrDrvNg::Get_RegBuyRec() const
{
    return static_cast<int64_t>(m_pimpl->Get_RegBuyRec());
}
QString QClassicFrDrvNg::Get_BlockDataHex() const
{
    return QString::fromStdString(m_pimpl->Get_BlockDataHex());
}
void QClassicFrDrvNg::Set_BlockDataHex(QString value)
{
    m_pimpl->Set_BlockDataHex((value.toStdString()));
}
int QClassicFrDrvNg::Get_BufferingType() const
{
    return m_pimpl->Get_BufferingType();
}
void QClassicFrDrvNg::Set_BufferingType(int value)
{
    m_pimpl->Set_BufferingType(value);
}
int QClassicFrDrvNg::Get_DiscountOnCheckSumOffset() const
{
    return m_pimpl->Get_DiscountOnCheckSumOffset();
}
void QClassicFrDrvNg::Set_DiscountOnCheckSumOffset(int value)
{
    m_pimpl->Set_DiscountOnCheckSumOffset(value);
}
bool QClassicFrDrvNg::Get_Pistol() const
{
    return m_pimpl->Get_Pistol();
}
int QClassicFrDrvNg::Get_PriceSymbolNumber() const
{
    return m_pimpl->Get_PriceSymbolNumber();
}
void QClassicFrDrvNg::Set_PriceSymbolNumber(int value)
{
    m_pimpl->Set_PriceSymbolNumber(value);
}
int QClassicFrDrvNg::Get_Summ4StringNumber() const
{
    return m_pimpl->Get_Summ4StringNumber();
}
void QClassicFrDrvNg::Set_Summ4StringNumber(int value)
{
    m_pimpl->Set_Summ4StringNumber(value);
}
bool QClassicFrDrvNg::Get_JournalRibbonIsPresent() const
{
    return m_pimpl->Get_JournalRibbonIsPresent();
}
bool QClassicFrDrvNg::Get_AutoStartSearch() const
{
    return m_pimpl->Get_AutoStartSearch();
}
void QClassicFrDrvNg::Set_AutoStartSearch(bool value)
{
    m_pimpl->Set_AutoStartSearch(value);
}
int QClassicFrDrvNg::Get_LockTimeout() const
{
    return m_pimpl->Get_LockTimeout();
}
void QClassicFrDrvNg::Set_LockTimeout(int value)
{
    m_pimpl->Set_LockTimeout(value);
}
bool QClassicFrDrvNg::Get_ReconnectPort() const
{
    return m_pimpl->Get_ReconnectPort();
}
void QClassicFrDrvNg::Set_ReconnectPort(bool value)
{
    m_pimpl->Set_ReconnectPort(value);
}
int QClassicFrDrvNg::Get_DozeInMilliliters() const
{
    return m_pimpl->Get_DozeInMilliliters();
}
void QClassicFrDrvNg::Set_DozeInMilliliters(int value)
{
    m_pimpl->Set_DozeInMilliliters(value);
}
quint32 QClassicFrDrvNg::Get_SCPassword() const
{
    return static_cast<uint32_t>(m_pimpl->Get_SCPassword());
}
void QClassicFrDrvNg::Set_SCPassword(quint32 value)
{
    m_pimpl->Set_SCPassword((static_cast<quint32>(value)));
}
quint32 QClassicFrDrvNg::Get_FileVersionLS() const
{
    return static_cast<uint32_t>(m_pimpl->Get_FileVersionLS());
}
QString QClassicFrDrvNg::Get_EmergencyStopCodeDescription() const
{
    return QString::fromStdString(m_pimpl->Get_EmergencyStopCodeDescription());
}
int QClassicFrDrvNg::Get_PrintingAlignment() const
{
    return m_pimpl->Get_PrintingAlignment();
}
void QClassicFrDrvNg::Set_PrintingAlignment(int value)
{
    m_pimpl->Set_PrintingAlignment(value);
}
QDateTime QClassicFrDrvNg::Get_Date() const
{
    return QDateTime::fromMSecsSinceEpoch(static_cast<qint64>(1000) * m_pimpl->Get_Date());
    ;
}
void QClassicFrDrvNg::Set_Date(QDateTime value)
{
    m_pimpl->Set_Date((static_cast<std::time_t>(value.toMSecsSinceEpoch() / static_cast<qint64>(1000))));
}
int QClassicFrDrvNg::Get_Tax3() const
{
    return m_pimpl->Get_Tax3();
}
void QClassicFrDrvNg::Set_Tax3(int value)
{
    m_pimpl->Set_Tax3(value);
}
int QClassicFrDrvNg::Get_Tax2() const
{
    return m_pimpl->Get_Tax2();
}
void QClassicFrDrvNg::Set_Tax2(int value)
{
    m_pimpl->Set_Tax2(value);
}
int QClassicFrDrvNg::Get_Tax4() const
{
    return m_pimpl->Get_Tax4();
}
void QClassicFrDrvNg::Set_Tax4(int value)
{
    m_pimpl->Set_Tax4(value);
}
QString QClassicFrDrvNg::Get_ECRID() const
{
    return QString::fromStdString(m_pimpl->Get_ECRID());
}
void QClassicFrDrvNg::Set_ECRID(QString value)
{
    m_pimpl->Set_ECRID((value.toStdString()));
}
QDateTime QClassicFrDrvNg::Get_FirstSessionDate() const
{
    return QDateTime::fromMSecsSinceEpoch(static_cast<qint64>(1000) * m_pimpl->Get_FirstSessionDate());
    ;
}
void QClassicFrDrvNg::Set_FirstSessionDate(QDateTime value)
{
    m_pimpl->Set_FirstSessionDate((static_cast<std::time_t>(value.toMSecsSinceEpoch() / static_cast<qint64>(1000))));
}
int QClassicFrDrvNg::Get_ParentWnd() const
{
    return m_pimpl->Get_ParentWnd();
}
void QClassicFrDrvNg::Set_ParentWnd(int value)
{
    m_pimpl->Set_ParentWnd(value);
}
QString QClassicFrDrvNg::Get_JournalRow() const
{
    return QString::fromStdString(m_pimpl->Get_JournalRow());
}
bool QClassicFrDrvNg::Get_WrapStrings() const
{
    return m_pimpl->Get_WrapStrings();
}
void QClassicFrDrvNg::Set_WrapStrings(bool value)
{
    m_pimpl->Set_WrapStrings(value);
}
int QClassicFrDrvNg::Get_Tax1() const
{
    return m_pimpl->Get_Tax1();
}
void QClassicFrDrvNg::Set_Tax1(int value)
{
    m_pimpl->Set_Tax1(value);
}
QString QClassicFrDrvNg::Get_FNSoftVersion() const
{
    return QString::fromStdString(m_pimpl->Get_FNSoftVersion());
}
void QClassicFrDrvNg::Set_FNSoftVersion(QString value)
{
    m_pimpl->Set_FNSoftVersion((value.toStdString()));
}
int QClassicFrDrvNg::Get_RecordCount() const
{
    return m_pimpl->Get_RecordCount();
}
QString QClassicFrDrvNg::Get_Summ4AsString() const
{
    return QString::fromStdString(m_pimpl->Get_Summ4AsString());
}
int QClassicFrDrvNg::Get_OPSystem() const
{
    return m_pimpl->Get_OPSystem();
}
void QClassicFrDrvNg::Set_OPSystem(int value)
{
    m_pimpl->Set_OPSystem(value);
}
int QClassicFrDrvNg::Get_FMFlags() const
{
    return m_pimpl->Get_FMFlags();
}
double QClassicFrDrvNg::Get_DiscountOnCheck() const
{
    return m_pimpl->Get_DiscountOnCheck();
}
void QClassicFrDrvNg::Set_DiscountOnCheck(double value)
{
    m_pimpl->Set_DiscountOnCheck(value);
}
int QClassicFrDrvNg::Get_IntervalValue() const
{
    return m_pimpl->Get_IntervalValue();
}
void QClassicFrDrvNg::Set_IntervalValue(int value)
{
    m_pimpl->Set_IntervalValue(value);
}
int QClassicFrDrvNg::Get_HeaderStringNumber() const
{
    return m_pimpl->Get_HeaderStringNumber();
}
void QClassicFrDrvNg::Set_HeaderStringNumber(int value)
{
    m_pimpl->Set_HeaderStringNumber(value);
}
int QClassicFrDrvNg::Get_SlipDocumentLength() const
{
    return m_pimpl->Get_SlipDocumentLength();
}
void QClassicFrDrvNg::Set_SlipDocumentLength(int value)
{
    m_pimpl->Set_SlipDocumentLength(value);
}
bool QClassicFrDrvNg::Get_TaxValue4Enabled() const
{
    return m_pimpl->Get_TaxValue4Enabled();
}
void QClassicFrDrvNg::Set_TaxValue4Enabled(bool value)
{
    m_pimpl->Set_TaxValue4Enabled(value);
}
int QClassicFrDrvNg::Get_Tax2RateSymbolNumber() const
{
    return m_pimpl->Get_Tax2RateSymbolNumber();
}
void QClassicFrDrvNg::Set_Tax2RateSymbolNumber(int value)
{
    m_pimpl->Set_Tax2RateSymbolNumber(value);
}
bool QClassicFrDrvNg::Get_ReceiptRibbonIsPresent() const
{
    return m_pimpl->Get_ReceiptRibbonIsPresent();
}
int QClassicFrDrvNg::Get_Summ4Offset() const
{
    return m_pimpl->Get_Summ4Offset();
}
void QClassicFrDrvNg::Set_Summ4Offset(int value)
{
    m_pimpl->Set_Summ4Offset(value);
}
int QClassicFrDrvNg::Get_WaitPrintingTime() const
{
    return m_pimpl->Get_WaitPrintingTime();
}
bool QClassicFrDrvNg::Get_IsEKLZOverflow() const
{
    return m_pimpl->Get_IsEKLZOverflow();
}
QString QClassicFrDrvNg::Get_EmailAddress() const
{
    return QString::fromStdString(m_pimpl->Get_EmailAddress());
}
void QClassicFrDrvNg::Set_EmailAddress(QString value)
{
    m_pimpl->Set_EmailAddress((value.toStdString()));
}
int QClassicFrDrvNg::Get_LogMaxFileCount() const
{
    return m_pimpl->Get_LogMaxFileCount();
}
void QClassicFrDrvNg::Set_LogMaxFileCount(int value)
{
    m_pimpl->Set_LogMaxFileCount(value);
}
qint64 QClassicFrDrvNg::Get_LastKPKDocumentResult() const
{
    return static_cast<int64_t>(m_pimpl->Get_LastKPKDocumentResult());
}
int QClassicFrDrvNg::Get_Summ2NameFont() const
{
    return m_pimpl->Get_Summ2NameFont();
}
void QClassicFrDrvNg::Set_Summ2NameFont(int value)
{
    m_pimpl->Set_Summ2NameFont(value);
}
int QClassicFrDrvNg::Get_MessageState() const
{
    return m_pimpl->Get_MessageState();
}
void QClassicFrDrvNg::Set_MessageState(int value)
{
    m_pimpl->Set_MessageState(value);
}
bool QClassicFrDrvNg::Get_FeedAfterCut() const
{
    return m_pimpl->Get_FeedAfterCut();
}
void QClassicFrDrvNg::Set_FeedAfterCut(bool value)
{
    m_pimpl->Set_FeedAfterCut(value);
}
int QClassicFrDrvNg::Get_Tax4RateFont() const
{
    return m_pimpl->Get_Tax4RateFont();
}
void QClassicFrDrvNg::Set_Tax4RateFont(int value)
{
    m_pimpl->Set_Tax4RateFont(value);
}
int QClassicFrDrvNg::Get_CurrentDozeInMilliliters() const
{
    return m_pimpl->Get_CurrentDozeInMilliliters();
}
void QClassicFrDrvNg::Set_CurrentDozeInMilliliters(int value)
{
    m_pimpl->Set_CurrentDozeInMilliliters(value);
}
bool QClassicFrDrvNg::Get_JournalEnabled() const
{
    return m_pimpl->Get_JournalEnabled();
}
void QClassicFrDrvNg::Set_JournalEnabled(bool value)
{
    m_pimpl->Set_JournalEnabled(value);
}
bool QClassicFrDrvNg::Get_CheckFMConnection() const
{
    return m_pimpl->Get_CheckFMConnection();
}
void QClassicFrDrvNg::Set_CheckFMConnection(bool value)
{
    m_pimpl->Set_CheckFMConnection(value);
}
int QClassicFrDrvNg::Get_IBMLastSaleReceiptNumber() const
{
    return m_pimpl->Get_IBMLastSaleReceiptNumber();
}
QString QClassicFrDrvNg::Get_ModelParamDescription() const
{
    return QString::fromStdString(m_pimpl->Get_ModelParamDescription());
}
int QClassicFrDrvNg::Get_OperatorNumber() const
{
    return m_pimpl->Get_OperatorNumber();
}
int QClassicFrDrvNg::Get_UMajorType() const
{
    return m_pimpl->Get_UMajorType();
}
bool QClassicFrDrvNg::Get_QuantityPointPosition() const
{
    return m_pimpl->Get_QuantityPointPosition();
}
int QClassicFrDrvNg::Get_BarcodeParameter2() const
{
    return m_pimpl->Get_BarcodeParameter2();
}
void QClassicFrDrvNg::Set_BarcodeParameter2(int value)
{
    m_pimpl->Set_BarcodeParameter2(value);
}
int QClassicFrDrvNg::Get_BarcodeParameter3() const
{
    return m_pimpl->Get_BarcodeParameter3();
}
void QClassicFrDrvNg::Set_BarcodeParameter3(int value)
{
    m_pimpl->Set_BarcodeParameter3(value);
}
int QClassicFrDrvNg::Get_BarcodeParameter1() const
{
    return m_pimpl->Get_BarcodeParameter1();
}
void QClassicFrDrvNg::Set_BarcodeParameter1(int value)
{
    m_pimpl->Set_BarcodeParameter1(value);
}
qint64 QClassicFrDrvNg::Get_ChargeValue() const
{
    return static_cast<int64_t>(m_pimpl->Get_ChargeValue());
}
void QClassicFrDrvNg::Set_ChargeValue(qint64 value)
{
    m_pimpl->Set_ChargeValue((static_cast<qint64>(value)));
}
int QClassicFrDrvNg::Get_BarcodeParameter4() const
{
    return m_pimpl->Get_BarcodeParameter4();
}
void QClassicFrDrvNg::Set_BarcodeParameter4(int value)
{
    m_pimpl->Set_BarcodeParameter4(value);
}
int QClassicFrDrvNg::Get_BarcodeParameter5() const
{
    return m_pimpl->Get_BarcodeParameter5();
}
void QClassicFrDrvNg::Set_BarcodeParameter5(int value)
{
    m_pimpl->Set_BarcodeParameter5(value);
}
int QClassicFrDrvNg::Get_PrepareActivizationRemainCount() const
{
    return m_pimpl->Get_PrepareActivizationRemainCount();
}
void QClassicFrDrvNg::Set_PrepareActivizationRemainCount(int value)
{
    m_pimpl->Set_PrepareActivizationRemainCount(value);
}
QString QClassicFrDrvNg::Get_LDName() const
{
    return QString::fromStdString(m_pimpl->Get_LDName());
}
void QClassicFrDrvNg::Set_LDName(QString value)
{
    m_pimpl->Set_LDName((value.toStdString()));
}
qint64 QClassicFrDrvNg::Get_Price() const
{
    return static_cast<int64_t>(m_pimpl->Get_Price());
}
void QClassicFrDrvNg::Set_Price(qint64 value)
{
    m_pimpl->Set_Price((static_cast<qint64>(value)));
}
int QClassicFrDrvNg::Get_SubTotalOffset() const
{
    return m_pimpl->Get_SubTotalOffset();
}
void QClassicFrDrvNg::Set_SubTotalOffset(int value)
{
    m_pimpl->Set_SubTotalOffset(value);
}
int QClassicFrDrvNg::Get_ModelsCount() const
{
    return m_pimpl->Get_ModelsCount();
}
QDateTime QClassicFrDrvNg::Get_FMSoftDate() const
{
    return QDateTime::fromMSecsSinceEpoch(static_cast<qint64>(1000) * m_pimpl->Get_FMSoftDate());
    ;
}
QString QClassicFrDrvNg::Get_DBFilePath() const
{
    return QString::fromStdString(m_pimpl->Get_DBFilePath());
}
void QClassicFrDrvNg::Set_DBFilePath(QString value)
{
    m_pimpl->Set_DBFilePath((value.toStdString()));
}
int QClassicFrDrvNg::Get_QuantityFormat() const
{
    return m_pimpl->Get_QuantityFormat();
}
void QClassicFrDrvNg::Set_QuantityFormat(int value)
{
    m_pimpl->Set_QuantityFormat(value);
}
qint64 QClassicFrDrvNg::Get_TaxValue2() const
{
    return static_cast<int64_t>(m_pimpl->Get_TaxValue2());
}
void QClassicFrDrvNg::Set_TaxValue2(qint64 value)
{
    m_pimpl->Set_TaxValue2((static_cast<qint64>(value)));
}
int QClassicFrDrvNg::Get_StringQuantity() const
{
    return m_pimpl->Get_StringQuantity();
}
void QClassicFrDrvNg::Set_StringQuantity(int value)
{
    m_pimpl->Set_StringQuantity(value);
}
qint64 QClassicFrDrvNg::Get_TaxValue6() const
{
    return static_cast<int64_t>(m_pimpl->Get_TaxValue6());
}
void QClassicFrDrvNg::Set_TaxValue6(qint64 value)
{
    m_pimpl->Set_TaxValue6((static_cast<qint64>(value)));
}
qint64 QClassicFrDrvNg::Get_TaxValue5() const
{
    return static_cast<int64_t>(m_pimpl->Get_TaxValue5());
}
void QClassicFrDrvNg::Set_TaxValue5(qint64 value)
{
    m_pimpl->Set_TaxValue5((static_cast<qint64>(value)));
}
QString QClassicFrDrvNg::Get_DocumentData() const
{
    return QString::fromStdString(m_pimpl->Get_DocumentData());
}
void QClassicFrDrvNg::Set_DocumentData(QString value)
{
    m_pimpl->Set_DocumentData((value.toStdString()));
}
int QClassicFrDrvNg::Get_TaxType() const
{
    return m_pimpl->Get_TaxType();
}
void QClassicFrDrvNg::Set_TaxType(int value)
{
    m_pimpl->Set_TaxType(value);
}
QString QClassicFrDrvNg::Get_ParameterValue() const
{
    return QString::fromStdString(m_pimpl->Get_ParameterValue());
}
void QClassicFrDrvNg::Set_ParameterValue(QString value)
{
    m_pimpl->Set_ParameterValue((value.toStdString()));
}
int QClassicFrDrvNg::Get_Tax3SumOffset() const
{
    return m_pimpl->Get_Tax3SumOffset();
}
void QClassicFrDrvNg::Set_Tax3SumOffset(int value)
{
    m_pimpl->Set_Tax3SumOffset(value);
}
int QClassicFrDrvNg::Get_HRIPosition() const
{
    return m_pimpl->Get_HRIPosition();
}
void QClassicFrDrvNg::Set_HRIPosition(int value)
{
    m_pimpl->Set_HRIPosition(value);
}
int QClassicFrDrvNg::Get_IBMLastReturnSaleReceiptNumber() const
{
    return m_pimpl->Get_IBMLastReturnSaleReceiptNumber();
}
quint32 QClassicFrDrvNg::Get_EnteredTaxPassword() const
{
    return static_cast<uint32_t>(m_pimpl->Get_EnteredTaxPassword());
}
bool QClassicFrDrvNg::Get_OFDEnabled() const
{
    return m_pimpl->Get_OFDEnabled();
}
void QClassicFrDrvNg::Set_OFDEnabled(bool value)
{
    m_pimpl->Set_OFDEnabled(value);
}
qint64 QClassicFrDrvNg::Get_RegBuySession() const
{
    return static_cast<int64_t>(m_pimpl->Get_RegBuySession());
}
int QClassicFrDrvNg::Get_TotalSymbolNumber() const
{
    return m_pimpl->Get_TotalSymbolNumber();
}
void QClassicFrDrvNg::Set_TotalSymbolNumber(int value)
{
    m_pimpl->Set_TotalSymbolNumber(value);
}
int QClassicFrDrvNg::Get_Tax1RateSymbolNumber() const
{
    return m_pimpl->Get_Tax1RateSymbolNumber();
}
void QClassicFrDrvNg::Set_Tax1RateSymbolNumber(int value)
{
    m_pimpl->Set_Tax1RateSymbolNumber(value);
}
int QClassicFrDrvNg::Get_TimeoutsUsing() const
{
    return m_pimpl->Get_TimeoutsUsing();
}
void QClassicFrDrvNg::Set_TimeoutsUsing(int value)
{
    m_pimpl->Set_TimeoutsUsing(value);
}
int QClassicFrDrvNg::Get_WorkMode() const
{
    return m_pimpl->Get_WorkMode();
}
void QClassicFrDrvNg::Set_WorkMode(int value)
{
    m_pimpl->Set_WorkMode(value);
}
QString QClassicFrDrvNg::Get_LineDataHex() const
{
    return QString::fromStdString(m_pimpl->Get_LineDataHex());
}
void QClassicFrDrvNg::Set_LineDataHex(QString value)
{
    m_pimpl->Set_LineDataHex((value.toStdString()));
}
int QClassicFrDrvNg::Get_TotalSumFont() const
{
    return m_pimpl->Get_TotalSumFont();
}
void QClassicFrDrvNg::Set_TotalSumFont(int value)
{
    m_pimpl->Set_TotalSumFont(value);
}
int QClassicFrDrvNg::Get_Tax1NameOffset() const
{
    return m_pimpl->Get_Tax1NameOffset();
}
void QClassicFrDrvNg::Set_Tax1NameOffset(int value)
{
    m_pimpl->Set_Tax1NameOffset(value);
}
bool QClassicFrDrvNg::Get_RecoverError165() const
{
    return m_pimpl->Get_RecoverError165();
}
void QClassicFrDrvNg::Set_RecoverError165(bool value)
{
    m_pimpl->Set_RecoverError165(value);
}
int QClassicFrDrvNg::Get_HeaderFont() const
{
    return m_pimpl->Get_HeaderFont();
}
void QClassicFrDrvNg::Set_HeaderFont(int value)
{
    m_pimpl->Set_HeaderFont(value);
}
QString QClassicFrDrvNg::Get_EKLZNumber() const
{
    return QString::fromStdString(m_pimpl->Get_EKLZNumber());
}
int QClassicFrDrvNg::Get_Summ2SymbolNumber() const
{
    return m_pimpl->Get_Summ2SymbolNumber();
}
void QClassicFrDrvNg::Set_Summ2SymbolNumber(int value)
{
    m_pimpl->Set_Summ2SymbolNumber(value);
}
int QClassicFrDrvNg::Get_ReadTimeout() const
{
    return m_pimpl->Get_ReadTimeout();
}
void QClassicFrDrvNg::Set_ReadTimeout(int value)
{
    m_pimpl->Set_ReadTimeout(value);
}
int QClassicFrDrvNg::Get_LogicalNumber() const
{
    return m_pimpl->Get_LogicalNumber();
}
double QClassicFrDrvNg::Get_PowerSourceVoltage() const
{
    return m_pimpl->Get_PowerSourceVoltage();
}
bool QClassicFrDrvNg::Get_LDUseIPAddress() const
{
    return m_pimpl->Get_LDUseIPAddress();
}
void QClassicFrDrvNg::Set_LDUseIPAddress(bool value)
{
    m_pimpl->Set_LDUseIPAddress(value);
}
bool QClassicFrDrvNg::Get_UseCommandTimeout() const
{
    return m_pimpl->Get_UseCommandTimeout();
}
void QClassicFrDrvNg::Set_UseCommandTimeout(bool value)
{
    m_pimpl->Set_UseCommandTimeout(value);
}
int QClassicFrDrvNg::Get_LastLineNumber() const
{
    return m_pimpl->Get_LastLineNumber();
}
void QClassicFrDrvNg::Set_LastLineNumber(int value)
{
    m_pimpl->Set_LastLineNumber(value);
}
qint64 QClassicFrDrvNg::Get_RegSaleSession() const
{
    return static_cast<int64_t>(m_pimpl->Get_RegSaleSession());
}
int QClassicFrDrvNg::Get_Tax3NameFont() const
{
    return m_pimpl->Get_Tax3NameFont();
}
void QClassicFrDrvNg::Set_Tax3NameFont(int value)
{
    m_pimpl->Set_Tax3NameFont(value);
}
int QClassicFrDrvNg::Get_Tax3SumFont() const
{
    return m_pimpl->Get_Tax3SumFont();
}
void QClassicFrDrvNg::Set_Tax3SumFont(int value)
{
    m_pimpl->Set_Tax3SumFont(value);
}
bool QClassicFrDrvNg::Get_DelayedPrint() const
{
    return m_pimpl->Get_DelayedPrint();
}
void QClassicFrDrvNg::Set_DelayedPrint(bool value)
{
    m_pimpl->Set_DelayedPrint(value);
}
int QClassicFrDrvNg::Get_IBMDocumentNumber() const
{
    return m_pimpl->Get_IBMDocumentNumber();
}
QDateTime QClassicFrDrvNg::Get_ECRDate() const
{
    return QDateTime::fromMSecsSinceEpoch(static_cast<qint64>(1000) * m_pimpl->Get_ECRDate());
    ;
}
void QClassicFrDrvNg::Set_ECRDate(QDateTime value)
{
    m_pimpl->Set_ECRDate((static_cast<std::time_t>(value.toMSecsSinceEpoch() / static_cast<qint64>(1000))));
}
QDateTime QClassicFrDrvNg::Get_ECRTime() const
{
    return QDateTime::fromMSecsSinceEpoch(static_cast<qint64>(1000) * m_pimpl->Get_ECRTime());
    ;
}
void QClassicFrDrvNg::Set_ECRTime(QDateTime value)
{
    m_pimpl->Set_ECRTime((static_cast<std::time_t>(value.toMSecsSinceEpoch() / static_cast<qint64>(1000))));
}
int QClassicFrDrvNg::Get_INNAsInteger() const
{
    return m_pimpl->Get_INNAsInteger();
}
qint64 QClassicFrDrvNg::Get_Summ15() const
{
    return static_cast<int64_t>(m_pimpl->Get_Summ15());
}
void QClassicFrDrvNg::Set_Summ15(qint64 value)
{
    m_pimpl->Set_Summ15((static_cast<qint64>(value)));
}
qint64 QClassicFrDrvNg::Get_Summ14() const
{
    return static_cast<int64_t>(m_pimpl->Get_Summ14());
}
void QClassicFrDrvNg::Set_Summ14(qint64 value)
{
    m_pimpl->Set_Summ14((static_cast<qint64>(value)));
}
qint64 QClassicFrDrvNg::Get_Summ13() const
{
    return static_cast<int64_t>(m_pimpl->Get_Summ13());
}
void QClassicFrDrvNg::Set_Summ13(qint64 value)
{
    m_pimpl->Set_Summ13((static_cast<qint64>(value)));
}
qint64 QClassicFrDrvNg::Get_Summ12() const
{
    return static_cast<int64_t>(m_pimpl->Get_Summ12());
}
void QClassicFrDrvNg::Set_Summ12(qint64 value)
{
    m_pimpl->Set_Summ12((static_cast<qint64>(value)));
}
int QClassicFrDrvNg::Get_UCodePage() const
{
    return m_pimpl->Get_UCodePage();
}
qint64 QClassicFrDrvNg::Get_Summ10() const
{
    return static_cast<int64_t>(m_pimpl->Get_Summ10());
}
void QClassicFrDrvNg::Set_Summ10(qint64 value)
{
    m_pimpl->Set_Summ10((static_cast<qint64>(value)));
}
int QClassicFrDrvNg::Get_BarcodeDataLength() const
{
    return m_pimpl->Get_BarcodeDataLength();
}
void QClassicFrDrvNg::Set_BarcodeDataLength(int value)
{
    m_pimpl->Set_BarcodeDataLength(value);
}
int QClassicFrDrvNg::Get_FNWarningFlags() const
{
    return m_pimpl->Get_FNWarningFlags();
}
void QClassicFrDrvNg::Set_FNWarningFlags(int value)
{
    m_pimpl->Set_FNWarningFlags(value);
}
int QClassicFrDrvNg::Get_LDEscapePort() const
{
    return m_pimpl->Get_LDEscapePort();
}
void QClassicFrDrvNg::Set_LDEscapePort(int value)
{
    m_pimpl->Set_LDEscapePort(value);
}
int QClassicFrDrvNg::Get_WaitForPrintingDelay() const
{
    return m_pimpl->Get_WaitForPrintingDelay();
}
void QClassicFrDrvNg::Set_WaitForPrintingDelay(int value)
{
    m_pimpl->Set_WaitForPrintingDelay(value);
}
QString QClassicFrDrvNg::Get_ECRInput() const
{
    return QString::fromStdString(m_pimpl->Get_ECRInput());
}
int QClassicFrDrvNg::Get_LDIndex() const
{
    return m_pimpl->Get_LDIndex();
}
void QClassicFrDrvNg::Set_LDIndex(int value)
{
    m_pimpl->Set_LDIndex(value);
}
int QClassicFrDrvNg::Get_Tax4TurnOverSymbolNumber() const
{
    return m_pimpl->Get_Tax4TurnOverSymbolNumber();
}
void QClassicFrDrvNg::Set_Tax4TurnOverSymbolNumber(int value)
{
    m_pimpl->Set_Tax4TurnOverSymbolNumber(value);
}
int QClassicFrDrvNg::Get_LogFileMaxSize() const
{
    return m_pimpl->Get_LogFileMaxSize();
}
void QClassicFrDrvNg::Set_LogFileMaxSize(int value)
{
    m_pimpl->Set_LogFileMaxSize(value);
}
bool QClassicFrDrvNg::Get_ReceiptRibbonLever() const
{
    return m_pimpl->Get_ReceiptRibbonLever();
}
int QClassicFrDrvNg::Get_Tax2TurnOverFont() const
{
    return m_pimpl->Get_Tax2TurnOverFont();
}
void QClassicFrDrvNg::Set_Tax2TurnOverFont(int value)
{
    m_pimpl->Set_Tax2TurnOverFont(value);
}
int QClassicFrDrvNg::Get_CheckingType() const
{
    return m_pimpl->Get_CheckingType();
}
void QClassicFrDrvNg::Set_CheckingType(int value)
{
    m_pimpl->Set_CheckingType(value);
}
int QClassicFrDrvNg::Get_ModelParamIndex() const
{
    return m_pimpl->Get_ModelParamIndex();
}
void QClassicFrDrvNg::Set_ModelParamIndex(int value)
{
    m_pimpl->Set_ModelParamIndex(value);
}
int QClassicFrDrvNg::Get_Tax1SumStringNumber() const
{
    return m_pimpl->Get_Tax1SumStringNumber();
}
void QClassicFrDrvNg::Set_Tax1SumStringNumber(int value)
{
    m_pimpl->Set_Tax1SumStringNumber(value);
}
int QClassicFrDrvNg::Get_DiscountOnCheckSumFont() const
{
    return m_pimpl->Get_DiscountOnCheckSumFont();
}
void QClassicFrDrvNg::Set_DiscountOnCheckSumFont(int value)
{
    m_pimpl->Set_DiscountOnCheckSumFont(value);
}
qint64 QClassicFrDrvNg::Get_ContentsOfCashRegister() const
{
    return static_cast<int64_t>(m_pimpl->Get_ContentsOfCashRegister());
}
int QClassicFrDrvNg::Get_IBMSessionSec() const
{
    return m_pimpl->Get_IBMSessionSec();
}
bool QClassicFrDrvNg::Get_AutoOpenSession() const
{
    return m_pimpl->Get_AutoOpenSession();
}
void QClassicFrDrvNg::Set_AutoOpenSession(bool value)
{
    m_pimpl->Set_AutoOpenSession(value);
}
int QClassicFrDrvNg::Get_Tax2NameFont() const
{
    return m_pimpl->Get_Tax2NameFont();
}
void QClassicFrDrvNg::Set_Tax2NameFont(int value)
{
    m_pimpl->Set_Tax2NameFont(value);
}
int QClassicFrDrvNg::Get_TableNumber() const
{
    return m_pimpl->Get_TableNumber();
}
void QClassicFrDrvNg::Set_TableNumber(int value)
{
    m_pimpl->Set_TableNumber(value);
}
QDateTime QClassicFrDrvNg::Get_TagValueDateTime() const
{
    return QDateTime::fromMSecsSinceEpoch(static_cast<qint64>(1000) * m_pimpl->Get_TagValueDateTime());
}
void QClassicFrDrvNg::Set_TagValueDateTime(QDateTime value)
{
    m_pimpl->Set_TagValueDateTime((static_cast<std::time_t>(value.toMSecsSinceEpoch() / static_cast<qint64>(1000))));
}
int QClassicFrDrvNg::Get_FMStringNumber() const
{
    return m_pimpl->Get_FMStringNumber();
}
void QClassicFrDrvNg::Set_FMStringNumber(int value)
{
    m_pimpl->Set_FMStringNumber(value);
}
QString QClassicFrDrvNg::Get_LastKPKDateStr() const
{
    return QString::fromStdString(m_pimpl->Get_LastKPKDateStr());
}
int QClassicFrDrvNg::Get_ConnectionTimeout() const
{
    return m_pimpl->Get_ConnectionTimeout();
}
void QClassicFrDrvNg::Set_ConnectionTimeout(int value)
{
    m_pimpl->Set_ConnectionTimeout(value);
}
int QClassicFrDrvNg::Get_EKLZFont() const
{
    return m_pimpl->Get_EKLZFont();
}
void QClassicFrDrvNg::Set_EKLZFont(int value)
{
    m_pimpl->Set_EKLZFont(value);
}
int QClassicFrDrvNg::Get_QuantityFont() const
{
    return m_pimpl->Get_QuantityFont();
}
void QClassicFrDrvNg::Set_QuantityFont(int value)
{
    m_pimpl->Set_QuantityFont(value);
}
int QClassicFrDrvNg::Get_JournalRowNumber() const
{
    return m_pimpl->Get_JournalRowNumber();
}
void QClassicFrDrvNg::Set_JournalRowNumber(int value)
{
    m_pimpl->Set_JournalRowNumber(value);
}
int QClassicFrDrvNg::Get_ValueOfFieldInteger() const
{
    return m_pimpl->Get_ValueOfFieldInteger();
}
void QClassicFrDrvNg::Set_ValueOfFieldInteger(int value)
{
    m_pimpl->Set_ValueOfFieldInteger(value);
}
qint64 QClassicFrDrvNg::Get_Summ16() const
{
    return static_cast<int64_t>(m_pimpl->Get_Summ16());
}
void QClassicFrDrvNg::Set_Summ16(qint64 value)
{
    m_pimpl->Set_Summ16((static_cast<qint64>(value)));
}
int QClassicFrDrvNg::Get_AnswerCode() const
{
    return m_pimpl->Get_AnswerCode();
}
void QClassicFrDrvNg::Set_AnswerCode(int value)
{
    m_pimpl->Set_AnswerCode(value);
}
int QClassicFrDrvNg::Get_Tax1SumSymbolNumber() const
{
    return m_pimpl->Get_Tax1SumSymbolNumber();
}
void QClassicFrDrvNg::Set_Tax1SumSymbolNumber(int value)
{
    m_pimpl->Set_Tax1SumSymbolNumber(value);
}
int QClassicFrDrvNg::Get_ICSPollPeriod() const
{
    return m_pimpl->Get_ICSPollPeriod();
}
void QClassicFrDrvNg::Set_ICSPollPeriod(int value)
{
    m_pimpl->Set_ICSPollPeriod(value);
}
bool QClassicFrDrvNg::Get_IsCorruptedFiscalizationInfo() const
{
    return m_pimpl->Get_IsCorruptedFiscalizationInfo();
}
int QClassicFrDrvNg::Get_LastPrintResult() const
{
    return m_pimpl->Get_LastPrintResult();
}
int QClassicFrDrvNg::Get_QuantityStringNumber() const
{
    return m_pimpl->Get_QuantityStringNumber();
}
void QClassicFrDrvNg::Set_QuantityStringNumber(int value)
{
    m_pimpl->Set_QuantityStringNumber(value);
}
int QClassicFrDrvNg::Get_Summ2Offset() const
{
    return m_pimpl->Get_Summ2Offset();
}
void QClassicFrDrvNg::Set_Summ2Offset(int value)
{
    m_pimpl->Set_Summ2Offset(value);
}
int QClassicFrDrvNg::Get_LastSessionNumber() const
{
    return m_pimpl->Get_LastSessionNumber();
}
void QClassicFrDrvNg::Set_LastSessionNumber(int value)
{
    m_pimpl->Set_LastSessionNumber(value);
}
QString QClassicFrDrvNg::Get_ECRSoftVersion() const
{
    return QString::fromStdString(m_pimpl->Get_ECRSoftVersion());
}
int QClassicFrDrvNg::Get_Tax2RateOffset() const
{
    return m_pimpl->Get_Tax2RateOffset();
}
void QClassicFrDrvNg::Set_Tax2RateOffset(int value)
{
    m_pimpl->Set_Tax2RateOffset(value);
}
qint64 QClassicFrDrvNg::Get_DiscountValue() const
{
    return static_cast<int64_t>(m_pimpl->Get_DiscountValue());
}
void QClassicFrDrvNg::Set_DiscountValue(qint64 value)
{
    m_pimpl->Set_DiscountValue((static_cast<qint64>(value)));
}
int QClassicFrDrvNg::Get_Tax3RateOffset() const
{
    return m_pimpl->Get_Tax3RateOffset();
}
void QClassicFrDrvNg::Set_Tax3RateOffset(int value)
{
    m_pimpl->Set_Tax3RateOffset(value);
}
bool QClassicFrDrvNg::Get_PresenterOut() const
{
    return m_pimpl->Get_PresenterOut();
}
int QClassicFrDrvNg::Get_DrawerNumber() const
{
    return m_pimpl->Get_DrawerNumber();
}
void QClassicFrDrvNg::Set_DrawerNumber(int value)
{
    m_pimpl->Set_DrawerNumber(value);
}
QString QClassicFrDrvNg::Get_PosControlReceiptSeparator() const
{
    return QString::fromStdString(m_pimpl->Get_PosControlReceiptSeparator());
}
void QClassicFrDrvNg::Set_PosControlReceiptSeparator(QString value)
{
    m_pimpl->Set_PosControlReceiptSeparator((value.toStdString()));
}
int QClassicFrDrvNg::Get_Summ2Font() const
{
    return m_pimpl->Get_Summ2Font();
}
void QClassicFrDrvNg::Set_Summ2Font(int value)
{
    m_pimpl->Set_Summ2Font(value);
}
QString QClassicFrDrvNg::Get_RNM() const
{
    return QString::fromStdString(m_pimpl->Get_RNM());
}
void QClassicFrDrvNg::Set_RNM(QString value)
{
    m_pimpl->Set_RNM((value.toStdString()));
}
QString QClassicFrDrvNg::Get_ErrorDescription() const
{
    return QString::fromStdString(m_pimpl->Get_ErrorDescription());
}
int QClassicFrDrvNg::Get_RKNumber() const
{
    return m_pimpl->Get_RKNumber();
}
void QClassicFrDrvNg::Set_RKNumber(int value)
{
    m_pimpl->Set_RKNumber(value);
}
int QClassicFrDrvNg::Get_TagType() const
{
    return m_pimpl->Get_TagType();
}
void QClassicFrDrvNg::Set_TagType(int value)
{
    m_pimpl->Set_TagType(value);
}
int QClassicFrDrvNg::Get_CommandDefTimeout() const
{
    return m_pimpl->Get_CommandDefTimeout();
}
bool QClassicFrDrvNg::Get_CashControlEnabled() const
{
    return m_pimpl->Get_CashControlEnabled();
}
void QClassicFrDrvNg::Set_CashControlEnabled(bool value)
{
    m_pimpl->Set_CashControlEnabled(value);
}
bool QClassicFrDrvNg::Get_IsPrinterLeftSensorFailure() const
{
    return m_pimpl->Get_IsPrinterLeftSensorFailure();
}
int QClassicFrDrvNg::Get_Tax2TurnOverStringNumber() const
{
    return m_pimpl->Get_Tax2TurnOverStringNumber();
}
void QClassicFrDrvNg::Set_Tax2TurnOverStringNumber(int value)
{
    m_pimpl->Set_Tax2TurnOverStringNumber(value);
}
QString QClassicFrDrvNg::Get_CashControlHost() const
{
    return QString::fromStdString(m_pimpl->Get_CashControlHost());
}
void QClassicFrDrvNg::Set_CashControlHost(QString value)
{
    m_pimpl->Set_CashControlHost((value.toStdString()));
}
int QClassicFrDrvNg::Get_FirstSessionNumber() const
{
    return m_pimpl->Get_FirstSessionNumber();
}
void QClassicFrDrvNg::Set_FirstSessionNumber(int value)
{
    m_pimpl->Set_FirstSessionNumber(value);
}
int QClassicFrDrvNg::Get_Summ1Offset() const
{
    return m_pimpl->Get_Summ1Offset();
}
void QClassicFrDrvNg::Set_Summ1Offset(int value)
{
    m_pimpl->Set_Summ1Offset(value);
}
bool QClassicFrDrvNg::Get_DoNotSendENQ() const
{
    return m_pimpl->Get_DoNotSendENQ();
}
void QClassicFrDrvNg::Set_DoNotSendENQ(bool value)
{
    m_pimpl->Set_DoNotSendENQ(value);
}
int QClassicFrDrvNg::Get_PrintBufferLineNumber() const
{
    return m_pimpl->Get_PrintBufferLineNumber();
}
int QClassicFrDrvNg::Get_ModelParamNumber() const
{
    return m_pimpl->Get_ModelParamNumber();
}
void QClassicFrDrvNg::Set_ModelParamNumber(int value)
{
    m_pimpl->Set_ModelParamNumber(value);
}
QString QClassicFrDrvNg::Get_TagValueBin() const
{
    return QString::fromStdString(m_pimpl->Get_TagValueBin());
}
void QClassicFrDrvNg::Set_TagValueBin(QString value)
{
    m_pimpl->Set_TagValueBin((value.toStdString()));
}
int QClassicFrDrvNg::Get_IBMFlags() const
{
    return m_pimpl->Get_IBMFlags();
}
bool QClassicFrDrvNg::Get_ReceiptRibbonOpticalSensor() const
{
    return m_pimpl->Get_ReceiptRibbonOpticalSensor();
}
int QClassicFrDrvNg::Get_Poll1() const
{
    return m_pimpl->Get_Poll1();
}
QClassicFrDrvNg::TCodePage QClassicFrDrvNg::Get_CodePage() const
{
    return static_cast<TCodePage>(m_pimpl->Get_CodePage());
}
void QClassicFrDrvNg::Set_CodePage(TCodePage value)
{
    m_pimpl->Set_CodePage((static_cast<classic_interface::TCodePage>(value)));
}
int QClassicFrDrvNg::Get_Summ4NameOffset() const
{
    return m_pimpl->Get_Summ4NameOffset();
}
void QClassicFrDrvNg::Set_Summ4NameOffset(int value)
{
    m_pimpl->Set_Summ4NameOffset(value);
}
bool QClassicFrDrvNg::Get_CenterImage() const
{
    return m_pimpl->Get_CenterImage();
}
void QClassicFrDrvNg::Set_CenterImage(bool value)
{
    m_pimpl->Set_CenterImage(value);
}
int QClassicFrDrvNg::Get_SessionNumber() const
{
    return m_pimpl->Get_SessionNumber();
}
void QClassicFrDrvNg::Set_SessionNumber(int value)
{
    m_pimpl->Set_SessionNumber(value);
}
int QClassicFrDrvNg::Get_MultiplicationFont() const
{
    return m_pimpl->Get_MultiplicationFont();
}
void QClassicFrDrvNg::Set_MultiplicationFont(int value)
{
    m_pimpl->Set_MultiplicationFont(value);
}
bool QClassicFrDrvNg::Get_CheckEJConnection() const
{
    return m_pimpl->Get_CheckEJConnection();
}
void QClassicFrDrvNg::Set_CheckEJConnection(bool value)
{
    m_pimpl->Set_CheckEJConnection(value);
}
int QClassicFrDrvNg::Get_DataBlockSize() const
{
    return m_pimpl->Get_DataBlockSize();
}
void QClassicFrDrvNg::Set_DataBlockSize(int value)
{
    m_pimpl->Set_DataBlockSize(value);
}
bool QClassicFrDrvNg::Get_IsFM24HoursOver() const
{
    return m_pimpl->Get_IsFM24HoursOver();
}
qint64 QClassicFrDrvNg::Get_DozeInMoney() const
{
    return static_cast<int64_t>(m_pimpl->Get_DozeInMoney());
}
void QClassicFrDrvNg::Set_DozeInMoney(qint64 value)
{
    m_pimpl->Set_DozeInMoney((static_cast<qint64>(value)));
}
int QClassicFrDrvNg::Get_LDProtocolType() const
{
    return m_pimpl->Get_LDProtocolType();
}
void QClassicFrDrvNg::Set_LDProtocolType(int value)
{
    m_pimpl->Set_LDProtocolType(value);
}
int QClassicFrDrvNg::Get_SlipEqualStringIntervals() const
{
    return m_pimpl->Get_SlipEqualStringIntervals();
}
void QClassicFrDrvNg::Set_SlipEqualStringIntervals(int value)
{
    m_pimpl->Set_SlipEqualStringIntervals(value);
}
int QClassicFrDrvNg::Get_LDCount() const
{
    return m_pimpl->Get_LDCount();
}
QDateTime QClassicFrDrvNg::Get_IBMSessionDateTime() const
{
    return QDateTime::fromMSecsSinceEpoch(static_cast<qint64>(1000) * m_pimpl->Get_IBMSessionDateTime());
    ;
}
int QClassicFrDrvNg::Get_OperationBlockFirstString() const
{
    return m_pimpl->Get_OperationBlockFirstString();
}
void QClassicFrDrvNg::Set_OperationBlockFirstString(int value)
{
    m_pimpl->Set_OperationBlockFirstString(value);
}
bool QClassicFrDrvNg::Get_SaleError() const
{
    return m_pimpl->Get_SaleError();
}
void QClassicFrDrvNg::Set_SaleError(bool value)
{
    m_pimpl->Set_SaleError(value);
}
int QClassicFrDrvNg::Get_ClicheStringNumber() const
{
    return m_pimpl->Get_ClicheStringNumber();
}
void QClassicFrDrvNg::Set_ClicheStringNumber(int value)
{
    m_pimpl->Set_ClicheStringNumber(value);
}
bool QClassicFrDrvNg::Get_ShowTagNumber() const
{
    return m_pimpl->Get_ShowTagNumber();
}
void QClassicFrDrvNg::Set_ShowTagNumber(bool value)
{
    m_pimpl->Set_ShowTagNumber(value);
}
QString QClassicFrDrvNg::Get_ECRAdvancedModeDescription() const
{
    return QString::fromStdString(m_pimpl->Get_ECRAdvancedModeDescription());
}
int QClassicFrDrvNg::Get_MaxAnswerReadCount() const
{
    return m_pimpl->Get_MaxAnswerReadCount();
}
void QClassicFrDrvNg::Set_MaxAnswerReadCount(int value)
{
    m_pimpl->Set_MaxAnswerReadCount(value);
}
QString QClassicFrDrvNg::Get_OFDServer() const
{
    return QString::fromStdString(m_pimpl->Get_OFDServer());
}
void QClassicFrDrvNg::Set_OFDServer(QString value)
{
    m_pimpl->Set_OFDServer((value.toStdString()));
}
int QClassicFrDrvNg::Get_FreeRecordInFM() const
{
    return m_pimpl->Get_FreeRecordInFM();
}
bool QClassicFrDrvNg::Get_LogCommands() const
{
    return m_pimpl->Get_LogCommands();
}
void QClassicFrDrvNg::Set_LogCommands(bool value)
{
    m_pimpl->Set_LogCommands(value);
}
int QClassicFrDrvNg::Get_ReportTypeInt() const
{
    return m_pimpl->Get_ReportTypeInt();
}
void QClassicFrDrvNg::Set_ReportTypeInt(int value)
{
    m_pimpl->Set_ReportTypeInt(value);
}
int QClassicFrDrvNg::Get_TypeOfLastEntryFMEx() const
{
    return m_pimpl->Get_TypeOfLastEntryFMEx();
}
int QClassicFrDrvNg::Get_InfoExchangeStatus() const
{
    return m_pimpl->Get_InfoExchangeStatus();
}
void QClassicFrDrvNg::Set_InfoExchangeStatus(int value)
{
    m_pimpl->Set_InfoExchangeStatus(value);
}
QString QClassicFrDrvNg::Get_SerialNumber() const
{
    return QString::fromStdString(m_pimpl->Get_SerialNumber());
}
void QClassicFrDrvNg::Set_SerialNumber(QString value)
{
    m_pimpl->Set_SerialNumber((value.toStdString()));
}
bool QClassicFrDrvNg::Get_IsFMSessionOpen() const
{
    return m_pimpl->Get_IsFMSessionOpen();
}
int QClassicFrDrvNg::Get_IBMSessionDay() const
{
    return m_pimpl->Get_IBMSessionDay();
}
bool QClassicFrDrvNg::Get_CardPayEnabled() const
{
    return m_pimpl->Get_CardPayEnabled();
}
void QClassicFrDrvNg::Set_CardPayEnabled(bool value)
{
    m_pimpl->Set_CardPayEnabled(value);
}
int QClassicFrDrvNg::Get_OperationType() const
{
    return m_pimpl->Get_OperationType();
}
void QClassicFrDrvNg::Set_OperationType(int value)
{
    m_pimpl->Set_OperationType(value);
}
int QClassicFrDrvNg::Get_DocumentCount() const
{
    return m_pimpl->Get_DocumentCount();
}
void QClassicFrDrvNg::Set_DocumentCount(int value)
{
    m_pimpl->Set_DocumentCount(value);
}
QString QClassicFrDrvNg::Get_LDComputerName() const
{
    return QString::fromStdString(m_pimpl->Get_LDComputerName());
}
void QClassicFrDrvNg::Set_LDComputerName(QString value)
{
    m_pimpl->Set_LDComputerName((value.toStdString()));
}
int QClassicFrDrvNg::Get_CharWidth() const
{
    return m_pimpl->Get_CharWidth();
}
int QClassicFrDrvNg::Get_WareCode() const
{
    return m_pimpl->Get_WareCode();
}
void QClassicFrDrvNg::Set_WareCode(int value)
{
    m_pimpl->Set_WareCode(value);
}
QString QClassicFrDrvNg::Get_CashControlProtocols() const
{
    return QString::fromStdString(m_pimpl->Get_CashControlProtocols());
}
QString QClassicFrDrvNg::Get_JournalText() const
{
    return QString::fromStdString(m_pimpl->Get_JournalText());
}
int QClassicFrDrvNg::Get_PermitActivizationCode() const
{
    return m_pimpl->Get_PermitActivizationCode();
}
void QClassicFrDrvNg::Set_PermitActivizationCode(int value)
{
    m_pimpl->Set_PermitActivizationCode(value);
}
int QClassicFrDrvNg::Get_EjectDirection() const
{
    return m_pimpl->Get_EjectDirection();
}
void QClassicFrDrvNg::Set_EjectDirection(int value)
{
    m_pimpl->Set_EjectDirection(value);
}
int QClassicFrDrvNg::Get_EKLZFlags() const
{
    return m_pimpl->Get_EKLZFlags();
}
int QClassicFrDrvNg::Get_Tax2SumOffset() const
{
    return m_pimpl->Get_Tax2SumOffset();
}
void QClassicFrDrvNg::Set_Tax2SumOffset(int value)
{
    m_pimpl->Set_Tax2SumOffset(value);
}
int QClassicFrDrvNg::Get_DBDocType() const
{
    return m_pimpl->Get_DBDocType();
}
void QClassicFrDrvNg::Set_DBDocType(int value)
{
    m_pimpl->Set_DBDocType(value);
}
int QClassicFrDrvNg::Get_RowNumber() const
{
    return m_pimpl->Get_RowNumber();
}
void QClassicFrDrvNg::Set_RowNumber(int value)
{
    m_pimpl->Set_RowNumber(value);
}
int QClassicFrDrvNg::Get_TRKNumber() const
{
    return m_pimpl->Get_TRKNumber();
}
void QClassicFrDrvNg::Set_TRKNumber(int value)
{
    m_pimpl->Set_TRKNumber(value);
}
int QClassicFrDrvNg::Get_TagNumber() const
{
    return m_pimpl->Get_TagNumber();
}
void QClassicFrDrvNg::Set_TagNumber(int value)
{
    m_pimpl->Set_TagNumber(value);
}
int QClassicFrDrvNg::Get_SlipStringInterval() const
{
    return m_pimpl->Get_SlipStringInterval();
}
void QClassicFrDrvNg::Set_SlipStringInterval(int value)
{
    m_pimpl->Set_SlipStringInterval(value);
}
int QClassicFrDrvNg::Get_UMinorType() const
{
    return m_pimpl->Get_UMinorType();
}
bool QClassicFrDrvNg::Get_CapGetShortECRStatus() const
{
    return m_pimpl->Get_CapGetShortECRStatus();
}
int QClassicFrDrvNg::Get_Summ1SymbolNumber() const
{
    return m_pimpl->Get_Summ1SymbolNumber();
}
void QClassicFrDrvNg::Set_Summ1SymbolNumber(int value)
{
    m_pimpl->Set_Summ1SymbolNumber(value);
}
int QClassicFrDrvNg::Get_HorizScale() const
{
    return m_pimpl->Get_HorizScale();
}
void QClassicFrDrvNg::Set_HorizScale(int value)
{
    m_pimpl->Set_HorizScale(value);
}
quint32 QClassicFrDrvNg::Get_FiscalSign() const
{
    return static_cast<uint32_t>(m_pimpl->Get_FiscalSign());
}
void QClassicFrDrvNg::Set_FiscalSign(quint32 value)
{
    m_pimpl->Set_FiscalSign((static_cast<quint32>(value)));
}
int QClassicFrDrvNg::Get_Tax4TurnOverOffset() const
{
    return m_pimpl->Get_Tax4TurnOverOffset();
}
void QClassicFrDrvNg::Set_Tax4TurnOverOffset(int value)
{
    m_pimpl->Set_Tax4TurnOverOffset(value);
}
int QClassicFrDrvNg::Get_Tax1TurnOverSymbolNumber() const
{
    return m_pimpl->Get_Tax1TurnOverSymbolNumber();
}
void QClassicFrDrvNg::Set_Tax1TurnOverSymbolNumber(int value)
{
    m_pimpl->Set_Tax1TurnOverSymbolNumber(value);
}
int QClassicFrDrvNg::Get_Address() const
{
    return m_pimpl->Get_Address();
}
void QClassicFrDrvNg::Set_Address(int value)
{
    m_pimpl->Set_Address(value);
}
bool QClassicFrDrvNg::Get_AutoEoD() const
{
    return m_pimpl->Get_AutoEoD();
}
void QClassicFrDrvNg::Set_AutoEoD(bool value)
{
    m_pimpl->Set_AutoEoD(value);
}
int QClassicFrDrvNg::Get_FNSessionState() const
{
    return m_pimpl->Get_FNSessionState();
}
void QClassicFrDrvNg::Set_FNSessionState(int value)
{
    m_pimpl->Set_FNSessionState(value);
}
int QClassicFrDrvNg::Get_FNLifeState() const
{
    return m_pimpl->Get_FNLifeState();
}
void QClassicFrDrvNg::Set_FNLifeState(int value)
{
    m_pimpl->Set_FNLifeState(value);
}
int QClassicFrDrvNg::Get_CardPayType() const
{
    return m_pimpl->Get_CardPayType();
}
void QClassicFrDrvNg::Set_CardPayType(int value)
{
    m_pimpl->Set_CardPayType(value);
}
int QClassicFrDrvNg::Get_Tax4SumFont() const
{
    return m_pimpl->Get_Tax4SumFont();
}
void QClassicFrDrvNg::Set_Tax4SumFont(int value)
{
    m_pimpl->Set_Tax4SumFont(value);
}
int QClassicFrDrvNg::Get_ParameterNumber() const
{
    return m_pimpl->Get_ParameterNumber();
}
void QClassicFrDrvNg::Set_ParameterNumber(int value)
{
    m_pimpl->Set_ParameterNumber(value);
}
int QClassicFrDrvNg::Get_RegisterNumber() const
{
    return m_pimpl->Get_RegisterNumber();
}
void QClassicFrDrvNg::Set_RegisterNumber(int value)
{
    m_pimpl->Set_RegisterNumber(value);
}
int QClassicFrDrvNg::Get_InfoType() const
{
    return m_pimpl->Get_InfoType();
}
void QClassicFrDrvNg::Set_InfoType(int value)
{
    m_pimpl->Set_InfoType(value);
}
int QClassicFrDrvNg::Get_EmergencyStopCode() const
{
    return m_pimpl->Get_EmergencyStopCode();
}
int QClassicFrDrvNg::Get_Tax1SumOffset() const
{
    return m_pimpl->Get_Tax1SumOffset();
}
void QClassicFrDrvNg::Set_Tax1SumOffset(int value)
{
    m_pimpl->Set_Tax1SumOffset(value);
}
int QClassicFrDrvNg::Get_EKLZStringNumber() const
{
    return m_pimpl->Get_EKLZStringNumber();
}
void QClassicFrDrvNg::Set_EKLZStringNumber(int value)
{
    m_pimpl->Set_EKLZStringNumber(value);
}
int QClassicFrDrvNg::Get_MAXValueOfField() const
{
    return m_pimpl->Get_MAXValueOfField();
}
QString QClassicFrDrvNg::Get_Summ2AsString() const
{
    return QString::fromStdString(m_pimpl->Get_Summ2AsString());
}
int QClassicFrDrvNg::Get_Tax2SumSymbolNumber() const
{
    return m_pimpl->Get_Tax2SumSymbolNumber();
}
void QClassicFrDrvNg::Set_Tax2SumSymbolNumber(int value)
{
    m_pimpl->Set_Tax2SumSymbolNumber(value);
}
bool QClassicFrDrvNg::Get_RoughValve() const
{
    return m_pimpl->Get_RoughValve();
}
int QClassicFrDrvNg::Get_ChangeSymbolNumber() const
{
    return m_pimpl->Get_ChangeSymbolNumber();
}
void QClassicFrDrvNg::Set_ChangeSymbolNumber(int value)
{
    m_pimpl->Set_ChangeSymbolNumber(value);
}
QDateTime QClassicFrDrvNg::Get_LastKPKDate() const
{
    return QDateTime::fromMSecsSinceEpoch(static_cast<qint64>(1000) * m_pimpl->Get_LastKPKDate());
    ;
}
int QClassicFrDrvNg::Get_OperationNameStringNumber() const
{
    return m_pimpl->Get_OperationNameStringNumber();
}
void QClassicFrDrvNg::Set_OperationNameStringNumber(int value)
{
    m_pimpl->Set_OperationNameStringNumber(value);
}
quint32 QClassicFrDrvNg::Get_FileVersionMS() const
{
    return static_cast<uint32_t>(m_pimpl->Get_FileVersionMS());
}
int QClassicFrDrvNg::Get_EKLZResultCode() const
{
    return m_pimpl->Get_EKLZResultCode();
}
void QClassicFrDrvNg::Set_EKLZResultCode(int value)
{
    m_pimpl->Set_EKLZResultCode(value);
}
int QClassicFrDrvNg::Get_HeaderOffset() const
{
    return m_pimpl->Get_HeaderOffset();
}
void QClassicFrDrvNg::Set_HeaderOffset(int value)
{
    m_pimpl->Set_HeaderOffset(value);
}
bool QClassicFrDrvNg::Get_TaxValue6Enabled() const
{
    return m_pimpl->Get_TaxValue6Enabled();
}
void QClassicFrDrvNg::Set_TaxValue6Enabled(bool value)
{
    m_pimpl->Set_TaxValue6Enabled(value);
}
int QClassicFrDrvNg::Get_FieldNumber() const
{
    return m_pimpl->Get_FieldNumber();
}
void QClassicFrDrvNg::Set_FieldNumber(int value)
{
    m_pimpl->Set_FieldNumber(value);
}
int QClassicFrDrvNg::Get_LineNumber() const
{
    return m_pimpl->Get_LineNumber();
}
void QClassicFrDrvNg::Set_LineNumber(int value)
{
    m_pimpl->Set_LineNumber(value);
}
int QClassicFrDrvNg::Get_TransmitSessionNumber() const
{
    return m_pimpl->Get_TransmitSessionNumber();
}
int QClassicFrDrvNg::Get_SlowingInMilliliters() const
{
    return m_pimpl->Get_SlowingInMilliliters();
}
void QClassicFrDrvNg::Set_SlowingInMilliliters(int value)
{
    m_pimpl->Set_SlowingInMilliliters(value);
}
int QClassicFrDrvNg::Get_DiscountOnCheckOffset() const
{
    return m_pimpl->Get_DiscountOnCheckOffset();
}
void QClassicFrDrvNg::Set_DiscountOnCheckOffset(int value)
{
    m_pimpl->Set_DiscountOnCheckOffset(value);
}
QString QClassicFrDrvNg::Get_ComLogFile() const
{
    return QString::fromStdString(m_pimpl->Get_ComLogFile());
}
void QClassicFrDrvNg::Set_ComLogFile(QString value)
{
    m_pimpl->Set_ComLogFile((value.toStdString()));
}
int QClassicFrDrvNg::Get_TextFont() const
{
    return m_pimpl->Get_TextFont();
}
void QClassicFrDrvNg::Set_TextFont(int value)
{
    m_pimpl->Set_TextFont(value);
}
int QClassicFrDrvNg::Get_AttributeNumber() const
{
    return m_pimpl->Get_AttributeNumber();
}
void QClassicFrDrvNg::Set_AttributeNumber(int value)
{
    m_pimpl->Set_AttributeNumber(value);
}
bool QClassicFrDrvNg::Get_ServerConnected() const
{
    return m_pimpl->Get_ServerConnected();
}
int QClassicFrDrvNg::Get_DiscountOnCheckStringNumber() const
{
    return m_pimpl->Get_DiscountOnCheckStringNumber();
}
void QClassicFrDrvNg::Set_DiscountOnCheckStringNumber(int value)
{
    m_pimpl->Set_DiscountOnCheckStringNumber(value);
}
quint32 QClassicFrDrvNg::Get_SysAdminPassword() const
{
    return static_cast<uint32_t>(m_pimpl->Get_SysAdminPassword());
}
void QClassicFrDrvNg::Set_SysAdminPassword(quint32 value)
{
    m_pimpl->Set_SysAdminPassword((static_cast<quint32>(value)));
}
QString QClassicFrDrvNg::Get_NameCashRegEx() const
{
    return QString::fromStdString(m_pimpl->Get_NameCashRegEx());
}
int QClassicFrDrvNg::Get_MaxCommandSendCount() const
{
    return m_pimpl->Get_MaxCommandSendCount();
}
void QClassicFrDrvNg::Set_MaxCommandSendCount(int value)
{
    m_pimpl->Set_MaxCommandSendCount(value);
}
int QClassicFrDrvNg::Get_LDEscapeTimeout() const
{
    return m_pimpl->Get_LDEscapeTimeout();
}
void QClassicFrDrvNg::Set_LDEscapeTimeout(int value)
{
    m_pimpl->Set_LDEscapeTimeout(value);
}
int QClassicFrDrvNg::Get_NakCount() const
{
    return m_pimpl->Get_NakCount();
}
void QClassicFrDrvNg::Set_NakCount(int value)
{
    m_pimpl->Set_NakCount(value);
}
QString QClassicFrDrvNg::Get_MethodName() const
{
    return QString::fromStdString(m_pimpl->Get_MethodName());
}
void QClassicFrDrvNg::Set_MethodName(QString value)
{
    m_pimpl->Set_MethodName((value.toStdString()));
}
int QClassicFrDrvNg::Get_ECRBuild() const
{
    return m_pimpl->Get_ECRBuild();
}
QString QClassicFrDrvNg::Get_ModelNames() const
{
    return QString::fromStdString(m_pimpl->Get_ModelNames());
}
int QClassicFrDrvNg::Get_SubTotalSumFont() const
{
    return m_pimpl->Get_SubTotalSumFont();
}
void QClassicFrDrvNg::Set_SubTotalSumFont(int value)
{
    m_pimpl->Set_SubTotalSumFont(value);
}
int QClassicFrDrvNg::Get_PriceFont() const
{
    return m_pimpl->Get_PriceFont();
}
void QClassicFrDrvNg::Set_PriceFont(int value)
{
    m_pimpl->Set_PriceFont(value);
}
int QClassicFrDrvNg::Get_MarkingType() const
{
    return m_pimpl->Get_MarkingType();
}
void QClassicFrDrvNg::Set_MarkingType(int value)
{
    m_pimpl->Set_MarkingType(value);
}

int QClassicFrDrvNg::Get_MarkingTypeEx() const
{
    return m_pimpl->Get_MarkingTypeEx();
}
void QClassicFrDrvNg::Set_MarkingTypeEx(int value)
{
    m_pimpl->Set_MarkingTypeEx(value);
}

int QClassicFrDrvNg::Get_OFDPollPeriod() const
{
    return m_pimpl->Get_OFDPollPeriod();
}
void QClassicFrDrvNg::Set_OFDPollPeriod(int value)
{
    m_pimpl->Set_OFDPollPeriod(value);
}
QString QClassicFrDrvNg::Get_IPAddress() const
{
    return QString::fromStdString(m_pimpl->Get_IPAddress());
}
void QClassicFrDrvNg::Set_IPAddress(QString value)
{
    m_pimpl->Set_IPAddress((value.toStdString()));
}
int QClassicFrDrvNg::Get_Poll2() const
{
    return m_pimpl->Get_Poll2();
}
qint64 QClassicFrDrvNg::Get_Change() const
{
    return static_cast<int64_t>(m_pimpl->Get_Change());
}
QString QClassicFrDrvNg::Get_BarcodeAlignments() const
{
    return QString::fromStdString(m_pimpl->Get_BarcodeAlignments());
}
int QClassicFrDrvNg::Get_SaveSettingsType() const
{
    return m_pimpl->Get_SaveSettingsType();
}
void QClassicFrDrvNg::Set_SaveSettingsType(int value)
{
    m_pimpl->Set_SaveSettingsType(value);
}
bool QClassicFrDrvNg::Get_UseWareCode() const
{
    return m_pimpl->Get_UseWareCode();
}
void QClassicFrDrvNg::Set_UseWareCode(bool value)
{
    m_pimpl->Set_UseWareCode(value);
}
bool QClassicFrDrvNg::Get_OFDTicketReceived() const
{
    return m_pimpl->Get_OFDTicketReceived();
}
void QClassicFrDrvNg::Set_OFDTicketReceived(bool value)
{
    m_pimpl->Set_OFDTicketReceived(value);
}
QString QClassicFrDrvNg::Get_Token() const
{
    return QString::fromStdString(m_pimpl->Get_Token());
}
void QClassicFrDrvNg::Set_Token(QString value)
{
    m_pimpl->Set_Token((value.toStdString()));
}
QString QClassicFrDrvNg::Get_Summ3AsString() const
{
    return QString::fromStdString(m_pimpl->Get_Summ3AsString());
}
bool QClassicFrDrvNg::Get_PrintJournalBeforeZReport() const
{
    return m_pimpl->Get_PrintJournalBeforeZReport();
}
void QClassicFrDrvNg::Set_PrintJournalBeforeZReport(bool value)
{
    m_pimpl->Set_PrintJournalBeforeZReport(value);
}
int QClassicFrDrvNg::Get_Tax2SumStringNumber() const
{
    return m_pimpl->Get_Tax2SumStringNumber();
}
void QClassicFrDrvNg::Set_Tax2SumStringNumber(int value)
{
    m_pimpl->Set_Tax2SumStringNumber(value);
}
quint32 QClassicFrDrvNg::Get_Password() const
{
    return static_cast<uint32_t>(m_pimpl->Get_Password());
}
void QClassicFrDrvNg::Set_Password(quint32 value)
{
    m_pimpl->Set_Password((static_cast<quint32>(value)));
}
int QClassicFrDrvNg::Get_ExciseCode() const
{
    return m_pimpl->Get_ExciseCode();
}
void QClassicFrDrvNg::Set_ExciseCode(int value)
{
    m_pimpl->Set_ExciseCode(value);
}
int QClassicFrDrvNg::Get_LastKPKNumber() const
{
    return m_pimpl->Get_LastKPKNumber();
}
int QClassicFrDrvNg::Get_KKTLicense() const
{
    return m_pimpl->Get_KKTLicense();
}
void QClassicFrDrvNg::Set_KKTLicense(int value)
{
    m_pimpl->Set_KKTLicense(value);
}
QString QClassicFrDrvNg::Get_FieldName() const
{
    return QString::fromStdString(m_pimpl->Get_FieldName());
}
int QClassicFrDrvNg::Get_ClicheFont() const
{
    return m_pimpl->Get_ClicheFont();
}
void QClassicFrDrvNg::Set_ClicheFont(int value)
{
    m_pimpl->Set_ClicheFont(value);
}
int QClassicFrDrvNg::Get_ReceiptNumber() const
{
    return m_pimpl->Get_ReceiptNumber();
}
void QClassicFrDrvNg::Set_ReceiptNumber(int value)
{
    m_pimpl->Set_ReceiptNumber(value);
}
int QClassicFrDrvNg::Get_ModelID() const
{
    return m_pimpl->Get_ModelID();
}
void QClassicFrDrvNg::Set_ModelID(int value)
{
    m_pimpl->Set_ModelID(value);
}
int QClassicFrDrvNg::Get_QuantitySymbolNumber() const
{
    return m_pimpl->Get_QuantitySymbolNumber();
}
void QClassicFrDrvNg::Set_QuantitySymbolNumber(int value)
{
    m_pimpl->Set_QuantitySymbolNumber(value);
}
int QClassicFrDrvNg::Get_ccWareNameLineNumber() const
{
    return m_pimpl->Get_ccWareNameLineNumber();
}
void QClassicFrDrvNg::Set_ccWareNameLineNumber(int value)
{
    m_pimpl->Set_ccWareNameLineNumber(value);
}
int QClassicFrDrvNg::Get_BanknoteType() const
{
    return m_pimpl->Get_BanknoteType();
}
void QClassicFrDrvNg::Set_BanknoteType(int value)
{
    m_pimpl->Set_BanknoteType(value);
}
int QClassicFrDrvNg::Get_SummFont() const
{
    return m_pimpl->Get_SummFont();
}
void QClassicFrDrvNg::Set_SummFont(int value)
{
    m_pimpl->Set_SummFont(value);
}
qint64 QClassicFrDrvNg::Get_RegSaleReturnSession() const
{
    return static_cast<int64_t>(m_pimpl->Get_RegSaleReturnSession());
}
QString QClassicFrDrvNg::Get_DeviceCodeDescription() const
{
    return QString::fromStdString(m_pimpl->Get_DeviceCodeDescription());
}
QDateTime QClassicFrDrvNg::Get_Time2() const
{
    return QDateTime::fromMSecsSinceEpoch(static_cast<qint64>(1000) * m_pimpl->Get_Time2());
    ;
}
void QClassicFrDrvNg::Set_Time2(QDateTime value)
{
    m_pimpl->Set_Time2((static_cast<std::time_t>(value.toMSecsSinceEpoch() / static_cast<qint64>(1000))));
}
int QClassicFrDrvNg::Get_KPKOffset() const
{
    return m_pimpl->Get_KPKOffset();
}
void QClassicFrDrvNg::Set_KPKOffset(int value)
{
    m_pimpl->Set_KPKOffset(value);
}
QString QClassicFrDrvNg::Get_ECROutput() const
{
    return QString::fromStdString(m_pimpl->Get_ECROutput());
}
int QClassicFrDrvNg::Get_FieldSize() const
{
    return m_pimpl->Get_FieldSize();
}
int QClassicFrDrvNg::Get_PaymentTypeSign() const
{
    return m_pimpl->Get_PaymentTypeSign();
}
void QClassicFrDrvNg::Set_PaymentTypeSign(int value)
{
    m_pimpl->Set_PaymentTypeSign(value);
}
int QClassicFrDrvNg::Get_FirstLineNumber() const
{
    return m_pimpl->Get_FirstLineNumber();
}
void QClassicFrDrvNg::Set_FirstLineNumber(int value)
{
    m_pimpl->Set_FirstLineNumber(value);
}
quint32 QClassicFrDrvNg::Get_DriverBuild() const
{
    return static_cast<uint32_t>(m_pimpl->Get_DriverBuild());
}
QDateTime QClassicFrDrvNg::Get_LastKPKTime() const
{
    return QDateTime::fromMSecsSinceEpoch(static_cast<qint64>(1000) * m_pimpl->Get_LastKPKTime());
    ;
}
QString QClassicFrDrvNg::Get_TagDescription() const
{
    return QString::fromStdString(m_pimpl->Get_TagDescription());
}
void QClassicFrDrvNg::Set_TagDescription(QString value)
{
    m_pimpl->Set_TagDescription((value.toStdString()));
}
int QClassicFrDrvNg::Get_Summ4SymbolNumber() const
{
    return m_pimpl->Get_Summ4SymbolNumber();
}
void QClassicFrDrvNg::Set_Summ4SymbolNumber(int value)
{
    m_pimpl->Set_Summ4SymbolNumber(value);
}
bool QClassicFrDrvNg::Get_IsBatteryLow() const
{
    return m_pimpl->Get_IsBatteryLow();
}
quint32 QClassicFrDrvNg::Get_NewSCPassword() const
{
    return static_cast<uint32_t>(m_pimpl->Get_NewSCPassword());
}
void QClassicFrDrvNg::Set_NewSCPassword(quint32 value)
{
    m_pimpl->Set_NewSCPassword((static_cast<quint32>(value)));
}
int QClassicFrDrvNg::Get_Tax2TurnOverSymbolNumber() const
{
    return m_pimpl->Get_Tax2TurnOverSymbolNumber();
}
void QClassicFrDrvNg::Set_Tax2TurnOverSymbolNumber(int value)
{
    m_pimpl->Set_Tax2TurnOverSymbolNumber(value);
}
int QClassicFrDrvNg::Get_Tax3TurnOverStringNumber() const
{
    return m_pimpl->Get_Tax3TurnOverStringNumber();
}
void QClassicFrDrvNg::Set_Tax3TurnOverStringNumber(int value)
{
    m_pimpl->Set_Tax3TurnOverStringNumber(value);
}
QString QClassicFrDrvNg::Get_EKLZData() const
{
    return QString::fromStdString(m_pimpl->Get_EKLZData());
}
int QClassicFrDrvNg::Get_ECRFlags() const
{
    return m_pimpl->Get_ECRFlags();
}
int QClassicFrDrvNg::Get_DepartmentOffset() const
{
    return m_pimpl->Get_DepartmentOffset();
}
void QClassicFrDrvNg::Set_DepartmentOffset(int value)
{
    m_pimpl->Set_DepartmentOffset(value);
}
qint64 QClassicFrDrvNg::Get_TaxValue1() const
{
    return static_cast<int64_t>(m_pimpl->Get_TaxValue1());
}
void QClassicFrDrvNg::Set_TaxValue1(qint64 value)
{
    m_pimpl->Set_TaxValue1((static_cast<qint64>(value)));
}
int QClassicFrDrvNg::Get_EscapePort() const
{
    return m_pimpl->Get_EscapePort();
}
void QClassicFrDrvNg::Set_EscapePort(int value)
{
    m_pimpl->Set_EscapePort(value);
}
int QClassicFrDrvNg::Get_OperationNameFont() const
{
    return m_pimpl->Get_OperationNameFont();
}
void QClassicFrDrvNg::Set_OperationNameFont(int value)
{
    m_pimpl->Set_OperationNameFont(value);
}
int QClassicFrDrvNg::Get_IntervalNumber() const
{
    return m_pimpl->Get_IntervalNumber();
}
void QClassicFrDrvNg::Set_IntervalNumber(int value)
{
    m_pimpl->Set_IntervalNumber(value);
}
int QClassicFrDrvNg::Get_CommandIndex() const
{
    return m_pimpl->Get_CommandIndex();
}
void QClassicFrDrvNg::Set_CommandIndex(int value)
{
    m_pimpl->Set_CommandIndex(value);
}
QClassicFrDrvNg::TBinaryConversion QClassicFrDrvNg::Get_BinaryConversion() const
{
    return static_cast<TBinaryConversion>(m_pimpl->Get_BinaryConversion());
}
void QClassicFrDrvNg::Set_BinaryConversion(TBinaryConversion value)
{
    m_pimpl->Set_BinaryConversion((static_cast<classic_interface::TBinaryConversion>(value)));
}
QClassicFrDrvNg::TConnectionType QClassicFrDrvNg::Get_ConnectionType() const
{
    return static_cast<TConnectionType>(m_pimpl->Get_ConnectionType());
}
void QClassicFrDrvNg::Set_ConnectionType(TConnectionType value)
{
    m_pimpl->Set_ConnectionType((static_cast<classic_interface::TConnectionType>(value)));
}
qint64 QClassicFrDrvNg::Get_Discount4() const
{
    return static_cast<int64_t>(m_pimpl->Get_Discount4());
}
void QClassicFrDrvNg::Set_Discount4(qint64 value)
{
    m_pimpl->Set_Discount4((static_cast<qint64>(value)));
}
bool QClassicFrDrvNg::Get_LineSwapBytes() const
{
    return m_pimpl->Get_LineSwapBytes();
}
void QClassicFrDrvNg::Set_LineSwapBytes(bool value)
{
    m_pimpl->Set_LineSwapBytes(value);
}
qint64 QClassicFrDrvNg::Get_TaxValue4() const
{
    return static_cast<int64_t>(m_pimpl->Get_TaxValue4());
}
void QClassicFrDrvNg::Set_TaxValue4(qint64 value)
{
    m_pimpl->Set_TaxValue4((static_cast<qint64>(value)));
}
qint64 QClassicFrDrvNg::Get_Discount2() const
{
    return static_cast<int64_t>(m_pimpl->Get_Discount2());
}
void QClassicFrDrvNg::Set_Discount2(qint64 value)
{
    m_pimpl->Set_Discount2((static_cast<qint64>(value)));
}
bool QClassicFrDrvNg::Get_RequestErrorDescription() const
{
    return m_pimpl->Get_RequestErrorDescription();
}
void QClassicFrDrvNg::Set_RequestErrorDescription(bool value)
{
    m_pimpl->Set_RequestErrorDescription(value);
}
bool QClassicFrDrvNg::Get_AutoOFDExchange() const
{
    return m_pimpl->Get_AutoOFDExchange();
}
void QClassicFrDrvNg::Set_AutoOFDExchange(bool value)
{
    m_pimpl->Set_AutoOFDExchange(value);
}
bool QClassicFrDrvNg::Get_SlipDocumentIsPresent() const
{
    return m_pimpl->Get_SlipDocumentIsPresent();
}
int QClassicFrDrvNg::Get_NumberOfCopies() const
{
    return m_pimpl->Get_NumberOfCopies();
}
void QClassicFrDrvNg::Set_NumberOfCopies(int value)
{
    m_pimpl->Set_NumberOfCopies(value);
}
QString QClassicFrDrvNg::Get_CustomerEmail() const
{
    return QString::fromStdString(m_pimpl->Get_CustomerEmail());
}
void QClassicFrDrvNg::Set_CustomerEmail(QString value)
{
    m_pimpl->Set_CustomerEmail((value.toStdString()));
}
int QClassicFrDrvNg::Get_FMResultCode() const
{
    return m_pimpl->Get_FMResultCode();
}
int QClassicFrDrvNg::Get_ActivizationStatus() const
{
    return m_pimpl->Get_ActivizationStatus();
}
void QClassicFrDrvNg::Set_ActivizationStatus(int value)
{
    m_pimpl->Set_ActivizationStatus(value);
}
quint32 QClassicFrDrvNg::Get_DriverMajorVersion() const
{
    return static_cast<uint32_t>(m_pimpl->Get_DriverMajorVersion());
}
int QClassicFrDrvNg::Get_EscapeTimeout() const
{
    return m_pimpl->Get_EscapeTimeout();
}
void QClassicFrDrvNg::Set_EscapeTimeout(int value)
{
    m_pimpl->Set_EscapeTimeout(value);
}
bool QClassicFrDrvNg::Get_IsCorruptedFMRecords() const
{
    return m_pimpl->Get_IsCorruptedFMRecords();
}
int QClassicFrDrvNg::Get_LDBaudrate() const
{
    return m_pimpl->Get_LDBaudrate();
}
void QClassicFrDrvNg::Set_LDBaudrate(int value)
{
    m_pimpl->Set_LDBaudrate(value);
}
int QClassicFrDrvNg::Get_DepartmentFont() const
{
    return m_pimpl->Get_DepartmentFont();
}
void QClassicFrDrvNg::Set_DepartmentFont(int value)
{
    m_pimpl->Set_DepartmentFont(value);
}
int QClassicFrDrvNg::Get_Tax4RateOffset() const
{
    return m_pimpl->Get_Tax4RateOffset();
}
void QClassicFrDrvNg::Set_Tax4RateOffset(int value)
{
    m_pimpl->Set_Tax4RateOffset(value);
}
bool QClassicFrDrvNg::Get_TypeOfSumOfEntriesFM() const
{
    return m_pimpl->Get_TypeOfSumOfEntriesFM();
}
void QClassicFrDrvNg::Set_TypeOfSumOfEntriesFM(bool value)
{
    m_pimpl->Set_TypeOfSumOfEntriesFM(value);
}
bool QClassicFrDrvNg::Get_IsASPDMode() const
{
    return m_pimpl->Get_IsASPDMode();
}
int QClassicFrDrvNg::Get_IBMLastReturnBuyReceiptNumber() const
{
    return m_pimpl->Get_IBMLastReturnBuyReceiptNumber();
}
int QClassicFrDrvNg::Get_IBMStatusByte8() const
{
    return m_pimpl->Get_IBMStatusByte8();
}
int QClassicFrDrvNg::Get_DataBlockNumber() const
{
    return m_pimpl->Get_DataBlockNumber();
}
int QClassicFrDrvNg::Get_FNSoftType() const
{
    return m_pimpl->Get_FNSoftType();
}
int QClassicFrDrvNg::Get_Tax3TurnOverFont() const
{
    return m_pimpl->Get_Tax3TurnOverFont();
}
void QClassicFrDrvNg::Set_Tax3TurnOverFont(int value)
{
    m_pimpl->Set_Tax3TurnOverFont(value);
}
int QClassicFrDrvNg::Get_Tax3SumSymbolNumber() const
{
    return m_pimpl->Get_Tax3SumSymbolNumber();
}
void QClassicFrDrvNg::Set_Tax3SumSymbolNumber(int value)
{
    m_pimpl->Set_Tax3SumSymbolNumber(value);
}
int QClassicFrDrvNg::Get_IBMStatusByte1() const
{
    return m_pimpl->Get_IBMStatusByte1();
}
int QClassicFrDrvNg::Get_IBMStatusByte2() const
{
    return m_pimpl->Get_IBMStatusByte2();
}
int QClassicFrDrvNg::Get_IBMStatusByte3() const
{
    return m_pimpl->Get_IBMStatusByte3();
}
int QClassicFrDrvNg::Get_IBMStatusByte4() const
{
    return m_pimpl->Get_IBMStatusByte4();
}
int QClassicFrDrvNg::Get_IBMStatusByte5() const
{
    return m_pimpl->Get_IBMStatusByte5();
}
int QClassicFrDrvNg::Get_IBMStatusByte6() const
{
    return m_pimpl->Get_IBMStatusByte6();
}
int QClassicFrDrvNg::Get_IBMStatusByte7() const
{
    return m_pimpl->Get_IBMStatusByte7();
}
int QClassicFrDrvNg::Get_ErrorCode() const
{
    return m_pimpl->Get_ErrorCode();
}
void QClassicFrDrvNg::Set_ErrorCode(int value)
{
    m_pimpl->Set_ErrorCode(value);
}
QString QClassicFrDrvNg::Get_UCodePageText() const
{
    return QString::fromStdString(m_pimpl->Get_UCodePageText());
}
int QClassicFrDrvNg::Get_RequestType() const
{
    return m_pimpl->Get_RequestType();
}
void QClassicFrDrvNg::Set_RequestType(int value)
{
    m_pimpl->Set_RequestType(value);
}
int QClassicFrDrvNg::Get_TagID() const
{
    return m_pimpl->Get_TagID();
}
void QClassicFrDrvNg::Set_TagID(int value)
{
    m_pimpl->Set_TagID(value);
}
int QClassicFrDrvNg::Get_IBMSessionMonth() const
{
    return m_pimpl->Get_IBMSessionMonth();
}
QString QClassicFrDrvNg::Get_OPRequisiteValue() const
{
    return QString::fromStdString(m_pimpl->Get_OPRequisiteValue());
}
void QClassicFrDrvNg::Set_OPRequisiteValue(QString value)
{
    m_pimpl->Set_OPRequisiteValue((value.toStdString()));
}
int QClassicFrDrvNg::Get_ChangeOffset() const
{
    return m_pimpl->Get_ChangeOffset();
}
void QClassicFrDrvNg::Set_ChangeOffset(int value)
{
    m_pimpl->Set_ChangeOffset(value);
}
int QClassicFrDrvNg::Get_OpenDocumentNumber() const
{
    return m_pimpl->Get_OpenDocumentNumber();
}
QString QClassicFrDrvNg::Get_LastKPKTimeStr() const
{
    return QString::fromStdString(m_pimpl->Get_LastKPKTimeStr());
}
int QClassicFrDrvNg::Get_CashAcceptorPollingMode() const
{
    return m_pimpl->Get_CashAcceptorPollingMode();
}
int QClassicFrDrvNg::Get_Summ2NameOffset() const
{
    return m_pimpl->Get_Summ2NameOffset();
}
void QClassicFrDrvNg::Set_Summ2NameOffset(int value)
{
    m_pimpl->Set_Summ2NameOffset(value);
}
QString QClassicFrDrvNg::Get_ComputerName() const
{
    return QString::fromStdString(m_pimpl->Get_ComputerName());
}
void QClassicFrDrvNg::Set_ComputerName(QString value)
{
    m_pimpl->Set_ComputerName((value.toStdString()));
}
int QClassicFrDrvNg::Get_KPKValue() const
{
    return m_pimpl->Get_KPKValue();
}
void QClassicFrDrvNg::Set_KPKValue(int value)
{
    m_pimpl->Set_KPKValue(value);
}
QString QClassicFrDrvNg::Get_SlipStringIntervals() const
{
    return QString::fromStdString(m_pimpl->Get_SlipStringIntervals());
}
void QClassicFrDrvNg::Set_SlipStringIntervals(QString value)
{
    m_pimpl->Set_SlipStringIntervals((value.toStdString()));
}
int QClassicFrDrvNg::Get_FMMode() const
{
    return m_pimpl->Get_FMMode();
}
int QClassicFrDrvNg::Get_Tax1NameFont() const
{
    return m_pimpl->Get_Tax1NameFont();
}
void QClassicFrDrvNg::Set_Tax1NameFont(int value)
{
    m_pimpl->Set_Tax1NameFont(value);
}
quint32 QClassicFrDrvNg::Get_DocumentNumber() const
{
    return static_cast<uint32_t>(m_pimpl->Get_DocumentNumber());
}
void QClassicFrDrvNg::Set_DocumentNumber(quint32 value)
{
    m_pimpl->Set_DocumentNumber((static_cast<quint32>(value)));
}
bool QClassicFrDrvNg::Get_UseSlipDocument() const
{
    return m_pimpl->Get_UseSlipDocument();
}
void QClassicFrDrvNg::Set_UseSlipDocument(bool value)
{
    m_pimpl->Set_UseSlipDocument(value);
}
int QClassicFrDrvNg::Get_Timeout() const
{
    return m_pimpl->Get_Timeout();
}
void QClassicFrDrvNg::Set_Timeout(int value)
{
    m_pimpl->Set_Timeout(value);
}
int QClassicFrDrvNg::Get_PrintWidth() const
{
    return m_pimpl->Get_PrintWidth();
}
int QClassicFrDrvNg::Get_DiscountOnCheckFont() const
{
    return m_pimpl->Get_DiscountOnCheckFont();
}
void QClassicFrDrvNg::Set_DiscountOnCheckFont(int value)
{
    m_pimpl->Set_DiscountOnCheckFont(value);
}
int QClassicFrDrvNg::Get_TotalSumOffset() const
{
    return m_pimpl->Get_TotalSumOffset();
}
void QClassicFrDrvNg::Set_TotalSumOffset(int value)
{
    m_pimpl->Set_TotalSumOffset(value);
}
int QClassicFrDrvNg::Get_PingResult() const
{
    return m_pimpl->Get_PingResult();
}
void QClassicFrDrvNg::Set_PingResult(int value)
{
    m_pimpl->Set_PingResult(value);
}
int QClassicFrDrvNg::Get_RegistrationReasonCode() const
{
    return m_pimpl->Get_RegistrationReasonCode();
}
void QClassicFrDrvNg::Set_RegistrationReasonCode(int value)
{
    m_pimpl->Set_RegistrationReasonCode(value);
}
int QClassicFrDrvNg::Get_SymbolWidth() const
{
    return m_pimpl->Get_SymbolWidth();
}
void QClassicFrDrvNg::Set_SymbolWidth(int value)
{
    m_pimpl->Set_SymbolWidth(value);
}
int QClassicFrDrvNg::Get_SymbolHeight() const
{
    return m_pimpl->Get_SymbolHeight();
}
void QClassicFrDrvNg::Set_SymbolHeight(int value)
{
    m_pimpl->Set_SymbolHeight(value);
}
bool QClassicFrDrvNg::Get_SlowingValve() const
{
    return m_pimpl->Get_SlowingValve();
}
int QClassicFrDrvNg::Get_SymbolCode() const
{
    return m_pimpl->Get_SymbolCode();
}
void QClassicFrDrvNg::Set_SymbolCode(int value)
{
    m_pimpl->Set_SymbolCode(value);
}
int QClassicFrDrvNg::Get_WrittenByte() const
{
    return m_pimpl->Get_WrittenByte();
}
void QClassicFrDrvNg::Set_WrittenByte(int value)
{
    m_pimpl->Set_WrittenByte(value);
}
int QClassicFrDrvNg::Get_TextStringNumber() const
{
    return m_pimpl->Get_TextStringNumber();
}
void QClassicFrDrvNg::Set_TextStringNumber(int value)
{
    m_pimpl->Set_TextStringNumber(value);
}
quint32 QClassicFrDrvNg::Get_LDSysAdminPassword() const
{
    return static_cast<uint32_t>(m_pimpl->Get_LDSysAdminPassword());
}
void QClassicFrDrvNg::Set_LDSysAdminPassword(quint32 value)
{
    m_pimpl->Set_LDSysAdminPassword((static_cast<quint32>(value)));
}
int QClassicFrDrvNg::Get_Summ4NameFont() const
{
    return m_pimpl->Get_Summ4NameFont();
}
void QClassicFrDrvNg::Set_Summ4NameFont(int value)
{
    m_pimpl->Set_Summ4NameFont(value);
}
int QClassicFrDrvNg::Get_Tax4SumSymbolNumber() const
{
    return m_pimpl->Get_Tax4SumSymbolNumber();
}
void QClassicFrDrvNg::Set_Tax4SumSymbolNumber(int value)
{
    m_pimpl->Set_Tax4SumSymbolNumber(value);
}
int QClassicFrDrvNg::Get_IBMSessionYear() const
{
    return m_pimpl->Get_IBMSessionYear();
}
int QClassicFrDrvNg::Get_OPTransactionStatus() const
{
    return m_pimpl->Get_OPTransactionStatus();
}
void QClassicFrDrvNg::Set_OPTransactionStatus(int value)
{
    m_pimpl->Set_OPTransactionStatus(value);
}
bool QClassicFrDrvNg::Get_TypeOfLastEntryFM() const
{
    return m_pimpl->Get_TypeOfLastEntryFM();
}
int QClassicFrDrvNg::Get_AccType() const
{
    return m_pimpl->Get_AccType();
}
void QClassicFrDrvNg::Set_AccType(int value)
{
    m_pimpl->Set_AccType(value);
}
QString QClassicFrDrvNg::Get_LineData2() const
{
    return QString::fromStdString(m_pimpl->Get_LineData2());
}
void QClassicFrDrvNg::Set_LineData2(QString value)
{
    m_pimpl->Set_LineData2((value.toStdString()));
}
QString QClassicFrDrvNg::Get_BarcodeTypes() const
{
    return QString::fromStdString(m_pimpl->Get_BarcodeTypes());
}
bool QClassicFrDrvNg::Get_TaxValueEnabled() const
{
    return m_pimpl->Get_TaxValueEnabled();
}
void QClassicFrDrvNg::Set_TaxValueEnabled(bool value)
{
    m_pimpl->Set_TaxValueEnabled(value);
}
int QClassicFrDrvNg::Get_Tax3RateFont() const
{
    return m_pimpl->Get_Tax3RateFont();
}
void QClassicFrDrvNg::Set_Tax3RateFont(int value)
{
    m_pimpl->Set_Tax3RateFont(value);
}
int QClassicFrDrvNg::Get_UMinorProtocolVersion() const
{
    return m_pimpl->Get_UMinorProtocolVersion();
}
int QClassicFrDrvNg::Get_FMOffset() const
{
    return m_pimpl->Get_FMOffset();
}
void QClassicFrDrvNg::Set_FMOffset(int value)
{
    m_pimpl->Set_FMOffset(value);
}
bool QClassicFrDrvNg::Get_CutType() const
{
    return m_pimpl->Get_CutType();
}
void QClassicFrDrvNg::Set_CutType(bool value)
{
    m_pimpl->Set_CutType(value);
}
int QClassicFrDrvNg::Get_FeedLineCount() const
{
    return m_pimpl->Get_FeedLineCount();
}
void QClassicFrDrvNg::Set_FeedLineCount(int value)
{
    m_pimpl->Set_FeedLineCount(value);
}
bool QClassicFrDrvNg::Get_TaxValue2Enabled() const
{
    return m_pimpl->Get_TaxValue2Enabled();
}
void QClassicFrDrvNg::Set_TaxValue2Enabled(bool value)
{
    m_pimpl->Set_TaxValue2Enabled(value);
}
int QClassicFrDrvNg::Get_PUKCode() const
{
    return m_pimpl->Get_PUKCode();
}
void QClassicFrDrvNg::Set_PUKCode(int value)
{
    m_pimpl->Set_PUKCode(value);
}
int QClassicFrDrvNg::Get_MessageCount() const
{
    return m_pimpl->Get_MessageCount();
}
void QClassicFrDrvNg::Set_MessageCount(int value)
{
    m_pimpl->Set_MessageCount(value);
}
bool QClassicFrDrvNg::Get_UseSlipCheck() const
{
    return m_pimpl->Get_UseSlipCheck();
}
void QClassicFrDrvNg::Set_UseSlipCheck(bool value)
{
    m_pimpl->Set_UseSlipCheck(value);
}
int QClassicFrDrvNg::Get_SlipDocumentWidth() const
{
    return m_pimpl->Get_SlipDocumentWidth();
}
void QClassicFrDrvNg::Set_SlipDocumentWidth(int value)
{
    m_pimpl->Set_SlipDocumentWidth(value);
}
int QClassicFrDrvNg::Get_BarcodeType() const
{
    return m_pimpl->Get_BarcodeType();
}
void QClassicFrDrvNg::Set_BarcodeType(int value)
{
    m_pimpl->Set_BarcodeType(value);
}
bool QClassicFrDrvNg::Get_AdjustRITimeout() const
{
    return m_pimpl->Get_AdjustRITimeout();
}
void QClassicFrDrvNg::Set_AdjustRITimeout(bool value)
{
    m_pimpl->Set_AdjustRITimeout(value);
}
int QClassicFrDrvNg::Get_FNDocumentData() const
{
    return m_pimpl->Get_FNDocumentData();
}
void QClassicFrDrvNg::Set_FNDocumentData(int value)
{
    m_pimpl->Set_FNDocumentData(value);
}
int QClassicFrDrvNg::Get_Summ1StringNumber() const
{
    return m_pimpl->Get_Summ1StringNumber();
}
void QClassicFrDrvNg::Set_Summ1StringNumber(int value)
{
    m_pimpl->Set_Summ1StringNumber(value);
}
int QClassicFrDrvNg::Get_LDTimeout() const
{
    return m_pimpl->Get_LDTimeout();
}
void QClassicFrDrvNg::Set_LDTimeout(int value)
{
    m_pimpl->Set_LDTimeout(value);
}
int QClassicFrDrvNg::Get_TextSymbolNumber() const
{
    return m_pimpl->Get_TextSymbolNumber();
}
void QClassicFrDrvNg::Set_TextSymbolNumber(int value)
{
    m_pimpl->Set_TextSymbolNumber(value);
}
int QClassicFrDrvNg::Get_Summ3Offset() const
{
    return m_pimpl->Get_Summ3Offset();
}
void QClassicFrDrvNg::Set_Summ3Offset(int value)
{
    m_pimpl->Set_Summ3Offset(value);
}
bool QClassicFrDrvNg::Get_LogOn() const
{
    return m_pimpl->Get_LogOn();
}
void QClassicFrDrvNg::Set_LogOn(bool value)
{
    m_pimpl->Set_LogOn(value);
}
QString QClassicFrDrvNg::Get_LoaderVersion() const
{
    return QString::fromStdString(m_pimpl->Get_LoaderVersion());
}
int QClassicFrDrvNg::Get_TransmitStatus() const
{
    return m_pimpl->Get_TransmitStatus();
}
QString QClassicFrDrvNg::Get_PollDescription() const
{
    return QString::fromStdString(m_pimpl->Get_PollDescription());
}
int QClassicFrDrvNg::Get_Summ3NameFont() const
{
    return m_pimpl->Get_Summ3NameFont();
}
void QClassicFrDrvNg::Set_Summ3NameFont(int value)
{
    m_pimpl->Set_Summ3NameFont(value);
}
int QClassicFrDrvNg::Get_BarWidth() const
{
    return m_pimpl->Get_BarWidth();
}
void QClassicFrDrvNg::Set_BarWidth(int value)
{
    m_pimpl->Set_BarWidth(value);
}
int QClassicFrDrvNg::Get_BaudRate() const
{
    return m_pimpl->Get_BaudRate();
}
void QClassicFrDrvNg::Set_BaudRate(int value)
{
    m_pimpl->Set_BaudRate(value);
}
qint64 QClassicFrDrvNg::Get_Discount3() const
{
    return static_cast<int64_t>(m_pimpl->Get_Discount3());
}
void QClassicFrDrvNg::Set_Discount3(qint64 value)
{
    m_pimpl->Set_Discount3((static_cast<qint64>(value)));
}
qint64 QClassicFrDrvNg::Get_Discount1() const
{
    return static_cast<int64_t>(m_pimpl->Get_Discount1());
}
void QClassicFrDrvNg::Set_Discount1(qint64 value)
{
    m_pimpl->Set_Discount1((static_cast<qint64>(value)));
}
int QClassicFrDrvNg::Get_DiscountOnCheckSumSymbolNumber() const
{
    return m_pimpl->Get_DiscountOnCheckSumSymbolNumber();
}
void QClassicFrDrvNg::Set_DiscountOnCheckSumSymbolNumber(int value)
{
    m_pimpl->Set_DiscountOnCheckSumSymbolNumber(value);
}
bool QClassicFrDrvNg::Get_ICSEnabled() const
{
    return m_pimpl->Get_ICSEnabled();
}
void QClassicFrDrvNg::Set_ICSEnabled(bool value)
{
    m_pimpl->Set_ICSEnabled(value);
}
QString QClassicFrDrvNg::Get_DataBlock() const
{
    return QString::fromStdString(m_pimpl->Get_DataBlock());
}
int QClassicFrDrvNg::Get_CopyType() const
{
    return m_pimpl->Get_CopyType();
}
void QClassicFrDrvNg::Set_CopyType(int value)
{
    m_pimpl->Set_CopyType(value);
}
int QClassicFrDrvNg::Get_OFDPort() const
{
    return m_pimpl->Get_OFDPort();
}
void QClassicFrDrvNg::Set_OFDPort(int value)
{
    m_pimpl->Set_OFDPort(value);
}
int QClassicFrDrvNg::Get_SKNOError() const
{
    return m_pimpl->Get_SKNOError();
}
void QClassicFrDrvNg::Set_SKNOError(int value)
{
    m_pimpl->Set_SKNOError(value);
}
int QClassicFrDrvNg::Get_Summ3SymbolNumber() const
{
    return m_pimpl->Get_Summ3SymbolNumber();
}
void QClassicFrDrvNg::Set_Summ3SymbolNumber(int value)
{
    m_pimpl->Set_Summ3SymbolNumber(value);
}
int QClassicFrDrvNg::Get_ECRMode8Status() const
{
    return m_pimpl->Get_ECRMode8Status();
}
int QClassicFrDrvNg::Get_ChangeFont() const
{
    return m_pimpl->Get_ChangeFont();
}
void QClassicFrDrvNg::Set_ChangeFont(int value)
{
    m_pimpl->Set_ChangeFont(value);
}
int QClassicFrDrvNg::Get_Summ1NameFont() const
{
    return m_pimpl->Get_Summ1NameFont();
}
void QClassicFrDrvNg::Set_Summ1NameFont(int value)
{
    m_pimpl->Set_Summ1NameFont(value);
}
int QClassicFrDrvNg::Get_SubTotalSumOffset() const
{
    return m_pimpl->Get_SubTotalSumOffset();
}
void QClassicFrDrvNg::Set_SubTotalSumOffset(int value)
{
    m_pimpl->Set_SubTotalSumOffset(value);
}
bool QClassicFrDrvNg::Get_SkipPrint() const
{
    return m_pimpl->Get_SkipPrint();
}
void QClassicFrDrvNg::Set_SkipPrint(bool value)
{
    m_pimpl->Set_SkipPrint(value);
}

QString QClassicFrDrvNg::Get_DigitalSign() const
{
    return QString::fromStdString(m_pimpl->Get_DigitalSign());
}

void QClassicFrDrvNg::Set_DigitalSign(QString value)
{
    m_pimpl->Set_DigitalSign(value.toStdString());
}

void QClassicFrDrvNg::Set_DeviceFunctionNumber(int DeviceFunctionNumber)
{
    m_pimpl->Set_DeviceFunctionNumber(DeviceFunctionNumber);
}

void QClassicFrDrvNg::Set_ValueOfFunctionInteger(int ValueOfFunctionInteger)
{
    m_pimpl->Set_ValueOfFunctionInteger(ValueOfFunctionInteger);
}

void QClassicFrDrvNg::Set_ValueOfFunctionString(QString ValueOfFunctionString)
{
    m_pimpl->Set_ValueOfFunctionString(ValueOfFunctionString.toStdString());
}

void QClassicFrDrvNg::Set_EnableCashcoreMarkCompatibility(bool EnableCashcoreMarkCompatibility)
{
    m_pimpl->Set_EnableCashcoreMarkCompatibility(EnableCashcoreMarkCompatibility);
}

QString QClassicFrDrvNg::Get_TLVDataHex() const
{
    return QString::fromStdString(m_pimpl->Get_TLVDataHex());
}
void QClassicFrDrvNg::Set_TLVDataHex(const QString value)
{
    m_pimpl->Set_TLVDataHex(value.toStdString());
}
qint64 QClassicFrDrvNg::Get_MessageNumber() const
{
    return m_pimpl->Get_MessageNumber();
}
void QClassicFrDrvNg::Set_MessageNumber(int64_t value)
{
    m_pimpl->Set_MessageNumber(value);
}
void QClassicFrDrvNg::Set_CheckItemLocalError(int value)
{
    m_pimpl->Set_CheckItemLocalError(value);
}
int QClassicFrDrvNg::Get_CheckItemLocalError() const
{
    return m_pimpl->Get_CheckItemLocalError();
}
void QClassicFrDrvNg::Set_MeasureUnit(int value)
{
    m_pimpl->Set_MeasureUnit(value);
}
int QClassicFrDrvNg::Get_MeasureUnit() const
{
    return m_pimpl->Get_MeasureUnit();
}
void QClassicFrDrvNg::Set_DivisionalQuantity(bool value)
{
    m_pimpl->Set_DivisionalQuantity(value);
}
bool QClassicFrDrvNg::Get_DivisionalQuantity() const
{
    return m_pimpl->Get_DivisionalQuantity();
}
void QClassicFrDrvNg::Set_Numerator(quint64 value)
{
    m_pimpl->Set_Numerator(value);
}
quint64 QClassicFrDrvNg::Get_Numerator() const
{
    return m_pimpl->Get_Numerator();
}
void QClassicFrDrvNg::Set_Denominator(quint64 value)
{
    m_pimpl->Set_Denominator(value);
}
quint64 QClassicFrDrvNg::Get_Denominator() const
{
    return m_pimpl->Get_Denominator();
}
int QClassicFrDrvNg::Get_FreeMemorySize() const
{
    return m_pimpl->Get_FreeMemorySize();
}
void QClassicFrDrvNg::Set_FreeMemorySize(int value)
{
    m_pimpl->Set_FreeMemorySize(value);
}
int QClassicFrDrvNg::Get_MCCheckStatus() const
{
    return m_pimpl->Get_MCCheckStatus();
}
void QClassicFrDrvNg::Set_MCCheckStatus(int value)
{
    m_pimpl->Set_MCCheckStatus(value);
}
int QClassicFrDrvNg::Get_MCNotificationStatus() const
{
    return m_pimpl->Get_MCNotificationStatus();
}
void QClassicFrDrvNg::Set_MCNotificationStatus(int value)
{
    m_pimpl->Set_MCNotificationStatus(value);
}
int QClassicFrDrvNg::Get_MCCommandFlags() const
{
    return m_pimpl->Get_MCCommandFlags();
}
void QClassicFrDrvNg::Set_MCCommandFlags(int value)
{
    m_pimpl->Set_MCCommandFlags(value);
}
int QClassicFrDrvNg::Get_MCCheckResultSavedCount() const
{
    return m_pimpl->Get_MCCheckResultSavedCount();
}
void QClassicFrDrvNg::Set_MCCheckResultSavedCount(int value)
{
    m_pimpl->Set_MCCheckResultSavedCount(value);
}
int QClassicFrDrvNg::Get_MCRealizationCount() const
{
    return m_pimpl->Get_MCRealizationCount();
}
void QClassicFrDrvNg::Set_MCRealizationCount(int value)
{
    m_pimpl->Set_MCRealizationCount(value);
}
int QClassicFrDrvNg::Get_MCStorageSize() const
{
    return m_pimpl->Get_MCStorageSize();
}
void QClassicFrDrvNg::Set_MCStorageSize(int value)
{
    m_pimpl->Set_MCStorageSize(value);
}
quint64 QClassicFrDrvNg::Get_CheckSum() const
{
    return m_pimpl->Get_CheckSum();
}
void QClassicFrDrvNg::Set_CheckSum(quint64 value)
{
    m_pimpl->Set_CheckSum(value);
}
int QClassicFrDrvNg::Get_NotificationCount() const
{
    return m_pimpl->Get_NotificationCount();
}
void QClassicFrDrvNg::Set_NotificationCount(int value)
{
    m_pimpl->Set_NotificationCount(value);
}
qint64 QClassicFrDrvNg::Get_NotificationNumber() const
{
    return m_pimpl->Get_NotificationNumber();
}
void QClassicFrDrvNg::Set_NotificationNumber(int64_t value)
{
    m_pimpl->Set_NotificationNumber(value);
}
int QClassicFrDrvNg::Get_NotificationSize() const
{
    return m_pimpl->Get_NotificationSize();
}
void QClassicFrDrvNg::Set_NotificationSize(int value)
{
    m_pimpl->Set_NotificationSize(value);
}
int QClassicFrDrvNg::Get_DataOffset() const
{
    return m_pimpl->Get_DataOffset();
}
void QClassicFrDrvNg::Set_DataOffset(int value)
{
    m_pimpl->Set_DataOffset(value);
}
void QClassicFrDrvNg::Set_MarkingType2(int value)
{
    m_pimpl->Set_MarkingType2(value);
}
int QClassicFrDrvNg::Get_MarkingType2() const
{
    return m_pimpl->Get_MarkingType2();
}
QByteArray QClassicFrDrvNg::Get_RandomSequence() const
{
    auto value = m_pimpl->Get_RandomSequence();
    return QByteArray(reinterpret_cast<const char*>(value.data()), value.size());
}
void QClassicFrDrvNg::Set_RandomSequence(const QByteArray& value)
{
    m_pimpl->Set_RandomSequence(std::vector<uint8_t>(value.begin(), value.end()));
}
QString QClassicFrDrvNg::Get_RandomSequenceHex() const
{
    return QString::fromStdString(m_pimpl->Get_RandomSequenceHex());
}
void QClassicFrDrvNg::Set_RandomSequenceHex(const QString value)
{
    m_pimpl->Set_RandomSequenceHex(value.toStdString());
}
QByteArray QClassicFrDrvNg::Get_AuthData() const
{
    auto value = m_pimpl->Get_AuthData();
    return QByteArray(reinterpret_cast<const char*>(value.data()), value.size());
}
void QClassicFrDrvNg::Set_AuthData(const QByteArray& value)
{
    m_pimpl->Set_AuthData(std::vector<uint8_t>(value.begin(), value.end()));
}
void QClassicFrDrvNg::Set_ItemStatus(int value)
{
    m_pimpl->Set_ItemStatus(value);
}
int QClassicFrDrvNg::Get_ItemStatus() const
{
    return m_pimpl->Get_ItemStatus();
}
void QClassicFrDrvNg::Set_CheckItemMode(int value)
{
    m_pimpl->Set_CheckItemMode(value);
}
int QClassicFrDrvNg::Get_CheckItemMode() const
{
    return m_pimpl->Get_CheckItemMode();
}
void QClassicFrDrvNg::Set_CheckItemLocalResult(int value)
{
    m_pimpl->Set_CheckItemLocalResult(value);
}
int QClassicFrDrvNg::Get_CheckItemLocalResult() const
{
    return m_pimpl->Get_CheckItemLocalResult();
}
void QClassicFrDrvNg::Set_KMServerErrorCode(int value)
{
    m_pimpl->Set_KMServerErrorCode(value);
}
int QClassicFrDrvNg::Get_KMServerErrorCode() const
{
    return m_pimpl->Get_KMServerErrorCode();
}
void QClassicFrDrvNg::Set_KMServerCheckingStatus(int value)
{
    m_pimpl->Set_KMServerCheckingStatus(value);
}
int QClassicFrDrvNg::Get_KMServerCheckingStatus() const
{
    return m_pimpl->Get_KMServerCheckingStatus();
}

void QClassicFrDrvNg::onClassicPropertyChanged(const std::string& name)
{
    auto propId = metaObject()->indexOfProperty(name.c_str());
    auto prop = metaObject()->property(propId);
    const char* propTypeName;
    if (prop.isEnumType()) {
        propTypeName = prop.enumerator().enumName();
    } else {
        propTypeName = prop.typeName();
    }
    auto value = property(name.c_str());
    auto ret = QMetaObject::invokeMethod(this, (name + "Changed").data(), Qt::DirectConnection, QGenericArgument(propTypeName, static_cast<const void*>(&value)));
    if (ret) {
        emit propertyValueChanged(QString::fromStdString(name), value);
    } else {
        qWarning() << "unable to emit changedSignal";
    }
}

QClassicFrDrvNg::QClassicFrDrvNg(QString name, QObject* parent)
    : QObject(parent)
    , m_pimpl(std::make_unique<classic_interface>(name.toStdString()))
{
    m_pimpl->setPropertyChangedCallback(std::bind(&QClassicFrDrvNg::onClassicPropertyChanged, this, std::placeholders::_1));
}

QClassicFrDrvNg::QClassicFrDrvNg(QObject* parent)
    : QObject(parent)
    , m_pimpl(std::make_unique<classic_interface>())
{
    m_pimpl->setPropertyChangedCallback(std::bind(&QClassicFrDrvNg::onClassicPropertyChanged, this, std::placeholders::_1));
}

QClassicFrDrvNg::~QClassicFrDrvNg()
{
}

int QClassicFrDrvNg::Get_DeviceFunctionNumber() const
{
    return m_pimpl->Get_DeviceFunctionNumber();
}

int QClassicFrDrvNg::Get_ValueOfFunctionInteger() const
{
    return m_pimpl->Get_ValueOfFunctionInteger();
}

QString QClassicFrDrvNg::Get_ValueOfFunctionString() const
{
    return QString::fromStdString(m_pimpl->Get_ValueOfFunctionString());
}

bool QClassicFrDrvNg::Get_EnableCashcoreMarkCompatibility() const
{
    return m_pimpl->Get_EnableCashcoreMarkCompatibility();
}

void QClassicFrDrvNg::Set_UserAttributeName(QString value)
{
    m_pimpl->Set_UserAttributeName(value.toStdString());
}
QString QClassicFrDrvNg::Get_UserAttributeName() const
{
    auto value = m_pimpl->Get_UserAttributeName();
    return QString::fromStdString(value);
}

void QClassicFrDrvNg::Set_UserAttributeValue(QString value)
{
    m_pimpl->Set_UserAttributeValue(value.toStdString());
}
QString QClassicFrDrvNg::Get_UserAttributeValue() const
{
    auto value = m_pimpl->Get_UserAttributeValue();
    return QString::fromStdString(value);
}
int QClassicFrDrvNg::FNSendUserAttribute()
{
    return m_pimpl->FNSendUserAttribute();
}

void QClassicFrDrvNg::Set_WaitForPrintingTimeout(qint64 value)
{
    m_pimpl->Set_WaitForPrintingTimeout(value);
}
qint64 QClassicFrDrvNg::Get_WaitForPrintingTimeout() const
{
    return m_pimpl->Get_WaitForPrintingTimeout();
}

void QClassicFrDrvNg::Set_DeclarativeInput(QString value)
{
    m_pimpl->Set_DeclarativeInput(value.toStdString());
}
QString QClassicFrDrvNg::Get_DeclarativeInput() const
{
    auto value = m_pimpl->Get_DeclarativeInput();
    return QString::fromStdString(value);
}

void QClassicFrDrvNg::Set_DeclarativeOutput(QString value)
{
    m_pimpl->Set_DeclarativeOutput(value.toStdString());
}
QString QClassicFrDrvNg::Get_DeclarativeOutput() const
{
    auto value = m_pimpl->Get_DeclarativeOutput();
    return QString::fromStdString(value);
}

void QClassicFrDrvNg::Set_DeclarativeEndpointPath(QString value)
{
    m_pimpl->Set_DeclarativeEndpointPath(value.toStdString());
}
QString QClassicFrDrvNg::Get_DeclarativeEndpointPath() const
{
    auto value = m_pimpl->Get_DeclarativeEndpointPath();
    return QString::fromStdString(value);
}
int QClassicFrDrvNg::RenderDeclarativeDocument()
{
    return m_pimpl->RenderDeclarativeDocument();
}

QString QClassicFrDrvNg::Get_DataBlockHex() const
{
    auto value = m_pimpl->Get_DataBlockHex();
    return QString::fromStdString(value);
}
int QClassicFrDrvNg::LoadFont()
{
    return m_pimpl->LoadFont();
}
int QClassicFrDrvNg::ReadFontHash()
{
    return m_pimpl->ReadFontHash();
}
int QClassicFrDrvNg::ResetFont()
{
    return m_pimpl->ResetFont();
}

QString QClassicFrDrvNg::Get_FontHashHex() const
{
    auto value = m_pimpl->Get_FontHashHex();
    return QString::fromStdString(value);
}
int QClassicFrDrvNg::LoadFontSymbol()
{
    return m_pimpl->LoadFontSymbol();
}
int QClassicFrDrvNg::DecodeTLVData()
{
    return m_pimpl->DecodeTLVData();
}

void QClassicFrDrvNg::Set_MCOSUSign(bool value)
{
    m_pimpl->Set_MCOSUSign(value);
}
bool QClassicFrDrvNg::Get_MCOSUSign() const
{
    return m_pimpl->Get_MCOSUSign();
}
int QClassicFrDrvNg::FNGetImplementation()
{
    return m_pimpl->FNGetImplementation();
}
int QClassicFrDrvNg::FNGetOSUSupportStatus()
{
    return m_pimpl->FNGetOSUSupportStatus();
}
int QClassicFrDrvNg::FNGetDocumentSize()
{
    return m_pimpl->FNGetDocumentSize();
}

void QClassicFrDrvNg::Set_DocumentSize(int value)
{
    m_pimpl->Set_DocumentSize(value);
}
int QClassicFrDrvNg::Get_DocumentSize() const
{
    return m_pimpl->Get_DocumentSize();
}

void QClassicFrDrvNg::Set_FNImplementation(QString value)
{
    m_pimpl->Set_FNImplementation(value.toStdString());
}
QString QClassicFrDrvNg::Get_FNImplementation() const
{
    auto value = m_pimpl->Get_FNImplementation();
    return QString::fromStdString(value);
}

void QClassicFrDrvNg::Set_FNOSUSupportStatus(int value)
{
    m_pimpl->Set_FNOSUSupportStatus(value);
}
int QClassicFrDrvNg::Get_FNOSUSupportStatus() const
{
    return m_pimpl->Get_FNOSUSupportStatus();
}
int QClassicFrDrvNg::FNReadFiscalBarcode()
{
    return m_pimpl->FNReadFiscalBarcode();
}
int QClassicFrDrvNg::PrintStringWithWrap()
{
    return m_pimpl->PrintStringWithWrap();
}
