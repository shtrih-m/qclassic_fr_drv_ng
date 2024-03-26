#ifndef QCLASSIC_INTERFACE_H
#define QCLASSIC_INTERFACE_H
#include <QByteArray>
#include <QDateTime>
#include <QObject>
#include <QString>
#include <QVariant>
#include <memory>

#if defined _WIN32 || defined __CYGWIN__
#define QCLASSIC_FR_DRV_NG_HELPER_DLL_IMPORT __declspec(dllimport)
#define QCLASSIC_FR_DRV_NG_HELPER_DLL_EXPORT __declspec(dllexport)
#define QCLASSIC_FR_DRV_NG_HELPER_DLL_LOCAL
#else
#if __GNUC__ >= 4
#define QCLASSIC_FR_DRV_NG_HELPER_DLL_IMPORT __attribute__((visibility("default")))
#define QCLASSIC_FR_DRV_NG_HELPER_DLL_EXPORT __attribute__((visibility("default")))
#define QCLASSIC_FR_DRV_NG_HELPER_DLL_LOCAL __attribute__((visibility("hidden")))
#else
#define QCLASSIC_FR_DRV_NG_HELPER_DLL_IMPORT
#define QCLASSIC_FR_DRV_NG_HELPER_DLL_EXPORT
#define QCLASSIC_FR_DRV_NG_HELPER_DLL_LOCAL
#endif
#endif

#ifdef QCLASSIC_FR_DRV_NG_DLL // defined if QCLASSIC_FR_DRV_NG is compiled as a DLL
#ifdef QCLASSIC_FR_DRV_NG_DLL_EXPORTS // defined if we are building the QCLASSIC_FR_DRV_NG DLL (instead of using it)
#define QCLASSIC_FR_DRV_NG_API QCLASSIC_FR_DRV_NG_HELPER_DLL_EXPORT
#else
#define QCLASSIC_FR_DRV_NG_API QCLASSIC_FR_DRV_NG_HELPER_DLL_IMPORT
#endif // QCLASSIC_FR_DRV_NG_DLL_EXPORTS
#define QCLASSIC_FR_DRV_NG_LOCAL QCLASSIC_FR_DRV_NG_HELPER_DLL_LOCAL
#else // QCLASSIC_FR_DRV_NG_DLL is not defined: this means QCLASSIC_FR_DRV_NG is a static lib.
#define QCLASSIC_FR_DRV_NG_API
#define QCLASSIC_FR_DRV_NG_LOCAL
#endif // QCLASSIC_FR_DRV_NG_DLL

class classic_interface;

class QCLASSIC_FR_DRV_NG_API QClassicFrDrvNg : public QObject {

