//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface WCDFirstUnlockManager : NSObject
{
    _Bool _remoteDeviceFirstUnlocked;	// 8 = 0x8
    _Bool _receivedFirstUnlockState;	// 9 = 0x9
    NSNumber *_localDeviceFirstUnlocked;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000034e3
@property(nonatomic) _Bool receivedFirstUnlockState; // @synthesize receivedFirstUnlockState=_receivedFirstUnlockState;
@property(nonatomic) _Bool remoteDeviceFirstUnlocked; // @synthesize remoteDeviceFirstUnlocked=_remoteDeviceFirstUnlocked;
@property(retain, nonatomic) NSNumber *localDeviceFirstUnlocked; // @synthesize localDeviceFirstUnlocked=_localDeviceFirstUnlocked;
- (id)loadRemoteFirstUnlockState;	// IMP=0x001000000000344f
- (void)saveRemoteFirstUnlockState;	// IMP=0x0010000000003365
- (void)clearRemoteAcknowledgedState;	// IMP=0x00100000000032de
- (id)loadRemoteAcknowledgedState;	// IMP=0x0010000000003280
- (void)saveRemoteAcknowledgedState:(id)arg1;	// IMP=0x00100000000031ce
- (void)handleFirstUnlockRequest:(id)arg1;	// IMP=0x00100000000031bc
- (void)initializeRemoteFirstUnlockState;	// IMP=0x0010000000002ff5
- (void)sendFirstUnlockRequest;	// IMP=0x0010000000002ef5
- (void)requestFirstUnlockStateIfNeccessary;	// IMP=0x0010000000002eef
- (void)sendFirstUnlockAck:(_Bool)arg1;	// IMP=0x0010000000002e60
- (void)handleFirstUnlockState:(id)arg1;	// IMP=0x0010000000002c92
- (void)handleFirstUnlockAck:(id)arg1;	// IMP=0x0010000000002b31
- (void)updateLocalFirstUnlockState;	// IMP=0x0010000000002b18
- (void)sendFirstUnlockState;	// IMP=0x001000000000298f
- (void)sendStateIfNeccessary;	// IMP=0x0010000000002866
- (void)handlLocalFirstUnlockStateChanged;	// IMP=0x00100000000027d7
- (void)systemObserverPairedListChanged;	// IMP=0x0010000000002764
@property(readonly) NSString *state;
- (void)subscribeToAllNotifications;	// IMP=0x001000000000257b
- (void)dealloc;	// IMP=0x0010000000002506
- (id)init;	// IMP=0x0010000000002418

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
