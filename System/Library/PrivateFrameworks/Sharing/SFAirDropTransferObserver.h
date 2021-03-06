//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Sharing/SFAirDropTransferObserverProtocol-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol SFAirDropTransferObserverDelegate;

@interface SFAirDropTransferObserver <SFAirDropTransferObserverProtocol>
{
    id <SFAirDropTransferObserverDelegate> _delegate;	// 8 = 0x8
    NSMutableDictionary *_transferIdentifierToTransfer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000008e0d
@property(retain) NSMutableDictionary *transferIdentifierToTransfer; // @synthesize transferIdentifierToTransfer=_transferIdentifierToTransfer;
@property(nonatomic) __weak id <SFAirDropTransferObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)shouldEscapeXpcTryCatch;	// IMP=0x0000000000008db1
- (id)remoteObjectInterface;	// IMP=0x0000000000008d91
- (id)exportedInterface;	// IMP=0x0000000000008d71
- (id)machServiceName;	// IMP=0x0000000000008d64
- (void)removedTransfer:(id)arg1;	// IMP=0x0000000000008b9b
- (void)updatedTransfer:(id)arg1;	// IMP=0x0000000000008947
- (void)updateActionHandlersOnTransfer:(id)arg1;	// IMP=0x00000000000084a2
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000008397
- (void)removeObserverForLocalOnlyPropertiesOnTransfer:(id)arg1;	// IMP=0x0000000000008375
- (void)observeForLocalOnlyPropertiesOnTransfer:(id)arg1;	// IMP=0x0000000000008349
- (void)invalidate;	// IMP=0x000000000000831a
- (void)activate;	// IMP=0x00000000000082eb
- (void)_getRemoteObjectProxyOnQueue:(CDUnknownBlockType)arg1;	// IMP=0x00000000000082d9
- (id)init;	// IMP=0x000000000000827c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

