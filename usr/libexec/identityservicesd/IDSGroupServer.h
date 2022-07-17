//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol FTMessageDeliveryProtocol, IDSGroupServerPushHandler;

@interface IDSGroupServer : NSObject
{
    id <FTMessageDeliveryProtocol> _messageDelivery;	// 8 = 0x8
    id <IDSGroupServerPushHandler> _pushHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000002628d0
@property(retain, nonatomic) id <IDSGroupServerPushHandler> pushHandler; // @synthesize pushHandler=_pushHandler;
@property(retain, nonatomic) id <FTMessageDeliveryProtocol> messageDelivery; // @synthesize messageDelivery=_messageDelivery;
- (void)_queryGroupServerENID:(id)arg1 withPreviousEntries:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000262440
- (void)queryGroupServerForENID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002623b0
- (void)publishGroupForKey:(id)arg1 data:(id)arg2 signature:(id)arg3 forwardingSig:(id)arg4 ENID:(id)arg5 version:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x0010000000261e60
- (CDUnknownBlockType)_putMessageCompletionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000261a40
- (CDUnknownBlockType)_getMessageCompletionCurrentEntries:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002616a0
- (id)initWithMessageDelivery:(id)arg1;	// IMP=0x00100000002615b0
- (id)init;	// IMP=0x0010000000261510

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
