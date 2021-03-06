//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/HMDCameraGetSnapshotProtocol-Protocol.h>
#import <HomeKitDaemonLegacy/HMDCameraSnapshotIDSRelayReceiverDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMDCameraSnapshotReceiverProtocol-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class HMDCameraSnapshotIDSRelayReceiver, NSString;
@protocol HMDCameraSnapshotRemoteRelayReceiverDelegate;

@interface HMDCameraSnapshotRemoteRelayReceiver <HMDCameraGetSnapshotProtocol, HMDCameraSnapshotReceiverProtocol, HMDCameraSnapshotIDSRelayReceiverDelegate, HMFLogging>
{
    id <HMDCameraSnapshotRemoteRelayReceiverDelegate> _delegate;	// 8 = 0x8
    HMDCameraSnapshotIDSRelayReceiver *_relayReceiver;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x00000000006692f7
- (void).cxx_destruct;	// IMP=0x0000000000668efe
@property(retain, nonatomic) HMDCameraSnapshotIDSRelayReceiver *relayReceiver; // @synthesize relayReceiver=_relayReceiver;
@property(nonatomic) __weak id <HMDCameraSnapshotRemoteRelayReceiverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)relayReceiverIDSSessionDidStart:(id)arg1;	// IMP=0x0000000000668e68
- (void)relayReceiverDidAcceptIDSInvitation:(id)arg1;	// IMP=0x0000000000668e24
- (void)relayReceiver:(id)arg1 didReceiveData:(id)arg2 error:(id)arg3;	// IMP=0x0000000000668bfc
- (void)_callDidSaveImageDelegateWithError:(id)arg1;	// IMP=0x0000000000668991
- (void)_callGettingImageDelegate:(id)arg1;	// IMP=0x0000000000668767
- (void)snapShotSendFailed:(id)arg1;	// IMP=0x00000000006686b6
- (void)_getSnapshot:(unsigned long long)arg1;	// IMP=0x0000000000668265
- (void)getSnapshot:(unsigned long long)arg1;	// IMP=0x00000000006681e9
- (id)logIdentifier;	// IMP=0x0000000000668199
- (void)dealloc;	// IMP=0x00000000006680b4
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 options:(id)arg3 accessory:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6 uniqueIdentifier:(id)arg7 snapshotRequestHandler:(id)arg8 residentMessageHandler:(id)arg9;	// IMP=0x0000000000668015

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

