//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDS/IDSDaemonListenerProtocol-Protocol.h>

@class IDSXPCDaemonController, NSSet, NSString, _IDSCompletionHandler;

@interface IDSPairedDeviceManager : NSObject <IDSDaemonListenerProtocol>
{
    _IDSCompletionHandler *_deleteCompletion;	// 8 = 0x8
    _IDSCompletionHandler *_localCompletion;	// 16 = 0x10
    _IDSCompletionHandler *_pairedCompletion;	// 24 = 0x18
    _IDSCompletionHandler *_deliveryStatsCompletion;	// 32 = 0x20
    IDSXPCDaemonController *_xpcDaemonController;	// 40 = 0x28
    NSSet *_allowedTrafficClassifiers;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x0000000000042c4a
- (void).cxx_destruct;	// IMP=0x0000000000044a08
@property(retain, nonatomic) IDSXPCDaemonController *xpcDaemonController; // @synthesize xpcDaemonController=_xpcDaemonController;
- (void)constructRAResponseDictionary:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000447e0
- (void)deliveryStats:(id)arg1;	// IMP=0x00000000000446b0
- (void)device:(id)arg1 pairingDeleted:(_Bool)arg2;	// IMP=0x000000000004448b
- (void)getDeliveryStatsWithCompletionBlock:(CDUnknownBlockType)arg1 queue:(id)arg2;	// IMP=0x00000000000442c6
- (void)getPairedDeviceInfoWithCompletionBlock:(CDUnknownBlockType)arg1 queue:(id)arg2;	// IMP=0x0000000000043d94
- (void)getLocalDeviceInfoWithCompletionBlock:(CDUnknownBlockType)arg1 queue:(id)arg2;	// IMP=0x0000000000043867
- (void)deletePairedDevice:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2 queue:(id)arg3;	// IMP=0x000000000004336a
- (void)setPairedDeviceInfo:(id)arg1;	// IMP=0x00000000000431a8
- (void)dropAllMessagesWithoutAnyAllowedClassifier;	// IMP=0x0000000000043119
@property(retain, nonatomic) NSSet *allowedTrafficClassifiers;
- (void)dealloc;	// IMP=0x0000000000042d71
- (id)init;	// IMP=0x0000000000042c9f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

