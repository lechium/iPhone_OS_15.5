//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFMessageReceiver-Protocol.h>

@class HMFUnfairLock, HMSoftwareUpdate, NSString, NSUUID, _HMContext;
@protocol HMSoftwareUpdateManagerDelegate, OS_dispatch_queue;

@interface HMSoftwareUpdateManager : NSObject <HMFMessageReceiver>
{
    HMFUnfairLock *_lock;	// 8 = 0x8
    _Bool _started;	// 16 = 0x10
    HMSoftwareUpdate *_availableUpdate;	// 24 = 0x18
    id <HMSoftwareUpdateManagerDelegate> _delegate;	// 32 = 0x20
    _HMContext *_context;	// 40 = 0x28
    NSUUID *_identifier;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x00000000000ae69e
- (void).cxx_destruct;	// IMP=0x00000000000acecd
@property(nonatomic, getter=isStarted) _Bool started; // @synthesize started=_started;
@property(readonly) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) _HMContext *context; // @synthesize context=_context;
@property __weak id <HMSoftwareUpdateManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)messageDestination;	// IMP=0x00000000000acdbd
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_handleStartUpdate:(id)arg1;	// IMP=0x00000000000ac7fe
- (void)_handleFetch:(id)arg1;	// IMP=0x00000000000ac45b
- (void)updateAvailableUpdate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ac071
- (void)_handleUpdatedAvailableUpdate:(id)arg1;	// IMP=0x00000000000abb81
- (void)setAvailableUpdate:(id)arg1;	// IMP=0x00000000000ababd
@property(readonly) HMSoftwareUpdate *availableUpdate; // @synthesize availableUpdate=_availableUpdate;
- (void)stop;	// IMP=0x00000000000ab823
- (void)_reallyStartWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ab5cf
- (void)reconnect;	// IMP=0x00000000000ab492
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ab1da
- (void)__registerForMessages;	// IMP=0x00000000000ab096
- (void)_unconfigure;	// IMP=0x00000000000aaf47
- (void)_unconfigureContext;	// IMP=0x00000000000aaec9
- (id)init;	// IMP=0x00000000000aae68
- (id)initWithContext:(id)arg1;	// IMP=0x00000000000aac81

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
