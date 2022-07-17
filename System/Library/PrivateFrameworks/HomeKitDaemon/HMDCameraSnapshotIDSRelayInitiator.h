//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/IDSSessionDelegate-Protocol.h>

@class HMDDevice, HMFActivity, IDSSession, NSMutableData, NSObject, NSString;
@protocol HMDCameraSnapshotIDSRelayInitiatorDelegate, OS_dispatch_source;

@interface HMDCameraSnapshotIDSRelayInitiator <IDSSessionDelegate>
{
    HMFActivity *_activity;	// 8 = 0x8
    _Bool _idsSessionStarted;	// 16 = 0x10
    IDSSession *_idsSession;	// 24 = 0x18
    id <HMDCameraSnapshotIDSRelayInitiatorDelegate> _delegate;	// 32 = 0x20
    HMDDevice *_device;	// 40 = 0x28
    NSMutableData *_data;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_socketSource;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x0000000000a0613a
- (void).cxx_destruct;	// IMP=0x0000000000a05c41
@property(retain) NSObject<OS_dispatch_source> *socketSource; // @synthesize socketSource=_socketSource;
@property(retain) NSMutableData *data; // @synthesize data=_data;
@property(readonly) HMDDevice *device; // @synthesize device=_device;
@property _Bool idsSessionStarted; // @synthesize idsSessionStarted=_idsSessionStarted;
@property(readonly) __weak id <HMDCameraSnapshotIDSRelayInitiatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) IDSSession *idsSession; // @synthesize idsSession=_idsSession;
- (void)_callFileTransferFailed:(id)arg1;	// IMP=0x0000000000a05a56
- (void)sessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;	// IMP=0x0000000000a058a8
- (void)sessionStarted:(id)arg1;	// IMP=0x0000000000a05716
- (void)session:(id)arg1 receivedInvitationCancelFromID:(id)arg2;	// IMP=0x0000000000a0559b
- (void)session:(id)arg1 receivedInvitationDeclineFromID:(id)arg2;	// IMP=0x0000000000a05420
- (void)session:(id)arg1 receivedInvitationAcceptFromID:(id)arg2;	// IMP=0x0000000000a052e2
- (void)dealloc;	// IMP=0x0000000000a05175
- (void)_startDataTransfer;	// IMP=0x0000000000a04ea6
- (void)sendIDSInvitation;	// IMP=0x0000000000a049c4
- (void)_sendData;	// IMP=0x0000000000a0492b
- (void)sendData:(id)arg1;	// IMP=0x0000000000a04744
- (id)initWithSessionID:(id)arg1 logIdentifier:(id)arg2 workQueue:(id)arg3 device:(id)arg4 delegate:(id)arg5;	// IMP=0x0000000000a0459e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