    Q_OBJECT
    Q_PROPERTY(bool HasCashControlLicense READ Get_HasCashControlLicense NOTIFY HasCashControlLicenseChanged)
    Q_PROPERTY(int SwapBytesMode READ Get_SwapBytesMode WRITE Set_SwapBytesMode NOTIFY SwapBytesModeChanged)
    Q_PROPERTY(int Tax4NameFont READ Get_Tax4NameFont WRITE Set_Tax4NameFont NOTIFY Tax4NameFontChanged)
    Q_PROPERTY(QString LineData READ Get_LineData WRITE Set_LineData NOTIFY LineDataChanged)
    Q_PROPERTY(int Summ3Font READ Get_Summ3Font WRITE Set_Summ3Font NOTIFY Summ3FontChanged)
    Q_PROPERTY(int FontType READ Get_FontType WRITE Set_FontType NOTIFY FontTypeChanged)
    Q_PROPERTY(int Tax1RateFont READ Get_Tax1RateFont WRITE Set_Tax1RateFont NOTIFY Tax1RateFontChanged)
    Q_PROPERTY(QString GTIN READ Get_GTIN WRITE Set_GTIN NOTIFY GTINChanged)
    Q_PROPERTY(int Department READ Get_Department WRITE Set_Department NOTIFY DepartmentChanged)
    Q_PROPERTY(quint32 CashControlPassword READ Get_CashControlPassword WRITE Set_CashControlPassword NOTIFY CashControlPasswordChanged)
    Q_PROPERTY(QString EKLZVersion READ Get_EKLZVersion NOTIFY EKLZVersionChanged)
    Q_PROPERTY(int IBMLastBuyReceiptNumber READ Get_IBMLastBuyReceiptNumber NOTIFY IBMLastBuyReceiptNumberChanged)
    Q_PROPERTY(int DepartmentSymbolNumber READ Get_DepartmentSymbolNumber WRITE Set_DepartmentSymbolNumber NOTIFY DepartmentSymbolNumberChanged)
    Q_PROPERTY(int Summ3StringNumber READ Get_Summ3StringNumber WRITE Set_Summ3StringNumber NOTIFY Summ3StringNumberChanged)
    Q_PROPERTY(int MaxENQSendCount READ Get_MaxENQSendCount WRITE Set_MaxENQSendCount NOTIFY MaxENQSendCountChanged)
    Q_PROPERTY(int Summ4Font READ Get_Summ4Font WRITE Set_Summ4Font NOTIFY Summ4FontChanged)
    Q_PROPERTY(int Tax4SumStringNumber READ Get_Tax4SumStringNumber WRITE Set_Tax4SumStringNumber NOTIFY Tax4SumStringNumberChanged)
    Q_PROPERTY(QString TimeStr READ Get_TimeStr WRITE Set_TimeStr NOTIFY TimeStrChanged)
    Q_PROPERTY(QDateTime ECRSoftDate READ Get_ECRSoftDate NOTIFY ECRSoftDateChanged)
    Q_PROPERTY(QString TagValueStr READ Get_TagValueStr WRITE Set_TagValueStr NOTIFY TagValueStrChanged)
    Q_PROPERTY(int ChangeSumFont READ Get_ChangeSumFont WRITE Set_ChangeSumFont NOTIFY ChangeSumFontChanged)
    Q_PROPERTY(int DataLength READ Get_DataLength WRITE Set_DataLength NOTIFY DataLengthChanged)
    Q_PROPERTY(QString LDEscapeIP READ Get_LDEscapeIP WRITE Set_LDEscapeIP NOTIFY LDEscapeIPChanged)
    Q_PROPERTY(int OPBarcodeInputType READ Get_OPBarcodeInputType WRITE Set_OPBarcodeInputType NOTIFY OPBarcodeInputTypeChanged)
    Q_PROPERTY(int SubTotalFont READ Get_SubTotalFont WRITE Set_SubTotalFont NOTIFY SubTotalFontChanged)
    Q_PROPERTY(int StringNumber READ Get_StringNumber WRITE Set_StringNumber NOTIFY StringNumberChanged)
    Q_PROPERTY(int LDNumber READ Get_LDNumber WRITE Set_LDNumber NOTIFY LDNumberChanged)
    Q_PROPERTY(QString FiscalSignAsString READ Get_FiscalSignAsString NOTIFY FiscalSignAsStringChanged)
    Q_PROPERTY(int Tax3TurnOverOffset READ Get_Tax3TurnOverOffset WRITE Set_Tax3TurnOverOffset NOTIFY Tax3TurnOverOffsetChanged)
    Q_PROPERTY(int ModelIndex READ Get_ModelIndex WRITE Set_ModelIndex NOTIFY ModelIndexChanged)
    Q_PROPERTY(int Summ2StringNumber READ Get_Summ2StringNumber WRITE Set_Summ2StringNumber NOTIFY Summ2StringNumberChanged)
    Q_PROPERTY(bool UseJournalRibbon READ Get_UseJournalRibbon WRITE Set_UseJournalRibbon NOTIFY UseJournalRibbonChanged)
    Q_PROPERTY(bool TaxValue1Enabled READ Get_TaxValue1Enabled WRITE Set_TaxValue1Enabled NOTIFY TaxValue1EnabledChanged)
    Q_PROPERTY(int ReadByte READ Get_ReadByte NOTIFY ReadByteChanged)
    Q_PROPERTY(bool ccUseTextAsWareName READ Get_ccUseTextAsWareName WRITE Set_ccUseTextAsWareName NOTIFY ccUseTextAsWareNameChanged)
    Q_PROPERTY(int EKLZOffset READ Get_EKLZOffset WRITE Set_EKLZOffset NOTIFY EKLZOffsetChanged)
    Q_PROPERTY(int PaymentItemSign READ Get_PaymentItemSign WRITE Set_PaymentItemSign NOTIFY PaymentItemSignChanged)
    Q_PROPERTY(int TestNumber READ Get_TestNumber WRITE Set_TestNumber NOTIFY TestNumberChanged)
    Q_PROPERTY(int Tax1TurnOverStringNumber READ Get_Tax1TurnOverStringNumber WRITE Set_Tax1TurnOverStringNumber NOTIFY Tax1TurnOverStringNumberChanged)
    Q_PROPERTY(QString CashControlPort READ Get_CashControlPort WRITE Set_CashControlPort NOTIFY CashControlPortChanged)
    Q_PROPERTY(int DelayOnDisconnect READ Get_DelayOnDisconnect WRITE Set_DelayOnDisconnect NOTIFY DelayOnDisconnectChanged)
    Q_PROPERTY(QString KPKStr READ Get_KPKStr NOTIFY KPKStrChanged)
    Q_PROPERTY(int Tax2NameOffset READ Get_Tax2NameOffset WRITE Set_Tax2NameOffset NOTIFY Tax2NameOffsetChanged)
    Q_PROPERTY(QString TransferBytes READ Get_TransferBytes WRITE Set_TransferBytes NOTIFY TransferBytesChanged)
    Q_PROPERTY(QString KSAInfo READ Get_KSAInfo WRITE Set_KSAInfo NOTIFY KSAInfoChanged)
    Q_PROPERTY(qint64 CurrentDozeInMoney READ Get_CurrentDozeInMoney WRITE Set_CurrentDozeInMoney NOTIFY CurrentDozeInMoneyChanged)
    Q_PROPERTY(QDateTime Date2 READ Get_Date2 WRITE Set_Date2 NOTIFY Date2Changed)
    Q_PROPERTY(int ModelParamCount READ Get_ModelParamCount NOTIFY ModelParamCountChanged)
    Q_PROPERTY(int OPTransactionType READ Get_OPTransactionType WRITE Set_OPTransactionType NOTIFY OPTransactionTypeChanged)
    Q_PROPERTY(int LicenseNumber READ Get_LicenseNumber WRITE Set_LicenseNumber NOTIFY LicenseNumberChanged)
    Q_PROPERTY(quint64 TagValueInt READ Get_TagValueInt WRITE Set_TagValueInt NOTIFY TagValueIntChanged)
    Q_PROPERTY(qint64 Summ7 READ Get_Summ7 WRITE Set_Summ7 NOTIFY Summ7Changed)
    Q_PROPERTY(qint64 Summ6 READ Get_Summ6 WRITE Set_Summ6 NOTIFY Summ6Changed)
    Q_PROPERTY(qint64 Summ5 READ Get_Summ5 WRITE Set_Summ5 NOTIFY Summ5Changed)
    Q_PROPERTY(qint64 Summ4 READ Get_Summ4 WRITE Set_Summ4 NOTIFY Summ4Changed)
    Q_PROPERTY(qint64 Summ3 READ Get_Summ3 WRITE Set_Summ3 NOTIFY Summ3Changed)
    Q_PROPERTY(qint64 Summ2 READ Get_Summ2 WRITE Set_Summ2 NOTIFY Summ2Changed)
    Q_PROPERTY(qint64 Summ1 READ Get_Summ1 WRITE Set_Summ1 NOTIFY Summ1Changed)
    Q_PROPERTY(int BlockNumber READ Get_BlockNumber WRITE Set_BlockNumber NOTIFY BlockNumberChanged)
    Q_PROPERTY(int Tax1TurnOverFont READ Get_Tax1TurnOverFont WRITE Set_Tax1TurnOverFont NOTIFY Tax1TurnOverFontChanged)
    Q_PROPERTY(qint64 Summ9 READ Get_Summ9 WRITE Set_Summ9 NOTIFY Summ9Changed)
    Q_PROPERTY(qint64 Summ8 READ Get_Summ8 WRITE Set_Summ8 NOTIFY Summ8Changed)
    Q_PROPERTY(int Tax2TurnOverOffset READ Get_Tax2TurnOverOffset WRITE Set_Tax2TurnOverOffset NOTIFY Tax2TurnOverOffsetChanged)
    Q_PROPERTY(int ECRModeStatus READ Get_ECRModeStatus NOTIFY ECRModeStatusChanged)
    Q_PROPERTY(int Summ3NameOffset READ Get_Summ3NameOffset WRITE Set_Summ3NameOffset NOTIFY Summ3NameOffsetChanged)
    Q_PROPERTY(QString TableName READ Get_TableName NOTIFY TableNameChanged)
    Q_PROPERTY(QString StatusRKDescription READ Get_StatusRKDescription NOTIFY StatusRKDescriptionChanged)
    Q_PROPERTY(QString FMSoftVersion READ Get_FMSoftVersion NOTIFY FMSoftVersionChanged)
    Q_PROPERTY(int ResultCode READ Get_ResultCode NOTIFY ResultCodeChanged)
    Q_PROPERTY(qint64 TaxValue READ Get_TaxValue WRITE Set_TaxValue NOTIFY TaxValueChanged)
    Q_PROPERTY(int Tax2RateFont READ Get_Tax2RateFont WRITE Set_Tax2RateFont NOTIFY Tax2RateFontChanged)
    Q_PROPERTY(bool CloudCashdeskEnabled READ Get_CloudCashdeskEnabled WRITE Set_CloudCashdeskEnabled NOTIFY CloudCashdeskEnabledChanged)
    Q_PROPERTY(int CommandTimeout READ Get_CommandTimeout WRITE Set_CommandTimeout NOTIFY CommandTimeoutChanged)
    Q_PROPERTY(bool UseReceiptRibbon READ Get_UseReceiptRibbon WRITE Set_UseReceiptRibbon NOTIFY UseReceiptRibbonChanged)
    Q_PROPERTY(QString KKTRegistrationNumber READ Get_KKTRegistrationNumber WRITE Set_KKTRegistrationNumber NOTIFY KKTRegistrationNumberChanged)
    Q_PROPERTY(QString Summ1AsString READ Get_Summ1AsString NOTIFY Summ1AsStringChanged)
    Q_PROPERTY(QString OPIdPayment READ Get_OPIdPayment WRITE Set_OPIdPayment NOTIFY OPIdPaymentChanged)
    Q_PROPERTY(int TextOffset READ Get_TextOffset WRITE Set_TextOffset NOTIFY TextOffsetChanged)
    Q_PROPERTY(bool CashControlUseTCP READ Get_CashControlUseTCP WRITE Set_CashControlUseTCP NOTIFY CashControlUseTCPChanged)
    Q_PROPERTY(int OPRequisiteNumber READ Get_OPRequisiteNumber WRITE Set_OPRequisiteNumber NOTIFY OPRequisiteNumberChanged)
    Q_PROPERTY(bool ReportType READ Get_ReportType WRITE Set_ReportType NOTIFY ReportTypeChanged)
    Q_PROPERTY(int IBMSessionMin READ Get_IBMSessionMin NOTIFY IBMSessionMinChanged)
    Q_PROPERTY(int PrintBufferFormat READ Get_PrintBufferFormat WRITE Set_PrintBufferFormat NOTIFY PrintBufferFormatChanged)
    Q_PROPERTY(double BatteryVoltage READ Get_BatteryVoltage NOTIFY BatteryVoltageChanged)
    Q_PROPERTY(QByteArray BlockData READ Get_BlockData WRITE Set_BlockData NOTIFY BlockDataChanged)
    Q_PROPERTY(int Tax2SumFont READ Get_Tax2SumFont WRITE Set_Tax2SumFont NOTIFY Tax2SumFontChanged)
    Q_PROPERTY(int ContentsOfOperationRegister READ Get_ContentsOfOperationRegister NOTIFY ContentsOfOperationRegisterChanged)
    Q_PROPERTY(int PayDepartment READ Get_PayDepartment WRITE Set_PayDepartment NOTIFY PayDepartmentChanged)
    Q_PROPERTY(int QuantityOffset READ Get_QuantityOffset WRITE Set_QuantityOffset NOTIFY QuantityOffsetChanged)
    Q_PROPERTY(QString INN READ Get_INN WRITE Set_INN NOTIFY INNChanged)
    Q_PROPERTY(TBarcodeAlignment BarcodeAlignment READ Get_BarcodeAlignment WRITE Set_BarcodeAlignment NOTIFY BarcodeAlignmentChanged)
    Q_PROPERTY(int ccHeaderLineCount READ Get_ccHeaderLineCount WRITE Set_ccHeaderLineCount NOTIFY ccHeaderLineCountChanged)
    Q_PROPERTY(bool Motor READ Get_Motor NOTIFY MotorChanged)
    Q_PROPERTY(bool Summ1Enabled READ Get_Summ1Enabled WRITE Set_Summ1Enabled NOTIFY Summ1EnabledChanged)
    Q_PROPERTY(int FreeRegistration READ Get_FreeRegistration NOTIFY FreeRegistrationChanged)
    Q_PROPERTY(int TotalFont READ Get_TotalFont WRITE Set_TotalFont NOTIFY TotalFontChanged)
    Q_PROPERTY(bool UseTaxDiscountBel READ Get_UseTaxDiscountBel WRITE Set_UseTaxDiscountBel NOTIFY UseTaxDiscountBelChanged)
    Q_PROPERTY(bool IsPrinterRightSensorFailure READ Get_IsPrinterRightSensorFailure NOTIFY IsPrinterRightSensorFailureChanged)
    Q_PROPERTY(QString FiscalSignOFD READ Get_FiscalSignOFD WRITE Set_FiscalSignOFD NOTIFY FiscalSignOFDChanged)
    Q_PROPERTY(bool ShowProgress READ Get_ShowProgress WRITE Set_ShowProgress NOTIFY ShowProgressChanged)
    Q_PROPERTY(QString BarCode READ Get_BarCode WRITE Set_BarCode NOTIFY BarCodeChanged)
    Q_PROPERTY(bool PortLocked READ Get_PortLocked NOTIFY PortLockedChanged)
    Q_PROPERTY(int ChangeSumOffset READ Get_ChangeSumOffset WRITE Set_ChangeSumOffset NOTIFY ChangeSumOffsetChanged)
    Q_PROPERTY(int Tax2NameSymbolNumber READ Get_Tax2NameSymbolNumber WRITE Set_Tax2NameSymbolNumber NOTIFY Tax2NameSymbolNumberChanged)
    Q_PROPERTY(int RunningPeriod READ Get_RunningPeriod WRITE Set_RunningPeriod NOTIFY RunningPeriodChanged)
    Q_PROPERTY(int Summ1NameOffset READ Get_Summ1NameOffset WRITE Set_Summ1NameOffset NOTIFY Summ1NameOffsetChanged)
    Q_PROPERTY(int OFDReadTimeout READ Get_OFDReadTimeout WRITE Set_OFDReadTimeout NOTIFY OFDReadTimeoutChanged)
    Q_PROPERTY(int BlockType READ Get_BlockType WRITE Set_BlockType NOTIFY BlockTypeChanged)
    Q_PROPERTY(int CommandCount READ Get_CommandCount NOTIFY CommandCountChanged)
    Q_PROPERTY(QString LDIPAddress READ Get_LDIPAddress WRITE Set_LDIPAddress NOTIFY LDIPAddressChanged)
    Q_PROPERTY(int VertScale READ Get_VertScale WRITE Set_VertScale NOTIFY VertScaleChanged)
    Q_PROPERTY(int MINValueOfField READ Get_MINValueOfField NOTIFY MINValueOfFieldChanged)
    Q_PROPERTY(int TotalStringNumber READ Get_TotalStringNumber WRITE Set_TotalStringNumber NOTIFY TotalStringNumberChanged)
    Q_PROPERTY(int CheckType READ Get_CheckType WRITE Set_CheckType NOTIFY CheckTypeChanged)
    Q_PROPERTY(bool JournalRibbonOpticalSensor READ Get_JournalRibbonOpticalSensor NOTIFY JournalRibbonOpticalSensorChanged)
    Q_PROPERTY(QString StringForPrinting READ Get_StringForPrinting WRITE Set_StringForPrinting NOTIFY StringForPrintingChanged)
    Q_PROPERTY(int Tax1TurnOverOffset READ Get_Tax1TurnOverOffset WRITE Set_Tax1TurnOverOffset NOTIFY Tax1TurnOverOffsetChanged)
    Q_PROPERTY(int CustomerCode READ Get_CustomerCode WRITE Set_CustomerCode NOTIFY CustomerCodeChanged)
    Q_PROPERTY(int TotalOffset READ Get_TotalOffset WRITE Set_TotalOffset NOTIFY TotalOffsetChanged)
    Q_PROPERTY(bool TaxValue5Enabled READ Get_TaxValue5Enabled WRITE Set_TaxValue5Enabled NOTIFY TaxValue5EnabledChanged)
    Q_PROPERTY(int Tax3RateSymbolNumber READ Get_Tax3RateSymbolNumber WRITE Set_Tax3RateSymbolNumber NOTIFY Tax3RateSymbolNumberChanged)
    Q_PROPERTY(bool UseIPAddress READ Get_UseIPAddress WRITE Set_UseIPAddress NOTIFY UseIPAddressChanged)
    Q_PROPERTY(int LineLength READ Get_LineLength WRITE Set_LineLength NOTIFY LineLengthChanged)
    Q_PROPERTY(quint32 NewPasswordTI READ Get_NewPasswordTI WRITE Set_NewPasswordTI NOTIFY NewPasswordTIChanged)
    Q_PROPERTY(bool TaxValue3Enabled READ Get_TaxValue3Enabled WRITE Set_TaxValue3Enabled NOTIFY TaxValue3EnabledChanged)
    Q_PROPERTY(QString PropertyName READ Get_PropertyName WRITE Set_PropertyName NOTIFY PropertyNameChanged)
    Q_PROPERTY(int DocumentType READ Get_DocumentType WRITE Set_DocumentType NOTIFY DocumentTypeChanged)
    Q_PROPERTY(QString CommandName READ Get_CommandName NOTIFY CommandNameChanged)
    Q_PROPERTY(int PrinterStatus READ Get_PrinterStatus NOTIFY PrinterStatusChanged)
    Q_PROPERTY(int KPKFont READ Get_KPKFont WRITE Set_KPKFont NOTIFY KPKFontChanged)
    Q_PROPERTY(int RegistrationNumber READ Get_RegistrationNumber WRITE Set_RegistrationNumber NOTIFY RegistrationNumberChanged)
    Q_PROPERTY(QDateTime Time READ Get_Time WRITE Set_Time NOTIFY TimeChanged)
    Q_PROPERTY(int SyncTimeout READ Get_SyncTimeout WRITE Set_SyncTimeout NOTIFY SyncTimeoutChanged)
    Q_PROPERTY(int SKNOStatus READ Get_SKNOStatus WRITE Set_SKNOStatus NOTIFY SKNOStatusChanged)
    Q_PROPERTY(double Quantity READ Get_Quantity WRITE Set_Quantity NOTIFY QuantityChanged)
    Q_PROPERTY(quint32 DriverRelease READ Get_DriverRelease NOTIFY DriverReleaseChanged)
    Q_PROPERTY(bool PresenterIn READ Get_PresenterIn NOTIFY PresenterInChanged)
    Q_PROPERTY(int ProtocolType READ Get_ProtocolType WRITE Set_ProtocolType NOTIFY ProtocolTypeChanged)
    Q_PROPERTY(QString UDescription READ Get_UDescription NOTIFY UDescriptionChanged)
    Q_PROPERTY(QString CPLogFile READ Get_CPLogFile WRITE Set_CPLogFile NOTIFY CPLogFileChanged)
    Q_PROPERTY(int Tax3SumStringNumber READ Get_Tax3SumStringNumber WRITE Set_Tax3SumStringNumber NOTIFY Tax3SumStringNumberChanged)
    Q_PROPERTY(QString TextBlock READ Get_TextBlock WRITE Set_TextBlock NOTIFY TextBlockChanged)
    Q_PROPERTY(int IBMSessionHour READ Get_IBMSessionHour NOTIFY IBMSessionHourChanged)
    Q_PROPERTY(int PingTime READ Get_PingTime WRITE Set_PingTime NOTIFY PingTimeChanged)
    Q_PROPERTY(bool CapOpenCheck READ Get_CapOpenCheck NOTIFY CapOpenCheckChanged)
    Q_PROPERTY(bool FM1IsPresent READ Get_FM1IsPresent NOTIFY FM1IsPresentChanged)
    Q_PROPERTY(int SerialNumberAsInteger READ Get_SerialNumberAsInteger NOTIFY SerialNumberAsIntegerChanged)
    Q_PROPERTY(int CharHeight READ Get_CharHeight NOTIFY CharHeightChanged)
    Q_PROPERTY(bool AutoSensorValues READ Get_AutoSensorValues WRITE Set_AutoSensorValues NOTIFY AutoSensorValuesChanged)
    Q_PROPERTY(int PrintBarcodeText READ Get_PrintBarcodeText WRITE Set_PrintBarcodeText NOTIFY PrintBarcodeTextChanged)
    Q_PROPERTY(QDateTime LastSessionDate READ Get_LastSessionDate WRITE Set_LastSessionDate NOTIFY LastSessionDateChanged)
    Q_PROPERTY(QString DocumentName READ Get_DocumentName WRITE Set_DocumentName NOTIFY DocumentNameChanged)
    Q_PROPERTY(int Tax4SumOffset READ Get_Tax4SumOffset WRITE Set_Tax4SumOffset NOTIFY Tax4SumOffsetChanged)
    Q_PROPERTY(qint64 RegSaleRec READ Get_RegSaleRec NOTIFY RegSaleRecChanged)
    Q_PROPERTY(int ChangeStringNumber READ Get_ChangeStringNumber WRITE Set_ChangeStringNumber NOTIFY ChangeStringNumberChanged)
    Q_PROPERTY(int Tax4TurnOverFont READ Get_Tax4TurnOverFont WRITE Set_Tax4TurnOverFont NOTIFY Tax4TurnOverFontChanged)
    Q_PROPERTY(int StatusRK READ Get_StatusRK NOTIFY StatusRKChanged)
    Q_PROPERTY(int ECRMode READ Get_ECRMode NOTIFY ECRModeChanged)
    Q_PROPERTY(bool IsDrawerOpen READ Get_IsDrawerOpen NOTIFY IsDrawerOpenChanged)
    Q_PROPERTY(QString ResultCodeDescription READ Get_ResultCodeDescription NOTIFY ResultCodeDescriptionChanged)
    Q_PROPERTY(int Tax4TurnOverStringNumber READ Get_Tax4TurnOverStringNumber WRITE Set_Tax4TurnOverStringNumber NOTIFY Tax4TurnOverStringNumberChanged)
    Q_PROPERTY(int Tax4NameOffset READ Get_Tax4NameOffset WRITE Set_Tax4NameOffset NOTIFY Tax4NameOffsetChanged)
    Q_PROPERTY(QByteArray TLVData READ Get_TLVData WRITE Set_TLVData NOTIFY TLVDataChanged)
    Q_PROPERTY(QString MFPNumber READ Get_MFPNumber WRITE Set_MFPNumber NOTIFY MFPNumberChanged)
    Q_PROPERTY(int QuantityOfOperations READ Get_QuantityOfOperations NOTIFY QuantityOfOperationsChanged)
    Q_PROPERTY(int SubTotalSymbolNumber READ Get_SubTotalSymbolNumber WRITE Set_SubTotalSymbolNumber NOTIFY SubTotalSymbolNumberChanged)
    Q_PROPERTY(QString DiscountName READ Get_DiscountName WRITE Set_DiscountName NOTIFY DiscountNameChanged)
    Q_PROPERTY(bool CarryStrings READ Get_CarryStrings WRITE Set_CarryStrings NOTIFY CarryStringsChanged)
    Q_PROPERTY(int Summ1Font READ Get_Summ1Font WRITE Set_Summ1Font NOTIFY Summ1FontChanged)
    Q_PROPERTY(bool BatteryCondition READ Get_BatteryCondition NOTIFY BatteryConditionChanged)
    Q_PROPERTY(int SummSymbolNumber READ Get_SummSymbolNumber WRITE Set_SummSymbolNumber NOTIFY SummSymbolNumberChanged)
    Q_PROPERTY(QString License READ Get_License WRITE Set_License NOTIFY LicenseChanged)
    Q_PROPERTY(bool JournalRibbonLever READ Get_JournalRibbonLever NOTIFY JournalRibbonLeverChanged)
    Q_PROPERTY(bool CPLog READ Get_CPLog WRITE Set_CPLog NOTIFY CPLogChanged)
    Q_PROPERTY(int SummOffset READ Get_SummOffset WRITE Set_SummOffset NOTIFY SummOffsetChanged)
    Q_PROPERTY(int Tax4RateSymbolNumber READ Get_Tax4RateSymbolNumber WRITE Set_Tax4RateSymbolNumber NOTIFY Tax4RateSymbolNumberChanged)
    Q_PROPERTY(qint64 Summ11 READ Get_Summ11 WRITE Set_Summ11 NOTIFY Summ11Changed)
    Q_PROPERTY(int CopyOffset1 READ Get_CopyOffset1 WRITE Set_CopyOffset1 NOTIFY CopyOffset1Changed)
    Q_PROPERTY(qint64 RegBuyReturnRec READ Get_RegBuyReturnRec NOTIFY RegBuyReturnRecChanged)
    Q_PROPERTY(int CopyOffset3 READ Get_CopyOffset3 WRITE Set_CopyOffset3 NOTIFY CopyOffset3Changed)
    Q_PROPERTY(int CopyOffset2 READ Get_CopyOffset2 WRITE Set_CopyOffset2 NOTIFY CopyOffset2Changed)
    Q_PROPERTY(int CopyOffset5 READ Get_CopyOffset5 WRITE Set_CopyOffset5 NOTIFY CopyOffset5Changed)
    Q_PROPERTY(int CopyOffset4 READ Get_CopyOffset4 WRITE Set_CopyOffset4 NOTIFY CopyOffset4Changed)
    Q_PROPERTY(int Tax1NameSymbolNumber READ Get_Tax1NameSymbolNumber WRITE Set_Tax1NameSymbolNumber NOTIFY Tax1NameSymbolNumberChanged)
    Q_PROPERTY(int LastFMRecordType READ Get_LastFMRecordType NOTIFY LastFMRecordTypeChanged)
    Q_PROPERTY(int BanknoteCount READ Get_BanknoteCount NOTIFY BanknoteCountChanged)
    Q_PROPERTY(bool LicenseIsPresent READ Get_LicenseIsPresent NOTIFY LicenseIsPresentChanged)
    Q_PROPERTY(int RegistrationReasonCodeEx READ Get_RegistrationReasonCodeEx WRITE Set_RegistrationReasonCodeEx NOTIFY RegistrationReasonCodeExChanged)
    Q_PROPERTY(int SubTotalStringNumber READ Get_SubTotalStringNumber WRITE Set_SubTotalStringNumber NOTIFY SubTotalStringNumberChanged)
    Q_PROPERTY(int ClicheOffset READ Get_ClicheOffset WRITE Set_ClicheOffset NOTIFY ClicheOffsetChanged)
    Q_PROPERTY(int RequestDocumentType READ Get_RequestDocumentType WRITE Set_RequestDocumentType NOTIFY RequestDocumentTypeChanged)
    Q_PROPERTY(QString NameOperationReg READ Get_NameOperationReg NOTIFY NameOperationRegChanged)
    Q_PROPERTY(int Tax3TurnOverSymbolNumber READ Get_Tax3TurnOverSymbolNumber WRITE Set_Tax3TurnOverSymbolNumber NOTIFY Tax3TurnOverSymbolNumberChanged)
    Q_PROPERTY(int BarcodeFirstLine READ Get_BarcodeFirstLine WRITE Set_BarcodeFirstLine NOTIFY BarcodeFirstLineChanged)
    Q_PROPERTY(bool LidPositionSensor READ Get_LidPositionSensor NOTIFY LidPositionSensorChanged)
    Q_PROPERTY(int TransmitDocumentNumber READ Get_TransmitDocumentNumber NOTIFY TransmitDocumentNumberChanged)
    Q_PROPERTY(int LogMaxFileSize READ Get_LogMaxFileSize WRITE Set_LogMaxFileSize NOTIFY LogMaxFileSizeChanged)
    Q_PROPERTY(bool IsBlockedByWrongTaxPassword READ Get_IsBlockedByWrongTaxPassword NOTIFY IsBlockedByWrongTaxPasswordChanged)
    Q_PROPERTY(bool FMOverflow READ Get_FMOverflow NOTIFY FMOverflowChanged)
    Q_PROPERTY(QString NameCashReg READ Get_NameCashReg NOTIFY NameCashRegChanged)
    Q_PROPERTY(int ComNumber READ Get_ComNumber WRITE Set_ComNumber NOTIFY ComNumberChanged)
    Q_PROPERTY(int TCPConnectionTimeout READ Get_TCPConnectionTimeout WRITE Set_TCPConnectionTimeout NOTIFY TCPConnectionTimeoutChanged)
    Q_PROPERTY(qint64 TaxValue3 READ Get_TaxValue3 WRITE Set_TaxValue3 NOTIFY TaxValue3Changed)
    Q_PROPERTY(int Tax1RateOffset READ Get_Tax1RateOffset WRITE Set_Tax1RateOffset NOTIFY Tax1RateOffsetChanged)
    Q_PROPERTY(int ECRAdvancedMode READ Get_ECRAdvancedMode NOTIFY ECRAdvancedModeChanged)
    Q_PROPERTY(int Tax3NameSymbolNumber READ Get_Tax3NameSymbolNumber WRITE Set_Tax3NameSymbolNumber NOTIFY Tax3NameSymbolNumberChanged)
    Q_PROPERTY(bool IsClearUnfiscalInfo READ Get_IsClearUnfiscalInfo WRITE Set_IsClearUnfiscalInfo NOTIFY IsClearUnfiscalInfoChanged)
    Q_PROPERTY(bool EKLZIsPresent READ Get_EKLZIsPresent NOTIFY EKLZIsPresentChanged)
    Q_PROPERTY(int ReceiptOutputType READ Get_ReceiptOutputType WRITE Set_ReceiptOutputType NOTIFY ReceiptOutputTypeChanged)
    Q_PROPERTY(int BarcodeStartBlockNumber READ Get_BarcodeStartBlockNumber WRITE Set_BarcodeStartBlockNumber NOTIFY BarcodeStartBlockNumberChanged)
    Q_PROPERTY(int FontCount READ Get_FontCount NOTIFY FontCountChanged)
    Q_PROPERTY(int ParamsPageIndex READ Get_ParamsPageIndex WRITE Set_ParamsPageIndex NOTIFY ParamsPageIndexChanged)
    Q_PROPERTY(int LDComNumber READ Get_LDComNumber WRITE Set_LDComNumber NOTIFY LDComNumberChanged)
    Q_PROPERTY(QString INNOFD READ Get_INNOFD WRITE Set_INNOFD NOTIFY INNOFDChanged)
    Q_PROPERTY(TFinishDocumentMode FinishDocumentMode READ Get_FinishDocumentMode WRITE Set_FinishDocumentMode NOTIFY FinishDocumentModeChanged)
    Q_PROPERTY(int LDTCPPort READ Get_LDTCPPort WRITE Set_LDTCPPort NOTIFY LDTCPPortChanged)
    Q_PROPERTY(int RoundingSumm READ Get_RoundingSumm WRITE Set_RoundingSumm NOTIFY RoundingSummChanged)
    Q_PROPERTY(int OperationCode READ Get_OperationCode NOTIFY OperationCodeChanged)
    Q_PROPERTY(int FMFlagsEx READ Get_FMFlagsEx NOTIFY FMFlagsExChanged)
    Q_PROPERTY(int ActivizationControlByte READ Get_ActivizationControlByte WRITE Set_ActivizationControlByte NOTIFY ActivizationControlByteChanged)
    Q_PROPERTY(QString URL READ Get_URL WRITE Set_URL NOTIFY URLChanged)
    Q_PROPERTY(int UMajorProtocolVersion READ Get_UMajorProtocolVersion NOTIFY UMajorProtocolVersionChanged)
    Q_PROPERTY(int TagValueLength READ Get_TagValueLength WRITE Set_TagValueLength NOTIFY TagValueLengthChanged)
    Q_PROPERTY(bool FM2IsPresent READ Get_FM2IsPresent NOTIFY FM2IsPresentChanged)
    Q_PROPERTY(int DiscountOnCheckSymbolNumber READ Get_DiscountOnCheckSymbolNumber WRITE Set_DiscountOnCheckSymbolNumber NOTIFY DiscountOnCheckSymbolNumberChanged)
    Q_PROPERTY(int WorkModeEx READ Get_WorkModeEx WRITE Set_WorkModeEx NOTIFY WorkModeExChanged)
    Q_PROPERTY(double TagValueFVLN READ Get_TagValueFVLN WRITE Set_TagValueFVLN NOTIFY TagValueFVLNChanged)
    Q_PROPERTY(int SearchTimeout READ Get_SearchTimeout WRITE Set_SearchTimeout NOTIFY SearchTimeoutChanged)
    Q_PROPERTY(qint64 RegBuyReturnSession READ Get_RegBuyReturnSession NOTIFY RegBuyReturnSessionChanged)
    Q_PROPERTY(int MaxRecoverCount READ Get_MaxRecoverCount WRITE Set_MaxRecoverCount NOTIFY MaxRecoverCountChanged)
    Q_PROPERTY(QString AttributeValue READ Get_AttributeValue WRITE Set_AttributeValue NOTIFY AttributeValueChanged)
    Q_PROPERTY(bool LogMethods READ Get_LogMethods WRITE Set_LogMethods NOTIFY LogMethodsChanged)
    Q_PROPERTY(QString TransferByte READ Get_TransferByte WRITE Set_TransferByte NOTIFY TransferByteChanged)
    Q_PROPERTY(int ModelParamValue READ Get_ModelParamValue NOTIFY ModelParamValueChanged)
    Q_PROPERTY(TConnectionType LDConnectionType READ Get_LDConnectionType WRITE Set_LDConnectionType NOTIFY LDConnectionTypeChanged)
    Q_PROPERTY(int UModel READ Get_UModel NOTIFY UModelChanged)
    Q_PROPERTY(bool Connected READ Get_Connected WRITE Set_Connected NOTIFY ConnectedChanged)
    Q_PROPERTY(int SummStringNumber READ Get_SummStringNumber WRITE Set_SummStringNumber NOTIFY SummStringNumberChanged)
    Q_PROPERTY(int RealPayDepartment READ Get_RealPayDepartment WRITE Set_RealPayDepartment NOTIFY RealPayDepartmentChanged)
    Q_PROPERTY(bool TranslationEnabled READ Get_TranslationEnabled WRITE Set_TranslationEnabled NOTIFY TranslationEnabledChanged)
    Q_PROPERTY(bool IsCheckMadeOut READ Get_IsCheckMadeOut NOTIFY IsCheckMadeOutChanged)
    Q_PROPERTY(QString ECRModeDescription READ Get_ECRModeDescription NOTIFY ECRModeDescriptionChanged)
    Q_PROPERTY(bool PointPosition READ Get_PointPosition WRITE Set_PointPosition NOTIFY PointPositionChanged)
    Q_PROPERTY(int DeviceCode READ Get_DeviceCode WRITE Set_DeviceCode NOTIFY DeviceCodeChanged)
    Q_PROPERTY(int TextBlockNumber READ Get_TextBlockNumber WRITE Set_TextBlockNumber NOTIFY TextBlockNumberChanged)
    Q_PROPERTY(bool IsCheckClosed READ Get_IsCheckClosed NOTIFY IsCheckClosedChanged)
    Q_PROPERTY(bool OFDExchangeSuspended READ Get_OFDExchangeSuspended WRITE Set_OFDExchangeSuspended NOTIFY OFDExchangeSuspendedChanged)
    Q_PROPERTY(int MFPStatus READ Get_MFPStatus WRITE Set_MFPStatus NOTIFY MFPStatusChanged)
    Q_PROPERTY(quint32 DriverMinorVersion READ Get_DriverMinorVersion NOTIFY DriverMinorVersionChanged)
    Q_PROPERTY(int Tax3NameOffset READ Get_Tax3NameOffset WRITE Set_Tax3NameOffset NOTIFY Tax3NameOffsetChanged)
    Q_PROPERTY(int FNCurrentDocument READ Get_FNCurrentDocument WRITE Set_FNCurrentDocument NOTIFY FNCurrentDocumentChanged)
    Q_PROPERTY(QString FileName READ Get_FileName WRITE Set_FileName NOTIFY FileNameChanged)
    Q_PROPERTY(bool SlipDocumentIsMoving READ Get_SlipDocumentIsMoving NOTIFY SlipDocumentIsMovingChanged)
    Q_PROPERTY(int StringQuantityInOperation READ Get_StringQuantityInOperation WRITE Set_StringQuantityInOperation NOTIFY StringQuantityInOperationChanged)
    Q_PROPERTY(int KPKNumber READ Get_KPKNumber WRITE Set_KPKNumber NOTIFY KPKNumberChanged)
    Q_PROPERTY(QString DriverVersion READ Get_DriverVersion NOTIFY DriverVersionChanged)
    Q_PROPERTY(int TCPPort READ Get_TCPPort WRITE Set_TCPPort NOTIFY TCPPortChanged)
    Q_PROPERTY(QString BarcodeHex READ Get_BarcodeHex WRITE Set_BarcodeHex NOTIFY BarcodeHexChanged)
    Q_PROPERTY(int Tax4NameSymbolNumber READ Get_Tax4NameSymbolNumber WRITE Set_Tax4NameSymbolNumber NOTIFY Tax4NameSymbolNumberChanged)
    Q_PROPERTY(int PortNumber READ Get_PortNumber WRITE Set_PortNumber NOTIFY PortNumberChanged)
    Q_PROPERTY(int GraphBufferType READ Get_GraphBufferType WRITE Set_GraphBufferType NOTIFY GraphBufferTypeChanged)
    Q_PROPERTY(int CorrectionType READ Get_CorrectionType WRITE Set_CorrectionType NOTIFY CorrectionTypeChanged)
    Q_PROPERTY(int CalculationSign READ Get_CalculationSign WRITE Set_CalculationSign NOTIFY CalculationSignChanged)
    Q_PROPERTY(QString SKNOIdentifier READ Get_SKNOIdentifier WRITE Set_SKNOIdentifier NOTIFY SKNOIdentifierChanged)
    Q_PROPERTY(int FileType READ Get_FileType WRITE Set_FileType NOTIFY FileTypeChanged)
    Q_PROPERTY(qint64 RegSaleReturnRec READ Get_RegSaleReturnRec NOTIFY RegSaleReturnRecChanged)
    Q_PROPERTY(int DepartmentStringNumber READ Get_DepartmentStringNumber WRITE Set_DepartmentStringNumber NOTIFY DepartmentStringNumberChanged)
    Q_PROPERTY(qint64 CheckResult READ Get_CheckResult WRITE Set_CheckResult NOTIFY CheckResultChanged)
    Q_PROPERTY(int JournalRowCount READ Get_JournalRowCount NOTIFY JournalRowCountChanged)
    Q_PROPERTY(QString EscapeIP READ Get_EscapeIP WRITE Set_EscapeIP NOTIFY EscapeIPChanged)
    Q_PROPERTY(bool IsLastFMRecordCorrupted READ Get_IsLastFMRecordCorrupted NOTIFY IsLastFMRecordCorruptedChanged)
    Q_PROPERTY(int CommandCode READ Get_CommandCode NOTIFY CommandCodeChanged)
    Q_PROPERTY(int CommandRetryCount READ Get_CommandRetryCount WRITE Set_CommandRetryCount NOTIFY CommandRetryCountChanged)
    Q_PROPERTY(int OperationNameOffset READ Get_OperationNameOffset WRITE Set_OperationNameOffset NOTIFY OperationNameOffsetChanged)
    Q_PROPERTY(QString ServerVersion READ Get_ServerVersion NOTIFY ServerVersionChanged)
    Q_PROPERTY(int TransmitQueueSize READ Get_TransmitQueueSize NOTIFY TransmitQueueSizeChanged)
    Q_PROPERTY(bool FieldType READ Get_FieldType NOTIFY FieldTypeChanged)
    Q_PROPERTY(int FMBuild READ Get_FMBuild NOTIFY FMBuildChanged)
    Q_PROPERTY(bool MobilePayEnabled READ Get_MobilePayEnabled WRITE Set_MobilePayEnabled NOTIFY MobilePayEnabledChanged)
    Q_PROPERTY(int Tax1SumFont READ Get_Tax1SumFont WRITE Set_Tax1SumFont NOTIFY Tax1SumFontChanged)
    Q_PROPERTY(bool ComLogOnlyErrors READ Get_ComLogOnlyErrors WRITE Set_ComLogOnlyErrors NOTIFY ComLogOnlyErrorsChanged)
    Q_PROPERTY(QString ValueOfFieldString READ Get_ValueOfFieldString WRITE Set_ValueOfFieldString NOTIFY ValueOfFieldStringChanged)
    Q_PROPERTY(QString ConnectionURI READ Get_ConnectionURI WRITE Set_ConnectionURI NOTIFY ConnectionURIChanged)
    Q_PROPERTY(qint64 RegBuyRec READ Get_RegBuyRec NOTIFY RegBuyRecChanged)
    Q_PROPERTY(QString BlockDataHex READ Get_BlockDataHex WRITE Set_BlockDataHex NOTIFY BlockDataHexChanged)
    Q_PROPERTY(int BufferingType READ Get_BufferingType WRITE Set_BufferingType NOTIFY BufferingTypeChanged)
    Q_PROPERTY(int DiscountOnCheckSumOffset READ Get_DiscountOnCheckSumOffset WRITE Set_DiscountOnCheckSumOffset NOTIFY DiscountOnCheckSumOffsetChanged)
    Q_PROPERTY(bool Pistol READ Get_Pistol NOTIFY PistolChanged)
    Q_PROPERTY(int PriceSymbolNumber READ Get_PriceSymbolNumber WRITE Set_PriceSymbolNumber NOTIFY PriceSymbolNumberChanged)
    Q_PROPERTY(int Summ4StringNumber READ Get_Summ4StringNumber WRITE Set_Summ4StringNumber NOTIFY Summ4StringNumberChanged)
    Q_PROPERTY(bool JournalRibbonIsPresent READ Get_JournalRibbonIsPresent NOTIFY JournalRibbonIsPresentChanged)
    Q_PROPERTY(bool AutoStartSearch READ Get_AutoStartSearch WRITE Set_AutoStartSearch NOTIFY AutoStartSearchChanged)
    Q_PROPERTY(int LockTimeout READ Get_LockTimeout WRITE Set_LockTimeout NOTIFY LockTimeoutChanged)
    Q_PROPERTY(bool ReconnectPort READ Get_ReconnectPort WRITE Set_ReconnectPort NOTIFY ReconnectPortChanged)
    Q_PROPERTY(int DozeInMilliliters READ Get_DozeInMilliliters WRITE Set_DozeInMilliliters NOTIFY DozeInMillilitersChanged)
    Q_PROPERTY(quint32 SCPassword READ Get_SCPassword WRITE Set_SCPassword NOTIFY SCPasswordChanged)
    Q_PROPERTY(quint32 FileVersionLS READ Get_FileVersionLS NOTIFY FileVersionLSChanged)
    Q_PROPERTY(QString EmergencyStopCodeDescription READ Get_EmergencyStopCodeDescription NOTIFY EmergencyStopCodeDescriptionChanged)
    Q_PROPERTY(int PrintingAlignment READ Get_PrintingAlignment WRITE Set_PrintingAlignment NOTIFY PrintingAlignmentChanged)
    Q_PROPERTY(QDateTime Date READ Get_Date WRITE Set_Date NOTIFY DateChanged)
    Q_PROPERTY(int Tax3 READ Get_Tax3 WRITE Set_Tax3 NOTIFY Tax3Changed)
    Q_PROPERTY(int Tax2 READ Get_Tax2 WRITE Set_Tax2 NOTIFY Tax2Changed)
    Q_PROPERTY(int Tax4 READ Get_Tax4 WRITE Set_Tax4 NOTIFY Tax4Changed)
    Q_PROPERTY(QString ECRID READ Get_ECRID WRITE Set_ECRID NOTIFY ECRIDChanged)
    Q_PROPERTY(QDateTime FirstSessionDate READ Get_FirstSessionDate WRITE Set_FirstSessionDate NOTIFY FirstSessionDateChanged)
    Q_PROPERTY(int ParentWnd READ Get_ParentWnd WRITE Set_ParentWnd NOTIFY ParentWndChanged)
    Q_PROPERTY(QString JournalRow READ Get_JournalRow NOTIFY JournalRowChanged)
    Q_PROPERTY(bool WrapStrings READ Get_WrapStrings WRITE Set_WrapStrings NOTIFY WrapStringsChanged)
    Q_PROPERTY(int Tax1 READ Get_Tax1 WRITE Set_Tax1 NOTIFY Tax1Changed)
    Q_PROPERTY(QString FNSoftVersion READ Get_FNSoftVersion WRITE Set_FNSoftVersion NOTIFY FNSoftVersionChanged)
    Q_PROPERTY(int RecordCount READ Get_RecordCount NOTIFY RecordCountChanged)
    Q_PROPERTY(QString Summ4AsString READ Get_Summ4AsString NOTIFY Summ4AsStringChanged)
    Q_PROPERTY(int OPSystem READ Get_OPSystem WRITE Set_OPSystem NOTIFY OPSystemChanged)
    Q_PROPERTY(int FMFlags READ Get_FMFlags NOTIFY FMFlagsChanged)
    Q_PROPERTY(double DiscountOnCheck READ Get_DiscountOnCheck WRITE Set_DiscountOnCheck NOTIFY DiscountOnCheckChanged)
    Q_PROPERTY(int IntervalValue READ Get_IntervalValue WRITE Set_IntervalValue NOTIFY IntervalValueChanged)
    Q_PROPERTY(int HeaderStringNumber READ Get_HeaderStringNumber WRITE Set_HeaderStringNumber NOTIFY HeaderStringNumberChanged)
    Q_PROPERTY(int SlipDocumentLength READ Get_SlipDocumentLength WRITE Set_SlipDocumentLength NOTIFY SlipDocumentLengthChanged)
    Q_PROPERTY(bool TaxValue4Enabled READ Get_TaxValue4Enabled WRITE Set_TaxValue4Enabled NOTIFY TaxValue4EnabledChanged)
    Q_PROPERTY(int Tax2RateSymbolNumber READ Get_Tax2RateSymbolNumber WRITE Set_Tax2RateSymbolNumber NOTIFY Tax2RateSymbolNumberChanged)
    Q_PROPERTY(bool ReceiptRibbonIsPresent READ Get_ReceiptRibbonIsPresent NOTIFY ReceiptRibbonIsPresentChanged)
    Q_PROPERTY(int Summ4Offset READ Get_Summ4Offset WRITE Set_Summ4Offset NOTIFY Summ4OffsetChanged)
    Q_PROPERTY(int WaitPrintingTime READ Get_WaitPrintingTime NOTIFY WaitPrintingTimeChanged)
    Q_PROPERTY(bool IsEKLZOverflow READ Get_IsEKLZOverflow NOTIFY IsEKLZOverflowChanged)
    Q_PROPERTY(QString EmailAddress READ Get_EmailAddress WRITE Set_EmailAddress NOTIFY EmailAddressChanged)
    Q_PROPERTY(int LogMaxFileCount READ Get_LogMaxFileCount WRITE Set_LogMaxFileCount NOTIFY LogMaxFileCountChanged)
    Q_PROPERTY(qint64 LastKPKDocumentResult READ Get_LastKPKDocumentResult NOTIFY LastKPKDocumentResultChanged)
    Q_PROPERTY(int Summ2NameFont READ Get_Summ2NameFont WRITE Set_Summ2NameFont NOTIFY Summ2NameFontChanged)
    Q_PROPERTY(int MessageState READ Get_MessageState WRITE Set_MessageState NOTIFY MessageStateChanged)
    Q_PROPERTY(bool FeedAfterCut READ Get_FeedAfterCut WRITE Set_FeedAfterCut NOTIFY FeedAfterCutChanged)
    Q_PROPERTY(int Tax4RateFont READ Get_Tax4RateFont WRITE Set_Tax4RateFont NOTIFY Tax4RateFontChanged)
    Q_PROPERTY(int CurrentDozeInMilliliters READ Get_CurrentDozeInMilliliters WRITE Set_CurrentDozeInMilliliters NOTIFY CurrentDozeInMillilitersChanged)
    Q_PROPERTY(bool JournalEnabled READ Get_JournalEnabled WRITE Set_JournalEnabled NOTIFY JournalEnabledChanged)
    Q_PROPERTY(bool CheckFMConnection READ Get_CheckFMConnection WRITE Set_CheckFMConnection NOTIFY CheckFMConnectionChanged)
    Q_PROPERTY(int IBMLastSaleReceiptNumber READ Get_IBMLastSaleReceiptNumber NOTIFY IBMLastSaleReceiptNumberChanged)
    Q_PROPERTY(QString ModelParamDescription READ Get_ModelParamDescription NOTIFY ModelParamDescriptionChanged)
    Q_PROPERTY(int OperatorNumber READ Get_OperatorNumber NOTIFY OperatorNumberChanged)
    Q_PROPERTY(int UMajorType READ Get_UMajorType NOTIFY UMajorTypeChanged)
    Q_PROPERTY(bool QuantityPointPosition READ Get_QuantityPointPosition NOTIFY QuantityPointPositionChanged)
    Q_PROPERTY(int BarcodeParameter2 READ Get_BarcodeParameter2 WRITE Set_BarcodeParameter2 NOTIFY BarcodeParameter2Changed)
    Q_PROPERTY(int BarcodeParameter3 READ Get_BarcodeParameter3 WRITE Set_BarcodeParameter3 NOTIFY BarcodeParameter3Changed)
    Q_PROPERTY(int BarcodeParameter1 READ Get_BarcodeParameter1 WRITE Set_BarcodeParameter1 NOTIFY BarcodeParameter1Changed)
    Q_PROPERTY(qint64 ChargeValue READ Get_ChargeValue WRITE Set_ChargeValue NOTIFY ChargeValueChanged)
    Q_PROPERTY(int BarcodeParameter4 READ Get_BarcodeParameter4 WRITE Set_BarcodeParameter4 NOTIFY BarcodeParameter4Changed)
    Q_PROPERTY(int BarcodeParameter5 READ Get_BarcodeParameter5 WRITE Set_BarcodeParameter5 NOTIFY BarcodeParameter5Changed)
    Q_PROPERTY(int PrepareActivizationRemainCount READ Get_PrepareActivizationRemainCount WRITE Set_PrepareActivizationRemainCount NOTIFY PrepareActivizationRemainCountChanged)
    Q_PROPERTY(QString LDName READ Get_LDName WRITE Set_LDName NOTIFY LDNameChanged)
    Q_PROPERTY(qint64 Price READ Get_Price WRITE Set_Price NOTIFY PriceChanged)
    Q_PROPERTY(int SubTotalOffset READ Get_SubTotalOffset WRITE Set_SubTotalOffset NOTIFY SubTotalOffsetChanged)
    Q_PROPERTY(int ModelsCount READ Get_ModelsCount NOTIFY ModelsCountChanged)
    Q_PROPERTY(QDateTime FMSoftDate READ Get_FMSoftDate NOTIFY FMSoftDateChanged)
    Q_PROPERTY(QString DBFilePath READ Get_DBFilePath WRITE Set_DBFilePath NOTIFY DBFilePathChanged)
    Q_PROPERTY(int QuantityFormat READ Get_QuantityFormat WRITE Set_QuantityFormat NOTIFY QuantityFormatChanged)
    Q_PROPERTY(qint64 TaxValue2 READ Get_TaxValue2 WRITE Set_TaxValue2 NOTIFY TaxValue2Changed)
    Q_PROPERTY(int StringQuantity READ Get_StringQuantity WRITE Set_StringQuantity NOTIFY StringQuantityChanged)
    Q_PROPERTY(qint64 TaxValue6 READ Get_TaxValue6 WRITE Set_TaxValue6 NOTIFY TaxValue6Changed)
    Q_PROPERTY(qint64 TaxValue5 READ Get_TaxValue5 WRITE Set_TaxValue5 NOTIFY TaxValue5Changed)
    Q_PROPERTY(QString DocumentData READ Get_DocumentData WRITE Set_DocumentData NOTIFY DocumentDataChanged)
    Q_PROPERTY(int TaxType READ Get_TaxType WRITE Set_TaxType NOTIFY TaxTypeChanged)
    Q_PROPERTY(QString ParameterValue READ Get_ParameterValue WRITE Set_ParameterValue NOTIFY ParameterValueChanged)
    Q_PROPERTY(int Tax3SumOffset READ Get_Tax3SumOffset WRITE Set_Tax3SumOffset NOTIFY Tax3SumOffsetChanged)
    Q_PROPERTY(int HRIPosition READ Get_HRIPosition WRITE Set_HRIPosition NOTIFY HRIPositionChanged)
    Q_PROPERTY(int IBMLastReturnSaleReceiptNumber READ Get_IBMLastReturnSaleReceiptNumber NOTIFY IBMLastReturnSaleReceiptNumberChanged)
    Q_PROPERTY(quint32 EnteredTaxPassword READ Get_EnteredTaxPassword NOTIFY EnteredTaxPasswordChanged)
    Q_PROPERTY(bool OFDEnabled READ Get_OFDEnabled WRITE Set_OFDEnabled NOTIFY OFDEnabledChanged)
    Q_PROPERTY(qint64 RegBuySession READ Get_RegBuySession NOTIFY RegBuySessionChanged)
    Q_PROPERTY(int TotalSymbolNumber READ Get_TotalSymbolNumber WRITE Set_TotalSymbolNumber NOTIFY TotalSymbolNumberChanged)
    Q_PROPERTY(int Tax1RateSymbolNumber READ Get_Tax1RateSymbolNumber WRITE Set_Tax1RateSymbolNumber NOTIFY Tax1RateSymbolNumberChanged)
    Q_PROPERTY(int TimeoutsUsing READ Get_TimeoutsUsing WRITE Set_TimeoutsUsing NOTIFY TimeoutsUsingChanged)
    Q_PROPERTY(int WorkMode READ Get_WorkMode WRITE Set_WorkMode NOTIFY WorkModeChanged)
    Q_PROPERTY(QString LineDataHex READ Get_LineDataHex WRITE Set_LineDataHex NOTIFY LineDataHexChanged)
    Q_PROPERTY(int TotalSumFont READ Get_TotalSumFont WRITE Set_TotalSumFont NOTIFY TotalSumFontChanged)
    Q_PROPERTY(int Tax1NameOffset READ Get_Tax1NameOffset WRITE Set_Tax1NameOffset NOTIFY Tax1NameOffsetChanged)
    Q_PROPERTY(bool RecoverError165 READ Get_RecoverError165 WRITE Set_RecoverError165 NOTIFY RecoverError165Changed)
    Q_PROPERTY(int HeaderFont READ Get_HeaderFont WRITE Set_HeaderFont NOTIFY HeaderFontChanged)
    Q_PROPERTY(QString EKLZNumber READ Get_EKLZNumber NOTIFY EKLZNumberChanged)
    Q_PROPERTY(int Summ2SymbolNumber READ Get_Summ2SymbolNumber WRITE Set_Summ2SymbolNumber NOTIFY Summ2SymbolNumberChanged)
    Q_PROPERTY(int ReadTimeout READ Get_ReadTimeout WRITE Set_ReadTimeout NOTIFY ReadTimeoutChanged)
    Q_PROPERTY(int LogicalNumber READ Get_LogicalNumber NOTIFY LogicalNumberChanged)
    Q_PROPERTY(double PowerSourceVoltage READ Get_PowerSourceVoltage NOTIFY PowerSourceVoltageChanged)
    Q_PROPERTY(bool LDUseIPAddress READ Get_LDUseIPAddress WRITE Set_LDUseIPAddress NOTIFY LDUseIPAddressChanged)
    Q_PROPERTY(bool UseCommandTimeout READ Get_UseCommandTimeout WRITE Set_UseCommandTimeout NOTIFY UseCommandTimeoutChanged)
    Q_PROPERTY(int LastLineNumber READ Get_LastLineNumber WRITE Set_LastLineNumber NOTIFY LastLineNumberChanged)
    Q_PROPERTY(qint64 RegSaleSession READ Get_RegSaleSession NOTIFY RegSaleSessionChanged)
    Q_PROPERTY(int Tax3NameFont READ Get_Tax3NameFont WRITE Set_Tax3NameFont NOTIFY Tax3NameFontChanged)
    Q_PROPERTY(int Tax3SumFont READ Get_Tax3SumFont WRITE Set_Tax3SumFont NOTIFY Tax3SumFontChanged)
    Q_PROPERTY(bool DelayedPrint READ Get_DelayedPrint WRITE Set_DelayedPrint NOTIFY DelayedPrintChanged)
    Q_PROPERTY(int IBMDocumentNumber READ Get_IBMDocumentNumber NOTIFY IBMDocumentNumberChanged)
    Q_PROPERTY(QDateTime ECRDate READ Get_ECRDate WRITE Set_ECRDate NOTIFY ECRDateChanged)
    Q_PROPERTY(QDateTime ECRTime READ Get_ECRTime WRITE Set_ECRTime NOTIFY ECRTimeChanged)
    Q_PROPERTY(int INNAsInteger READ Get_INNAsInteger NOTIFY INNAsIntegerChanged)
    Q_PROPERTY(qint64 Summ15 READ Get_Summ15 WRITE Set_Summ15 NOTIFY Summ15Changed)
    Q_PROPERTY(qint64 Summ14 READ Get_Summ14 WRITE Set_Summ14 NOTIFY Summ14Changed)
    Q_PROPERTY(qint64 Summ13 READ Get_Summ13 WRITE Set_Summ13 NOTIFY Summ13Changed)
    Q_PROPERTY(qint64 Summ12 READ Get_Summ12 WRITE Set_Summ12 NOTIFY Summ12Changed)
    Q_PROPERTY(int UCodePage READ Get_UCodePage NOTIFY UCodePageChanged)
    Q_PROPERTY(qint64 Summ10 READ Get_Summ10 WRITE Set_Summ10 NOTIFY Summ10Changed)
    Q_PROPERTY(int BarcodeDataLength READ Get_BarcodeDataLength WRITE Set_BarcodeDataLength NOTIFY BarcodeDataLengthChanged)
    Q_PROPERTY(int FNWarningFlags READ Get_FNWarningFlags WRITE Set_FNWarningFlags NOTIFY FNWarningFlagsChanged)
    Q_PROPERTY(int LDEscapePort READ Get_LDEscapePort WRITE Set_LDEscapePort NOTIFY LDEscapePortChanged)
    Q_PROPERTY(int WaitForPrintingDelay READ Get_WaitForPrintingDelay WRITE Set_WaitForPrintingDelay NOTIFY WaitForPrintingDelayChanged)
    Q_PROPERTY(QString ECRInput READ Get_ECRInput NOTIFY ECRInputChanged)
    Q_PROPERTY(int LDIndex READ Get_LDIndex WRITE Set_LDIndex NOTIFY LDIndexChanged)
    Q_PROPERTY(int Tax4TurnOverSymbolNumber READ Get_Tax4TurnOverSymbolNumber WRITE Set_Tax4TurnOverSymbolNumber NOTIFY Tax4TurnOverSymbolNumberChanged)
    Q_PROPERTY(int LogFileMaxSize READ Get_LogFileMaxSize WRITE Set_LogFileMaxSize NOTIFY LogFileMaxSizeChanged)
    Q_PROPERTY(bool ReceiptRibbonLever READ Get_ReceiptRibbonLever NOTIFY ReceiptRibbonLeverChanged)
    Q_PROPERTY(int Tax2TurnOverFont READ Get_Tax2TurnOverFont WRITE Set_Tax2TurnOverFont NOTIFY Tax2TurnOverFontChanged)
    Q_PROPERTY(int CheckingType READ Get_CheckingType WRITE Set_CheckingType NOTIFY CheckingTypeChanged)
    Q_PROPERTY(int ModelParamIndex READ Get_ModelParamIndex WRITE Set_ModelParamIndex NOTIFY ModelParamIndexChanged)
    Q_PROPERTY(int Tax1SumStringNumber READ Get_Tax1SumStringNumber WRITE Set_Tax1SumStringNumber NOTIFY Tax1SumStringNumberChanged)
    Q_PROPERTY(int DiscountOnCheckSumFont READ Get_DiscountOnCheckSumFont WRITE Set_DiscountOnCheckSumFont NOTIFY DiscountOnCheckSumFontChanged)
    Q_PROPERTY(qint64 ContentsOfCashRegister READ Get_ContentsOfCashRegister NOTIFY ContentsOfCashRegisterChanged)
    Q_PROPERTY(int IBMSessionSec READ Get_IBMSessionSec NOTIFY IBMSessionSecChanged)
    Q_PROPERTY(bool AutoOpenSession READ Get_AutoOpenSession WRITE Set_AutoOpenSession NOTIFY AutoOpenSessionChanged)
    Q_PROPERTY(int Tax2NameFont READ Get_Tax2NameFont WRITE Set_Tax2NameFont NOTIFY Tax2NameFontChanged)
    Q_PROPERTY(int TableNumber READ Get_TableNumber WRITE Set_TableNumber NOTIFY TableNumberChanged)
    Q_PROPERTY(QDateTime TagValueDateTime READ Get_TagValueDateTime WRITE Set_TagValueDateTime NOTIFY TagValueDateTimeChanged)
    Q_PROPERTY(int FMStringNumber READ Get_FMStringNumber WRITE Set_FMStringNumber NOTIFY FMStringNumberChanged)
    Q_PROPERTY(QString LastKPKDateStr READ Get_LastKPKDateStr NOTIFY LastKPKDateStrChanged)
    Q_PROPERTY(int ConnectionTimeout READ Get_ConnectionTimeout WRITE Set_ConnectionTimeout NOTIFY ConnectionTimeoutChanged)
    Q_PROPERTY(int EKLZFont READ Get_EKLZFont WRITE Set_EKLZFont NOTIFY EKLZFontChanged)
    Q_PROPERTY(int QuantityFont READ Get_QuantityFont WRITE Set_QuantityFont NOTIFY QuantityFontChanged)
    Q_PROPERTY(int JournalRowNumber READ Get_JournalRowNumber WRITE Set_JournalRowNumber NOTIFY JournalRowNumberChanged)
    Q_PROPERTY(int ValueOfFieldInteger READ Get_ValueOfFieldInteger WRITE Set_ValueOfFieldInteger NOTIFY ValueOfFieldIntegerChanged)
    Q_PROPERTY(qint64 Summ16 READ Get_Summ16 WRITE Set_Summ16 NOTIFY Summ16Changed)
    Q_PROPERTY(int AnswerCode READ Get_AnswerCode WRITE Set_AnswerCode NOTIFY AnswerCodeChanged)
    Q_PROPERTY(int Tax1SumSymbolNumber READ Get_Tax1SumSymbolNumber WRITE Set_Tax1SumSymbolNumber NOTIFY Tax1SumSymbolNumberChanged)
    Q_PROPERTY(int ICSPollPeriod READ Get_ICSPollPeriod WRITE Set_ICSPollPeriod NOTIFY ICSPollPeriodChanged)
    Q_PROPERTY(bool IsCorruptedFiscalizationInfo READ Get_IsCorruptedFiscalizationInfo NOTIFY IsCorruptedFiscalizationInfoChanged)
    Q_PROPERTY(int LastPrintResult READ Get_LastPrintResult NOTIFY LastPrintResultChanged)
    Q_PROPERTY(int QuantityStringNumber READ Get_QuantityStringNumber WRITE Set_QuantityStringNumber NOTIFY QuantityStringNumberChanged)
    Q_PROPERTY(int Summ2Offset READ Get_Summ2Offset WRITE Set_Summ2Offset NOTIFY Summ2OffsetChanged)
    Q_PROPERTY(int LastSessionNumber READ Get_LastSessionNumber WRITE Set_LastSessionNumber NOTIFY LastSessionNumberChanged)
    Q_PROPERTY(QString ECRSoftVersion READ Get_ECRSoftVersion NOTIFY ECRSoftVersionChanged)
    Q_PROPERTY(int Tax2RateOffset READ Get_Tax2RateOffset WRITE Set_Tax2RateOffset NOTIFY Tax2RateOffsetChanged)
    Q_PROPERTY(qint64 DiscountValue READ Get_DiscountValue WRITE Set_DiscountValue NOTIFY DiscountValueChanged)
    Q_PROPERTY(int Tax3RateOffset READ Get_Tax3RateOffset WRITE Set_Tax3RateOffset NOTIFY Tax3RateOffsetChanged)
    Q_PROPERTY(bool PresenterOut READ Get_PresenterOut NOTIFY PresenterOutChanged)
    Q_PROPERTY(int DrawerNumber READ Get_DrawerNumber WRITE Set_DrawerNumber NOTIFY DrawerNumberChanged)
    Q_PROPERTY(QString PosControlReceiptSeparator READ Get_PosControlReceiptSeparator WRITE Set_PosControlReceiptSeparator NOTIFY PosControlReceiptSeparatorChanged)
    Q_PROPERTY(int Summ2Font READ Get_Summ2Font WRITE Set_Summ2Font NOTIFY Summ2FontChanged)
    Q_PROPERTY(QString RNM READ Get_RNM WRITE Set_RNM NOTIFY RNMChanged)
    Q_PROPERTY(QString ErrorDescription READ Get_ErrorDescription NOTIFY ErrorDescriptionChanged)
    Q_PROPERTY(int RKNumber READ Get_RKNumber WRITE Set_RKNumber NOTIFY RKNumberChanged)
    Q_PROPERTY(int TagType READ Get_TagType WRITE Set_TagType NOTIFY TagTypeChanged)
    Q_PROPERTY(int CommandDefTimeout READ Get_CommandDefTimeout NOTIFY CommandDefTimeoutChanged)
    Q_PROPERTY(bool CashControlEnabled READ Get_CashControlEnabled WRITE Set_CashControlEnabled NOTIFY CashControlEnabledChanged)
    Q_PROPERTY(bool IsPrinterLeftSensorFailure READ Get_IsPrinterLeftSensorFailure NOTIFY IsPrinterLeftSensorFailureChanged)
    Q_PROPERTY(int Tax2TurnOverStringNumber READ Get_Tax2TurnOverStringNumber WRITE Set_Tax2TurnOverStringNumber NOTIFY Tax2TurnOverStringNumberChanged)
    Q_PROPERTY(QString CashControlHost READ Get_CashControlHost WRITE Set_CashControlHost NOTIFY CashControlHostChanged)
    Q_PROPERTY(int FirstSessionNumber READ Get_FirstSessionNumber WRITE Set_FirstSessionNumber NOTIFY FirstSessionNumberChanged)
    Q_PROPERTY(int Summ1Offset READ Get_Summ1Offset WRITE Set_Summ1Offset NOTIFY Summ1OffsetChanged)
    Q_PROPERTY(bool DoNotSendENQ READ Get_DoNotSendENQ WRITE Set_DoNotSendENQ NOTIFY DoNotSendENQChanged)
    Q_PROPERTY(int PrintBufferLineNumber READ Get_PrintBufferLineNumber NOTIFY PrintBufferLineNumberChanged)
    Q_PROPERTY(int ModelParamNumber READ Get_ModelParamNumber WRITE Set_ModelParamNumber NOTIFY ModelParamNumberChanged)
    Q_PROPERTY(QString TagValueBin READ Get_TagValueBin WRITE Set_TagValueBin NOTIFY TagValueBinChanged)
    Q_PROPERTY(int IBMFlags READ Get_IBMFlags NOTIFY IBMFlagsChanged)
    Q_PROPERTY(bool ReceiptRibbonOpticalSensor READ Get_ReceiptRibbonOpticalSensor NOTIFY ReceiptRibbonOpticalSensorChanged)
    Q_PROPERTY(int Poll1 READ Get_Poll1 NOTIFY Poll1Changed)
    Q_PROPERTY(TCodePage CodePage READ Get_CodePage WRITE Set_CodePage NOTIFY CodePageChanged)
    Q_PROPERTY(int Summ4NameOffset READ Get_Summ4NameOffset WRITE Set_Summ4NameOffset NOTIFY Summ4NameOffsetChanged)
    Q_PROPERTY(bool CenterImage READ Get_CenterImage WRITE Set_CenterImage NOTIFY CenterImageChanged)
    Q_PROPERTY(int SessionNumber READ Get_SessionNumber WRITE Set_SessionNumber NOTIFY SessionNumberChanged)
    Q_PROPERTY(int MultiplicationFont READ Get_MultiplicationFont WRITE Set_MultiplicationFont NOTIFY MultiplicationFontChanged)
    Q_PROPERTY(bool CheckEJConnection READ Get_CheckEJConnection WRITE Set_CheckEJConnection NOTIFY CheckEJConnectionChanged)
    Q_PROPERTY(int DataBlockSize READ Get_DataBlockSize WRITE Set_DataBlockSize NOTIFY DataBlockSizeChanged)
    Q_PROPERTY(bool IsFM24HoursOver READ Get_IsFM24HoursOver NOTIFY IsFM24HoursOverChanged)
    Q_PROPERTY(qint64 DozeInMoney READ Get_DozeInMoney WRITE Set_DozeInMoney NOTIFY DozeInMoneyChanged)
    Q_PROPERTY(int LDProtocolType READ Get_LDProtocolType WRITE Set_LDProtocolType NOTIFY LDProtocolTypeChanged)
    Q_PROPERTY(int SlipEqualStringIntervals READ Get_SlipEqualStringIntervals WRITE Set_SlipEqualStringIntervals NOTIFY SlipEqualStringIntervalsChanged)
    Q_PROPERTY(int LDCount READ Get_LDCount NOTIFY LDCountChanged)
    Q_PROPERTY(QDateTime IBMSessionDateTime READ Get_IBMSessionDateTime NOTIFY IBMSessionDateTimeChanged)
    Q_PROPERTY(int OperationBlockFirstString READ Get_OperationBlockFirstString WRITE Set_OperationBlockFirstString NOTIFY OperationBlockFirstStringChanged)
    Q_PROPERTY(bool SaleError READ Get_SaleError WRITE Set_SaleError NOTIFY SaleErrorChanged)
    Q_PROPERTY(int ClicheStringNumber READ Get_ClicheStringNumber WRITE Set_ClicheStringNumber NOTIFY ClicheStringNumberChanged)
    Q_PROPERTY(bool ShowTagNumber READ Get_ShowTagNumber WRITE Set_ShowTagNumber NOTIFY ShowTagNumberChanged)
    Q_PROPERTY(QString ECRAdvancedModeDescription READ Get_ECRAdvancedModeDescription NOTIFY ECRAdvancedModeDescriptionChanged)
    Q_PROPERTY(int MaxAnswerReadCount READ Get_MaxAnswerReadCount WRITE Set_MaxAnswerReadCount NOTIFY MaxAnswerReadCountChanged)
    Q_PROPERTY(QString OFDServer READ Get_OFDServer WRITE Set_OFDServer NOTIFY OFDServerChanged)
    Q_PROPERTY(int FreeRecordInFM READ Get_FreeRecordInFM NOTIFY FreeRecordInFMChanged)
    Q_PROPERTY(bool LogCommands READ Get_LogCommands WRITE Set_LogCommands NOTIFY LogCommandsChanged)
    Q_PROPERTY(int ReportTypeInt READ Get_ReportTypeInt WRITE Set_ReportTypeInt NOTIFY ReportTypeIntChanged)
    Q_PROPERTY(int TypeOfLastEntryFMEx READ Get_TypeOfLastEntryFMEx NOTIFY TypeOfLastEntryFMExChanged)
    Q_PROPERTY(int InfoExchangeStatus READ Get_InfoExchangeStatus WRITE Set_InfoExchangeStatus NOTIFY InfoExchangeStatusChanged)
    Q_PROPERTY(QString SerialNumber READ Get_SerialNumber WRITE Set_SerialNumber NOTIFY SerialNumberChanged)
    Q_PROPERTY(bool IsFMSessionOpen READ Get_IsFMSessionOpen NOTIFY IsFMSessionOpenChanged)
    Q_PROPERTY(int IBMSessionDay READ Get_IBMSessionDay NOTIFY IBMSessionDayChanged)
    Q_PROPERTY(bool CardPayEnabled READ Get_CardPayEnabled WRITE Set_CardPayEnabled NOTIFY CardPayEnabledChanged)
    Q_PROPERTY(int OperationType READ Get_OperationType WRITE Set_OperationType NOTIFY OperationTypeChanged)
    Q_PROPERTY(int DocumentCount READ Get_DocumentCount WRITE Set_DocumentCount NOTIFY DocumentCountChanged)
    Q_PROPERTY(QString LDComputerName READ Get_LDComputerName WRITE Set_LDComputerName NOTIFY LDComputerNameChanged)
    Q_PROPERTY(int CharWidth READ Get_CharWidth NOTIFY CharWidthChanged)
    Q_PROPERTY(int WareCode READ Get_WareCode WRITE Set_WareCode NOTIFY WareCodeChanged)
    Q_PROPERTY(QString CashControlProtocols READ Get_CashControlProtocols NOTIFY CashControlProtocolsChanged)
    Q_PROPERTY(QString JournalText READ Get_JournalText NOTIFY JournalTextChanged)
    Q_PROPERTY(int PermitActivizationCode READ Get_PermitActivizationCode WRITE Set_PermitActivizationCode NOTIFY PermitActivizationCodeChanged)
    Q_PROPERTY(int EjectDirection READ Get_EjectDirection WRITE Set_EjectDirection NOTIFY EjectDirectionChanged)
    Q_PROPERTY(int EKLZFlags READ Get_EKLZFlags NOTIFY EKLZFlagsChanged)
    Q_PROPERTY(int Tax2SumOffset READ Get_Tax2SumOffset WRITE Set_Tax2SumOffset NOTIFY Tax2SumOffsetChanged)
    Q_PROPERTY(int DBDocType READ Get_DBDocType WRITE Set_DBDocType NOTIFY DBDocTypeChanged)
    Q_PROPERTY(int RowNumber READ Get_RowNumber WRITE Set_RowNumber NOTIFY RowNumberChanged)
    Q_PROPERTY(int TRKNumber READ Get_TRKNumber WRITE Set_TRKNumber NOTIFY TRKNumberChanged)
    Q_PROPERTY(int TagNumber READ Get_TagNumber WRITE Set_TagNumber NOTIFY TagNumberChanged)
    Q_PROPERTY(int SlipStringInterval READ Get_SlipStringInterval WRITE Set_SlipStringInterval NOTIFY SlipStringIntervalChanged)
    Q_PROPERTY(int UMinorType READ Get_UMinorType NOTIFY UMinorTypeChanged)
    Q_PROPERTY(bool CapGetShortECRStatus READ Get_CapGetShortECRStatus NOTIFY CapGetShortECRStatusChanged)
    Q_PROPERTY(int Summ1SymbolNumber READ Get_Summ1SymbolNumber WRITE Set_Summ1SymbolNumber NOTIFY Summ1SymbolNumberChanged)
    Q_PROPERTY(int HorizScale READ Get_HorizScale WRITE Set_HorizScale NOTIFY HorizScaleChanged)
    Q_PROPERTY(quint32 FiscalSign READ Get_FiscalSign WRITE Set_FiscalSign NOTIFY FiscalSignChanged)
    Q_PROPERTY(int Tax4TurnOverOffset READ Get_Tax4TurnOverOffset WRITE Set_Tax4TurnOverOffset NOTIFY Tax4TurnOverOffsetChanged)
    Q_PROPERTY(int Tax1TurnOverSymbolNumber READ Get_Tax1TurnOverSymbolNumber WRITE Set_Tax1TurnOverSymbolNumber NOTIFY Tax1TurnOverSymbolNumberChanged)
    Q_PROPERTY(int Address READ Get_Address WRITE Set_Address NOTIFY AddressChanged)
    Q_PROPERTY(bool AutoEoD READ Get_AutoEoD WRITE Set_AutoEoD NOTIFY AutoEoDChanged)
    Q_PROPERTY(int FNSessionState READ Get_FNSessionState WRITE Set_FNSessionState NOTIFY FNSessionStateChanged)
    Q_PROPERTY(int FNLifeState READ Get_FNLifeState WRITE Set_FNLifeState NOTIFY FNLifeStateChanged)
    Q_PROPERTY(int CardPayType READ Get_CardPayType WRITE Set_CardPayType NOTIFY CardPayTypeChanged)
    Q_PROPERTY(int Tax4SumFont READ Get_Tax4SumFont WRITE Set_Tax4SumFont NOTIFY Tax4SumFontChanged)
    Q_PROPERTY(int ParameterNumber READ Get_ParameterNumber WRITE Set_ParameterNumber NOTIFY ParameterNumberChanged)
    Q_PROPERTY(int RegisterNumber READ Get_RegisterNumber WRITE Set_RegisterNumber NOTIFY RegisterNumberChanged)
    Q_PROPERTY(int InfoType READ Get_InfoType WRITE Set_InfoType NOTIFY InfoTypeChanged)
    Q_PROPERTY(int EmergencyStopCode READ Get_EmergencyStopCode NOTIFY EmergencyStopCodeChanged)
    Q_PROPERTY(int Tax1SumOffset READ Get_Tax1SumOffset WRITE Set_Tax1SumOffset NOTIFY Tax1SumOffsetChanged)
    Q_PROPERTY(int EKLZStringNumber READ Get_EKLZStringNumber WRITE Set_EKLZStringNumber NOTIFY EKLZStringNumberChanged)
    Q_PROPERTY(int MAXValueOfField READ Get_MAXValueOfField NOTIFY MAXValueOfFieldChanged)
    Q_PROPERTY(QString Summ2AsString READ Get_Summ2AsString NOTIFY Summ2AsStringChanged)
    Q_PROPERTY(int Tax2SumSymbolNumber READ Get_Tax2SumSymbolNumber WRITE Set_Tax2SumSymbolNumber NOTIFY Tax2SumSymbolNumberChanged)
    Q_PROPERTY(bool RoughValve READ Get_RoughValve NOTIFY RoughValveChanged)
    Q_PROPERTY(int ChangeSymbolNumber READ Get_ChangeSymbolNumber WRITE Set_ChangeSymbolNumber NOTIFY ChangeSymbolNumberChanged)
    Q_PROPERTY(QDateTime LastKPKDate READ Get_LastKPKDate NOTIFY LastKPKDateChanged)
    Q_PROPERTY(int OperationNameStringNumber READ Get_OperationNameStringNumber WRITE Set_OperationNameStringNumber NOTIFY OperationNameStringNumberChanged)
    Q_PROPERTY(quint32 FileVersionMS READ Get_FileVersionMS NOTIFY FileVersionMSChanged)
    Q_PROPERTY(int EKLZResultCode READ Get_EKLZResultCode WRITE Set_EKLZResultCode NOTIFY EKLZResultCodeChanged)
    Q_PROPERTY(int HeaderOffset READ Get_HeaderOffset WRITE Set_HeaderOffset NOTIFY HeaderOffsetChanged)
    Q_PROPERTY(bool TaxValue6Enabled READ Get_TaxValue6Enabled WRITE Set_TaxValue6Enabled NOTIFY TaxValue6EnabledChanged)
    Q_PROPERTY(int FieldNumber READ Get_FieldNumber WRITE Set_FieldNumber NOTIFY FieldNumberChanged)
    Q_PROPERTY(int LineNumber READ Get_LineNumber WRITE Set_LineNumber NOTIFY LineNumberChanged)
    Q_PROPERTY(int TransmitSessionNumber READ Get_TransmitSessionNumber NOTIFY TransmitSessionNumberChanged)
    Q_PROPERTY(int SlowingInMilliliters READ Get_SlowingInMilliliters WRITE Set_SlowingInMilliliters NOTIFY SlowingInMillilitersChanged)
    Q_PROPERTY(int DiscountOnCheckOffset READ Get_DiscountOnCheckOffset WRITE Set_DiscountOnCheckOffset NOTIFY DiscountOnCheckOffsetChanged)
    Q_PROPERTY(QString ComLogFile READ Get_ComLogFile WRITE Set_ComLogFile NOTIFY ComLogFileChanged)
    Q_PROPERTY(int TextFont READ Get_TextFont WRITE Set_TextFont NOTIFY TextFontChanged)
    Q_PROPERTY(int AttributeNumber READ Get_AttributeNumber WRITE Set_AttributeNumber NOTIFY AttributeNumberChanged)
    Q_PROPERTY(bool ServerConnected READ Get_ServerConnected NOTIFY ServerConnectedChanged)
    Q_PROPERTY(int DiscountOnCheckStringNumber READ Get_DiscountOnCheckStringNumber WRITE Set_DiscountOnCheckStringNumber NOTIFY DiscountOnCheckStringNumberChanged)
    Q_PROPERTY(quint32 SysAdminPassword READ Get_SysAdminPassword WRITE Set_SysAdminPassword NOTIFY SysAdminPasswordChanged)
    Q_PROPERTY(QString NameCashRegEx READ Get_NameCashRegEx NOTIFY NameCashRegExChanged)
    Q_PROPERTY(int MaxCommandSendCount READ Get_MaxCommandSendCount WRITE Set_MaxCommandSendCount NOTIFY MaxCommandSendCountChanged)
    Q_PROPERTY(int LDEscapeTimeout READ Get_LDEscapeTimeout WRITE Set_LDEscapeTimeout NOTIFY LDEscapeTimeoutChanged)
    Q_PROPERTY(int NakCount READ Get_NakCount WRITE Set_NakCount NOTIFY NakCountChanged)
    Q_PROPERTY(QString MethodName READ Get_MethodName WRITE Set_MethodName NOTIFY MethodNameChanged)
    Q_PROPERTY(int ECRBuild READ Get_ECRBuild NOTIFY ECRBuildChanged)
    Q_PROPERTY(QString ModelNames READ Get_ModelNames NOTIFY ModelNamesChanged)
    Q_PROPERTY(int SubTotalSumFont READ Get_SubTotalSumFont WRITE Set_SubTotalSumFont NOTIFY SubTotalSumFontChanged)
    Q_PROPERTY(int PriceFont READ Get_PriceFont WRITE Set_PriceFont NOTIFY PriceFontChanged)
    Q_PROPERTY(int MarkingType READ Get_MarkingType WRITE Set_MarkingType NOTIFY MarkingTypeChanged)
    Q_PROPERTY(int MarkingTypeEx READ Get_MarkingTypeEx WRITE Set_MarkingTypeEx NOTIFY MarkingTypeExChanged)
    Q_PROPERTY(int OFDPollPeriod READ Get_OFDPollPeriod WRITE Set_OFDPollPeriod NOTIFY OFDPollPeriodChanged)
    Q_PROPERTY(QString IPAddress READ Get_IPAddress WRITE Set_IPAddress NOTIFY IPAddressChanged)
    Q_PROPERTY(int Poll2 READ Get_Poll2 NOTIFY Poll2Changed)
    Q_PROPERTY(qint64 Change READ Get_Change NOTIFY ChangeChanged)
    Q_PROPERTY(QString BarcodeAlignments READ Get_BarcodeAlignments NOTIFY BarcodeAlignmentsChanged)
    Q_PROPERTY(int SaveSettingsType READ Get_SaveSettingsType WRITE Set_SaveSettingsType NOTIFY SaveSettingsTypeChanged)
    Q_PROPERTY(bool UseWareCode READ Get_UseWareCode WRITE Set_UseWareCode NOTIFY UseWareCodeChanged)
    Q_PROPERTY(bool OFDTicketReceived READ Get_OFDTicketReceived WRITE Set_OFDTicketReceived NOTIFY OFDTicketReceivedChanged)
    Q_PROPERTY(QString Token READ Get_Token WRITE Set_Token NOTIFY TokenChanged)
    Q_PROPERTY(QString Summ3AsString READ Get_Summ3AsString NOTIFY Summ3AsStringChanged)
    Q_PROPERTY(bool PrintJournalBeforeZReport READ Get_PrintJournalBeforeZReport WRITE Set_PrintJournalBeforeZReport NOTIFY PrintJournalBeforeZReportChanged)
    Q_PROPERTY(int Tax2SumStringNumber READ Get_Tax2SumStringNumber WRITE Set_Tax2SumStringNumber NOTIFY Tax2SumStringNumberChanged)
    Q_PROPERTY(quint32 Password READ Get_Password WRITE Set_Password NOTIFY PasswordChanged)
    Q_PROPERTY(int ExciseCode READ Get_ExciseCode WRITE Set_ExciseCode NOTIFY ExciseCodeChanged)
    Q_PROPERTY(int LastKPKNumber READ Get_LastKPKNumber NOTIFY LastKPKNumberChanged)
    Q_PROPERTY(int KKTLicense READ Get_KKTLicense WRITE Set_KKTLicense NOTIFY KKTLicenseChanged)
    Q_PROPERTY(QString FieldName READ Get_FieldName NOTIFY FieldNameChanged)
    Q_PROPERTY(int ClicheFont READ Get_ClicheFont WRITE Set_ClicheFont NOTIFY ClicheFontChanged)
    Q_PROPERTY(int ReceiptNumber READ Get_ReceiptNumber WRITE Set_ReceiptNumber NOTIFY ReceiptNumberChanged)
    Q_PROPERTY(int ModelID READ Get_ModelID WRITE Set_ModelID NOTIFY ModelIDChanged)
    Q_PROPERTY(int QuantitySymbolNumber READ Get_QuantitySymbolNumber WRITE Set_QuantitySymbolNumber NOTIFY QuantitySymbolNumberChanged)
    Q_PROPERTY(int ccWareNameLineNumber READ Get_ccWareNameLineNumber WRITE Set_ccWareNameLineNumber NOTIFY ccWareNameLineNumberChanged)
    Q_PROPERTY(int BanknoteType READ Get_BanknoteType WRITE Set_BanknoteType NOTIFY BanknoteTypeChanged)
    Q_PROPERTY(int SummFont READ Get_SummFont WRITE Set_SummFont NOTIFY SummFontChanged)
    Q_PROPERTY(qint64 RegSaleReturnSession READ Get_RegSaleReturnSession NOTIFY RegSaleReturnSessionChanged)
    Q_PROPERTY(QString DeviceCodeDescription READ Get_DeviceCodeDescription NOTIFY DeviceCodeDescriptionChanged)
    Q_PROPERTY(QDateTime Time2 READ Get_Time2 WRITE Set_Time2 NOTIFY Time2Changed)
    Q_PROPERTY(int KPKOffset READ Get_KPKOffset WRITE Set_KPKOffset NOTIFY KPKOffsetChanged)
    Q_PROPERTY(QString ECROutput READ Get_ECROutput NOTIFY ECROutputChanged)
    Q_PROPERTY(int FieldSize READ Get_FieldSize NOTIFY FieldSizeChanged)
    Q_PROPERTY(int PaymentTypeSign READ Get_PaymentTypeSign WRITE Set_PaymentTypeSign NOTIFY PaymentTypeSignChanged)
    Q_PROPERTY(int FirstLineNumber READ Get_FirstLineNumber WRITE Set_FirstLineNumber NOTIFY FirstLineNumberChanged)
    Q_PROPERTY(quint32 DriverBuild READ Get_DriverBuild NOTIFY DriverBuildChanged)
    Q_PROPERTY(QDateTime LastKPKTime READ Get_LastKPKTime NOTIFY LastKPKTimeChanged)
    Q_PROPERTY(QString TagDescription READ Get_TagDescription WRITE Set_TagDescription NOTIFY TagDescriptionChanged)
    Q_PROPERTY(int Summ4SymbolNumber READ Get_Summ4SymbolNumber WRITE Set_Summ4SymbolNumber NOTIFY Summ4SymbolNumberChanged)
    Q_PROPERTY(bool IsBatteryLow READ Get_IsBatteryLow NOTIFY IsBatteryLowChanged)
    Q_PROPERTY(quint32 NewSCPassword READ Get_NewSCPassword WRITE Set_NewSCPassword NOTIFY NewSCPasswordChanged)
    Q_PROPERTY(int Tax2TurnOverSymbolNumber READ Get_Tax2TurnOverSymbolNumber WRITE Set_Tax2TurnOverSymbolNumber NOTIFY Tax2TurnOverSymbolNumberChanged)
    Q_PROPERTY(int Tax3TurnOverStringNumber READ Get_Tax3TurnOverStringNumber WRITE Set_Tax3TurnOverStringNumber NOTIFY Tax3TurnOverStringNumberChanged)
    Q_PROPERTY(QString EKLZData READ Get_EKLZData NOTIFY EKLZDataChanged)
    Q_PROPERTY(int ECRFlags READ Get_ECRFlags NOTIFY ECRFlagsChanged)
    Q_PROPERTY(int DepartmentOffset READ Get_DepartmentOffset WRITE Set_DepartmentOffset NOTIFY DepartmentOffsetChanged)
    Q_PROPERTY(qint64 TaxValue1 READ Get_TaxValue1 WRITE Set_TaxValue1 NOTIFY TaxValue1Changed)
    Q_PROPERTY(int EscapePort READ Get_EscapePort WRITE Set_EscapePort NOTIFY EscapePortChanged)
    Q_PROPERTY(int OperationNameFont READ Get_OperationNameFont WRITE Set_OperationNameFont NOTIFY OperationNameFontChanged)
    Q_PROPERTY(int IntervalNumber READ Get_IntervalNumber WRITE Set_IntervalNumber NOTIFY IntervalNumberChanged)
    Q_PROPERTY(int CommandIndex READ Get_CommandIndex WRITE Set_CommandIndex NOTIFY CommandIndexChanged)
    Q_PROPERTY(TBinaryConversion BinaryConversion READ Get_BinaryConversion WRITE Set_BinaryConversion NOTIFY BinaryConversionChanged)
    Q_PROPERTY(TConnectionType ConnectionType READ Get_ConnectionType WRITE Set_ConnectionType NOTIFY ConnectionTypeChanged)
    Q_PROPERTY(qint64 Discount4 READ Get_Discount4 WRITE Set_Discount4 NOTIFY Discount4Changed)
    Q_PROPERTY(bool LineSwapBytes READ Get_LineSwapBytes WRITE Set_LineSwapBytes NOTIFY LineSwapBytesChanged)
    Q_PROPERTY(qint64 TaxValue4 READ Get_TaxValue4 WRITE Set_TaxValue4 NOTIFY TaxValue4Changed)
    Q_PROPERTY(qint64 Discount2 READ Get_Discount2 WRITE Set_Discount2 NOTIFY Discount2Changed)
    Q_PROPERTY(bool RequestErrorDescription READ Get_RequestErrorDescription WRITE Set_RequestErrorDescription NOTIFY RequestErrorDescriptionChanged)
    Q_PROPERTY(bool AutoOFDExchange READ Get_AutoOFDExchange WRITE Set_AutoOFDExchange NOTIFY AutoOFDExchangeChanged)
    Q_PROPERTY(bool SlipDocumentIsPresent READ Get_SlipDocumentIsPresent NOTIFY SlipDocumentIsPresentChanged)
    Q_PROPERTY(int NumberOfCopies READ Get_NumberOfCopies WRITE Set_NumberOfCopies NOTIFY NumberOfCopiesChanged)
    Q_PROPERTY(QString CustomerEmail READ Get_CustomerEmail WRITE Set_CustomerEmail NOTIFY CustomerEmailChanged)
    Q_PROPERTY(int FMResultCode READ Get_FMResultCode NOTIFY FMResultCodeChanged)
    Q_PROPERTY(int ActivizationStatus READ Get_ActivizationStatus WRITE Set_ActivizationStatus NOTIFY ActivizationStatusChanged)
    Q_PROPERTY(quint32 DriverMajorVersion READ Get_DriverMajorVersion NOTIFY DriverMajorVersionChanged)
    Q_PROPERTY(int EscapeTimeout READ Get_EscapeTimeout WRITE Set_EscapeTimeout NOTIFY EscapeTimeoutChanged)
    Q_PROPERTY(bool IsCorruptedFMRecords READ Get_IsCorruptedFMRecords NOTIFY IsCorruptedFMRecordsChanged)
    Q_PROPERTY(int LDBaudrate READ Get_LDBaudrate WRITE Set_LDBaudrate NOTIFY LDBaudrateChanged)
    Q_PROPERTY(int DepartmentFont READ Get_DepartmentFont WRITE Set_DepartmentFont NOTIFY DepartmentFontChanged)
    Q_PROPERTY(int Tax4RateOffset READ Get_Tax4RateOffset WRITE Set_Tax4RateOffset NOTIFY Tax4RateOffsetChanged)
    Q_PROPERTY(bool TypeOfSumOfEntriesFM READ Get_TypeOfSumOfEntriesFM WRITE Set_TypeOfSumOfEntriesFM NOTIFY TypeOfSumOfEntriesFMChanged)
    Q_PROPERTY(bool IsASPDMode READ Get_IsASPDMode NOTIFY IsASPDModeChanged)
    Q_PROPERTY(int IBMLastReturnBuyReceiptNumber READ Get_IBMLastReturnBuyReceiptNumber NOTIFY IBMLastReturnBuyReceiptNumberChanged)
    Q_PROPERTY(int IBMStatusByte8 READ Get_IBMStatusByte8 NOTIFY IBMStatusByte8Changed)
    Q_PROPERTY(int DataBlockNumber READ Get_DataBlockNumber NOTIFY DataBlockNumberChanged)
    Q_PROPERTY(int FNSoftType READ Get_FNSoftType NOTIFY FNSoftTypeChanged)
    Q_PROPERTY(int Tax3TurnOverFont READ Get_Tax3TurnOverFont WRITE Set_Tax3TurnOverFont NOTIFY Tax3TurnOverFontChanged)
    Q_PROPERTY(int Tax3SumSymbolNumber READ Get_Tax3SumSymbolNumber WRITE Set_Tax3SumSymbolNumber NOTIFY Tax3SumSymbolNumberChanged)
    Q_PROPERTY(int IBMStatusByte1 READ Get_IBMStatusByte1 NOTIFY IBMStatusByte1Changed)
    Q_PROPERTY(int IBMStatusByte2 READ Get_IBMStatusByte2 NOTIFY IBMStatusByte2Changed)
    Q_PROPERTY(int IBMStatusByte3 READ Get_IBMStatusByte3 NOTIFY IBMStatusByte3Changed)
    Q_PROPERTY(int IBMStatusByte4 READ Get_IBMStatusByte4 NOTIFY IBMStatusByte4Changed)
    Q_PROPERTY(int IBMStatusByte5 READ Get_IBMStatusByte5 NOTIFY IBMStatusByte5Changed)
    Q_PROPERTY(int IBMStatusByte6 READ Get_IBMStatusByte6 NOTIFY IBMStatusByte6Changed)
    Q_PROPERTY(int IBMStatusByte7 READ Get_IBMStatusByte7 NOTIFY IBMStatusByte7Changed)
    Q_PROPERTY(int ErrorCode READ Get_ErrorCode WRITE Set_ErrorCode NOTIFY ErrorCodeChanged)
    Q_PROPERTY(QString UCodePageText READ Get_UCodePageText NOTIFY UCodePageTextChanged)
    Q_PROPERTY(int RequestType READ Get_RequestType WRITE Set_RequestType NOTIFY RequestTypeChanged)
    Q_PROPERTY(int TagID READ Get_TagID WRITE Set_TagID NOTIFY TagIDChanged)
    Q_PROPERTY(int IBMSessionMonth READ Get_IBMSessionMonth NOTIFY IBMSessionMonthChanged)
    Q_PROPERTY(QString OPRequisiteValue READ Get_OPRequisiteValue WRITE Set_OPRequisiteValue NOTIFY OPRequisiteValueChanged)
    Q_PROPERTY(int ChangeOffset READ Get_ChangeOffset WRITE Set_ChangeOffset NOTIFY ChangeOffsetChanged)
    Q_PROPERTY(int OpenDocumentNumber READ Get_OpenDocumentNumber NOTIFY OpenDocumentNumberChanged)
    Q_PROPERTY(QString LastKPKTimeStr READ Get_LastKPKTimeStr NOTIFY LastKPKTimeStrChanged)
    Q_PROPERTY(int CashAcceptorPollingMode READ Get_CashAcceptorPollingMode NOTIFY CashAcceptorPollingModeChanged)
    Q_PROPERTY(int Summ2NameOffset READ Get_Summ2NameOffset WRITE Set_Summ2NameOffset NOTIFY Summ2NameOffsetChanged)
    Q_PROPERTY(QString ComputerName READ Get_ComputerName WRITE Set_ComputerName NOTIFY ComputerNameChanged)
    Q_PROPERTY(int KPKValue READ Get_KPKValue WRITE Set_KPKValue NOTIFY KPKValueChanged)
    Q_PROPERTY(QString SlipStringIntervals READ Get_SlipStringIntervals WRITE Set_SlipStringIntervals NOTIFY SlipStringIntervalsChanged)
    Q_PROPERTY(int FMMode READ Get_FMMode NOTIFY FMModeChanged)
    Q_PROPERTY(int Tax1NameFont READ Get_Tax1NameFont WRITE Set_Tax1NameFont NOTIFY Tax1NameFontChanged)
    Q_PROPERTY(quint32 DocumentNumber READ Get_DocumentNumber WRITE Set_DocumentNumber NOTIFY DocumentNumberChanged)
    Q_PROPERTY(bool UseSlipDocument READ Get_UseSlipDocument WRITE Set_UseSlipDocument NOTIFY UseSlipDocumentChanged)
    Q_PROPERTY(int Timeout READ Get_Timeout WRITE Set_Timeout NOTIFY TimeoutChanged)
    Q_PROPERTY(int PrintWidth READ Get_PrintWidth NOTIFY PrintWidthChanged)
    Q_PROPERTY(int DiscountOnCheckFont READ Get_DiscountOnCheckFont WRITE Set_DiscountOnCheckFont NOTIFY DiscountOnCheckFontChanged)
    Q_PROPERTY(int TotalSumOffset READ Get_TotalSumOffset WRITE Set_TotalSumOffset NOTIFY TotalSumOffsetChanged)
    Q_PROPERTY(int PingResult READ Get_PingResult WRITE Set_PingResult NOTIFY PingResultChanged)
    Q_PROPERTY(int RegistrationReasonCode READ Get_RegistrationReasonCode WRITE Set_RegistrationReasonCode NOTIFY RegistrationReasonCodeChanged)
    Q_PROPERTY(int SymbolWidth READ Get_SymbolWidth WRITE Set_SymbolWidth NOTIFY SymbolWidthChanged)
    Q_PROPERTY(int SymbolHeight READ Get_SymbolHeight WRITE Set_SymbolHeight NOTIFY SymbolHeightChanged)
    Q_PROPERTY(bool SlowingValve READ Get_SlowingValve NOTIFY SlowingValveChanged)
    Q_PROPERTY(int SymbolCode READ Get_SymbolCode WRITE Set_SymbolCode NOTIFY SymbolCodeChanged)
    Q_PROPERTY(int WrittenByte READ Get_WrittenByte WRITE Set_WrittenByte NOTIFY WrittenByteChanged)
    Q_PROPERTY(int TextStringNumber READ Get_TextStringNumber WRITE Set_TextStringNumber NOTIFY TextStringNumberChanged)
    Q_PROPERTY(quint32 LDSysAdminPassword READ Get_LDSysAdminPassword WRITE Set_LDSysAdminPassword NOTIFY LDSysAdminPasswordChanged)
    Q_PROPERTY(int Summ4NameFont READ Get_Summ4NameFont WRITE Set_Summ4NameFont NOTIFY Summ4NameFontChanged)
    Q_PROPERTY(int Tax4SumSymbolNumber READ Get_Tax4SumSymbolNumber WRITE Set_Tax4SumSymbolNumber NOTIFY Tax4SumSymbolNumberChanged)
    Q_PROPERTY(int IBMSessionYear READ Get_IBMSessionYear NOTIFY IBMSessionYearChanged)
    Q_PROPERTY(int OPTransactionStatus READ Get_OPTransactionStatus WRITE Set_OPTransactionStatus NOTIFY OPTransactionStatusChanged)
    Q_PROPERTY(bool TypeOfLastEntryFM READ Get_TypeOfLastEntryFM NOTIFY TypeOfLastEntryFMChanged)
    Q_PROPERTY(int AccType READ Get_AccType WRITE Set_AccType NOTIFY AccTypeChanged)
    Q_PROPERTY(QString LineData2 READ Get_LineData2 WRITE Set_LineData2 NOTIFY LineData2Changed)
    Q_PROPERTY(QString BarcodeTypes READ Get_BarcodeTypes NOTIFY BarcodeTypesChanged)
    Q_PROPERTY(bool TaxValueEnabled READ Get_TaxValueEnabled WRITE Set_TaxValueEnabled NOTIFY TaxValueEnabledChanged)
    Q_PROPERTY(int Tax3RateFont READ Get_Tax3RateFont WRITE Set_Tax3RateFont NOTIFY Tax3RateFontChanged)
    Q_PROPERTY(int UMinorProtocolVersion READ Get_UMinorProtocolVersion NOTIFY UMinorProtocolVersionChanged)
    Q_PROPERTY(int FMOffset READ Get_FMOffset WRITE Set_FMOffset NOTIFY FMOffsetChanged)
    Q_PROPERTY(bool CutType READ Get_CutType WRITE Set_CutType NOTIFY CutTypeChanged)
    Q_PROPERTY(int FeedLineCount READ Get_FeedLineCount WRITE Set_FeedLineCount NOTIFY FeedLineCountChanged)
    Q_PROPERTY(bool TaxValue2Enabled READ Get_TaxValue2Enabled WRITE Set_TaxValue2Enabled NOTIFY TaxValue2EnabledChanged)
    Q_PROPERTY(int PUKCode READ Get_PUKCode WRITE Set_PUKCode NOTIFY PUKCodeChanged)
    Q_PROPERTY(int MessageCount READ Get_MessageCount WRITE Set_MessageCount NOTIFY MessageCountChanged)
    Q_PROPERTY(bool UseSlipCheck READ Get_UseSlipCheck WRITE Set_UseSlipCheck NOTIFY UseSlipCheckChanged)
    Q_PROPERTY(int SlipDocumentWidth READ Get_SlipDocumentWidth WRITE Set_SlipDocumentWidth NOTIFY SlipDocumentWidthChanged)
    Q_PROPERTY(int BarcodeType READ Get_BarcodeType WRITE Set_BarcodeType NOTIFY BarcodeTypeChanged)
    Q_PROPERTY(bool AdjustRITimeout READ Get_AdjustRITimeout WRITE Set_AdjustRITimeout NOTIFY AdjustRITimeoutChanged)
    Q_PROPERTY(int FNDocumentData READ Get_FNDocumentData WRITE Set_FNDocumentData NOTIFY FNDocumentDataChanged)
    Q_PROPERTY(int Summ1StringNumber READ Get_Summ1StringNumber WRITE Set_Summ1StringNumber NOTIFY Summ1StringNumberChanged)
    Q_PROPERTY(int LDTimeout READ Get_LDTimeout WRITE Set_LDTimeout NOTIFY LDTimeoutChanged)
    Q_PROPERTY(int TextSymbolNumber READ Get_TextSymbolNumber WRITE Set_TextSymbolNumber NOTIFY TextSymbolNumberChanged)
    Q_PROPERTY(int Summ3Offset READ Get_Summ3Offset WRITE Set_Summ3Offset NOTIFY Summ3OffsetChanged)
    Q_PROPERTY(bool LogOn READ Get_LogOn WRITE Set_LogOn NOTIFY LogOnChanged)
    Q_PROPERTY(QString LoaderVersion READ Get_LoaderVersion NOTIFY LoaderVersionChanged)
    Q_PROPERTY(int TransmitStatus READ Get_TransmitStatus NOTIFY TransmitStatusChanged)
    Q_PROPERTY(QString PollDescription READ Get_PollDescription NOTIFY PollDescriptionChanged)
    Q_PROPERTY(int Summ3NameFont READ Get_Summ3NameFont WRITE Set_Summ3NameFont NOTIFY Summ3NameFontChanged)
    Q_PROPERTY(int BarWidth READ Get_BarWidth WRITE Set_BarWidth NOTIFY BarWidthChanged)
    Q_PROPERTY(int BaudRate READ Get_BaudRate WRITE Set_BaudRate NOTIFY BaudRateChanged)
    Q_PROPERTY(qint64 Discount3 READ Get_Discount3 WRITE Set_Discount3 NOTIFY Discount3Changed)
    Q_PROPERTY(qint64 Discount1 READ Get_Discount1 WRITE Set_Discount1 NOTIFY Discount1Changed)
    Q_PROPERTY(int DiscountOnCheckSumSymbolNumber READ Get_DiscountOnCheckSumSymbolNumber WRITE Set_DiscountOnCheckSumSymbolNumber NOTIFY DiscountOnCheckSumSymbolNumberChanged)
    Q_PROPERTY(bool ICSEnabled READ Get_ICSEnabled WRITE Set_ICSEnabled NOTIFY ICSEnabledChanged)
    Q_PROPERTY(QString DataBlock READ Get_DataBlock NOTIFY DataBlockChanged)
    Q_PROPERTY(int CopyType READ Get_CopyType WRITE Set_CopyType NOTIFY CopyTypeChanged)
    Q_PROPERTY(int OFDPort READ Get_OFDPort WRITE Set_OFDPort NOTIFY OFDPortChanged)
    Q_PROPERTY(int SKNOError READ Get_SKNOError WRITE Set_SKNOError NOTIFY SKNOErrorChanged)
    Q_PROPERTY(int Summ3SymbolNumber READ Get_Summ3SymbolNumber WRITE Set_Summ3SymbolNumber NOTIFY Summ3SymbolNumberChanged)
    Q_PROPERTY(int ECRMode8Status READ Get_ECRMode8Status NOTIFY ECRMode8StatusChanged)
    Q_PROPERTY(int ChangeFont READ Get_ChangeFont WRITE Set_ChangeFont NOTIFY ChangeFontChanged)
    Q_PROPERTY(int Summ1NameFont READ Get_Summ1NameFont WRITE Set_Summ1NameFont NOTIFY Summ1NameFontChanged)
    Q_PROPERTY(int SubTotalSumOffset READ Get_SubTotalSumOffset WRITE Set_SubTotalSumOffset NOTIFY SubTotalSumOffsetChanged)
    Q_PROPERTY(bool SkipPrint READ Get_SkipPrint WRITE Set_SkipPrint NOTIFY SkipPrintChanged)
    Q_PROPERTY(QString DigitalSign READ Get_DigitalSign WRITE Set_DigitalSign NOTIFY DigitalSignChanged)
    Q_PROPERTY(int DeviceFunctionNumber READ Get_DeviceFunctionNumber WRITE Set_DeviceFunctionNumber NOTIFY DeviceFunctionNumberChanged)
    Q_PROPERTY(int ValueOfFunctionInteger READ Get_ValueOfFunctionInteger WRITE Set_ValueOfFunctionInteger NOTIFY ValueOfFunctionIntegerChanged)
    Q_PROPERTY(QString ValueOfFunctionString READ Get_ValueOfFunctionString WRITE Set_ValueOfFunctionString NOTIFY ValueOfFunctionStringChanged)
    Q_PROPERTY(bool EnableCashcoreMarkCompatibility READ Get_EnableCashcoreMarkCompatibility WRITE Set_EnableCashcoreMarkCompatibility NOTIFY EnableCashcoreMarkCompatibilityChanged)
    Q_PROPERTY(QString TLVDataHex READ Get_TLVDataHex WRITE Set_TLVDataHex NOTIFY TLVDataHexChanged)
    Q_PROPERTY(int64_t MessageNumber READ Get_MessageNumber WRITE Set_MessageNumber NOTIFY MessageNumberChanged)
    Q_PROPERTY(int CheckItemLocalError READ Get_CheckItemLocalError WRITE Set_CheckItemLocalError NOTIFY CheckItemLocalErrorChanged)
    Q_PROPERTY(int MeasureUnit READ Get_MeasureUnit WRITE Set_MeasureUnit NOTIFY MeasureUnitChanged)
    Q_PROPERTY(bool DivisionalQuantity READ Get_DivisionalQuantity WRITE Set_DivisionalQuantity NOTIFY DivisionalQuantityChanged)
    Q_PROPERTY(quint64 Numerator READ Get_Numerator WRITE Set_Numerator NOTIFY NumeratorChanged)
    Q_PROPERTY(quint64 Denominator READ Get_Denominator WRITE Set_Denominator NOTIFY DenominatorChanged)
    Q_PROPERTY(int FreeMemorySize READ Get_FreeMemorySize WRITE Set_FreeMemorySize NOTIFY FreeMemorySizeChanged)
    Q_PROPERTY(int MCCheckStatus READ Get_MCCheckStatus WRITE Set_MCCheckStatus NOTIFY MCCheckStatusChanged)
    Q_PROPERTY(int MCNotificationStatus READ Get_MCNotificationStatus WRITE Set_MCNotificationStatus NOTIFY MCNotificationStatusChanged)
    Q_PROPERTY(int MCCommandFlags READ Get_MCCommandFlags WRITE Set_MCCommandFlags NOTIFY MCCommandFlagsChanged)
    Q_PROPERTY(int MCCheckResultSavedCount READ Get_MCCheckResultSavedCount WRITE Set_MCCheckResultSavedCount NOTIFY MCCheckResultSavedCountChanged)
    Q_PROPERTY(int MCRealizationCount READ Get_MCRealizationCount WRITE Set_MCRealizationCount NOTIFY MCRealizationCountChanged)
    Q_PROPERTY(int MCStorageSize READ Get_MCStorageSize WRITE Set_MCStorageSize NOTIFY MCStorageSizeChanged)
    Q_PROPERTY(quint64 CheckSum READ Get_CheckSum WRITE Set_CheckSum NOTIFY CheckSumChanged)
    Q_PROPERTY(int NotificationCount READ Get_NotificationCount WRITE Set_NotificationCount NOTIFY NotificationCountChanged)
    Q_PROPERTY(int64_t NotificationNumber READ Get_NotificationNumber WRITE Set_NotificationNumber NOTIFY NotificationNumberChanged)
    Q_PROPERTY(int NotificationSize READ Get_NotificationSize WRITE Set_NotificationSize NOTIFY NotificationSizeChanged)
    Q_PROPERTY(int DataOffset READ Get_DataOffset WRITE Set_DataOffset NOTIFY DataOffsetChanged)
    Q_PROPERTY(int MarkingType2 READ Get_MarkingType2 WRITE Set_MarkingType2 NOTIFY MarkingType2Changed)
    Q_PROPERTY(QByteArray RandomSequence READ Get_RandomSequence WRITE Set_RandomSequence NOTIFY RandomSequenceChanged)
    Q_PROPERTY(QString RandomSequenceHex READ Get_RandomSequenceHex WRITE Set_RandomSequenceHex NOTIFY RandomSequenceHexChanged)
    Q_PROPERTY(QByteArray AuthData READ Get_AuthData WRITE Set_AuthData NOTIFY AuthDataChanged)
    Q_PROPERTY(int ItemStatus READ Get_ItemStatus WRITE Set_ItemStatus NOTIFY ItemStatusChanged)
    Q_PROPERTY(int CheckItemMode READ Get_CheckItemMode WRITE Set_CheckItemMode NOTIFY CheckItemModeChanged)
    Q_PROPERTY(int CheckItemLocalResult READ Get_CheckItemLocalResult WRITE Set_CheckItemLocalResult NOTIFY CheckItemLocalResultChanged)
    Q_PROPERTY(int KMServerErrorCode READ Get_KMServerErrorCode WRITE Set_KMServerErrorCode NOTIFY KMServerErrorCodeChanged)
    Q_PROPERTY(int KMServerCheckingStatus READ Get_KMServerCheckingStatus WRITE Set_KMServerCheckingStatus NOTIFY KMServerCheckingStatusChanged)
    Q_PROPERTY(int LastDocumentNumber READ Get_LastDocumentNumber WRITE Set_LastDocumentNumber NOTIFY LastDocumentNumberChanged)
    Q_PROPERTY(int FirstDocumentNumber READ Get_FirstDocumentNumber WRITE Set_FirstDocumentNumber NOTIFY FirstDocumentNumberChanged)
    Q_PROPERTY(int FNArchiveType READ Get_FNArchiveType WRITE Set_FNArchiveType NOTIFY FNArchiveTypeChanged)
    Q_PROPERTY(bool MarkingOnly READ Get_MarkingOnly WRITE Set_MarkingOnly NOTIFY MarkingOnlyChanged)
    Q_PROPERTY(QString CrptExchangeCaCertPath READ Get_CrptExchangeCaCertPath WRITE Set_CrptExchangeCaCertPath NOTIFY CrptExchangeCaCertPathChanged)
    Q_PROPERTY(QString CrptCdnListUrl READ Get_CrptCdnListUrl WRITE Set_CrptCdnListUrl NOTIFY CrptCdnListUrlChanged)
    Q_PROPERTY(QString CrptToken READ Get_CrptToken WRITE Set_CrptToken NOTIFY CrptTokenChanged)
    Q_PROPERTY(QString OutputStrJson READ Get_OutputStrJson WRITE Set_OutputStrJson NOTIFY OutputStrJsonChanged)
    Q_PROPERTY(QString InputStrJson READ Get_InputStrJson WRITE Set_InputStrJson NOTIFY InputStrJsonChanged)
    Q_PROPERTY(bool CrptCheck READ Get_CrptCheck WRITE Set_CrptCheck NOTIFY CrptCheckChanged)
    Q_PROPERTY(int FNOSUSupportStatus READ Get_FNOSUSupportStatus WRITE Set_FNOSUSupportStatus NOTIFY FNOSUSupportStatusChanged)
    Q_PROPERTY(QString FNImplementation READ Get_FNImplementation WRITE Set_FNImplementation NOTIFY FNImplementationChanged)
    Q_PROPERTY(int DocumentSize READ Get_DocumentSize WRITE Set_DocumentSize NOTIFY DocumentSizeChanged)
    Q_PROPERTY(bool MCOSUSign READ Get_MCOSUSign WRITE Set_MCOSUSign NOTIFY MCOSUSignChanged)
    Q_PROPERTY(QString FontHashHex READ Get_FontHashHex NOTIFY FontHashHexChanged)
    Q_PROPERTY(QString DataBlockHex READ Get_DataBlockHex NOTIFY DataBlockHexChanged)
    Q_PROPERTY(QString DeclarativeEndpointPath READ Get_DeclarativeEndpointPath WRITE Set_DeclarativeEndpointPath NOTIFY DeclarativeEndpointPathChanged)
    Q_PROPERTY(QString DeclarativeOutput READ Get_DeclarativeOutput WRITE Set_DeclarativeOutput NOTIFY DeclarativeOutputChanged)
    Q_PROPERTY(QString DeclarativeInput READ Get_DeclarativeInput WRITE Set_DeclarativeInput NOTIFY DeclarativeInputChanged)
    Q_PROPERTY(qint64 WaitForPrintingTimeout READ Get_WaitForPrintingTimeout WRITE Set_WaitForPrintingTimeout NOTIFY WaitForPrintingTimeoutChanged)
    Q_PROPERTY(QString UserAttributeValue READ Get_UserAttributeValue WRITE Set_UserAttributeValue NOTIFY UserAttributeValueChanged)
    Q_PROPERTY(QString UserAttributeName READ Get_UserAttributeName WRITE Set_UserAttributeName NOTIFY UserAttributeNameChanged)

public:
    enum TBarcodeAlignment {
        baCenter = 0,
        baLeft = 1,
        baRight = 2,
    };
    Q_ENUM(TBarcodeAlignment)
    enum TFinishDocumentMode {
        fdmTrailerDisabled = 0,
        fdmTrailerEnabled = 1,
    };
    Q_ENUM(TFinishDocumentMode)
    enum TBinaryConversion {
        BINARY_CONVERSION_NONE = 0,
        BINARY_CONVERSION_HEX = 1,
    };
    Q_ENUM(TBinaryConversion)
    enum TCodePage {
        CODE_PAGE_DEFAULT = 0,
        CODE_PAGE_RUSSIAN = 1,
        CODE_PAGE_ARMENIAN_UNICODE = 2,
        CODE_PAGE_ARMENIAN_ANSI = 3,
        CODE_PAGE_KAZAKH_UNICODE = 4,
        CODE_PAGE_TURKMEN_UNICODE = 5,
    };
    Q_ENUM(TCodePage)
    enum TConnectionType {
        Local = 0,
        ServerTcp = 1,
        ServerDCOM = 2,
        ESCAPE = 3,
        NotUsed = 4,
        Emulator = 5,
        Tcp = 6,
    };
    Q_ENUM(TConnectionType)
    enum BarcodeTextPosition {
        BCT_None = 0,
        BCT_Below = 1,
        BCT_Above = 2,
        BCT_Both = 3,
    };
    Q_ENUM(BarcodeTextPosition)
    enum BarcodeLineType {
        BC1D_Code128A = 0,
        BC1D_Code128B = 1,
        BC1D_Code128C = 2,
        BC1D_ReservedForQR = 3,
        BC1D_Code39 = 4,
        BC1D_EAN13 = 5,
    };
    Q_ENUM(BarcodeLineType)
    enum Barcode2DType {
        BC2D_PDF417 = 0,
        BC2D_DATAMATRIX = 1,
        BC2D_AZTEC = 2,
        BC2D_QRCODE = 3,
    };
    Q_ENUM(Barcode2DType)
    enum DevicePropertiesEnumeration {
        DPE_f00_journal_weight_sensor = 0,
        DPE_f01_receipt_weight_sensor = 1,
        DPE_f02_journal_opt_sensor = 2,
        DPE_f03_receipt_opt_sensor = 3,
        DPE_f04_cover_sensor = 4,
        DPE_f05_journal_lever = 5,
        DPE_f06_receipt_lever = 6,
        DPE_f07_hi_slip_sensor = 7,
        DPE_f08_low_slip_sensor = 8,
        DPE_f09_presenter = 9,
        DPE_f10_presenter_commands = 10,
        DPE_f11_ej_overflow_flag = 11,
        DPE_f12_ej = 12,
        DPE_f13_cutter = 13,
        DPE_f14_drawer_status_as_presenter_paper_sensor = 14,
        DPE_f15_drawer_sensor = 15,
        DPE_f16_presenter_in_paper_sensor = 16,
        DPE_f17_presenter_out_paper_sensor = 17,
        DPE_f18_bill_acceptor = 18,
        DPE_f19_tax_keyboard = 19,
        DPE_f20_journal = 20,
        DPE_f21_slip = 21,
        DPE_f22_non_fiscal_doc_commands = 22,
        DPE_f23_cashcore = 23,
        DPE_f24_inn_leading_zeros = 24,
        DPE_f25_rnm_leading_zeros = 25,
        DPE_f26_line_printing_bytes_swapping = 26,
        DPE_f27_wrong_tax_password_blocking = 27,
        DPE_f28_alt_protocol = 28,
        DPE_f29_string_printing_commands_wrap_strings_by_n = 29,
        DPE_f30_string_printing_commands_wrap_strings_by_font = 30,
        DPE_f31_fisc_commands_wrap_strings_by_n = 31,
        DPE_f32_fisc_commands_wrap_strings_by_font = 32,
        DPE_f33_senior_cashier = 33,
        DPE_f34_slip_receipt_bit3 = 34,
        DPE_f35_block_graphic_loading = 35,
        DPE_f36_error_description_command = 36,
        DPE_f37_print_flags_for_print_ext_graphics_print_line = 37,
        DPE_f38_skno = 38,
        DPE_f39_mfp = 39,
        DPE_f40_ej5 = 40,
        DPE_f41_print_scaled_graphics = 41,
        DPE_f42_print_ext_graphics_512 = 42,
        DPE_f43_fs = 43,
        DPE_f44_eod = 44,
        DPE_f45_tag_autoprint_support = 45,
        DPE_f46_qr_in_footer_support = 46,
        DPE_f47_fs_1_1_support = 47,
        DPE_f48_correction_new_support = 48,
        DPE_f49_error_description_command_extended = 49,
        DPE_reserved = 50,
        DPE_Font1Width = 64,
        DPE_Font2Width = 65,
        DPE_FirstDrawLine = 66,
        DPE_InnDigitCount = 67,
        DPE_RnmDigitCount = 68,
        DPE_LongRnmDigitCount = 69,
        DPE_LongSerialDigitCount = 70,
        DPE_DefaultTaxPassword = 71,
        DPE_DefaultAdminPassword = 72,
        DPE_BluetoothTableNumber = 73,
        DPE_TaxFieldNumber = 74,
        DPE_MaxCmdLength = 75,
        DPE_MaxDrawLineWidth = 76,
        DPE_MaxDrawLineWidth512 = 77,
        DPE_MaxDrawLineCount512 = 78,
        DPE_FsTableNumber = 79,
        DPE_OfdTableNmb = 80,
        DPE_EmbeddedTableNumber = 81,
        DPE_FFDVersionTableNumber = 82,
        DPE_FFDVersionFieldNumber = 83,
    };
    Q_ENUM(DevicePropertiesEnumeration)
    enum ESwapBytesMode {
        SBM_Swap = 0,
        SBM_NoSwap = 1,
        SBM_Prop = 2,
        SBM_Model = 3,
    };
    Q_ENUM(ESwapBytesMode)
    enum PrinterMode {
        PM_UnknownMode = 0x0,
        PM_DumpMode = 0x01,
        PM_SessionOpen = 0x02,
        PM_SessionOpenOver24h = 0x03,
        PM_SessionClosed = 0x04,
        PM_TaxmanPasswordError = 0x05,
        PM_DateConfirmWaiting = 0x06,
        PM_PointModificationAllowed = 0x07,
        PM_OpenedDocument = 0x08,
        PM_TechnologicalResetAllowed = 0x09,
        PM_TestRun = 0x0A,
        PM_FullFiscalReportInProgress = 0x0B,
        PM_CryptoJournalReportInProgress = 0x0C,
        PM_FiscalSlipMode = 0x0D,
        PM_SlipPrintingInProgress = 0x0E,
        PM_FiscalSlipIsReady = 0x0F,
        PM_OpenedDocumentBuy = 0x18,
        PM_OpenedSlipDocumentBuy = 0x1D,
        PM_LoadingAndPositioningSlip = 0x1E,
        PM_OpenedDocumentSaleReturn = 0x28,
        PM_OpenedSlipDocumentSaleReturn = 0x2D,
        PM_PositioningSlip = 0x2E,
        PM_OpenedDocumentBuyReturn = 0x38,
        PM_OpenedSlipDocumentBuyReturn = 0x3D,
        PM_PrintingSlip = 0x3E,
        PM_OpenedDocumentNonFiscal = 0x48,
        PM_SlipPrinted = 0x4C,
        PM_DocumentPrinted = 0x4E,
        PM_EjectingSlip = 0x5E,
        PM_WaitingSlipRemoval = 0x6E,
    };
    Q_ENUM(PrinterMode)
    enum PrinterSubmode {
        PSM_PaperPresent = 0,
        PSM_PassivePaperAbsense = 1,
        PSM_ActivePaperAbsense = 2,
        PSM_AfterAvtivePaperAbsense = 3,
        PSM_ReportPrintingInProgress = 4,
        PSM_OperationPrintingInProgress = 5
    };
    Q_ENUM(PrinterSubmode)
    enum DeviceFunctionEnumeration : int {
        DFE_SkipAllPrinting = 0, ///< Пропуск печати всех документов. Если установлено в 1, то документы на бумажной ленте не печатаются и формируются только в электронном виде.
        DFE_AutoReadDetailedErrorDescription = 1, //!< Автоматически получать подробное описание ошибки из ККТ(на основе КЯ). Подробное описание находится в свойстве #ErrorDescription.
        DFE_DataPresentation = 2, //!< Вид представления данных(0 - в виде строк, разделенных \n, 1 - в виде json)
        DFE_PlainTransfer = 3, //!< Прямая передача команд поверх надежных протоколов нижнего уровня (TCP)
        DFE_BlockingMode = 4, //!< Эксклюзивная обработка команд на ККТ (блокировка команд на остальных интерфейсах, доступно только если передача надежная (TCP) )
        DFE_SkipRequisitePrint
        = 5, //!< Пропуск печати реквизитов документов средствами драйвера. Если установлено в 1, то печать управляется в зависимости от поля "печать реквизитов пользователя" Т17П12 или "АВТОПЕЧАТЬ ТЕГОВ в КЯ" Т1П50 в КЯ
        /**
         *  Меняет поведение драйвера в отношении свойств. Если свойство не было установлено (Set_*) между вызовами - то метод
         *  будет использовать значение свойства по умолчанию. Чтобы, например, не устанавливать в 0 все Summ* при закрытии чека и.т.д.
         */
        DFE_UseDefaultPropertyIfNotSetByUser = 6,
    };

