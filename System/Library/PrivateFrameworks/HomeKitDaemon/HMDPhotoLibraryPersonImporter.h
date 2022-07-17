//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDPersonDataReceiver-Protocol.h>
#import <HomeKitDaemon/HMDPhotoLibraryChangeDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMDCloudPhotosSettingObserver, HMDPhotoLibrary, HMFTimer, HMIExternalPersonManager, HMIHomePersonManager, NSObject, NSString, NSUUID;
@protocol HMDPersonDataSource, HMMLogEventSubmitting, OS_dispatch_queue;

@interface HMDPhotoLibraryPersonImporter : HMFObject <HMDPhotoLibraryChangeDelegate, HMFTimerDelegate, HMFLogging, HMDPersonDataReceiver>
{
    NSUUID *_UUID;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    HMDPhotoLibrary *_photoLibrary;	// 24 = 0x18
    id <HMDPersonDataSource> _dataSource;	// 32 = 0x20
    HMFTimer *_frequentUpdateTimer;	// 40 = 0x28
    HMFTimer *_infrequentUpdateTimer;	// 48 = 0x30
    HMDCloudPhotosSettingObserver *_cloudPhotosSettingObserver;	// 56 = 0x38
    CDUnknownBlockType _frequentUpdateTimerFactory;	// 64 = 0x40
    CDUnknownBlockType _infrequentUpdateTimerFactory;	// 72 = 0x48
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 80 = 0x50
}

+ (id)logCategory;	// IMP=0x000000000067a8cd
- (void).cxx_destruct;	// IMP=0x000000000067a15a
@property(retain) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(copy) CDUnknownBlockType infrequentUpdateTimerFactory; // @synthesize infrequentUpdateTimerFactory=_infrequentUpdateTimerFactory;
@property(copy) CDUnknownBlockType frequentUpdateTimerFactory; // @synthesize frequentUpdateTimerFactory=_frequentUpdateTimerFactory;
@property(readonly) HMDCloudPhotosSettingObserver *cloudPhotosSettingObserver; // @synthesize cloudPhotosSettingObserver=_cloudPhotosSettingObserver;
@property(retain) HMFTimer *infrequentUpdateTimer; // @synthesize infrequentUpdateTimer=_infrequentUpdateTimer;
@property(retain) HMFTimer *frequentUpdateTimer; // @synthesize frequentUpdateTimer=_frequentUpdateTimer;
@property __weak id <HMDPersonDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) HMDPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, copy) NSUUID *UUID; // @synthesize UUID=_UUID;
- (id)logIdentifier;	// IMP=0x0000000000679fc2
- (void)timerDidFire:(id)arg1;	// IMP=0x0000000000679d9b
- (void)handleCloudPhotosEnabledDidChangeNotification:(id)arg1;	// IMP=0x0000000000679d2a
- (void)photoLibraryPersonsDidChange;	// IMP=0x0000000000679cb9
- (void)configureWithDataSource:(id)arg1 home:(id)arg2;	// IMP=0x0000000000679c08
- (void)_handleUpdatedCloudPhotosSetting;	// IMP=0x0000000000679a90
- (void)_unconfigure;	// IMP=0x0000000000679944
- (void)_configure;	// IMP=0x00000000006797f6
- (void)_registerForNotifications;	// IMP=0x0000000000679743
- (void)_submitLogEventForFaceCrops:(id)arg1;	// IMP=0x000000000067964a
- (void)_submitLogEventsForUpdatedPersonsWithCurrentPersons:(id)arg1 previousPersons:(id)arg2;	// IMP=0x0000000000679295
- (void)_setUpAndStartUpdateTimers;	// IMP=0x0000000000679038
- (void)_updateFaceCropsWithCurrentPhotoLibraryFaceCrops:(id)arg1 forPersonWithUUID:(id)arg2 usingBatchChange:(id)arg3;	// IMP=0x000000000067875a
- (void)_updateFaceCropsForPersons:(id)arg1 usingBatchChange:(id)arg2;	// IMP=0x0000000000678351
- (void)_updateFaceCropsForPersonsWithUpdatedPhotosFaceCropsUsingBatchChange:(id)arg1;	// IMP=0x00000000006780d2
- (void)_updateFaceCropsForAllPersonsUsingBatchChange:(id)arg1;	// IMP=0x0000000000677eb7
- (void)_updatePersonsUsingBatchChange:(id)arg1;	// IMP=0x0000000000677685
- (void)_updatePersonsAndFaceCrops:(_Bool)arg1;	// IMP=0x00000000006773ba
- (id)initWithUUID:(id)arg1 photoLibrary:(id)arg2 workQueue:(id)arg3 cloudPhotosSettingObserver:(id)arg4;	// IMP=0x0000000000677253
- (id)initWithUUID:(id)arg1;	// IMP=0x0000000000677190

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) HMIHomePersonManager *homePersonManager;
@property(readonly) HMIExternalPersonManager *photosPersonManager;
@property(readonly) Class superclass;

@end
