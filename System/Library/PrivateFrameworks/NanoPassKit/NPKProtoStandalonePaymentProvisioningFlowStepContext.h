//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NPKProtoStandalonePaymentProvisioningFlowChooseCredentialsStepContext, NPKProtoStandalonePaymentProvisioningFlowChooseFlowStepContext, NPKProtoStandalonePaymentProvisioningFlowChooseProductStepContext, NPKProtoStandalonePaymentProvisioningFlowDigitalIssuanceAmountStepContext, NPKProtoStandalonePaymentProvisioningFlowDigitalIssuancePaymentStepContext, NPKProtoStandalonePaymentProvisioningFlowIssuerVerificationChannelsStepContext, NPKProtoStandalonePaymentProvisioningFlowIssuerVerificationCodeStepContext, NPKProtoStandalonePaymentProvisioningFlowIssuerVerificationFieldsStepContext, NPKProtoStandalonePaymentProvisioningFlowLocalDeviceManualEntryProgressStepContext, NPKProtoStandalonePaymentProvisioningFlowLocalDeviceManualEntryStepContext, NPKProtoStandalonePaymentProvisioningFlowManualEntryStepContext, NPKProtoStandalonePaymentProvisioningFlowMoreInformationStepContext, NPKProtoStandalonePaymentProvisioningFlowPasscodeUpgradeStepContext, NPKProtoStandalonePaymentProvisioningFlowProductDisambiguationStepContext, NPKProtoStandalonePaymentProvisioningFlowProvisioningProgressStepContext, NPKProtoStandalonePaymentProvisioningFlowProvisioningResultStepContext, NPKProtoStandalonePaymentProvisioningFlowReaderModeEntryStepContext, NPKProtoStandalonePaymentProvisioningFlowReaderModeIngestionStepContext, NPKProtoStandalonePaymentProvisioningFlowSecondaryManualEntryStepContext, NPKProtoStandalonePaymentProvisioningFlowTermsAndConditionsStepContext, NPKProtoStandalonePaymentProvisioningFlowWelcomeStepContext, NSString;

@interface NPKProtoStandalonePaymentProvisioningFlowStepContext : PBCodable <NSCopying>
{
    NSString *_backStepIdentifier;	// 8 = 0x8
    NPKProtoStandalonePaymentProvisioningFlowChooseCredentialsStepContext *_chooseCredentialsStepContext;	// 16 = 0x10
    NPKProtoStandalonePaymentProvisioningFlowChooseFlowStepContext *_chooseFlowStepContext;	// 24 = 0x18
    NPKProtoStandalonePaymentProvisioningFlowChooseProductStepContext *_chooseProductStepContext;	// 32 = 0x20
    NPKProtoStandalonePaymentProvisioningFlowDigitalIssuanceAmountStepContext *_digitalIssuanceAmountStepContext;	// 40 = 0x28
    NPKProtoStandalonePaymentProvisioningFlowDigitalIssuancePaymentStepContext *_digitalIssuancePaymentStepContext;	// 48 = 0x30
    NPKProtoStandalonePaymentProvisioningFlowIssuerVerificationChannelsStepContext *_issuerVerificationChannelsStepContext;	// 56 = 0x38
    NPKProtoStandalonePaymentProvisioningFlowIssuerVerificationCodeStepContext *_issuerVerificationCodeStepContext;	// 64 = 0x40
    NPKProtoStandalonePaymentProvisioningFlowIssuerVerificationFieldsStepContext *_issuerVerificationFieldsStepContext;	// 72 = 0x48
    NPKProtoStandalonePaymentProvisioningFlowLocalDeviceManualEntryProgressStepContext *_localDeviceManualEntryProgressStepContext;	// 80 = 0x50
    NPKProtoStandalonePaymentProvisioningFlowLocalDeviceManualEntryStepContext *_localDeviceManualEntryStepContext;	// 88 = 0x58
    NPKProtoStandalonePaymentProvisioningFlowManualEntryStepContext *_manualEntryStepContext;	// 96 = 0x60
    NPKProtoStandalonePaymentProvisioningFlowMoreInformationStepContext *_moreInformationStepContext;	// 104 = 0x68
    NPKProtoStandalonePaymentProvisioningFlowPasscodeUpgradeStepContext *_passcodeUpgradeStepContext;	// 112 = 0x70
    NPKProtoStandalonePaymentProvisioningFlowProductDisambiguationStepContext *_productDisambiguationStepContext;	// 120 = 0x78
    NPKProtoStandalonePaymentProvisioningFlowProvisioningProgressStepContext *_provisioningProgressStepContext;	// 128 = 0x80
    NPKProtoStandalonePaymentProvisioningFlowProvisioningResultStepContext *_provisioningResultStepContext;	// 136 = 0x88
    NPKProtoStandalonePaymentProvisioningFlowReaderModeEntryStepContext *_readerModeEntryStepContext;	// 144 = 0x90
    NPKProtoStandalonePaymentProvisioningFlowReaderModeIngestionStepContext *_readerModeIngestionStepContext;	// 152 = 0x98
    NPKProtoStandalonePaymentProvisioningFlowSecondaryManualEntryStepContext *_secondaryManualEntryStepContext;	// 160 = 0xa0
    NSString *_stepIdentifier;	// 168 = 0xa8
    NPKProtoStandalonePaymentProvisioningFlowTermsAndConditionsStepContext *_termsAndConditionsStepContext;	// 176 = 0xb0
    NPKProtoStandalonePaymentProvisioningFlowWelcomeStepContext *_welcomeStepContext;	// 184 = 0xb8
    _Bool _allowsAddLater;	// 192 = 0xc0
    struct {
        unsigned int allowsAddLater:1;
    } _has;	// 196 = 0xc4
}

