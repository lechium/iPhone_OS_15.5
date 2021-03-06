//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFOperation.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFObject-Protocol.h>

@class HMDSecureRemoteMessageTransport, HMFMessage, HMFUnfairLock, NSArray, NSString;

@interface HMDRemoteSendMessageOperation : HMFOperation <HMFLogging, HMFObject>
{
    _Bool _messageResponseHandled;	// 8 = 0x8
    HMFMessage *_message;	// 16 = 0x10
    HMDSecureRemoteMessageTransport *_transport;	// 24 = 0x18
    HMFUnfairLock *_lock;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x00000000003bb90c
+ (id)shortDescription;	// IMP=0x00000000003bb8fa
- (void).cxx_destruct;	// IMP=0x00000000003bb63b
@property(readonly) HMFUnfairLock *lock; // @synthesize lock=_lock;
@property(getter=isMessageResponseHandled) _Bool messageResponseHandled; // @synthesize messageResponseHandled=_messageResponseHandled;
@property(readonly) __weak HMDSecureRemoteMessageTransport *transport; // @synthesize transport=_transport;
@property(readonly) HMFMessage *message; // @synthesize message=_message;
- (id)logIdentifier;	// IMP=0x00000000003bb579
- (void)cancelWithError:(id)arg1;	// IMP=0x00000000003bb510
- (void)main;	// IMP=0x00000000003bb1dd
- (void)_respondWithError:(id)arg1 playload:(id)arg2;	// IMP=0x00000000003bb0dd
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (id)initWithMessage:(id)arg1 transport:(id)arg2;	// IMP=0x00000000003bab8a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end

