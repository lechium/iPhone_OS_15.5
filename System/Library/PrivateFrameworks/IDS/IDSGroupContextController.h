//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDS/IDSGroupContextNotifyingObserverDelegate-Protocol.h>
#import <IDS/IDSTransactionLogTaskHandlerDelegate-Protocol.h>

@class CUTPromiseSeal, NSString;
@protocol IDSGroupContextControllerDelegate, OS_dispatch_queue;

@interface IDSGroupContextController : NSObject <IDSTransactionLogTaskHandlerDelegate, IDSGroupContextNotifyingObserverDelegate>
{
    id <IDSGroupContextControllerDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    CUTPromiseSeal *_seal;	// 24 = 0x18
    NSString *_serviceName;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000058978
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(retain, nonatomic) CUTPromiseSeal *seal; // @synthesize seal=_seal;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) id <IDSGroupContextControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_contentWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000058735
- (void)qGroupContextWithDeviceIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000005831d
- (void)qSetupSeal;	// IMP=0x0000000000058298
- (void)didReceiveRegistrationIdentityUpdateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000005819f
- (void)didReceiveDecryptionFailureForGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000058010
- (void)didUpdateGroup:(id)arg1 withNewGroup:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000057e3e
- (void)didCacheGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000057caf
- (void)didCreateGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000057b20
- (void)taskHandler:(id)arg1 accountInfoForAliases:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000005789b
- (void)persistedTokenForTaskHandler:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000057889
- (void)taskHandler:(id)arg1 persistToken:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000577d6
- (void)taskHandler:(id)arg1 messagesFromToken:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000574cf
- (void)taskHandler:(id)arg1 participantsWithDestinations:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000057325
- (void)taskHandler:(id)arg1 groupsWithGroupIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000056bd0
- (void)scheduleTransactionLogTask:(id)arg1;	// IMP=0x0000000000056b02
- (void)groupContextWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000056a04
- (void)dealloc;	// IMP=0x0000000000056961
- (id)initWithServiceName:(id)arg1 queue:(id)arg2 delegate:(id)arg3;	// IMP=0x0000000000056845

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