- (void).cxx_destruct;	// IMP=0x0000000000027dee
@property(retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowIssuerVerificationCodeStepContext *issuerVerificationCodeStepContext; // @synthesize issuerVerificationCodeStepContext=_issuerVerificationCodeStepContext;
@property(retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowIssuerVerificationFieldsStepContext *issuerVerificationFieldsStepContext; // @synthesize issuerVerificationFieldsStepContext=_issuerVerificationFieldsStepContext;
@property(retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowIssuerVerificationChannelsStepContext *issuerVerificationChannelsStepContext; // @synthesize issuerVerificationChannelsStepContext=_issuerVerificationChannelsStepContext;
@property(retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowProvisioningResultStepContext *provisioningResultStepContext; // @synthesize provisioningResultStepContext=_provisioningResultStepContext;
@property(retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowProvisioningProgressStepContext *provisioningProgressStepContext; // @synthesize provisioningProgressStepContext=_provisioningProgressStepContext;
@property(retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowTermsAndConditionsStepContext *termsAndConditionsStepContext; // @synthesize termsAndConditionsStepContext=_termsAndConditionsStepContext;
@property(retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowPasscodeUpgradeStepContext *passcodeUpgradeStepContext; // @synthesize passcodeUpgradeStepContext=_passcodeUpgradeStepContext;
@property(retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowProductDisambiguationStepContext *productDisambiguationStepContext; // @synthesize productDisambiguationStepContext=_productDisambiguationStepContext;
@property(retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowLocalDeviceManualEntryProgressStepContext *localDeviceManualEntryProgressStepContext; // @synthesize localDeviceManualEntryProgressStepContext=_localDeviceManualEntryProgressStepContext;
@property(retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowLocalDeviceManualEntryStepContext *localDeviceManualEntryStepContext; // @synthesize localDeviceManualEntryStepContext=_localDeviceManualEntryStepContext;
@property(retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowSecondaryManualEntryStepContext *secondaryManualEntryStepContext; // @synthesize secondaryManualEntryStepContext=_secondaryManualEntryStepContext;
@property(retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowManualEntryStepContext *manualEntryStepContext; // @synthesize manualEntryStepContext=_manualEntryStepContext;
@property(retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowReaderModeIngestionStepContext *readerModeIngestionStepContext; // @synthesize readerModeIngestionStepContext=_readerModeIngestionStepContext;
@property(retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowReaderModeEntryStepContext *readerModeEntryStepContext; // @synthesize readerModeEntryStepContext=_readerModeEntryStepContext;
@property(retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowMoreInformationStepContext *moreInformationStepContext; // @synthesize moreInformationStepContext=_moreInformationStepContext;
@property(retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowDigitalIssuancePaymentStepContext *digitalIssuancePaymentStepContext; // @synthesize digitalIssuancePaymentStepContext=_digitalIssuancePaymentStepContext;
@property(retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowDigitalIssuanceAmountStepContext *digitalIssuanceAmountStepContext; // @synthesize digitalIssuanceAmountStepContext=_digitalIssuanceAmountStepContext;
@property(retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowChooseCredentialsStepContext *chooseCredentialsStepContext; // @synthesize chooseCredentialsStepContext=_chooseCredentialsStepContext;
@property(retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowChooseProductStepContext *chooseProductStepContext; // @synthesize chooseProductStepContext=_chooseProductStepContext;
@property(retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowChooseFlowStepContext *chooseFlowStepContext; // @synthesize chooseFlowStepContext=_chooseFlowStepContext;
@property(retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowWelcomeStepContext *welcomeStepContext; // @synthesize welcomeStepContext=_welcomeStepContext;
@property(nonatomic) _Bool allowsAddLater; // @synthesize allowsAddLater=_allowsAddLater;
@property(retain, nonatomic) NSString *backStepIdentifier; // @synthesize backStepIdentifier=_backStepIdentifier;
@property(retain, nonatomic) NSString *stepIdentifier; // @synthesize stepIdentifier=_stepIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000027585
- (unsigned long long)hash;	// IMP=0x000000000002729b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000026d4d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000026937
- (void)copyTo:(id)arg1;	// IMP=0x0000000000026619
- (void)writeTo:(id)arg1;	// IMP=0x000000000002632d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000026320
- (id)dictionaryRepresentation;	// IMP=0x0000000000025226
- (id)description;	// IMP=0x0000000000025177
@property(readonly, nonatomic) _Bool hasIssuerVerificationCodeStepContext;
@property(readonly, nonatomic) _Bool hasIssuerVerificationFieldsStepContext;
@property(readonly, nonatomic) _Bool hasIssuerVerificationChannelsStepContext;
@property(readonly, nonatomic) _Bool hasProvisioningResultStepContext;
@property(readonly, nonatomic) _Bool hasProvisioningProgressStepContext;
@property(readonly, nonatomic) _Bool hasTermsAndConditionsStepContext;
@property(readonly, nonatomic) _Bool hasPasscodeUpgradeStepContext;
@property(readonly, nonatomic) _Bool hasProductDisambiguationStepContext;
@property(readonly, nonatomic) _Bool hasLocalDeviceManualEntryProgressStepContext;
@property(readonly, nonatomic) _Bool hasLocalDeviceManualEntryStepContext;
@property(readonly, nonatomic) _Bool hasSecondaryManualEntryStepContext;
@property(readonly, nonatomic) _Bool hasManualEntryStepContext;
@property(readonly, nonatomic) _Bool hasReaderModeIngestionStepContext;
@property(readonly, nonatomic) _Bool hasReaderModeEntryStepContext;
@property(readonly, nonatomic) _Bool hasMoreInformationStepContext;
@property(readonly, nonatomic) _Bool hasDigitalIssuancePaymentStepContext;
@property(readonly, nonatomic) _Bool hasDigitalIssuanceAmountStepContext;
@property(readonly, nonatomic) _Bool hasChooseCredentialsStepContext;
@property(readonly, nonatomic) _Bool hasChooseProductStepContext;
@property(readonly, nonatomic) _Bool hasChooseFlowStepContext;
@property(readonly, nonatomic) _Bool hasWelcomeStepContext;
@property(nonatomic) _Bool hasAllowsAddLater;
@property(readonly, nonatomic) _Bool hasBackStepIdentifier;

@end

