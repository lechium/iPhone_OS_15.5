//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDistributedNotificationCenter, NSMutableDictionary;
@protocol FLLoggingContext, OS_dispatch_source, OS_os_log;

@interface FLLogger : NSObject
{
    NSMutableDictionary *_persistentStores;	// 8 = 0x8
    NSObject<FLLoggingContext> *_context;	// 16 = 0x10
    NSObject<OS_os_log> *_log;	// 24 = 0x18
    unsigned long long _persistentStoreCacheTTL;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_persistentStoreCacheTTLTimer;	// 40 = 0x28
    NSDistributedNotificationCenter *_notificationCenter;	// 48 = 0x30
}

+ (id)categoryForSiriPayload:(id)arg1;	// IMP=0x00000000000048de
+ (id)readSiriCategoryFrom:(id)arg1 recursive:(_Bool)arg2;	// IMP=0x000000000000453d
+ (id)sharedLogger;	// IMP=0x000000000000450d
- (void).cxx_destruct;	// IMP=0x00000000000037c5
@property(retain, nonatomic) NSDistributedNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *persistentStoreCacheTTLTimer; // @synthesize persistentStoreCacheTTLTimer=_persistentStoreCacheTTLTimer;
@property(nonatomic) unsigned long long persistentStoreCacheTTL; // @synthesize persistentStoreCacheTTL=_persistentStoreCacheTTL;
@property(retain, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(retain, nonatomic) NSObject<FLLoggingContext> *context; // @synthesize context=_context;
@property(retain, nonatomic) NSMutableDictionary *persistentStores; // @synthesize persistentStores=_persistentStores;
- (void)report:(id)arg1 application:(id)arg2 onComplete:(CDUnknownBlockType)arg3;	// IMP=0x0000000000003641
- (void)report:(id)arg1 application:(id)arg2;	// IMP=0x000000000000362c
- (void)reportDataUploadEvent:(id)arg1 application:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000033fd
- (id)dataUploadStoreIdForApplicationIdentifier:(id)arg1;	// IMP=0x00000000000033e7
- (void)removeSiriInstrumentationObserver:(id)arg1;	// IMP=0x000000000000334c
- (id)registerSiriInstrumentationObserver:(id)arg1 observer:(CDUnknownBlockType)arg2;	// IMP=0x000000000000322e
- (void)reportSiriInstrumentationEvent:(id)arg1 forBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000003136
- (id)siriReadingStoreForBundleID:(id)arg1;	// IMP=0x0000000000002fd9
- (id)siriWritingStoreForBundleID:(id)arg1 category:(id)arg2;	// IMP=0x0000000000002e42
- (id)siriStoreIdForBundleId:(id)arg1;	// IMP=0x0000000000002e2c
- (void)reportParsecFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002d6f
- (id)parsecPersistentStoreForBundleID:(id)arg1;	// IMP=0x0000000000002c36
- (id)parsecCategoryForPayload:(id)arg1;	// IMP=0x0000000000002c2e
- (id)parsecStoreId;	// IMP=0x0000000000002c21
- (void)write:(id)arg1 category:(id)arg2 toStoreWithID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000029e3
- (void)scheduleImmediateUpload;	// IMP=0x00000000000028ae
- (id)uploadHeaders;	// IMP=0x000000000000282d
- (void)setValue:(id)arg1 forUploadHeaderNamed:(id)arg2;	// IMP=0x00000000000026e1
- (void)closeAllStores;	// IMP=0x000000000000265d
- (void)_closeAllStores;	// IMP=0x000000000000255a
- (void)_cancelStoreCacheTimer;	// IMP=0x00000000000024d5
- (void)_resetStoreCacheTimer;	// IMP=0x00000000000021ab
- (id)_nextTimerFireDate;	// IMP=0x0000000000001ee4
- (void)_cleanPersistantStores;	// IMP=0x0000000000001a91
- (void)closeStoreForApplicationFromNotification:(id)arg1;	// IMP=0x0000000000001a14
- (void)closeStoreForBundleID:(id)arg1;	// IMP=0x000000000000187f
- (id)pathForStore:(id)arg1;	// IMP=0x00000000000017bf
- (id)__dispatched_persistentStoreWithId:(id)arg1 category:(id)arg2;	// IMP=0x00000000000015b8
- (void)dealloc;	// IMP=0x00000000000014fa
- (id)initWithContext:(id)arg1;	// IMP=0x00000000000013b6

@end