    Q_ENUM(DeviceFunctionEnumeration)

    enum DataPresentationFormat {
        DPF_ClassicText = 0, //!< Данные в виде строк с разделителем \n и уровнем вложенности за
        //!< счет пробелов в начале строки
        DPF_ClassicJson = 1, //!< Данные в виде json {"tag": 1234, "value": "значение", "desc": "описание тега"}
    };
    Q_ENUM(DataPresentationFormat)

    enum TagTypeEnumeration : int {
        TT_Byte = 0, ///> Тип Byte
        TT_Uint16 = 1, ///> Тип Uint16
        TT_Uint32 = 2, ///> Тип UInt32
        TT_VLN = 3, ///> Тип VLN
        TT_FVLN = 4, ///> Тип FVLN
        TT_BitMask = 5, ///> Тип "битовое поле"
        TT_UnixTime = 6, ///> Тип "время"
        TT_String = 7, ///> Тип "строка".
        TT_STLV = 8, ///> Тип составной тег
        TT_ByteArray = 9, ///> Тип массив байт
    };
    Q_ENUM(TagTypeEnumeration)
    /**
     * @brief Мера количества предмета расчета, свойство MeasureUnit (тег 2108)
     */
    enum MeasurementUnitEnumeration : int {
        MU_Item = 0, ///< Применяется для предметов расчета, которые могут быть реализованы поштучно или единицами
        MU_Gram = 10, ///< Грамм
        MU_Kilogram = 11, ///< Килограмм
        MU_Ton = 12, ///< Тонна
        MU_Centimeter = 20, ///< Сантиметр
        MU_Decimeter = 21, ///< Дециметр
        MU_Meter = 22, ///< Метр
        MU_SquareCentimeter = 30, ///< Квадратный сантиметр
        MU_SquareDecimeter = 31, ///< Квадратный дециметр
        MU_SquareMeter = 32, ///< Квадратный метр
        MU_Milliliter = 40, ///< Миллилитр
        MU_Liter = 41, ///< Литр
        MU_CubicMeter = 42, ///< Кубический метр
        MU_KilowattHour = 50, ///< Киловатт час
        MU_Gigacalorie = 51, ///< Гигакалория
        MU_Day = 70, ///< Сутки (день)
        MU_Hour = 71, ///< Час
        MU_Minute = 72, ///< Минута
        MU_Second = 73, ///< Секунда
        MU_Kilobyte = 80, ///< Килобайт
        MU_Megabyte = 81, ///< Мегабайт
        MU_Gigabyte = 82, ///< Гигабайт
        MU_Terabyte = 83, ///< Терабайт
        MU_Other = 255, ///< Применяется при использовании иных единиц измерения
    };
    Q_ENUM(MeasurementUnitEnumeration)

