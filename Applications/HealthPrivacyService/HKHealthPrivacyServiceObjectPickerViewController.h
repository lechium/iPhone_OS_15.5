//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKViewController.h>

@class BKSApplicationStateMonitor, HKAuthorizationStore, HKHealthStore, HKObjectAuthorizationPromptSession, HKObjectAuthorizationPromptSessionMetadata, HKSource, NSArray, NSError, NSString, NSUUID, UIViewController;
@protocol HKHealthPrivacyServicePickerController;

@interface HKHealthPrivacyServiceObjectPickerViewController : HKViewController
{
    HKHealthStore *_healthStore;	// 8 = 0x8
    HKAuthorizationStore *_authorizationStore;	// 16 = 0x10
    UIViewController<HKHealthPrivacyServicePickerController> *_pickerController;	// 24 = 0x18
    NSError *_transactionError;	// 32 = 0x20
    HKObjectAuthorizationPromptSession *_promptSession;	// 40 = 0x28
    NSUUID *_sessionIdentifier;	// 48 = 0x30
    HKSource *_currentSource;	// 56 = 0x38
    NSArray *_samplesRequiringAuthorization;	// 64 = 0x40
    HKObjectAuthorizationPromptSessionMetadata *_metadata;	// 72 = 0x48
    BKSApplicationStateMonitor *_applicationStateMonitor;	// 80 = 0x50
}

+ (id)_exportedInterface;	// IMP=0x0020000000004bc9
+ (id)_remoteViewControllerInterface;	// IMP=0x0010000000004bbf
- (void).cxx_destruct;	// IMP=0x0020000000004d25
@property(retain, nonatomic) BKSApplicationStateMonitor *applicationStateMonitor; // @synthesize applicationStateMonitor=_applicationStateMonitor;
@property(copy, nonatomic) HKObjectAuthorizationPromptSessionMetadata *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) NSArray *samplesRequiringAuthorization; // @synthesize samplesRequiringAuthorization=_samplesRequiringAuthorization;
@property(copy, nonatomic) HKSource *currentSource; // @synthesize currentSource=_currentSource;
@property(copy, nonatomic) NSUUID *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(retain, nonatomic) HKObjectAuthorizationPromptSession *promptSession; // @synthesize promptSession=_promptSession;
@property(retain, nonatomic) NSError *transactionError; // @synthesize transactionError=_transactionError;
@property(retain, nonatomic) UIViewController<HKHealthPrivacyServicePickerController> *pickerController; // @synthesize pickerController=_pickerController;
@property(retain, nonatomic) HKAuthorizationStore *authorizationStore; // @synthesize authorizationStore=_authorizationStore;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
- (id)_healthPrivacyHostViewController;	// IMP=0x0010000000004bad
- (void)_finishWithError:(id)arg1;	// IMP=0x0010000000004b3b
- (void)pickerControllerDidFinish:(id)arg1 error:(id)arg2;	// IMP=0x0010000000004478
- (id)medicalRecordsForVerifiableClinicalRecord:(id)arg1;	// IMP=0x0010000000003ef0
- (void)_queryMedicalRecordsWithQueryDescriptors:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000003dc4
- (id)signedClinicalDataRecordForVerifiableClinicalRecord:(id)arg1;	// IMP=0x00100000000038da
- (id)signedRecordsForClinicalRecords:(id)arg1;	// IMP=0x00100000000036c2
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00100000000035ec
- (void)_hostDidTerminate;	// IMP=0x0010000000003524
- (void)_beginAuthorizationSessionWithIdentifier:(id)arg1;	// IMP=0x00100000000030e5
- (void)_configureApplicationStateMonitor;	// IMP=0x0010000000002edf
- (void)_hostApplicationStateDidChange:(unsigned int)arg1;	// IMP=0x0010000000002e2f
- (void)_configureNavigationController;	// IMP=0x0010000000002cad
- (id)_pickerControllerForSignedClinicalData;	// IMP=0x0010000000002af7
- (id)_pickerControllerForDocuments;	// IMP=0x0010000000002a7d
- (id)_pickerControllerForObjectType:(id)arg1;	// IMP=0x00100000000029e8
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00100000000027cd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

