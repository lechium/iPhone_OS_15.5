//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;
@protocol CDPDBackupRecoveryErrorProvider, CDPDBackupRecoveryResultsParser;

@interface CDPDBackupInfoRecoveryFlowController
{
    id <CDPDBackupRecoveryResultsParser> _resultParser;	// 8 = 0x8
    id <CDPDBackupRecoveryErrorProvider> _errorProvider;	// 16 = 0x10
    NSArray *_recoveryRecords;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000010faf
@property(retain, nonatomic) NSArray *recoveryRecords; // @synthesize recoveryRecords=_recoveryRecords;
@property(retain, nonatomic) id <CDPDBackupRecoveryErrorProvider> errorProvider; // @synthesize errorProvider=_errorProvider;
@property(retain, nonatomic) id <CDPDBackupRecoveryResultsParser> resultParser; // @synthesize resultParser=_resultParser;
- (void)_updateRecordRecoveryStatusForRecordDictionary:(id)arg1;	// IMP=0x0000000000010de4
- (void)secretValidator:(id)arg1 didFailRecoveryWithErrors:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000010654
- (_Bool)secretValidator:(id)arg1 shouldContinueValidationAfterError:(id)arg2;	// IMP=0x000000000001063c
- (id)_recoveryListFromDevices:(id)arg1;	// IMP=0x00000000000103fa
- (void)retrieveInflatedDevices:(CDUnknownBlockType)arg1;	// IMP=0x000000000000fce1
- (void)beginRecoveryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000f9c2

@end