    explicit QClassicFrDrvNg(QObject* parent = nullptr);
    explicit QClassicFrDrvNg(QString name, QObject* parent = nullptr);
    ~QClassicFrDrvNg();
    int Get_DeviceFunctionNumber() const;
    int Get_ValueOfFunctionInteger() const;
    QString Get_ValueOfFunctionString() const;
    bool Get_EnableCashcoreMarkCompatibility() const;

public slots:
    int AddLD();
    int Beep();
    int Buy();
    int BuyEx();
    int CancelCheck();
    int CashIncome();
    int CashOutcome();
    int Charge();
    int CheckSubTotal();
    int CloseCheck();
    int ConfirmDate();
    int Connect();
    int ContinuePrint();
    int Correction();
    int CutCheck();
    int DampRequest();
    int DeleteLD();
    int Disconnect();
    int Discount();
    int DozeOilCheck();
    int Draw();
    int EKLZDepartmentReportInDatesRange();
    int EKLZDepartmentReportInSessionsRange();
    int EKLZJournalOnSessionNumber();
    int EKLZSessionReportInDatesRange();
    int EKLZSessionReportInSessionsRange();
    int ExchangeBytes();
    int FeedDocument();
    int Fiscalization();
    int FiscalReportForDatesRange();
    int FiscalReportForSessionRange();
    int GetActiveLD();
    int EnumLD();
    int GetCashReg();
    int GetCountLD();
    int GetData();
    int GetDeviceMetrics();
    int GetECRStatus();
    int GetShortECRStatus();
    int GetExchangeParam();
    int GetFieldStruct();
    int GetFiscalizationParameters();
    int GetFMRecordsSum();
    int GetLastFMRecordDate();
    int GetLiterSumCounter();
    int GetOperationReg();
    int GetParamLD();
    int GetRangeDatesAndSessions();
    int GetRKStatus();
    int GetTableStruct();
    int InitFM();
    int InitTable();
    int InterruptDataStream();
    int InterruptFullReport();
    int InterruptTest();
    int LaunchRK();
    int LoadLineData();
    int OilSale();
    int OpenCheck();
    int OpenDrawer();
    int PrintBarCode();
    int PrintDepartmentReport();
    int PrintDocumentTitle();
    int PrintOperationReg();
    int PrintReportWithCleaning();
    int PrintReportWithoutCleaning();
    int PrintString();
    int PrintWideString();
    int ReadEKLZDocumentOnKPK();
    int ReadEKLZSessionTotal();
    int ReadLicense();
    int ReadTable();
    int RepeatDocument();
    int ResetAllTRK();
    int ResetRK();
    int ResetSettings();
    int ResetSummary();
    int ReturnBuy();
    int ReturnBuyEx();
    int ReturnSale();
    int ReturnSaleEx();
    int Sale();
    int SaleEx();
    int SetActiveLD();
    int SetDate();
    int SetDozeInMilliliters();
    int SetDozeInMoney();
    int SetExchangeParam();
    int SetParamLD();
    int SetPointPosition();
    int SetRKParameters();
    int SetSerialNumber();
    int SetTime();
    int ShowProperties();
    int StopEKLZDocumentPrinting();
    int StopRK();
    int Storno();
    int StornoEx();
    int StornoCharge();
    int StornoDiscount();
    int SummOilCheck();
    int SysAdminCancelCheck();
    int Test();
    int WriteLicense();
    int WriteTable();
    int PrintStringWithFont();
    int EKLZActivizationResult();
    int EKLZActivization();
    int CloseEKLZArchive();
    int GetEKLZSerialNumber();
    int EKLZInterrupt();
    int GetEKLZCode1Report();
    int GetEKLZCode2Report();
    int TestEKLZArchiveIntegrity();
    int GetEKLZVersion();
    int InitEKLZArchive();
    int GetEKLZData();
    int GetEKLZJournal();
    int GetEKLZDocument();
    int GetEKLZDepartmentReportInDatesRange();
    int GetEKLZDepartmentReportInSessionsRange();
    int GetEKLZSessionReportInDatesRange();
    int GetEKLZSessionReportInSessionsRange();
    int GetEKLZSessionTotal();
    int GetEKLZActivizationResult();
    int SetEKLZResultCode();
    int OpenFiscalSlipDocument();
    int OpenStandardFiscalSlipDocument();
    int RegistrationOnSlipDocument();
    int StandardRegistrationOnSlipDocument();
    int ChargeOnSlipDocument();
    int StandardChargeOnSlipDocument();
    int CloseCheckOnSlipDocument();
    int StandardCloseCheckOnSlipDocument();
    int ConfigureSlipDocument();
    int ConfigureStandardSlipDocument();
    int FillSlipDocumentWithUnfiscalInfo();
    int ClearSlipDocumentBufferString();
    int ClearSlipDocumentBuffer();
    int PrintSlipDocument();
    int DiscountOnSlipDocument();
    int StandardDiscountOnSlipDocument();
    int EjectSlipDocument();
    int LoadLineDataEx();
    int DrawEx();
    int ConfigureGeneralSlipDocument();
    int WideLoadLineData();
    int PrintTaxReport();
    int GetLongSerialNumberAndLongRNM();
    int SetLongSerialNumber();
    int FiscalizationWithLongRNM();
    int Connect2();
    int GetECRPrinterStatus();
    int ServerConnect();
    int ServerDisconnect();
    int LockPort();
    int UnlockPort();
    int AdminUnlockPort();
    int AdminUnlockPorts();
    int ServerCheckKey();
    int GetFontMetrics();
    int GetFreeLDNumber();
    int ReadTable2();
    int WriteTable2();
    void SetFieldMinValue(int value);
    void SetFieldMaxValue(int value);
    int CashControlOpen();
    int CashControlClose();
    int SaveParams();
    int GetEKLZCode1Status();
    int GetEKLZCode2Status();
    int ReadWriteFM();
    int PrintHeader();
    int CloseCheckWithResult();
    int AboutBox();
    int PresenterKeep();
    int PresenterPush();
    int OpenScreen();
    int CloseScreen();
    int SetSCPassword();
    bool MethodSupported();
    bool PropertySupported();
    int LockPortTimeout();
    int GetIBMStatus();
    int GetShortIBMStatus();
    int GetCommandParams();
    int SetCommandParams();
    int SaveCommandParams();
    int SetAllCommandsParams();
    int SetDefCommandsParams();
    int OpenSession();
    int WaitForPrinting();
    int GetInterval();
    int SetInterval();
    int ShowTablesDlg();
    int ShowPayParams();
    int ReprintSlipDocument();
    int CardPayProperties();
    int PrintLine();
    int JournalClear();
    int JournalGetRow();
    int JournalInit();
    int FindDevice();
    int LoadParams();
    int FinishDocument();
    int PrintTrailer();
    int WaitForCheckClose();
    int GetSummFactor();
    int GetQuantityFactor();
    int ReadDeviceMetrics();
    int ReadEcrStatus();
    int SaveState();
    int RestoreState();
    int LoadImage();
    int GetCashAcceptorStatus();
    int GetCashAcceptorRegisters();
    int CashAcceptorReport();
    int ClearResult();
    int MasterPayClearBuffer();
    int MasterPayAddTextBlock();
    int MasterPayCreateMac();
    int LoadBlockData();
    int GetEKLZCode3Report();
    int ReadModemParameter();
    int WriteModemParameter();
    int GetPortNames();
    int OutputReceipt();
    int Sale2();
    int PrintCliche();
    int PrintBarcodeLine();
    int PrintBarcodeGraph();
    int ResetECR();
    int PrintZReportFromBuffer();
    int PrintZReportInBuffer();
    int ClearPrintBuffer();
    int ReadPrintBufferLine();
    int ReadPrintBufferLineNumber();
    int OpenNonfiscalDocument();
    int CloseNonFiscalDocument();
    int PrintAttribute();
    int ReadModelParamValue();
    int LoadCashControlParams();
    int ReadBanknoteCount();
    int PrintOperationalTaxReport();
    int WaitConnection();
    int ReadModelParamDescription();
    int PrintBarcodeUsingPrinter();
    int CloseCheckWithKPK();
    int ReadEKLZActivizationParams();
    int GetShortReportInDatesRange();
    int GetShortReportInSessionRange();
    int ReadLastReceipt();
    int ReadLastReceiptLine();
    int ReadLastReceiptMac();
    int BeginDocument();
    int EndDocument();
    int Print2DBarcode();
    int LoadAndPrint2DBarcode();
    int ExcisableOperation();
    int ReadReportBufferLine();
    int ReadParams();
    int GetCashRegEx();
    int GetWareBaseCashRegs();
    int PrintCashierReport();
    int PrintHourlyReport();
    int PrintWareReport();
    int UpdateWare();
    int CheckFM();
    int RemoveWare();
    int ReadErrorDescription();
    int ReadLastErrorDescription();
    int ReadWare();
    int ReadModelParam();
    int InitEEPROM();
    int CheckConnection();
    int ChangeProtocol();
    int GetECRParams();
    int ShowImportDlg();
    int JournalOperation();
    int MFPActivization();
    int MFPCloseArchive();
    int MFPGetPermitActivizationCode();
    int MFPGetCustomerCode();
    int MFPPrepareActivization();
    int MFPSetCustomerCode();
    int MFPSetPermitActivizationCode();
    int MFPGetPrepareActivizationResult();
    int CloseCheckEx();
    int GetMFPCode3Status();
    int ClearReportBuffer();
    int ShowAdditionalParams();
    int GetCloudCashdeskParams();
    int DrawScale();
    int LoadGraphics512();
    int PrintGraphics512();
    int FNGetExpirationTime();
    int FNGetSerial();
    int FNGetStatus();
    int FNGetVersion();
    int FNBeginFiscalization();
    int FNFiscalization();
    int FNCancelDocument();
    int FNResetState();
    int FNFindDocument();
    int FNOpenSession();
    int FNSendTLV();
    int FNDiscountOperation();
    int FNStorno();
    int OFDExchange();
    int FNBeginCalculationStateReport();
    int FNBeginCloseFiscalMode();
    int FNBeginCloseSession();
    int FNBeginCorrectionReceipt();
    int FNBeginOpenSession();
    int FNBeginRegistrationReport();
    int FNBuildCalculationStateReport();
    int FNBuildCorrectionReceipt();
    int FNBuildRegistrationReport();
    int FNCloseFiscalMode();
    int FNCloseSession();
    int FNGetCurrentSessionParams();
    int FNGetInfoExchangeStatus();
    int FNGetOFDTicketByDocNumber();
    int FNGetUnconfirmedDocCount();
    int FNReadFiscalDocumentTLV();
    int FNRequestFiscalDocumentTLV();
    int FNBuildReregistrationReport();
    int FNGetFiscalizationResult();
    int FNDiscountTaxOperation();
    int FNCloseCheckEx();
    int FNSendCustomerEmail();
    int Annulment();
    int FNDiscountChargeRN();
    int ExportTables();
    int ImportTables();
    int FNSendTag();
    int ReadSerialNumber();
    int FNPrintOperatorConfirm();
    int FNGetFiscalizationResultByNumber();
    int AnnulmentRB();
    int FNGetTagDescription();
    int FNPrintDocument();
    int FNGetDocumentAsString();
    int Ping();
    int FNOperation();
    int FNSendTLVOperation();
    int FNBuildCorrectionReceipt2();
    int FNGetNonClearableSumm();
    int ResetSerialNumber();
    int DBFindDocument();
    int DBPrintDocument();
    int ReadKKTLicenses();
    int CloseCheckBel();
    int GetKKTLicenseByNumber();
    int WriteKKTLicense();
    int FNSendSenderEmail();
    int DBGetNextDocument();
    int DBPrintNextDocument();
    int DBQueryDocumentsInSession();
    int OnlinePay();
    int OPGetLastRequisite();
    int OPGetLastStatus();
    int GenerateMonoToken();
    int RebootKKT();
    int FNAddTag();
    int FNBeginSTLVTag();
    int FNSendSTLVTag();
    int FNSendSTLVTagOperation();
    int FNSendTagOperation();
    int FNSendItemCodeData();
    int FNCheckItemBarcode();
    int FNRequestRegistrationTLV();
    int ReadLoaderVersion();
    int FNOpenCheckCorrection();
    int FNCountersSync();
    int FNGetFreeMemoryResource();
    int ReadCashDrawerSum();
    int ReadFeatureLicenses();
    int WriteFeatureLicenses();
    int SetDeviceFunction();
    int GetDeviceFunction();
    int FNSendItemBarcode();
    int FNCheckItemBarcode2();
    int FNGetKMServerExchangeStatus();
    int FNGetMarkingCodeWorkStatus();
    int FNBeginReadNotifications();
    int FNReadNotificationBlock();
    int FNConfirmNotificationRead();
    int GetTagAsTLV();
    int ReadRandomSequence();
    int Authorization();
    int FNAcceptMarkingCode();
    int FNAcceptMakringCode();
    int FNDeclineMarkingCode();
    int FNBindMarkingItem();
    int FNBeginReadArchive();
    int FNReadArchiveItem();
    int FNSaveArchive();
    int FNMarkingClearBuffer();
    int FNSendUserAttribute();
    int RenderDeclarativeDocument();
    int LoadFont();
    int ReadFontHash();
    int ResetFont();
    int LoadFontSymbol();
    int DecodeTLVData();
    int FNGetImplementation();
    int FNGetOSUSupportStatus();
    int FNGetDocumentSize();
    int FNReadFiscalBarcode();
    int PrintStringWithWrap();
    int FNCheckItemBarcodeCrpt();
    //getters setters
    bool Get_HasCashControlLicense() const;
    int Get_SwapBytesMode() const;
    void Set_SwapBytesMode(int value);
    int Get_Tax4NameFont() const;
    void Set_Tax4NameFont(int value);
    QString Get_LineData() const;
    void Set_LineData(QString value);
    int Get_Summ3Font() const;
    void Set_Summ3Font(int value);
    int Get_FontType() const;
    void Set_FontType(int value);
    int Get_Tax1RateFont() const;
    void Set_Tax1RateFont(int value);
    QString Get_GTIN() const;
    void Set_GTIN(QString value);
    int Get_Department() const;
    void Set_Department(int value);
    quint32 Get_CashControlPassword() const;
    void Set_CashControlPassword(quint32 value);
    QString Get_EKLZVersion() const;
    int Get_IBMLastBuyReceiptNumber() const;
    int Get_DepartmentSymbolNumber() const;
    void Set_DepartmentSymbolNumber(int value);
    int Get_Summ3StringNumber() const;
    void Set_Summ3StringNumber(int value);
    int Get_MaxENQSendCount() const;
    void Set_MaxENQSendCount(int value);
    int Get_Summ4Font() const;
    void Set_Summ4Font(int value);
    int Get_Tax4SumStringNumber() const;
    void Set_Tax4SumStringNumber(int value);
    QString Get_TimeStr() const;
    void Set_TimeStr(QString value);
    QDateTime Get_ECRSoftDate() const;
    QString Get_TagValueStr() const;
    void Set_TagValueStr(QString value);
    int Get_ChangeSumFont() const;
    void Set_ChangeSumFont(int value);
    int Get_DataLength() const;
    void Set_DataLength(int value);
    QString Get_LDEscapeIP() const;
    void Set_LDEscapeIP(QString value);
    int Get_OPBarcodeInputType() const;
    void Set_OPBarcodeInputType(int value);
    int Get_SubTotalFont() const;
    void Set_SubTotalFont(int value);
    int Get_StringNumber() const;
    void Set_StringNumber(int value);
    int Get_LDNumber() const;
    void Set_LDNumber(int value);
    QString Get_FiscalSignAsString() const;
    int Get_Tax3TurnOverOffset() const;
    void Set_Tax3TurnOverOffset(int value);
    int Get_ModelIndex() const;
    void Set_ModelIndex(int value);
    int Get_Summ2StringNumber() const;
    void Set_Summ2StringNumber(int value);
    bool Get_UseJournalRibbon() const;
    void Set_UseJournalRibbon(bool value);
    bool Get_TaxValue1Enabled() const;
    void Set_TaxValue1Enabled(bool value);
    int Get_ReadByte() const;
    bool Get_ccUseTextAsWareName() const;
    void Set_ccUseTextAsWareName(bool value);
    int Get_EKLZOffset() const;
    void Set_EKLZOffset(int value);
    int Get_PaymentItemSign() const;
    void Set_PaymentItemSign(int value);
    int Get_TestNumber() const;
    void Set_TestNumber(int value);
    int Get_Tax1TurnOverStringNumber() const;
    void Set_Tax1TurnOverStringNumber(int value);
    QString Get_CashControlPort() const;
    void Set_CashControlPort(QString value);
    int Get_DelayOnDisconnect() const;
    void Set_DelayOnDisconnect(int value);
    QString Get_KPKStr() const;
    int Get_Tax2NameOffset() const;
    void Set_Tax2NameOffset(int value);
    QString Get_TransferBytes() const;
    void Set_TransferBytes(QString value);
    QString Get_KSAInfo() const;
    void Set_KSAInfo(QString value);
    qint64 Get_CurrentDozeInMoney() const;
    void Set_CurrentDozeInMoney(qint64 value);
    QDateTime Get_Date2() const;
    void Set_Date2(QDateTime value);
    int Get_ModelParamCount() const;
    int Get_OPTransactionType() const;
    void Set_OPTransactionType(int value);
    int Get_LicenseNumber() const;
    void Set_LicenseNumber(int value);
    quint64 Get_TagValueInt() const;
    void Set_TagValueInt(quint64 value);
    qint64 Get_Summ7() const;
    void Set_Summ7(qint64 value);
    qint64 Get_Summ6() const;
    void Set_Summ6(qint64 value);
    qint64 Get_Summ5() const;
    void Set_Summ5(qint64 value);
    qint64 Get_Summ4() const;
    void Set_Summ4(qint64 value);
    qint64 Get_Summ3() const;
    void Set_Summ3(qint64 value);
    qint64 Get_Summ2() const;
    void Set_Summ2(qint64 value);
    qint64 Get_Summ1() const;
    void Set_Summ1(qint64 value);
    int Get_BlockNumber() const;
    void Set_BlockNumber(int value);
    int Get_Tax1TurnOverFont() const;
    void Set_Tax1TurnOverFont(int value);
    qint64 Get_Summ9() const;
    void Set_Summ9(qint64 value);
    qint64 Get_Summ8() const;
    void Set_Summ8(qint64 value);
    int Get_Tax2TurnOverOffset() const;
    void Set_Tax2TurnOverOffset(int value);
    int Get_ECRModeStatus() const;
    int Get_Summ3NameOffset() const;
    void Set_Summ3NameOffset(int value);
    QString Get_TableName() const;
    QString Get_StatusRKDescription() const;
    QString Get_FMSoftVersion() const;
    int Get_ResultCode() const;
    qint64 Get_TaxValue() const;
    void Set_TaxValue(qint64 value);
    int Get_Tax2RateFont() const;
    void Set_Tax2RateFont(int value);
    bool Get_CloudCashdeskEnabled() const;
    void Set_CloudCashdeskEnabled(bool value);
    int Get_CommandTimeout() const;
    void Set_CommandTimeout(int value);
    bool Get_UseReceiptRibbon() const;
    void Set_UseReceiptRibbon(bool value);
    QString Get_KKTRegistrationNumber() const;
    void Set_KKTRegistrationNumber(QString value);
    QString Get_Summ1AsString() const;
    QString Get_OPIdPayment() const;
    void Set_OPIdPayment(QString value);
    int Get_TextOffset() const;
    void Set_TextOffset(int value);
    bool Get_CashControlUseTCP() const;
    void Set_CashControlUseTCP(bool value);
    int Get_OPRequisiteNumber() const;
    void Set_OPRequisiteNumber(int value);
    bool Get_ReportType() const;
    void Set_ReportType(bool value);
    int Get_IBMSessionMin() const;
    int Get_PrintBufferFormat() const;
    void Set_PrintBufferFormat(int value);
    double Get_BatteryVoltage() const;
    QByteArray Get_BlockData() const;
    void Set_BlockData(QByteArray value);
    int Get_Tax2SumFont() const;
    void Set_Tax2SumFont(int value);
    int Get_ContentsOfOperationRegister() const;
    int Get_PayDepartment() const;
    void Set_PayDepartment(int value);
    int Get_QuantityOffset() const;
    void Set_QuantityOffset(int value);
    QString Get_INN() const;
    void Set_INN(QString value);
    TBarcodeAlignment Get_BarcodeAlignment() const;
    void Set_BarcodeAlignment(TBarcodeAlignment value);
    int Get_ccHeaderLineCount() const;
    void Set_ccHeaderLineCount(int value);
    bool Get_Motor() const;
    bool Get_Summ1Enabled() const;
    void Set_Summ1Enabled(bool value);
    int Get_FreeRegistration() const;
    int Get_TotalFont() const;
    void Set_TotalFont(int value);
    bool Get_UseTaxDiscountBel() const;
    void Set_UseTaxDiscountBel(bool value);
    bool Get_IsPrinterRightSensorFailure() const;
    QString Get_FiscalSignOFD() const;
    void Set_FiscalSignOFD(QString value);
    bool Get_ShowProgress() const;
    void Set_ShowProgress(bool value);
    QString Get_BarCode() const;
    void Set_BarCode(QString value);
    bool Get_PortLocked() const;
    int Get_ChangeSumOffset() const;
    void Set_ChangeSumOffset(int value);
    int Get_Tax2NameSymbolNumber() const;
    void Set_Tax2NameSymbolNumber(int value);
    int Get_RunningPeriod() const;
    void Set_RunningPeriod(int value);
    int Get_Summ1NameOffset() const;
    void Set_Summ1NameOffset(int value);
    int Get_OFDReadTimeout() const;
    void Set_OFDReadTimeout(int value);
    int Get_BlockType() const;
    void Set_BlockType(int value);
    int Get_CommandCount() const;
    QString Get_LDIPAddress() const;
    void Set_LDIPAddress(QString value);
    int Get_VertScale() const;
    void Set_VertScale(int value);
    int Get_MINValueOfField() const;
    int Get_TotalStringNumber() const;
    void Set_TotalStringNumber(int value);
    int Get_CheckType() const;
    void Set_CheckType(int value);
    bool Get_JournalRibbonOpticalSensor() const;
    QString Get_StringForPrinting() const;
    void Set_StringForPrinting(QString value);
    int Get_Tax1TurnOverOffset() const;
    void Set_Tax1TurnOverOffset(int value);
    int Get_CustomerCode() const;
    void Set_CustomerCode(int value);
    int Get_TotalOffset() const;
    void Set_TotalOffset(int value);
    bool Get_TaxValue5Enabled() const;
    void Set_TaxValue5Enabled(bool value);
    int Get_Tax3RateSymbolNumber() const;
    void Set_Tax3RateSymbolNumber(int value);
    bool Get_UseIPAddress() const;
    void Set_UseIPAddress(bool value);
    int Get_LineLength() const;
    void Set_LineLength(int value);
    quint32 Get_NewPasswordTI() const;
    void Set_NewPasswordTI(quint32 value);
    bool Get_TaxValue3Enabled() const;
    void Set_TaxValue3Enabled(bool value);
    QString Get_PropertyName() const;
    void Set_PropertyName(QString value);
    int Get_DocumentType() const;
    void Set_DocumentType(int value);
    QString Get_CommandName() const;
    int Get_PrinterStatus() const;
    int Get_KPKFont() const;
    void Set_KPKFont(int value);
    int Get_RegistrationNumber() const;
    void Set_RegistrationNumber(int value);
    QDateTime Get_Time() const;
    void Set_Time(QDateTime value);
    int Get_SyncTimeout() const;
    void Set_SyncTimeout(int value);
    int Get_SKNOStatus() const;
    void Set_SKNOStatus(int value);
    double Get_Quantity() const;
    void Set_Quantity(double value);
    quint32 Get_DriverRelease() const;
    bool Get_PresenterIn() const;
    int Get_ProtocolType() const;
    void Set_ProtocolType(int value);
    QString Get_UDescription() const;
    QString Get_CPLogFile() const;
    void Set_CPLogFile(QString value);
    int Get_Tax3SumStringNumber() const;
    void Set_Tax3SumStringNumber(int value);
    QString Get_TextBlock() const;
    void Set_TextBlock(QString value);
    int Get_IBMSessionHour() const;
    int Get_PingTime() const;
    void Set_PingTime(int value);
    bool Get_CapOpenCheck() const;
    bool Get_FM1IsPresent() const;
    int Get_SerialNumberAsInteger() const;
    int Get_CharHeight() const;
    bool Get_AutoSensorValues() const;
    void Set_AutoSensorValues(bool value);
    int Get_PrintBarcodeText() const;
    void Set_PrintBarcodeText(int value);
    QDateTime Get_LastSessionDate() const;
    void Set_LastSessionDate(QDateTime value);
    QString Get_DocumentName() const;
    void Set_DocumentName(QString value);
    int Get_Tax4SumOffset() const;
    void Set_Tax4SumOffset(int value);
    qint64 Get_RegSaleRec() const;
    int Get_ChangeStringNumber() const;
    void Set_ChangeStringNumber(int value);
    int Get_Tax4TurnOverFont() const;
    void Set_Tax4TurnOverFont(int value);
    int Get_StatusRK() const;
    int Get_ECRMode() const;
    bool Get_IsDrawerOpen() const;
    QString Get_ResultCodeDescription() const;
    int Get_Tax4TurnOverStringNumber() const;
    void Set_Tax4TurnOverStringNumber(int value);
    int Get_Tax4NameOffset() const;
    void Set_Tax4NameOffset(int value);
    QByteArray Get_TLVData() const;
    void Set_TLVData(QByteArray value);
    QString Get_MFPNumber() const;
    void Set_MFPNumber(QString value);
    int Get_QuantityOfOperations() const;
    int Get_SubTotalSymbolNumber() const;
    void Set_SubTotalSymbolNumber(int value);
    QString Get_DiscountName() const;
    void Set_DiscountName(QString value);
    bool Get_CarryStrings() const;
    void Set_CarryStrings(bool value);
    int Get_Summ1Font() const;
    void Set_Summ1Font(int value);
    bool Get_BatteryCondition() const;
    int Get_SummSymbolNumber() const;
    void Set_SummSymbolNumber(int value);
    QString Get_License() const;
    void Set_License(QString value);
    bool Get_JournalRibbonLever() const;
    bool Get_CPLog() const;
    void Set_CPLog(bool value);
    int Get_SummOffset() const;
    void Set_SummOffset(int value);
    int Get_Tax4RateSymbolNumber() const;
    void Set_Tax4RateSymbolNumber(int value);
    qint64 Get_Summ11() const;
    void Set_Summ11(qint64 value);
    int Get_CopyOffset1() const;
    void Set_CopyOffset1(int value);
    qint64 Get_RegBuyReturnRec() const;
    int Get_CopyOffset3() const;
    void Set_CopyOffset3(int value);
    int Get_CopyOffset2() const;
    void Set_CopyOffset2(int value);
    int Get_CopyOffset5() const;
    void Set_CopyOffset5(int value);
    int Get_CopyOffset4() const;
    void Set_CopyOffset4(int value);
    int Get_Tax1NameSymbolNumber() const;
    void Set_Tax1NameSymbolNumber(int value);
    int Get_LastFMRecordType() const;
    int Get_BanknoteCount() const;
    bool Get_LicenseIsPresent() const;
    int Get_RegistrationReasonCodeEx() const;
    void Set_RegistrationReasonCodeEx(int value);
    int Get_SubTotalStringNumber() const;
    void Set_SubTotalStringNumber(int value);
    int Get_ClicheOffset() const;
    void Set_ClicheOffset(int value);
    int Get_RequestDocumentType() const;
    void Set_RequestDocumentType(int value);
    QString Get_NameOperationReg() const;
    int Get_Tax3TurnOverSymbolNumber() const;
    void Set_Tax3TurnOverSymbolNumber(int value);
    int Get_BarcodeFirstLine() const;
    void Set_BarcodeFirstLine(int value);
    bool Get_LidPositionSensor() const;
    int Get_TransmitDocumentNumber() const;
    int Get_LogMaxFileSize() const;
    void Set_LogMaxFileSize(int value);
    bool Get_IsBlockedByWrongTaxPassword() const;
    bool Get_FMOverflow() const;
    QString Get_NameCashReg() const;
    int Get_ComNumber() const;
    void Set_ComNumber(int value);
    int Get_TCPConnectionTimeout() const;
    void Set_TCPConnectionTimeout(int value);
    qint64 Get_TaxValue3() const;
    void Set_TaxValue3(qint64 value);
    int Get_Tax1RateOffset() const;
    void Set_Tax1RateOffset(int value);
    int Get_ECRAdvancedMode() const;
    int Get_Tax3NameSymbolNumber() const;
    void Set_Tax3NameSymbolNumber(int value);
    bool Get_IsClearUnfiscalInfo() const;
    void Set_IsClearUnfiscalInfo(bool value);
    bool Get_EKLZIsPresent() const;
    int Get_ReceiptOutputType() const;
    void Set_ReceiptOutputType(int value);
    int Get_BarcodeStartBlockNumber() const;
    void Set_BarcodeStartBlockNumber(int value);
    int Get_FontCount() const;
    int Get_ParamsPageIndex() const;
    void Set_ParamsPageIndex(int value);
    int Get_LDComNumber() const;
    void Set_LDComNumber(int value);
    QString Get_INNOFD() const;
    void Set_INNOFD(QString value);
    TFinishDocumentMode Get_FinishDocumentMode() const;
    void Set_FinishDocumentMode(TFinishDocumentMode value);
    int Get_LDTCPPort() const;
    void Set_LDTCPPort(int value);
    int Get_RoundingSumm() const;
    void Set_RoundingSumm(int value);
    int Get_OperationCode() const;
    int Get_FMFlagsEx() const;
    int Get_ActivizationControlByte() const;
    void Set_ActivizationControlByte(int value);
    QString Get_URL() const;
    void Set_URL(QString value);
    int Get_UMajorProtocolVersion() const;
    int Get_TagValueLength() const;
    void Set_TagValueLength(int value);
    bool Get_FM2IsPresent() const;
    int Get_DiscountOnCheckSymbolNumber() const;
    void Set_DiscountOnCheckSymbolNumber(int value);
    int Get_WorkModeEx() const;
    void Set_WorkModeEx(int value);
    double Get_TagValueFVLN() const;
    void Set_TagValueFVLN(double value);
    int Get_SearchTimeout() const;
    void Set_SearchTimeout(int value);
    qint64 Get_RegBuyReturnSession() const;
    int Get_MaxRecoverCount() const;
    void Set_MaxRecoverCount(int value);
    QString Get_AttributeValue() const;
    void Set_AttributeValue(QString value);
    bool Get_LogMethods() const;
    void Set_LogMethods(bool value);
    QString Get_TransferByte() const;
    void Set_TransferByte(QString value);
    int Get_ModelParamValue() const;
    TConnectionType Get_LDConnectionType() const;
    void Set_LDConnectionType(TConnectionType value);
    int Get_UModel() const;
    bool Get_Connected() const;
    void Set_Connected(bool value);
    int Get_SummStringNumber() const;
    void Set_SummStringNumber(int value);
    int Get_RealPayDepartment() const;
    void Set_RealPayDepartment(int value);
    bool Get_TranslationEnabled() const;
    void Set_TranslationEnabled(bool value);
    bool Get_IsCheckMadeOut() const;
    QString Get_ECRModeDescription() const;
    bool Get_PointPosition() const;
    void Set_PointPosition(bool value);
    int Get_DeviceCode() const;
    void Set_DeviceCode(int value);
    int Get_TextBlockNumber() const;
    void Set_TextBlockNumber(int value);
    bool Get_IsCheckClosed() const;
    bool Get_OFDExchangeSuspended() const;
    void Set_OFDExchangeSuspended(bool value);
    int Get_MFPStatus() const;
    void Set_MFPStatus(int value);
    quint32 Get_DriverMinorVersion() const;
    int Get_Tax3NameOffset() const;
    void Set_Tax3NameOffset(int value);
    int Get_FNCurrentDocument() const;
    void Set_FNCurrentDocument(int value);
    QString Get_FileName() const;
    void Set_FileName(QString value);
    bool Get_SlipDocumentIsMoving() const;
    int Get_StringQuantityInOperation() const;
    void Set_StringQuantityInOperation(int value);
    int Get_KPKNumber() const;
    void Set_KPKNumber(int value);
    QString Get_DriverVersion() const;
    int Get_TCPPort() const;
    void Set_TCPPort(int value);
    QString Get_BarcodeHex() const;
    void Set_BarcodeHex(QString value);
    int Get_Tax4NameSymbolNumber() const;
    void Set_Tax4NameSymbolNumber(int value);
    int Get_PortNumber() const;
    void Set_PortNumber(int value);
    int Get_GraphBufferType() const;
    void Set_GraphBufferType(int value);
    int Get_CorrectionType() const;
    void Set_CorrectionType(int value);
    int Get_CalculationSign() const;
    void Set_CalculationSign(int value);
    QString Get_SKNOIdentifier() const;
    void Set_SKNOIdentifier(QString value);
    int Get_FileType() const;
    void Set_FileType(int value);
    qint64 Get_RegSaleReturnRec() const;
    int Get_DepartmentStringNumber() const;
    void Set_DepartmentStringNumber(int value);
    qint64 Get_CheckResult() const;
    void Set_CheckResult(qint64 value);
    int Get_JournalRowCount() const;
    QString Get_EscapeIP() const;
    void Set_EscapeIP(QString value);
    bool Get_IsLastFMRecordCorrupted() const;
    int Get_CommandCode() const;
    int Get_CommandRetryCount() const;
    void Set_CommandRetryCount(int value);
    int Get_OperationNameOffset() const;
    void Set_OperationNameOffset(int value);
    QString Get_ServerVersion() const;
    int Get_TransmitQueueSize() const;
    bool Get_FieldType() const;
    int Get_FMBuild() const;
    bool Get_MobilePayEnabled() const;
    void Set_MobilePayEnabled(bool value);
    int Get_Tax1SumFont() const;
    void Set_Tax1SumFont(int value);
    bool Get_ComLogOnlyErrors() const;
    void Set_ComLogOnlyErrors(bool value);
    QString Get_ValueOfFieldString() const;
    void Set_ValueOfFieldString(QString value);
    QString Get_ConnectionURI() const;
    void Set_ConnectionURI(QString value);
    qint64 Get_RegBuyRec() const;
    QString Get_BlockDataHex() const;
    void Set_BlockDataHex(QString value);
    int Get_BufferingType() const;
    void Set_BufferingType(int value);
    int Get_DiscountOnCheckSumOffset() const;
    void Set_DiscountOnCheckSumOffset(int value);
    bool Get_Pistol() const;
    int Get_PriceSymbolNumber() const;
    void Set_PriceSymbolNumber(int value);
    int Get_Summ4StringNumber() const;
    void Set_Summ4StringNumber(int value);
    bool Get_JournalRibbonIsPresent() const;
    bool Get_AutoStartSearch() const;
    void Set_AutoStartSearch(bool value);
    int Get_LockTimeout() const;
    void Set_LockTimeout(int value);
    bool Get_ReconnectPort() const;
    void Set_ReconnectPort(bool value);
    int Get_DozeInMilliliters() const;
    void Set_DozeInMilliliters(int value);
    quint32 Get_SCPassword() const;
    void Set_SCPassword(quint32 value);
    quint32 Get_FileVersionLS() const;
    QString Get_EmergencyStopCodeDescription() const;
    int Get_PrintingAlignment() const;
    void Set_PrintingAlignment(int value);
    QDateTime Get_Date() const;
    void Set_Date(QDateTime value);
    int Get_Tax3() const;
    void Set_Tax3(int value);
    int Get_Tax2() const;
    void Set_Tax2(int value);
    int Get_Tax4() const;
    void Set_Tax4(int value);
    QString Get_ECRID() const;
    void Set_ECRID(QString value);
    QDateTime Get_FirstSessionDate() const;
    void Set_FirstSessionDate(QDateTime value);
    int Get_ParentWnd() const;
    void Set_ParentWnd(int value);
    QString Get_JournalRow() const;
    bool Get_WrapStrings() const;
    void Set_WrapStrings(bool value);
    int Get_Tax1() const;
    void Set_Tax1(int value);
    QString Get_FNSoftVersion() const;
    void Set_FNSoftVersion(QString value);
    int Get_RecordCount() const;
    QString Get_Summ4AsString() const;
    int Get_OPSystem() const;
    void Set_OPSystem(int value);
    int Get_FMFlags() const;
    double Get_DiscountOnCheck() const;
    void Set_DiscountOnCheck(double value);
    int Get_IntervalValue() const;
    void Set_IntervalValue(int value);
    int Get_HeaderStringNumber() const;
    void Set_HeaderStringNumber(int value);
    int Get_SlipDocumentLength() const;
    void Set_SlipDocumentLength(int value);
    bool Get_TaxValue4Enabled() const;
    void Set_TaxValue4Enabled(bool value);
    int Get_Tax2RateSymbolNumber() const;
    void Set_Tax2RateSymbolNumber(int value);
    bool Get_ReceiptRibbonIsPresent() const;
    int Get_Summ4Offset() const;
    void Set_Summ4Offset(int value);
    int Get_WaitPrintingTime() const;
    bool Get_IsEKLZOverflow() const;
    QString Get_EmailAddress() const;
    void Set_EmailAddress(QString value);
    int Get_LogMaxFileCount() const;
    void Set_LogMaxFileCount(int value);
    qint64 Get_LastKPKDocumentResult() const;
    int Get_Summ2NameFont() const;
    void Set_Summ2NameFont(int value);
    int Get_MessageState() const;
    void Set_MessageState(int value);
    bool Get_FeedAfterCut() const;
    void Set_FeedAfterCut(bool value);
    int Get_Tax4RateFont() const;
    void Set_Tax4RateFont(int value);
    int Get_CurrentDozeInMilliliters() const;
    void Set_CurrentDozeInMilliliters(int value);
    bool Get_JournalEnabled() const;
    void Set_JournalEnabled(bool value);
    bool Get_CheckFMConnection() const;
    void Set_CheckFMConnection(bool value);
    int Get_IBMLastSaleReceiptNumber() const;
    QString Get_ModelParamDescription() const;
    int Get_OperatorNumber() const;
    int Get_UMajorType() const;
    bool Get_QuantityPointPosition() const;
    int Get_BarcodeParameter2() const;
    void Set_BarcodeParameter2(int value);
    int Get_BarcodeParameter3() const;
    void Set_BarcodeParameter3(int value);
    int Get_BarcodeParameter1() const;
    void Set_BarcodeParameter1(int value);
    qint64 Get_ChargeValue() const;
    void Set_ChargeValue(qint64 value);
    int Get_BarcodeParameter4() const;
    void Set_BarcodeParameter4(int value);
    int Get_BarcodeParameter5() const;
    void Set_BarcodeParameter5(int value);
    int Get_PrepareActivizationRemainCount() const;
    void Set_PrepareActivizationRemainCount(int value);
    QString Get_LDName() const;
    void Set_LDName(QString value);
    qint64 Get_Price() const;
    void Set_Price(qint64 value);
    int Get_SubTotalOffset() const;
    void Set_SubTotalOffset(int value);
    int Get_ModelsCount() const;
    QDateTime Get_FMSoftDate() const;
    QString Get_DBFilePath() const;
    void Set_DBFilePath(QString value);
    int Get_QuantityFormat() const;
    void Set_QuantityFormat(int value);
    qint64 Get_TaxValue2() const;
    void Set_TaxValue2(qint64 value);
    int Get_StringQuantity() const;
    void Set_StringQuantity(int value);
    qint64 Get_TaxValue6() const;
    void Set_TaxValue6(qint64 value);
    qint64 Get_TaxValue5() const;
    void Set_TaxValue5(qint64 value);
    QString Get_DocumentData() const;
    void Set_DocumentData(QString value);
    int Get_TaxType() const;
    void Set_TaxType(int value);
    QString Get_ParameterValue() const;
    void Set_ParameterValue(QString value);
    int Get_Tax3SumOffset() const;
    void Set_Tax3SumOffset(int value);
    int Get_HRIPosition() const;
    void Set_HRIPosition(int value);
    int Get_IBMLastReturnSaleReceiptNumber() const;
    quint32 Get_EnteredTaxPassword() const;
    bool Get_OFDEnabled() const;
    void Set_OFDEnabled(bool value);
    qint64 Get_RegBuySession() const;
    int Get_TotalSymbolNumber() const;
    void Set_TotalSymbolNumber(int value);
    int Get_Tax1RateSymbolNumber() const;
    void Set_Tax1RateSymbolNumber(int value);
    int Get_TimeoutsUsing() const;
    void Set_TimeoutsUsing(int value);
    int Get_WorkMode() const;
    void Set_WorkMode(int value);
    QString Get_LineDataHex() const;
    void Set_LineDataHex(QString value);
    int Get_TotalSumFont() const;
    void Set_TotalSumFont(int value);
    int Get_Tax1NameOffset() const;
    void Set_Tax1NameOffset(int value);
    bool Get_RecoverError165() const;
    void Set_RecoverError165(bool value);
    int Get_HeaderFont() const;
    void Set_HeaderFont(int value);
    QString Get_EKLZNumber() const;
    int Get_Summ2SymbolNumber() const;
    void Set_Summ2SymbolNumber(int value);
    int Get_ReadTimeout() const;
    void Set_ReadTimeout(int value);
    int Get_LogicalNumber() const;
    double Get_PowerSourceVoltage() const;
    bool Get_LDUseIPAddress() const;
    void Set_LDUseIPAddress(bool value);
    bool Get_UseCommandTimeout() const;
    void Set_UseCommandTimeout(bool value);
    int Get_LastLineNumber() const;
    void Set_LastLineNumber(int value);
    qint64 Get_RegSaleSession() const;
    int Get_Tax3NameFont() const;
    void Set_Tax3NameFont(int value);
    int Get_Tax3SumFont() const;
    void Set_Tax3SumFont(int value);
    bool Get_DelayedPrint() const;
    void Set_DelayedPrint(bool value);
    int Get_IBMDocumentNumber() const;
    QDateTime Get_ECRDate() const;
    void Set_ECRDate(QDateTime value);
    QDateTime Get_ECRTime() const;
    void Set_ECRTime(QDateTime value);
    int Get_INNAsInteger() const;
    qint64 Get_Summ15() const;
    void Set_Summ15(qint64 value);
    qint64 Get_Summ14() const;
    void Set_Summ14(qint64 value);
    qint64 Get_Summ13() const;
    void Set_Summ13(qint64 value);
    qint64 Get_Summ12() const;
    void Set_Summ12(qint64 value);
    int Get_UCodePage() const;
    qint64 Get_Summ10() const;
    void Set_Summ10(qint64 value);
    int Get_BarcodeDataLength() const;
    void Set_BarcodeDataLength(int value);
    int Get_FNWarningFlags() const;
    void Set_FNWarningFlags(int value);
    int Get_LDEscapePort() const;
    void Set_LDEscapePort(int value);
    int Get_WaitForPrintingDelay() const;
    void Set_WaitForPrintingDelay(int value);
    QString Get_ECRInput() const;
    int Get_LDIndex() const;
    void Set_LDIndex(int value);
    int Get_Tax4TurnOverSymbolNumber() const;
    void Set_Tax4TurnOverSymbolNumber(int value);
    int Get_LogFileMaxSize() const;
    void Set_LogFileMaxSize(int value);
    bool Get_ReceiptRibbonLever() const;
    int Get_Tax2TurnOverFont() const;
    void Set_Tax2TurnOverFont(int value);
    int Get_CheckingType() const;
    void Set_CheckingType(int value);
    int Get_ModelParamIndex() const;
    void Set_ModelParamIndex(int value);
    int Get_Tax1SumStringNumber() const;
    void Set_Tax1SumStringNumber(int value);
    int Get_DiscountOnCheckSumFont() const;
    void Set_DiscountOnCheckSumFont(int value);
    qint64 Get_ContentsOfCashRegister() const;
    int Get_IBMSessionSec() const;
    bool Get_AutoOpenSession() const;
    void Set_AutoOpenSession(bool value);
    int Get_Tax2NameFont() const;
    void Set_Tax2NameFont(int value);
    int Get_TableNumber() const;
    void Set_TableNumber(int value);
    QDateTime Get_TagValueDateTime() const;
    void Set_TagValueDateTime(QDateTime value);
    int Get_FMStringNumber() const;
    void Set_FMStringNumber(int value);
    QString Get_LastKPKDateStr() const;
    int Get_ConnectionTimeout() const;
    void Set_ConnectionTimeout(int value);
    int Get_EKLZFont() const;
    void Set_EKLZFont(int value);
    int Get_QuantityFont() const;
    void Set_QuantityFont(int value);
    int Get_JournalRowNumber() const;
    void Set_JournalRowNumber(int value);
    int Get_ValueOfFieldInteger() const;
    void Set_ValueOfFieldInteger(int value);
    qint64 Get_Summ16() const;
    void Set_Summ16(qint64 value);
    int Get_AnswerCode() const;
    void Set_AnswerCode(int value);
    int Get_Tax1SumSymbolNumber() const;
    void Set_Tax1SumSymbolNumber(int value);
    int Get_ICSPollPeriod() const;
    void Set_ICSPollPeriod(int value);
    bool Get_IsCorruptedFiscalizationInfo() const;
    int Get_LastPrintResult() const;
    int Get_QuantityStringNumber() const;
    void Set_QuantityStringNumber(int value);
    int Get_Summ2Offset() const;
    void Set_Summ2Offset(int value);
    int Get_LastSessionNumber() const;
    void Set_LastSessionNumber(int value);
    QString Get_ECRSoftVersion() const;
    int Get_Tax2RateOffset() const;
    void Set_Tax2RateOffset(int value);
    qint64 Get_DiscountValue() const;
    void Set_DiscountValue(qint64 value);
    int Get_Tax3RateOffset() const;
    void Set_Tax3RateOffset(int value);
    bool Get_PresenterOut() const;
    int Get_DrawerNumber() const;
    void Set_DrawerNumber(int value);
    QString Get_PosControlReceiptSeparator() const;
    void Set_PosControlReceiptSeparator(QString value);
    int Get_Summ2Font() const;
    void Set_Summ2Font(int value);
    QString Get_RNM() const;
    void Set_RNM(QString value);
    QString Get_ErrorDescription() const;
    int Get_RKNumber() const;
    void Set_RKNumber(int value);
    int Get_TagType() const;
    void Set_TagType(int value);
    int Get_CommandDefTimeout() const;
    bool Get_CashControlEnabled() const;
    void Set_CashControlEnabled(bool value);
    bool Get_IsPrinterLeftSensorFailure() const;
    int Get_Tax2TurnOverStringNumber() const;
    void Set_Tax2TurnOverStringNumber(int value);
    QString Get_CashControlHost() const;
    void Set_CashControlHost(QString value);
    int Get_FirstSessionNumber() const;
    void Set_FirstSessionNumber(int value);
    int Get_Summ1Offset() const;
    void Set_Summ1Offset(int value);
    bool Get_DoNotSendENQ() const;
    void Set_DoNotSendENQ(bool value);
    int Get_PrintBufferLineNumber() const;
    int Get_ModelParamNumber() const;
    void Set_ModelParamNumber(int value);
    QString Get_TagValueBin() const;
    void Set_TagValueBin(QString value);
    int Get_IBMFlags() const;
    bool Get_ReceiptRibbonOpticalSensor() const;
    int Get_Poll1() const;
    TCodePage Get_CodePage() const;
    void Set_CodePage(TCodePage value);
    int Get_Summ4NameOffset() const;
    void Set_Summ4NameOffset(int value);
    bool Get_CenterImage() const;
    void Set_CenterImage(bool value);
    int Get_SessionNumber() const;
    void Set_SessionNumber(int value);
    int Get_MultiplicationFont() const;
    void Set_MultiplicationFont(int value);
    bool Get_CheckEJConnection() const;
    void Set_CheckEJConnection(bool value);
    int Get_DataBlockSize() const;
    void Set_DataBlockSize(int value);
    bool Get_IsFM24HoursOver() const;
    qint64 Get_DozeInMoney() const;
    void Set_DozeInMoney(qint64 value);
    int Get_LDProtocolType() const;
    void Set_LDProtocolType(int value);
    int Get_SlipEqualStringIntervals() const;
    void Set_SlipEqualStringIntervals(int value);
    int Get_LDCount() const;
    QDateTime Get_IBMSessionDateTime() const;
    int Get_OperationBlockFirstString() const;
    void Set_OperationBlockFirstString(int value);
    bool Get_SaleError() const;
    void Set_SaleError(bool value);
    int Get_ClicheStringNumber() const;
    void Set_ClicheStringNumber(int value);
    bool Get_ShowTagNumber() const;
    void Set_ShowTagNumber(bool value);
    QString Get_ECRAdvancedModeDescription() const;
    int Get_MaxAnswerReadCount() const;
    void Set_MaxAnswerReadCount(int value);
    QString Get_OFDServer() const;
    void Set_OFDServer(QString value);
    int Get_FreeRecordInFM() const;
    bool Get_LogCommands() const;
    void Set_LogCommands(bool value);
    int Get_ReportTypeInt() const;
    void Set_ReportTypeInt(int value);
    int Get_TypeOfLastEntryFMEx() const;
    int Get_InfoExchangeStatus() const;
    void Set_InfoExchangeStatus(int value);
    QString Get_SerialNumber() const;
    void Set_SerialNumber(QString value);
    bool Get_IsFMSessionOpen() const;
    int Get_IBMSessionDay() const;
    bool Get_CardPayEnabled() const;
    void Set_CardPayEnabled(bool value);
    int Get_OperationType() const;
    void Set_OperationType(int value);
    int Get_DocumentCount() const;
    void Set_DocumentCount(int value);
    QString Get_LDComputerName() const;
    void Set_LDComputerName(QString value);
    int Get_CharWidth() const;
    int Get_WareCode() const;
    void Set_WareCode(int value);
    QString Get_CashControlProtocols() const;
    QString Get_JournalText() const;
    int Get_PermitActivizationCode() const;
    void Set_PermitActivizationCode(int value);
    int Get_EjectDirection() const;
    void Set_EjectDirection(int value);
    int Get_EKLZFlags() const;
    int Get_Tax2SumOffset() const;
    void Set_Tax2SumOffset(int value);
    int Get_DBDocType() const;
    void Set_DBDocType(int value);
    int Get_RowNumber() const;
    void Set_RowNumber(int value);
    int Get_TRKNumber() const;
    void Set_TRKNumber(int value);
    int Get_TagNumber() const;
    void Set_TagNumber(int value);
    int Get_SlipStringInterval() const;
    void Set_SlipStringInterval(int value);
    int Get_UMinorType() const;
    bool Get_CapGetShortECRStatus() const;
    int Get_Summ1SymbolNumber() const;
    void Set_Summ1SymbolNumber(int value);
    int Get_HorizScale() const;
    void Set_HorizScale(int value);
    quint32 Get_FiscalSign() const;
    void Set_FiscalSign(quint32 value);
    int Get_Tax4TurnOverOffset() const;
    void Set_Tax4TurnOverOffset(int value);
    int Get_Tax1TurnOverSymbolNumber() const;
    void Set_Tax1TurnOverSymbolNumber(int value);
    int Get_Address() const;
    void Set_Address(int value);
    bool Get_AutoEoD() const;
    void Set_AutoEoD(bool value);
    int Get_FNSessionState() const;
    void Set_FNSessionState(int value);
    int Get_FNLifeState() const;
    void Set_FNLifeState(int value);
    int Get_CardPayType() const;
    void Set_CardPayType(int value);
    int Get_Tax4SumFont() const;
    void Set_Tax4SumFont(int value);
    int Get_ParameterNumber() const;
    void Set_ParameterNumber(int value);
    int Get_RegisterNumber() const;
    void Set_RegisterNumber(int value);
    int Get_InfoType() const;
    void Set_InfoType(int value);
    int Get_EmergencyStopCode() const;
    int Get_Tax1SumOffset() const;
    void Set_Tax1SumOffset(int value);
    int Get_EKLZStringNumber() const;
    void Set_EKLZStringNumber(int value);
    int Get_MAXValueOfField() const;
    QString Get_Summ2AsString() const;
    int Get_Tax2SumSymbolNumber() const;
    void Set_Tax2SumSymbolNumber(int value);
    bool Get_RoughValve() const;
    int Get_ChangeSymbolNumber() const;
    void Set_ChangeSymbolNumber(int value);
    QDateTime Get_LastKPKDate() const;
    int Get_OperationNameStringNumber() const;
    void Set_OperationNameStringNumber(int value);
    quint32 Get_FileVersionMS() const;
    int Get_EKLZResultCode() const;
    void Set_EKLZResultCode(int value);
    int Get_HeaderOffset() const;
    void Set_HeaderOffset(int value);
    bool Get_TaxValue6Enabled() const;
    void Set_TaxValue6Enabled(bool value);
    int Get_FieldNumber() const;
    void Set_FieldNumber(int value);
    int Get_LineNumber() const;
    void Set_LineNumber(int value);
    int Get_TransmitSessionNumber() const;
    int Get_SlowingInMilliliters() const;
    void Set_SlowingInMilliliters(int value);
    int Get_DiscountOnCheckOffset() const;
    void Set_DiscountOnCheckOffset(int value);
    QString Get_ComLogFile() const;
    void Set_ComLogFile(QString value);
    int Get_TextFont() const;
    void Set_TextFont(int value);
    int Get_AttributeNumber() const;
    void Set_AttributeNumber(int value);
    bool Get_ServerConnected() const;
    int Get_DiscountOnCheckStringNumber() const;
    void Set_DiscountOnCheckStringNumber(int value);
    quint32 Get_SysAdminPassword() const;
    void Set_SysAdminPassword(quint32 value);
    QString Get_NameCashRegEx() const;
    int Get_MaxCommandSendCount() const;
    void Set_MaxCommandSendCount(int value);
    int Get_LDEscapeTimeout() const;
    void Set_LDEscapeTimeout(int value);
    int Get_NakCount() const;
    void Set_NakCount(int value);
    QString Get_MethodName() const;
    void Set_MethodName(QString value);
    int Get_ECRBuild() const;
    QString Get_ModelNames() const;
    int Get_SubTotalSumFont() const;
    void Set_SubTotalSumFont(int value);
    int Get_PriceFont() const;
    void Set_PriceFont(int value);
    int Get_MarkingType() const;
    void Set_MarkingType(int value);
    int Get_MarkingTypeEx() const;
    void Set_MarkingTypeEx(int value);
    int Get_OFDPollPeriod() const;
    void Set_OFDPollPeriod(int value);
    QString Get_IPAddress() const;
    void Set_IPAddress(QString value);
    int Get_Poll2() const;
    qint64 Get_Change() const;
    QString Get_BarcodeAlignments() const;
    int Get_SaveSettingsType() const;
    void Set_SaveSettingsType(int value);
    bool Get_UseWareCode() const;
    void Set_UseWareCode(bool value);
    bool Get_OFDTicketReceived() const;
    void Set_OFDTicketReceived(bool value);
    QString Get_Token() const;
    void Set_Token(QString value);
    QString Get_Summ3AsString() const;
    bool Get_PrintJournalBeforeZReport() const;
    void Set_PrintJournalBeforeZReport(bool value);
    int Get_Tax2SumStringNumber() const;
    void Set_Tax2SumStringNumber(int value);
    quint32 Get_Password() const;
    void Set_Password(quint32 value);
    int Get_ExciseCode() const;
    void Set_ExciseCode(int value);
    int Get_LastKPKNumber() const;
    int Get_KKTLicense() const;
    void Set_KKTLicense(int value);
    QString Get_FieldName() const;
    int Get_ClicheFont() const;
    void Set_ClicheFont(int value);
    int Get_ReceiptNumber() const;
    void Set_ReceiptNumber(int value);
    int Get_ModelID() const;
    void Set_ModelID(int value);
    int Get_QuantitySymbolNumber() const;
    void Set_QuantitySymbolNumber(int value);
    int Get_ccWareNameLineNumber() const;
    void Set_ccWareNameLineNumber(int value);
    int Get_BanknoteType() const;
    void Set_BanknoteType(int value);
    int Get_SummFont() const;
    void Set_SummFont(int value);
    qint64 Get_RegSaleReturnSession() const;
    QString Get_DeviceCodeDescription() const;
    QDateTime Get_Time2() const;
    void Set_Time2(QDateTime value);
    int Get_KPKOffset() const;
    void Set_KPKOffset(int value);
    QString Get_ECROutput() const;
    int Get_FieldSize() const;
    int Get_PaymentTypeSign() const;
    void Set_PaymentTypeSign(int value);
    int Get_FirstLineNumber() const;
    void Set_FirstLineNumber(int value);
    quint32 Get_DriverBuild() const;
    QDateTime Get_LastKPKTime() const;
    QString Get_TagDescription() const;
    void Set_TagDescription(QString value);
    int Get_Summ4SymbolNumber() const;
    void Set_Summ4SymbolNumber(int value);
    bool Get_IsBatteryLow() const;
    quint32 Get_NewSCPassword() const;
    void Set_NewSCPassword(quint32 value);
    int Get_Tax2TurnOverSymbolNumber() const;
    void Set_Tax2TurnOverSymbolNumber(int value);
    int Get_Tax3TurnOverStringNumber() const;
    void Set_Tax3TurnOverStringNumber(int value);
    QString Get_EKLZData() const;
    int Get_ECRFlags() const;
    int Get_DepartmentOffset() const;
    void Set_DepartmentOffset(int value);
    qint64 Get_TaxValue1() const;
    void Set_TaxValue1(qint64 value);
    int Get_EscapePort() const;
    void Set_EscapePort(int value);
    int Get_OperationNameFont() const;
    void Set_OperationNameFont(int value);
    int Get_IntervalNumber() const;
    void Set_IntervalNumber(int value);
    int Get_CommandIndex() const;
    void Set_CommandIndex(int value);
    TBinaryConversion Get_BinaryConversion() const;
    void Set_BinaryConversion(TBinaryConversion value);
    TConnectionType Get_ConnectionType() const;
    void Set_ConnectionType(TConnectionType value);
    qint64 Get_Discount4() const;
    void Set_Discount4(qint64 value);
    bool Get_LineSwapBytes() const;
    void Set_LineSwapBytes(bool value);
    qint64 Get_TaxValue4() const;
    void Set_TaxValue4(qint64 value);
    qint64 Get_Discount2() const;
    void Set_Discount2(qint64 value);
    bool Get_RequestErrorDescription() const;
    void Set_RequestErrorDescription(bool value);
    bool Get_AutoOFDExchange() const;
    void Set_AutoOFDExchange(bool value);
    bool Get_SlipDocumentIsPresent() const;
    int Get_NumberOfCopies() const;
    void Set_NumberOfCopies(int value);
    QString Get_CustomerEmail() const;
    void Set_CustomerEmail(QString value);
    int Get_FMResultCode() const;
    int Get_ActivizationStatus() const;
    void Set_ActivizationStatus(int value);
    quint32 Get_DriverMajorVersion() const;
    int Get_EscapeTimeout() const;
    void Set_EscapeTimeout(int value);
    bool Get_IsCorruptedFMRecords() const;
    int Get_LDBaudrate() const;
    void Set_LDBaudrate(int value);
    int Get_DepartmentFont() const;
    void Set_DepartmentFont(int value);
    int Get_Tax4RateOffset() const;
    void Set_Tax4RateOffset(int value);
    bool Get_TypeOfSumOfEntriesFM() const;
    void Set_TypeOfSumOfEntriesFM(bool value);
    bool Get_IsASPDMode() const;
    int Get_IBMLastReturnBuyReceiptNumber() const;
    int Get_IBMStatusByte8() const;
    int Get_DataBlockNumber() const;
    int Get_FNSoftType() const;
    int Get_Tax3TurnOverFont() const;
    void Set_Tax3TurnOverFont(int value);
    int Get_Tax3SumSymbolNumber() const;
    void Set_Tax3SumSymbolNumber(int value);
    int Get_IBMStatusByte1() const;
    int Get_IBMStatusByte2() const;
    int Get_IBMStatusByte3() const;
    int Get_IBMStatusByte4() const;
    int Get_IBMStatusByte5() const;
    int Get_IBMStatusByte6() const;
    int Get_IBMStatusByte7() const;
    int Get_ErrorCode() const;
    void Set_ErrorCode(int value);
    QString Get_UCodePageText() const;
    int Get_RequestType() const;
    void Set_RequestType(int value);
    int Get_TagID() const;
    void Set_TagID(int value);
    int Get_IBMSessionMonth() const;
    QString Get_OPRequisiteValue() const;
    void Set_OPRequisiteValue(QString value);
    int Get_ChangeOffset() const;
    void Set_ChangeOffset(int value);
    int Get_OpenDocumentNumber() const;
    QString Get_LastKPKTimeStr() const;
    int Get_CashAcceptorPollingMode() const;
    int Get_Summ2NameOffset() const;
    void Set_Summ2NameOffset(int value);
    QString Get_ComputerName() const;
    void Set_ComputerName(QString value);
    int Get_KPKValue() const;
    void Set_KPKValue(int value);
    QString Get_SlipStringIntervals() const;
    void Set_SlipStringIntervals(QString value);
    int Get_FMMode() const;
    int Get_Tax1NameFont() const;
    void Set_Tax1NameFont(int value);
    quint32 Get_DocumentNumber() const;
    void Set_DocumentNumber(quint32 value);
    bool Get_UseSlipDocument() const;
    void Set_UseSlipDocument(bool value);
    int Get_Timeout() const;
    void Set_Timeout(int value);
    int Get_PrintWidth() const;
    int Get_DiscountOnCheckFont() const;
    void Set_DiscountOnCheckFont(int value);
    int Get_TotalSumOffset() const;
    void Set_TotalSumOffset(int value);
    int Get_PingResult() const;
    void Set_PingResult(int value);
    int Get_RegistrationReasonCode() const;
    void Set_RegistrationReasonCode(int value);
    int Get_SymbolWidth() const;
    void Set_SymbolWidth(int value);
    int Get_SymbolHeight() const;
    void Set_SymbolHeight(int value);
    bool Get_SlowingValve() const;
    int Get_SymbolCode() const;
    void Set_SymbolCode(int value);
    int Get_WrittenByte() const;
    void Set_WrittenByte(int value);
    int Get_TextStringNumber() const;
    void Set_TextStringNumber(int value);
    quint32 Get_LDSysAdminPassword() const;
    void Set_LDSysAdminPassword(quint32 value);
    int Get_Summ4NameFont() const;
    void Set_Summ4NameFont(int value);
    int Get_Tax4SumSymbolNumber() const;
    void Set_Tax4SumSymbolNumber(int value);
    int Get_IBMSessionYear() const;
    int Get_OPTransactionStatus() const;
    void Set_OPTransactionStatus(int value);
    bool Get_TypeOfLastEntryFM() const;
    int Get_AccType() const;
    void Set_AccType(int value);
    QString Get_LineData2() const;
    void Set_LineData2(QString value);
    QString Get_BarcodeTypes() const;
    bool Get_TaxValueEnabled() const;
    void Set_TaxValueEnabled(bool value);
    int Get_Tax3RateFont() const;
    void Set_Tax3RateFont(int value);
    int Get_UMinorProtocolVersion() const;
    int Get_FMOffset() const;
    void Set_FMOffset(int value);
    bool Get_CutType() const;
    void Set_CutType(bool value);
    int Get_FeedLineCount() const;
    void Set_FeedLineCount(int value);
    bool Get_TaxValue2Enabled() const;
    void Set_TaxValue2Enabled(bool value);
    int Get_PUKCode() const;
    void Set_PUKCode(int value);
    int Get_MessageCount() const;
    void Set_MessageCount(int value);
    bool Get_UseSlipCheck() const;
    void Set_UseSlipCheck(bool value);
    int Get_SlipDocumentWidth() const;
    void Set_SlipDocumentWidth(int value);
    int Get_BarcodeType() const;
    void Set_BarcodeType(int value);
    bool Get_AdjustRITimeout() const;
    void Set_AdjustRITimeout(bool value);
    int Get_FNDocumentData() const;
    void Set_FNDocumentData(int value);
    int Get_Summ1StringNumber() const;
    void Set_Summ1StringNumber(int value);
    int Get_LDTimeout() const;
    void Set_LDTimeout(int value);
    int Get_TextSymbolNumber() const;
    void Set_TextSymbolNumber(int value);
    int Get_Summ3Offset() const;
    void Set_Summ3Offset(int value);
    bool Get_LogOn() const;
    void Set_LogOn(bool value);
    QString Get_LoaderVersion() const;
    int Get_TransmitStatus() const;
    QString Get_PollDescription() const;
    int Get_Summ3NameFont() const;
    void Set_Summ3NameFont(int value);
    int Get_BarWidth() const;
    void Set_BarWidth(int value);
    int Get_BaudRate() const;
    void Set_BaudRate(int value);
    qint64 Get_Discount3() const;
    void Set_Discount3(qint64 value);
    qint64 Get_Discount1() const;
    void Set_Discount1(qint64 value);
    int Get_DiscountOnCheckSumSymbolNumber() const;
    void Set_DiscountOnCheckSumSymbolNumber(int value);
    bool Get_ICSEnabled() const;
    void Set_ICSEnabled(bool value);
    QString Get_DataBlock() const;
    int Get_CopyType() const;
    void Set_CopyType(int value);
    int Get_OFDPort() const;
    void Set_OFDPort(int value);
    int Get_SKNOError() const;
    void Set_SKNOError(int value);
    int Get_Summ3SymbolNumber() const;
    void Set_Summ3SymbolNumber(int value);
    int Get_ECRMode8Status() const;
    int Get_ChangeFont() const;
    void Set_ChangeFont(int value);
    int Get_Summ1NameFont() const;
    void Set_Summ1NameFont(int value);
    int Get_SubTotalSumOffset() const;
    void Set_SubTotalSumOffset(int value);
    bool Get_SkipPrint() const;
    void Set_SkipPrint(bool value);
    QString Get_DigitalSign() const;
    void Set_DigitalSign(QString value);
    void Set_DeviceFunctionNumber(int DeviceFunctionNumber);
    void Set_ValueOfFunctionInteger(int ValueOfFunctionInteger);
    void Set_ValueOfFunctionString(QString ValueOfFunctionString);
    void Set_EnableCashcoreMarkCompatibility(bool EnableCashcoreMarkCompatibility);
    QString Get_TLVDataHex() const;
    void Set_TLVDataHex(const QString value);
    qint64 Get_MessageNumber() const;
    void Set_MessageNumber(int64_t value);
    void Set_CheckItemLocalError(int value);
    int Get_CheckItemLocalError() const;
    void Set_MeasureUnit(int value);
    int Get_MeasureUnit() const;
    void Set_DivisionalQuantity(bool value);
    bool Get_DivisionalQuantity() const;
    void Set_Numerator(quint64 value);
    quint64 Get_Numerator() const;
    void Set_Denominator(quint64 value);
    quint64 Get_Denominator() const;
    int Get_FreeMemorySize() const;
    void Set_FreeMemorySize(int value);
    int Get_MCCheckStatus() const;
    void Set_MCCheckStatus(int value);
    int Get_MCNotificationStatus() const;
    void Set_MCNotificationStatus(int value);
    int Get_MCCommandFlags() const;
    void Set_MCCommandFlags(int value);
    int Get_MCCheckResultSavedCount() const;
    void Set_MCCheckResultSavedCount(int value);
    int Get_MCRealizationCount() const;
    void Set_MCRealizationCount(int value);
    int Get_MCStorageSize() const;
    void Set_MCStorageSize(int value);
    quint64 Get_CheckSum() const;
    void Set_CheckSum(quint64 value);
    int Get_NotificationCount() const;
    void Set_NotificationCount(int value);
    qint64 Get_NotificationNumber() const;
    void Set_NotificationNumber(int64_t value);
    int Get_NotificationSize() const;
    void Set_NotificationSize(int value);
    int Get_DataOffset() const;
    void Set_DataOffset(int value);
    void Set_MarkingType2(int value);
    int Get_MarkingType2() const;
    QByteArray Get_RandomSequence() const;
    void Set_RandomSequence(const QByteArray& value);
    QString Get_RandomSequenceHex() const;
    void Set_RandomSequenceHex(const QString value);
    QByteArray Get_AuthData() const;
    void Set_AuthData(const QByteArray& value);
    void Set_ItemStatus(int value);
    int Get_ItemStatus() const;
    void Set_CheckItemMode(int value);
    int Get_CheckItemMode() const;
    void Set_CheckItemLocalResult(int value);
    int Get_CheckItemLocalResult() const;
    void Set_KMServerErrorCode(int value);
    int Get_KMServerErrorCode() const;
    void Set_KMServerCheckingStatus(int value);
    int Get_KMServerCheckingStatus() const;
    void Set_LastDocumentNumber(int value);
    int Get_LastDocumentNumber() const;
    void Set_FirstDocumentNumber(int value);
    int Get_FirstDocumentNumber() const;
    void Set_FNArchiveType(int value);
    int Get_FNArchiveType() const;
    void Set_MarkingOnly(bool value);
    bool Get_MarkingOnly() const;
    QString Get_UserAttributeName() const;
    void Set_UserAttributeName(QString value);
    QString Get_UserAttributeValue() const;
    void Set_UserAttributeValue(QString value);
    qint64 Get_WaitForPrintingTimeout() const;
    void Set_WaitForPrintingTimeout(qint64 value);
    QString Get_DeclarativeInput() const;
    void Set_DeclarativeInput(QString value);
    QString Get_DeclarativeOutput() const;
    void Set_DeclarativeOutput(QString value);
    QString Get_DeclarativeEndpointPath() const;
    void Set_DeclarativeEndpointPath(QString value);
    QString Get_DataBlockHex() const;
    QString Get_FontHashHex() const;
    bool Get_MCOSUSign() const;
    void Set_MCOSUSign(bool value);
    int Get_DocumentSize() const;
    void Set_DocumentSize(int value);
    QString Get_FNImplementation() const;
    void Set_FNImplementation(QString value);
    int Get_FNOSUSupportStatus() const;
    void Set_FNOSUSupportStatus(int value);
    bool Get_CrptCheck() const;
    void Set_CrptCheck(bool value);
    QString Get_InputStrJson() const;
    void Set_InputStrJson(QString value);
    QString Get_OutputStrJson() const;
    void Set_OutputStrJson(QString value);
    QString Get_CrptToken() const;
    void Set_CrptToken(QString value);
    QString Get_CrptCdnListUrl() const;
    void Set_CrptCdnListUrl(QString value);
    QString Get_CrptExchangeCaCertPath() const;
    void Set_CrptExchangeCaCertPath(QString value);

signals:
    void CrptExchangeCaCertPathChanged(QString CrptExchangeCaCertPath);
    void CrptCdnListUrlChanged(QString CrptCdnListUrl);
    void CrptTokenChanged(QString CrptToken);
    void OutputStrJsonChanged(QString OutputStrJson);
    void InputStrJsonChanged(QString InputStrJson);
    void CrptCheckChanged(bool CrptCheck);
    void FNOSUSupportStatusChanged(int FNOSUSupportStatus);
    void FNImplementationChanged(QString FNImplementation);
    void DocumentSizeChanged(int DocumentSize);
    void MCOSUSignChanged(bool MCOSUSign);
    void FontHashHexChanged(QString FontHashHex);
    void DataBlockHexChanged(QString DataBlockHex);
    void DeclarativeEndpointPathChanged(QString DeclarativeEndpointPath);
    void DeclarativeOutputChanged(QString DeclarativeOutput);
    void DeclarativeInputChanged(QString DeclarativeInput);
    void WaitForPrintingTimeoutChanged(qint64 WaitForPrintingTimeout);
    void UserAttributeValueChanged(QString UserAttributeValue);
    void UserAttributeNameChanged(QString UserAttributeName);
    void HasCashControlLicenseChanged(bool HasCashControlLicense);
    void SwapBytesModeChanged(int SwapBytesMode);
    void Tax4NameFontChanged(int Tax4NameFont);
    void LineDataChanged(QString LineData);
    void Summ3FontChanged(int Summ3Font);
    void FontTypeChanged(int FontType);
    void Tax1RateFontChanged(int Tax1RateFont);
    void GTINChanged(QString GTIN);
    void DepartmentChanged(int Department);
    void CashControlPasswordChanged(quint32 CashControlPassword);
    void EKLZVersionChanged(QString EKLZVersion);
    void IBMLastBuyReceiptNumberChanged(int IBMLastBuyReceiptNumber);
    void DepartmentSymbolNumberChanged(int DepartmentSymbolNumber);
    void Summ3StringNumberChanged(int Summ3StringNumber);
    void MaxENQSendCountChanged(int MaxENQSendCount);
    void Summ4FontChanged(int Summ4Font);
    void Tax4SumStringNumberChanged(int Tax4SumStringNumber);
    void TimeStrChanged(QString TimeStr);
    void ECRSoftDateChanged(QDateTime ECRSoftDate);
    void TagValueStrChanged(QString TagValueStr);
    void ChangeSumFontChanged(int ChangeSumFont);
    void DataLengthChanged(int DataLength);
    void LDEscapeIPChanged(QString LDEscapeIP);
    void OPBarcodeInputTypeChanged(int OPBarcodeInputType);
    void SubTotalFontChanged(int SubTotalFont);
    void StringNumberChanged(int StringNumber);
    void LDNumberChanged(int LDNumber);
    void FiscalSignAsStringChanged(QString FiscalSignAsString);
    void Tax3TurnOverOffsetChanged(int Tax3TurnOverOffset);
    void ModelIndexChanged(int ModelIndex);
    void Summ2StringNumberChanged(int Summ2StringNumber);
    void UseJournalRibbonChanged(bool UseJournalRibbon);
    void TaxValue1EnabledChanged(bool TaxValue1Enabled);
    void ReadByteChanged(int ReadByte);
    void ccUseTextAsWareNameChanged(bool ccUseTextAsWareName);
    void EKLZOffsetChanged(int EKLZOffset);
    void PaymentItemSignChanged(int PaymentItemSign);
    void TestNumberChanged(int TestNumber);
    void Tax1TurnOverStringNumberChanged(int Tax1TurnOverStringNumber);
    void CashControlPortChanged(QString CashControlPort);
    void DelayOnDisconnectChanged(int DelayOnDisconnect);
    void KPKStrChanged(QString KPKStr);
    void Tax2NameOffsetChanged(int Tax2NameOffset);
    void TransferBytesChanged(QString TransferBytes);
    void KSAInfoChanged(QString KSAInfo);
    void CurrentDozeInMoneyChanged(qint64 CurrentDozeInMoney);
    void Date2Changed(QDateTime Date2);
    void ModelParamCountChanged(int ModelParamCount);
    void OPTransactionTypeChanged(int OPTransactionType);
    void LicenseNumberChanged(int LicenseNumber);
    void TagValueIntChanged(quint64 TagValueInt);
    void Summ7Changed(qint64 Summ7);
    void Summ6Changed(qint64 Summ6);
    void Summ5Changed(qint64 Summ5);
    void Summ4Changed(qint64 Summ4);
    void Summ3Changed(qint64 Summ3);
    void Summ2Changed(qint64 Summ2);
    void Summ1Changed(qint64 Summ1);
    void BlockNumberChanged(int BlockNumber);
    void Tax1TurnOverFontChanged(int Tax1TurnOverFont);
    void Summ9Changed(qint64 Summ9);
    void Summ8Changed(qint64 Summ8);
    void Tax2TurnOverOffsetChanged(int Tax2TurnOverOffset);
    void ECRModeStatusChanged(int ECRModeStatus);
    void Summ3NameOffsetChanged(int Summ3NameOffset);
    void TableNameChanged(QString TableName);
    void StatusRKDescriptionChanged(QString StatusRKDescription);
    void FMSoftVersionChanged(QString FMSoftVersion);
    void ResultCodeChanged(int ResultCode);
    void TaxValueChanged(qint64 TaxValue);
    void Tax2RateFontChanged(int Tax2RateFont);
    void CloudCashdeskEnabledChanged(bool CloudCashdeskEnabled);
    void CommandTimeoutChanged(int CommandTimeout);
    void UseReceiptRibbonChanged(bool UseReceiptRibbon);
    void KKTRegistrationNumberChanged(QString KKTRegistrationNumber);
    void Summ1AsStringChanged(QString Summ1AsString);
    void OPIdPaymentChanged(QString OPIdPayment);
    void TextOffsetChanged(int TextOffset);
    void CashControlUseTCPChanged(bool CashControlUseTCP);
    void OPRequisiteNumberChanged(int OPRequisiteNumber);
    void ReportTypeChanged(bool ReportType);
    void IBMSessionMinChanged(int IBMSessionMin);
    void PrintBufferFormatChanged(int PrintBufferFormat);
    void BatteryVoltageChanged(double BatteryVoltage);
    void BlockDataChanged(QByteArray BlockData);
    void Tax2SumFontChanged(int Tax2SumFont);
    void ContentsOfOperationRegisterChanged(int ContentsOfOperationRegister);
    void PayDepartmentChanged(int PayDepartment);
    void QuantityOffsetChanged(int QuantityOffset);
    void INNChanged(QString INN);
    void BarcodeAlignmentChanged(TBarcodeAlignment BarcodeAlignment);
    void ccHeaderLineCountChanged(int ccHeaderLineCount);
    void MotorChanged(bool Motor);
    void Summ1EnabledChanged(bool Summ1Enabled);
    void FreeRegistrationChanged(int FreeRegistration);
    void TotalFontChanged(int TotalFont);
    void UseTaxDiscountBelChanged(bool UseTaxDiscountBel);
    void IsPrinterRightSensorFailureChanged(bool IsPrinterRightSensorFailure);
    void FiscalSignOFDChanged(QString FiscalSignOFD);
    void ShowProgressChanged(bool ShowProgress);
    void BarCodeChanged(QString BarCode);
    void PortLockedChanged(bool PortLocked);
    void ChangeSumOffsetChanged(int ChangeSumOffset);
    void Tax2NameSymbolNumberChanged(int Tax2NameSymbolNumber);
    void RunningPeriodChanged(int RunningPeriod);
    void Summ1NameOffsetChanged(int Summ1NameOffset);
    void OFDReadTimeoutChanged(int OFDReadTimeout);
    void BlockTypeChanged(int BlockType);
    void CommandCountChanged(int CommandCount);
    void LDIPAddressChanged(QString LDIPAddress);
    void VertScaleChanged(int VertScale);
    void MINValueOfFieldChanged(int MINValueOfField);
    void TotalStringNumberChanged(int TotalStringNumber);
    void CheckTypeChanged(int CheckType);
    void JournalRibbonOpticalSensorChanged(bool JournalRibbonOpticalSensor);
    void StringForPrintingChanged(QString StringForPrinting);
    void Tax1TurnOverOffsetChanged(int Tax1TurnOverOffset);
    void CustomerCodeChanged(int CustomerCode);
    void TotalOffsetChanged(int TotalOffset);
    void TaxValue5EnabledChanged(bool TaxValue5Enabled);
    void Tax3RateSymbolNumberChanged(int Tax3RateSymbolNumber);
    void UseIPAddressChanged(bool UseIPAddress);
    void LineLengthChanged(int LineLength);
    void NewPasswordTIChanged(quint32 NewPasswordTI);
    void TaxValue3EnabledChanged(bool TaxValue3Enabled);
    void PropertyNameChanged(QString PropertyName);
    void DocumentTypeChanged(int DocumentType);
    void CommandNameChanged(QString CommandName);
    void PrinterStatusChanged(int PrinterStatus);
    void KPKFontChanged(int KPKFont);
    void RegistrationNumberChanged(int RegistrationNumber);
    void TimeChanged(QDateTime Time);
    void SyncTimeoutChanged(int SyncTimeout);
    void SKNOStatusChanged(int SKNOStatus);
    void QuantityChanged(double Quantity);
    void DriverReleaseChanged(quint32 DriverRelease);
    void PresenterInChanged(bool PresenterIn);
    void ProtocolTypeChanged(int ProtocolType);
    void UDescriptionChanged(QString UDescription);
    void CPLogFileChanged(QString CPLogFile);
    void Tax3SumStringNumberChanged(int Tax3SumStringNumber);
    void TextBlockChanged(QString TextBlock);
    void IBMSessionHourChanged(int IBMSessionHour);
    void PingTimeChanged(int PingTime);
    void CapOpenCheckChanged(bool CapOpenCheck);
    void FM1IsPresentChanged(bool FM1IsPresent);
    void SerialNumberAsIntegerChanged(int SerialNumberAsInteger);
    void CharHeightChanged(int CharHeight);
    void AutoSensorValuesChanged(bool AutoSensorValues);
    void PrintBarcodeTextChanged(int PrintBarcodeText);
    void LastSessionDateChanged(QDateTime LastSessionDate);
    void DocumentNameChanged(QString DocumentName);
    void Tax4SumOffsetChanged(int Tax4SumOffset);
    void RegSaleRecChanged(qint64 RegSaleRec);
    void ChangeStringNumberChanged(int ChangeStringNumber);
    void Tax4TurnOverFontChanged(int Tax4TurnOverFont);
    void StatusRKChanged(int StatusRK);
    void ECRModeChanged(int ECRMode);
    void IsDrawerOpenChanged(bool IsDrawerOpen);
    void ResultCodeDescriptionChanged(QString ResultCodeDescription);
    void Tax4TurnOverStringNumberChanged(int Tax4TurnOverStringNumber);
    void Tax4NameOffsetChanged(int Tax4NameOffset);
    void TLVDataChanged(QByteArray TLVData);
    void MFPNumberChanged(QString MFPNumber);
    void QuantityOfOperationsChanged(int QuantityOfOperations);
    void SubTotalSymbolNumberChanged(int SubTotalSymbolNumber);
    void DiscountNameChanged(QString DiscountName);
    void CarryStringsChanged(bool CarryStrings);
    void Summ1FontChanged(int Summ1Font);
    void BatteryConditionChanged(bool BatteryCondition);
    void SummSymbolNumberChanged(int SummSymbolNumber);
    void LicenseChanged(QString License);
    void JournalRibbonLeverChanged(bool JournalRibbonLever);
    void CPLogChanged(bool CPLog);
    void SummOffsetChanged(int SummOffset);
    void Tax4RateSymbolNumberChanged(int Tax4RateSymbolNumber);
    void Summ11Changed(qint64 Summ11);
    void CopyOffset1Changed(int CopyOffset1);
    void RegBuyReturnRecChanged(qint64 RegBuyReturnRec);
    void CopyOffset3Changed(int CopyOffset3);
    void CopyOffset2Changed(int CopyOffset2);
    void CopyOffset5Changed(int CopyOffset5);
    void CopyOffset4Changed(int CopyOffset4);
    void Tax1NameSymbolNumberChanged(int Tax1NameSymbolNumber);
    void LastFMRecordTypeChanged(int LastFMRecordType);
    void BanknoteCountChanged(int BanknoteCount);
    void LicenseIsPresentChanged(bool LicenseIsPresent);
    void RegistrationReasonCodeExChanged(int RegistrationReasonCodeEx);
    void SubTotalStringNumberChanged(int SubTotalStringNumber);
    void ClicheOffsetChanged(int ClicheOffset);
    void RequestDocumentTypeChanged(int RequestDocumentType);
    void NameOperationRegChanged(QString NameOperationReg);
    void Tax3TurnOverSymbolNumberChanged(int Tax3TurnOverSymbolNumber);
    void BarcodeFirstLineChanged(int BarcodeFirstLine);
    void LidPositionSensorChanged(bool LidPositionSensor);
    void TransmitDocumentNumberChanged(int TransmitDocumentNumber);
    void LogMaxFileSizeChanged(int LogMaxFileSize);
    void IsBlockedByWrongTaxPasswordChanged(bool IsBlockedByWrongTaxPassword);
    void FMOverflowChanged(bool FMOverflow);
    void NameCashRegChanged(QString NameCashReg);
    void ComNumberChanged(int ComNumber);
    void TCPConnectionTimeoutChanged(int TCPConnectionTimeout);
    void TaxValue3Changed(qint64 TaxValue3);
    void Tax1RateOffsetChanged(int Tax1RateOffset);
    void ECRAdvancedModeChanged(int ECRAdvancedMode);
    void Tax3NameSymbolNumberChanged(int Tax3NameSymbolNumber);
    void IsClearUnfiscalInfoChanged(bool IsClearUnfiscalInfo);
    void EKLZIsPresentChanged(bool EKLZIsPresent);
    void ReceiptOutputTypeChanged(int ReceiptOutputType);
    void BarcodeStartBlockNumberChanged(int BarcodeStartBlockNumber);
    void FontCountChanged(int FontCount);
    void ParamsPageIndexChanged(int ParamsPageIndex);
    void LDComNumberChanged(int LDComNumber);
    void INNOFDChanged(QString INNOFD);
    void FinishDocumentModeChanged(TFinishDocumentMode FinishDocumentMode);
    void LDTCPPortChanged(int LDTCPPort);
    void RoundingSummChanged(int RoundingSumm);
    void OperationCodeChanged(int OperationCode);
    void FMFlagsExChanged(int FMFlagsEx);
    void ActivizationControlByteChanged(int ActivizationControlByte);
    void URLChanged(QString URL);
    void UMajorProtocolVersionChanged(int UMajorProtocolVersion);
    void TagValueLengthChanged(int TagValueLength);
    void FM2IsPresentChanged(bool FM2IsPresent);
    void DiscountOnCheckSymbolNumberChanged(int DiscountOnCheckSymbolNumber);
    void WorkModeExChanged(int WorkModeEx);
    void TagValueFVLNChanged(double TagValueFVLN);
    void SearchTimeoutChanged(int SearchTimeout);
    void RegBuyReturnSessionChanged(qint64 RegBuyReturnSession);
    void MaxRecoverCountChanged(int MaxRecoverCount);
    void AttributeValueChanged(QString AttributeValue);
    void LogMethodsChanged(bool LogMethods);
    void TransferByteChanged(QString TransferByte);
    void ModelParamValueChanged(int ModelParamValue);
    void LDConnectionTypeChanged(TConnectionType LDConnectionType);
    void UModelChanged(int UModel);
    void ConnectedChanged(bool Connected);
    void SummStringNumberChanged(int SummStringNumber);
    void RealPayDepartmentChanged(int RealPayDepartment);
    void TranslationEnabledChanged(bool TranslationEnabled);
    void IsCheckMadeOutChanged(bool IsCheckMadeOut);
    void ECRModeDescriptionChanged(QString ECRModeDescription);
    void PointPositionChanged(bool PointPosition);
    void DeviceCodeChanged(int DeviceCode);
    void TextBlockNumberChanged(int TextBlockNumber);
    void IsCheckClosedChanged(bool IsCheckClosed);
    void OFDExchangeSuspendedChanged(bool OFDExchangeSuspended);
    void MFPStatusChanged(int MFPStatus);
    void DriverMinorVersionChanged(quint32 DriverMinorVersion);
    void Tax3NameOffsetChanged(int Tax3NameOffset);
    void FNCurrentDocumentChanged(int FNCurrentDocument);
    void FileNameChanged(QString FileName);
    void SlipDocumentIsMovingChanged(bool SlipDocumentIsMoving);
    void StringQuantityInOperationChanged(int StringQuantityInOperation);
    void KPKNumberChanged(int KPKNumber);
    void DriverVersionChanged(QString DriverVersion);
    void TCPPortChanged(int TCPPort);
    void BarcodeHexChanged(QString BarcodeHex);
    void Tax4NameSymbolNumberChanged(int Tax4NameSymbolNumber);
    void PortNumberChanged(int PortNumber);
    void GraphBufferTypeChanged(int GraphBufferType);
    void CorrectionTypeChanged(int CorrectionType);
    void CalculationSignChanged(int CalculationSign);
    void SKNOIdentifierChanged(QString SKNOIdentifier);
    void FileTypeChanged(int FileType);
    void RegSaleReturnRecChanged(qint64 RegSaleReturnRec);
    void DepartmentStringNumberChanged(int DepartmentStringNumber);
    void CheckResultChanged(qint64 CheckResult);
    void JournalRowCountChanged(int JournalRowCount);
    void EscapeIPChanged(QString EscapeIP);
    void IsLastFMRecordCorruptedChanged(bool IsLastFMRecordCorrupted);
    void CommandCodeChanged(int CommandCode);
    void CommandRetryCountChanged(int CommandRetryCount);
    void OperationNameOffsetChanged(int OperationNameOffset);
    void ServerVersionChanged(QString ServerVersion);
    void TransmitQueueSizeChanged(int TransmitQueueSize);
    void FieldTypeChanged(bool FieldType);
    void FMBuildChanged(int FMBuild);
    void MobilePayEnabledChanged(bool MobilePayEnabled);
    void Tax1SumFontChanged(int Tax1SumFont);
    void ComLogOnlyErrorsChanged(bool ComLogOnlyErrors);
    void ValueOfFieldStringChanged(QString ValueOfFieldString);
    void ConnectionURIChanged(QString ConnectionURI);
    void RegBuyRecChanged(qint64 RegBuyRec);
    void BlockDataHexChanged(QString BlockDataHex);
    void BufferingTypeChanged(int BufferingType);
    void DiscountOnCheckSumOffsetChanged(int DiscountOnCheckSumOffset);
    void PistolChanged(bool Pistol);
    void PriceSymbolNumberChanged(int PriceSymbolNumber);
    void Summ4StringNumberChanged(int Summ4StringNumber);
    void JournalRibbonIsPresentChanged(bool JournalRibbonIsPresent);
    void AutoStartSearchChanged(bool AutoStartSearch);
    void LockTimeoutChanged(int LockTimeout);
    void ReconnectPortChanged(bool ReconnectPort);
    void DozeInMillilitersChanged(int DozeInMilliliters);
    void SCPasswordChanged(quint32 SCPassword);
    void FileVersionLSChanged(quint32 FileVersionLS);
    void EmergencyStopCodeDescriptionChanged(QString EmergencyStopCodeDescription);
    void PrintingAlignmentChanged(int PrintingAlignment);
    void DateChanged(QDateTime Date);
    void Tax3Changed(int Tax3);
    void Tax2Changed(int Tax2);
    void Tax4Changed(int Tax4);
    void ECRIDChanged(QString ECRID);
    void FirstSessionDateChanged(QDateTime FirstSessionDate);
    void ParentWndChanged(int ParentWnd);
    void JournalRowChanged(QString JournalRow);
    void WrapStringsChanged(bool WrapStrings);
    void Tax1Changed(int Tax1);
    void FNSoftVersionChanged(QString FNSoftVersion);
    void RecordCountChanged(int RecordCount);
    void Summ4AsStringChanged(QString Summ4AsString);
    void OPSystemChanged(int OPSystem);
    void FMFlagsChanged(int FMFlags);
    void DiscountOnCheckChanged(double DiscountOnCheck);
    void IntervalValueChanged(int IntervalValue);
    void HeaderStringNumberChanged(int HeaderStringNumber);
    void SlipDocumentLengthChanged(int SlipDocumentLength);
    void TaxValue4EnabledChanged(bool TaxValue4Enabled);
    void Tax2RateSymbolNumberChanged(int Tax2RateSymbolNumber);
    void ReceiptRibbonIsPresentChanged(bool ReceiptRibbonIsPresent);
    void Summ4OffsetChanged(int Summ4Offset);
    void WaitPrintingTimeChanged(int WaitPrintingTime);
    void IsEKLZOverflowChanged(bool IsEKLZOverflow);
    void EmailAddressChanged(QString EmailAddress);
    void LogMaxFileCountChanged(int LogMaxFileCount);
    void LastKPKDocumentResultChanged(qint64 LastKPKDocumentResult);
    void Summ2NameFontChanged(int Summ2NameFont);
    void MessageStateChanged(int MessageState);
    void FeedAfterCutChanged(bool FeedAfterCut);
    void Tax4RateFontChanged(int Tax4RateFont);
    void CurrentDozeInMillilitersChanged(int CurrentDozeInMilliliters);
    void JournalEnabledChanged(bool JournalEnabled);
    void CheckFMConnectionChanged(bool CheckFMConnection);
    void IBMLastSaleReceiptNumberChanged(int IBMLastSaleReceiptNumber);
    void ModelParamDescriptionChanged(QString ModelParamDescription);
    void OperatorNumberChanged(int OperatorNumber);
    void UMajorTypeChanged(int UMajorType);
    void QuantityPointPositionChanged(bool QuantityPointPosition);
    void BarcodeParameter2Changed(int BarcodeParameter2);
    void BarcodeParameter3Changed(int BarcodeParameter3);
    void BarcodeParameter1Changed(int BarcodeParameter1);
    void ChargeValueChanged(qint64 ChargeValue);
    void BarcodeParameter4Changed(int BarcodeParameter4);
    void BarcodeParameter5Changed(int BarcodeParameter5);
    void PrepareActivizationRemainCountChanged(int PrepareActivizationRemainCount);
    void LDNameChanged(QString LDName);
    void PriceChanged(qint64 Price);
    void SubTotalOffsetChanged(int SubTotalOffset);
    void ModelsCountChanged(int ModelsCount);
    void FMSoftDateChanged(QDateTime FMSoftDate);
    void DBFilePathChanged(QString DBFilePath);
    void QuantityFormatChanged(int QuantityFormat);
    void TaxValue2Changed(qint64 TaxValue2);
    void StringQuantityChanged(int StringQuantity);
    void TaxValue6Changed(qint64 TaxValue6);
    void TaxValue5Changed(qint64 TaxValue5);
    void DocumentDataChanged(QString DocumentData);
    void TaxTypeChanged(int TaxType);
    void ParameterValueChanged(QString ParameterValue);
    void Tax3SumOffsetChanged(int Tax3SumOffset);
    void HRIPositionChanged(int HRIPosition);
    void IBMLastReturnSaleReceiptNumberChanged(int IBMLastReturnSaleReceiptNumber);
    void EnteredTaxPasswordChanged(quint32 EnteredTaxPassword);
    void OFDEnabledChanged(bool OFDEnabled);
    void RegBuySessionChanged(qint64 RegBuySession);
    void TotalSymbolNumberChanged(int TotalSymbolNumber);
    void Tax1RateSymbolNumberChanged(int Tax1RateSymbolNumber);
    void TimeoutsUsingChanged(int TimeoutsUsing);
    void WorkModeChanged(int WorkMode);
    void LineDataHexChanged(QString LineDataHex);
    void TotalSumFontChanged(int TotalSumFont);
    void Tax1NameOffsetChanged(int Tax1NameOffset);
    void RecoverError165Changed(bool RecoverError165);
    void HeaderFontChanged(int HeaderFont);
    void EKLZNumberChanged(QString EKLZNumber);
    void Summ2SymbolNumberChanged(int Summ2SymbolNumber);
    void ReadTimeoutChanged(int ReadTimeout);
    void LogicalNumberChanged(int LogicalNumber);
    void PowerSourceVoltageChanged(double PowerSourceVoltage);
    void LDUseIPAddressChanged(bool LDUseIPAddress);
    void UseCommandTimeoutChanged(bool UseCommandTimeout);
    void LastLineNumberChanged(int LastLineNumber);
    void RegSaleSessionChanged(qint64 RegSaleSession);
    void Tax3NameFontChanged(int Tax3NameFont);
    void Tax3SumFontChanged(int Tax3SumFont);
    void DelayedPrintChanged(bool DelayedPrint);
    void IBMDocumentNumberChanged(int IBMDocumentNumber);
    void ECRDateChanged(QDateTime ECRDate);
    void ECRTimeChanged(QDateTime ECRTime);
    void INNAsIntegerChanged(int INNAsInteger);
    void Summ15Changed(qint64 Summ15);
    void Summ14Changed(qint64 Summ14);
    void Summ13Changed(qint64 Summ13);
    void Summ12Changed(qint64 Summ12);
    void UCodePageChanged(int UCodePage);
    void Summ10Changed(qint64 Summ10);
    void BarcodeDataLengthChanged(int BarcodeDataLength);
    void FNWarningFlagsChanged(int FNWarningFlags);
    void LDEscapePortChanged(int LDEscapePort);
    void WaitForPrintingDelayChanged(int WaitForPrintingDelay);
    void ECRInputChanged(QString ECRInput);
    void LDIndexChanged(int LDIndex);
    void Tax4TurnOverSymbolNumberChanged(int Tax4TurnOverSymbolNumber);
    void LogFileMaxSizeChanged(int LogFileMaxSize);
    void ReceiptRibbonLeverChanged(bool ReceiptRibbonLever);
    void Tax2TurnOverFontChanged(int Tax2TurnOverFont);
    void CheckingTypeChanged(int CheckingType);
    void ModelParamIndexChanged(int ModelParamIndex);
    void Tax1SumStringNumberChanged(int Tax1SumStringNumber);
    void DiscountOnCheckSumFontChanged(int DiscountOnCheckSumFont);
    void ContentsOfCashRegisterChanged(qint64 ContentsOfCashRegister);
    void IBMSessionSecChanged(int IBMSessionSec);
    void AutoOpenSessionChanged(bool AutoOpenSession);
    void Tax2NameFontChanged(int Tax2NameFont);
    void TableNumberChanged(int TableNumber);
    void TagValueDateTimeChanged(QDateTime TagValueDateTime);
    void FMStringNumberChanged(int FMStringNumber);
    void LastKPKDateStrChanged(QString LastKPKDateStr);
    void ConnectionTimeoutChanged(int ConnectionTimeout);
    void EKLZFontChanged(int EKLZFont);
    void QuantityFontChanged(int QuantityFont);
    void JournalRowNumberChanged(int JournalRowNumber);
    void ValueOfFieldIntegerChanged(int ValueOfFieldInteger);
    void Summ16Changed(qint64 Summ16);
    void AnswerCodeChanged(int AnswerCode);
    void Tax1SumSymbolNumberChanged(int Tax1SumSymbolNumber);
    void ICSPollPeriodChanged(int ICSPollPeriod);
    void IsCorruptedFiscalizationInfoChanged(bool IsCorruptedFiscalizationInfo);
    void LastPrintResultChanged(int LastPrintResult);
    void QuantityStringNumberChanged(int QuantityStringNumber);
    void Summ2OffsetChanged(int Summ2Offset);
    void LastSessionNumberChanged(int LastSessionNumber);
    void ECRSoftVersionChanged(QString ECRSoftVersion);
    void Tax2RateOffsetChanged(int Tax2RateOffset);
    void DiscountValueChanged(qint64 DiscountValue);
    void Tax3RateOffsetChanged(int Tax3RateOffset);
    void PresenterOutChanged(bool PresenterOut);
    void DrawerNumberChanged(int DrawerNumber);
    void PosControlReceiptSeparatorChanged(QString PosControlReceiptSeparator);
    void Summ2FontChanged(int Summ2Font);
    void RNMChanged(QString RNM);
    void ErrorDescriptionChanged(QString ErrorDescription);
    void RKNumberChanged(int RKNumber);
    void TagTypeChanged(int TagType);
    void CommandDefTimeoutChanged(int CommandDefTimeout);
    void CashControlEnabledChanged(bool CashControlEnabled);
    void IsPrinterLeftSensorFailureChanged(bool IsPrinterLeftSensorFailure);
    void Tax2TurnOverStringNumberChanged(int Tax2TurnOverStringNumber);
    void CashControlHostChanged(QString CashControlHost);
    void FirstSessionNumberChanged(int FirstSessionNumber);
    void Summ1OffsetChanged(int Summ1Offset);
    void DoNotSendENQChanged(bool DoNotSendENQ);
    void PrintBufferLineNumberChanged(int PrintBufferLineNumber);
    void ModelParamNumberChanged(int ModelParamNumber);
    void TagValueBinChanged(QString TagValueBin);
    void IBMFlagsChanged(int IBMFlags);
    void ReceiptRibbonOpticalSensorChanged(bool ReceiptRibbonOpticalSensor);
    void Poll1Changed(int Poll1);
    void CodePageChanged(TCodePage CodePage);
    void Summ4NameOffsetChanged(int Summ4NameOffset);
    void CenterImageChanged(bool CenterImage);
    void SessionNumberChanged(int SessionNumber);
    void MultiplicationFontChanged(int MultiplicationFont);
    void CheckEJConnectionChanged(bool CheckEJConnection);
    void IsFM24HoursOverChanged(bool IsFM24HoursOver);
    void DozeInMoneyChanged(qint64 DozeInMoney);
    void LDProtocolTypeChanged(int LDProtocolType);
    void SlipEqualStringIntervalsChanged(int SlipEqualStringIntervals);
    void LDCountChanged(int LDCount);
    void IBMSessionDateTimeChanged(QDateTime IBMSessionDateTime);
    void OperationBlockFirstStringChanged(int OperationBlockFirstString);
    void SaleErrorChanged(bool SaleError);
    void ClicheStringNumberChanged(int ClicheStringNumber);
    void ShowTagNumberChanged(bool ShowTagNumber);
    void ECRAdvancedModeDescriptionChanged(QString ECRAdvancedModeDescription);
    void MaxAnswerReadCountChanged(int MaxAnswerReadCount);
    void OFDServerChanged(QString OFDServer);
    void FreeRecordInFMChanged(int FreeRecordInFM);
    void LogCommandsChanged(bool LogCommands);
    void ReportTypeIntChanged(int ReportTypeInt);
    void TypeOfLastEntryFMExChanged(int TypeOfLastEntryFMEx);
    void InfoExchangeStatusChanged(int InfoExchangeStatus);
    void SerialNumberChanged(QString SerialNumber);
    void IsFMSessionOpenChanged(bool IsFMSessionOpen);
    void IBMSessionDayChanged(int IBMSessionDay);
    void CardPayEnabledChanged(bool CardPayEnabled);
    void OperationTypeChanged(int OperationType);
    void DocumentCountChanged(int DocumentCount);
    void LDComputerNameChanged(QString LDComputerName);
    void CharWidthChanged(int CharWidth);
    void WareCodeChanged(int WareCode);
    void CashControlProtocolsChanged(QString CashControlProtocols);
    void JournalTextChanged(QString JournalText);
    void PermitActivizationCodeChanged(int PermitActivizationCode);
    void EjectDirectionChanged(int EjectDirection);
    void EKLZFlagsChanged(int EKLZFlags);
    void Tax2SumOffsetChanged(int Tax2SumOffset);
    void DBDocTypeChanged(int DBDocType);
    void RowNumberChanged(int RowNumber);
    void TRKNumberChanged(int TRKNumber);
    void TagNumberChanged(int TagNumber);
    void SlipStringIntervalChanged(int SlipStringInterval);
    void UMinorTypeChanged(int UMinorType);
    void CapGetShortECRStatusChanged(bool CapGetShortECRStatus);
    void Summ1SymbolNumberChanged(int Summ1SymbolNumber);
    void HorizScaleChanged(int HorizScale);
    void FiscalSignChanged(quint32 FiscalSign);
    void Tax4TurnOverOffsetChanged(int Tax4TurnOverOffset);
    void Tax1TurnOverSymbolNumberChanged(int Tax1TurnOverSymbolNumber);
    void AddressChanged(int Address);
    void AutoEoDChanged(bool AutoEoD);
    void FNSessionStateChanged(int FNSessionState);
    void FNLifeStateChanged(int FNLifeState);
    void CardPayTypeChanged(int CardPayType);
    void Tax4SumFontChanged(int Tax4SumFont);
    void ParameterNumberChanged(int ParameterNumber);
    void RegisterNumberChanged(int RegisterNumber);
    void InfoTypeChanged(int InfoType);
    void EmergencyStopCodeChanged(int EmergencyStopCode);
    void Tax1SumOffsetChanged(int Tax1SumOffset);
    void EKLZStringNumberChanged(int EKLZStringNumber);
    void MAXValueOfFieldChanged(int MAXValueOfField);
    void Summ2AsStringChanged(QString Summ2AsString);
    void Tax2SumSymbolNumberChanged(int Tax2SumSymbolNumber);
    void RoughValveChanged(bool RoughValve);
    void ChangeSymbolNumberChanged(int ChangeSymbolNumber);
    void LastKPKDateChanged(QDateTime LastKPKDate);
    void OperationNameStringNumberChanged(int OperationNameStringNumber);
    void FileVersionMSChanged(quint32 FileVersionMS);
    void EKLZResultCodeChanged(int EKLZResultCode);
    void HeaderOffsetChanged(int HeaderOffset);
    void TaxValue6EnabledChanged(bool TaxValue6Enabled);
    void FieldNumberChanged(int FieldNumber);
    void LineNumberChanged(int LineNumber);
    void TransmitSessionNumberChanged(int TransmitSessionNumber);
    void SlowingInMillilitersChanged(int SlowingInMilliliters);
    void DiscountOnCheckOffsetChanged(int DiscountOnCheckOffset);
    void ComLogFileChanged(QString ComLogFile);
    void TextFontChanged(int TextFont);
    void AttributeNumberChanged(int AttributeNumber);
    void ServerConnectedChanged(bool ServerConnected);
    void DiscountOnCheckStringNumberChanged(int DiscountOnCheckStringNumber);
    void SysAdminPasswordChanged(quint32 SysAdminPassword);
    void NameCashRegExChanged(QString NameCashRegEx);
    void MaxCommandSendCountChanged(int MaxCommandSendCount);
    void LDEscapeTimeoutChanged(int LDEscapeTimeout);
    void NakCountChanged(int NakCount);
    void MethodNameChanged(QString MethodName);
    void ECRBuildChanged(int ECRBuild);
    void ModelNamesChanged(QString ModelNames);
    void SubTotalSumFontChanged(int SubTotalSumFont);
    void PriceFontChanged(int PriceFont);
    void MarkingTypeChanged(int MarkingType);
    void MarkingTypeExChanged(int MarkingTypeEx);
    void OFDPollPeriodChanged(int OFDPollPeriod);
    void IPAddressChanged(QString IPAddress);
    void Poll2Changed(int Poll2);
    void ChangeChanged(qint64 Change);
    void BarcodeAlignmentsChanged(QString BarcodeAlignments);
    void SaveSettingsTypeChanged(int SaveSettingsType);
    void UseWareCodeChanged(bool UseWareCode);
    void OFDTicketReceivedChanged(bool OFDTicketReceived);
    void TokenChanged(QString Token);
    void Summ3AsStringChanged(QString Summ3AsString);
    void PrintJournalBeforeZReportChanged(bool PrintJournalBeforeZReport);
    void Tax2SumStringNumberChanged(int Tax2SumStringNumber);
    void PasswordChanged(quint32 Password);
    void ExciseCodeChanged(int ExciseCode);
    void LastKPKNumberChanged(int LastKPKNumber);
    void KKTLicenseChanged(int KKTLicense);
    void FieldNameChanged(QString FieldName);
    void ClicheFontChanged(int ClicheFont);
    void ReceiptNumberChanged(int ReceiptNumber);
    void ModelIDChanged(int ModelID);
    void QuantitySymbolNumberChanged(int QuantitySymbolNumber);
    void ccWareNameLineNumberChanged(int ccWareNameLineNumber);
    void BanknoteTypeChanged(int BanknoteType);
    void SummFontChanged(int SummFont);
    void RegSaleReturnSessionChanged(qint64 RegSaleReturnSession);
    void DeviceCodeDescriptionChanged(QString DeviceCodeDescription);
    void Time2Changed(QDateTime Time2);
    void KPKOffsetChanged(int KPKOffset);
    void ECROutputChanged(QString ECROutput);
    void FieldSizeChanged(int FieldSize);
    void PaymentTypeSignChanged(int PaymentTypeSign);
    void FirstLineNumberChanged(int FirstLineNumber);
    void DriverBuildChanged(quint32 DriverBuild);
    void LastKPKTimeChanged(QDateTime LastKPKTime);
    void TagDescriptionChanged(QString TagDescription);
    void Summ4SymbolNumberChanged(int Summ4SymbolNumber);
    void IsBatteryLowChanged(bool IsBatteryLow);
    void NewSCPasswordChanged(quint32 NewSCPassword);
    void Tax2TurnOverSymbolNumberChanged(int Tax2TurnOverSymbolNumber);
    void Tax3TurnOverStringNumberChanged(int Tax3TurnOverStringNumber);
    void EKLZDataChanged(QString EKLZData);
    void ECRFlagsChanged(int ECRFlags);
    void DepartmentOffsetChanged(int DepartmentOffset);
    void TaxValue1Changed(qint64 TaxValue1);
    void EscapePortChanged(int EscapePort);
    void OperationNameFontChanged(int OperationNameFont);
    void IntervalNumberChanged(int IntervalNumber);
    void CommandIndexChanged(int CommandIndex);
    void BinaryConversionChanged(TBinaryConversion BinaryConversion);
    void ConnectionTypeChanged(TConnectionType ConnectionType);
    void Discount4Changed(qint64 Discount4);
    void LineSwapBytesChanged(bool LineSwapBytes);
    void TaxValue4Changed(qint64 TaxValue4);
    void Discount2Changed(qint64 Discount2);
    void RequestErrorDescriptionChanged(bool RequestErrorDescription);
    void AutoOFDExchangeChanged(bool AutoOFDExchange);
    void SlipDocumentIsPresentChanged(bool SlipDocumentIsPresent);
    void NumberOfCopiesChanged(int NumberOfCopies);
    void CustomerEmailChanged(QString CustomerEmail);
    void FMResultCodeChanged(int FMResultCode);
    void ActivizationStatusChanged(int ActivizationStatus);
    void DriverMajorVersionChanged(quint32 DriverMajorVersion);
    void EscapeTimeoutChanged(int EscapeTimeout);
    void IsCorruptedFMRecordsChanged(bool IsCorruptedFMRecords);
    void LDBaudrateChanged(int LDBaudrate);
    void DepartmentFontChanged(int DepartmentFont);
    void Tax4RateOffsetChanged(int Tax4RateOffset);
    void TypeOfSumOfEntriesFMChanged(bool TypeOfSumOfEntriesFM);
    void IsASPDModeChanged(bool IsASPDMode);
    void IBMLastReturnBuyReceiptNumberChanged(int IBMLastReturnBuyReceiptNumber);
    void IBMStatusByte8Changed(int IBMStatusByte8);
    void DataBlockNumberChanged(int DataBlockNumber);
    void FNSoftTypeChanged(int FNSoftType);
    void Tax3TurnOverFontChanged(int Tax3TurnOverFont);
    void Tax3SumSymbolNumberChanged(int Tax3SumSymbolNumber);
    void IBMStatusByte1Changed(int IBMStatusByte1);
    void IBMStatusByte2Changed(int IBMStatusByte2);
    void IBMStatusByte3Changed(int IBMStatusByte3);
    void IBMStatusByte4Changed(int IBMStatusByte4);
    void IBMStatusByte5Changed(int IBMStatusByte5);
    void IBMStatusByte6Changed(int IBMStatusByte6);
    void IBMStatusByte7Changed(int IBMStatusByte7);
    void ErrorCodeChanged(int ErrorCode);
    void UCodePageTextChanged(QString UCodePageText);
    void RequestTypeChanged(int RequestType);
    void TagIDChanged(int TagID);
    void IBMSessionMonthChanged(int IBMSessionMonth);
    void OPRequisiteValueChanged(QString OPRequisiteValue);
    void ChangeOffsetChanged(int ChangeOffset);
    void OpenDocumentNumberChanged(int OpenDocumentNumber);
    void LastKPKTimeStrChanged(QString LastKPKTimeStr);
    void CashAcceptorPollingModeChanged(int CashAcceptorPollingMode);
    void Summ2NameOffsetChanged(int Summ2NameOffset);
    void ComputerNameChanged(QString ComputerName);
    void KPKValueChanged(int KPKValue);
    void SlipStringIntervalsChanged(QString SlipStringIntervals);
    void FMModeChanged(int FMMode);
    void Tax1NameFontChanged(int Tax1NameFont);
    void DocumentNumberChanged(quint32 DocumentNumber);
    void UseSlipDocumentChanged(bool UseSlipDocument);
    void TimeoutChanged(int Timeout);
    void PrintWidthChanged(int PrintWidth);
    void DiscountOnCheckFontChanged(int DiscountOnCheckFont);
    void TotalSumOffsetChanged(int TotalSumOffset);
    void PingResultChanged(int PingResult);
    void RegistrationReasonCodeChanged(int RegistrationReasonCode);
    void SymbolWidthChanged(int SymbolWidth);
    void SymbolHeightChanged(int SymbolHeight);
    void SlowingValveChanged(bool SlowingValve);
    void SymbolCodeChanged(int SymbolCode);
    void WrittenByteChanged(int WrittenByte);
    void TextStringNumberChanged(int TextStringNumber);
    void LDSysAdminPasswordChanged(quint32 LDSysAdminPassword);
    void Summ4NameFontChanged(int Summ4NameFont);
    void Tax4SumSymbolNumberChanged(int Tax4SumSymbolNumber);
    void IBMSessionYearChanged(int IBMSessionYear);
    void OPTransactionStatusChanged(int OPTransactionStatus);
    void TypeOfLastEntryFMChanged(bool TypeOfLastEntryFM);
    void AccTypeChanged(int AccType);
    void LineData2Changed(QString LineData2);
    void BarcodeTypesChanged(QString BarcodeTypes);
    void TaxValueEnabledChanged(bool TaxValueEnabled);
    void Tax3RateFontChanged(int Tax3RateFont);
    void UMinorProtocolVersionChanged(int UMinorProtocolVersion);
    void FMOffsetChanged(int FMOffset);
    void CutTypeChanged(bool CutType);
    void FeedLineCountChanged(int FeedLineCount);
    void TaxValue2EnabledChanged(bool TaxValue2Enabled);
    void PUKCodeChanged(int PUKCode);
    void MessageCountChanged(int MessageCount);
    void UseSlipCheckChanged(bool UseSlipCheck);
    void SlipDocumentWidthChanged(int SlipDocumentWidth);
    void BarcodeTypeChanged(int BarcodeType);
    void AdjustRITimeoutChanged(bool AdjustRITimeout);
    void FNDocumentDataChanged(int FNDocumentData);
    void Summ1StringNumberChanged(int Summ1StringNumber);
    void LDTimeoutChanged(int LDTimeout);
    void TextSymbolNumberChanged(int TextSymbolNumber);
    void Summ3OffsetChanged(int Summ3Offset);
    void LogOnChanged(bool LogOn);
    void LoaderVersionChanged(QString LoaderVersion);
    void TransmitStatusChanged(int TransmitStatus);
    void PollDescriptionChanged(QString PollDescription);
    void Summ3NameFontChanged(int Summ3NameFont);
    void BarWidthChanged(int BarWidth);
    void BaudRateChanged(int BaudRate);
    void Discount3Changed(qint64 Discount3);
    void Discount1Changed(qint64 Discount1);
    void DiscountOnCheckSumSymbolNumberChanged(int DiscountOnCheckSumSymbolNumber);
    void ICSEnabledChanged(bool ICSEnabled);
    void DataBlockChanged(QString DataBlock);
    void CopyTypeChanged(int CopyType);
    void OFDPortChanged(int OFDPort);
    void SKNOErrorChanged(int SKNOError);
    void Summ3SymbolNumberChanged(int Summ3SymbolNumber);
    void ECRMode8StatusChanged(int ECRMode8Status);
    void ChangeFontChanged(int ChangeFont);
    void Summ1NameFontChanged(int Summ1NameFont);
    void SubTotalSumOffsetChanged(int SubTotalSumOffset);
    void SkipPrintChanged(bool SkipPrint);
    void DigitalSignChanged(QString DigitalSign);
    void propertyValueChanged(QString name, QVariant value);
    void DeviceFunctionNumberChanged(int DeviceFunctionNumber);
    void ValueOfFunctionIntegerChanged(int ValueOfFunctionInteger);
    void ValueOfFunctionStringChanged(QString ValueOfFunctionString);
    void EnableCashcoreMarkCompatibilityChanged(bool EnableCashcoreMarkCompatibility);
    void TLVDataHexChanged(QString TLVDataHex);
    void DataBlockSizeChanged(int DataBlockSize);
    void MessageNumberChanged(int64_t MessageNumber);
    void CheckItemLocalErrorChanged(int CheckItemLocalError);
    void MeasureUnitChanged(int MeasureUnit);
    void DivisionalQuantityChanged(bool DivisionalQuantity);
    void NumeratorChanged(quint64 Numerator);
    void DenominatorChanged(quint64 Denominator);
    void FreeMemorySizeChanged(int FreeMemorySize);
    void MCCheckStatusChanged(int MCCheckStatus);
    void MCNotificationStatusChanged(int MCNotificationStatus);
    void MCCommandFlagsChanged(int MCCommandFlags);
    void MCCheckResultSavedCountChanged(int MCCheckResultSavedCount);
    void MCRealizationCountChanged(int MCRealizationCount);
    void MCStorageSizeChanged(int MCStorageSize);
    void CheckSumChanged(quint64 CheckSum);
    void NotificationCountChanged(int NotificationCount);
    void NotificationNumberChanged(int64_t NotificationNumber);
    void NotificationSizeChanged(int NotificationSize);
    void DataOffsetChanged(int DataOffset);
    void MarkingType2Changed(int MarkingType2);
    void RandomSequenceChanged(QByteArray RandomSequence);
    void RandomSequenceHexChanged(QString RandomSequenceHex);
    void AuthDataChanged(QByteArray AuthData);
    void ItemStatusChanged(int ItemStatus);
    void CheckItemModeChanged(int CheckItemMode);
    void CheckItemLocalResultChanged(int CheckItemLocalResult);
    void KMServerErrorCodeChanged(int KMServerErrorCode);
    void KMServerCheckingStatusChanged(int KMServerCheckingStatus);
    void LastDocumentNumberChanged(int LastDocumentNumber);
    void FirstDocumentNumberChanged(int FirstDocumentNumber);
    void FNArchiveTypeChanged(int FNArchiveType);
    void MarkingOnlyChanged(bool MarkingOnly);

private:
    void onClassicPropertyChanged(const std::string& name);

private:
    const std::unique_ptr<classic_interface> m_pimpl;
};
#endif // QCLASSIC_INTERFACE_H
