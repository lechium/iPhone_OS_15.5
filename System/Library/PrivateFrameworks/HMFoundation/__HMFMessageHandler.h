//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFLogging-Protocol.h>
#import <HMFoundation/HMFObject-Protocol.h>

@class NSArray, NSObject, NSString, NSUUID;
@protocol HMFMessageReceiver, OS_dispatch_queue;

@interface __HMFMessageHandler <HMFLogging, HMFObject>
{
    unsigned long long _hash;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    id <HMFMessageReceiver> _receiver;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    NSUUID *_target;	// 40 = 0x28
    NSArray *_policies;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x00000000000406cc
+ (id)handlerWithReceiver:(id)arg1 targetUUID:(id)arg2 name:(id)arg3 policies:(id)arg4 selector:(SEL)arg5;	// IMP=0x000000000003fd59
+ (id)handlerWithReceiver:(id)arg1 name:(id)arg2 policies:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000000003fc83
- (void).cxx_destruct;	// IMP=0x0000000000040859
@property(readonly, copy) NSArray *policies; // @synthesize policies=_policies;
@property(readonly, copy) NSUUID *target; // @synthesize target=_target;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly) __weak id <HMFMessageReceiver> receiver; // @synthesize receiver=_receiver;
@property(readonly) unsigned long long hash; // @synthesize hash=_hash;
- (id)logIdentifier;	// IMP=0x0000000000040733
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000040567
- (_Bool)hasReceiver:(id)arg1;	// IMP=0x0000000000040547
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *shortDescription;
- (id)initWithReceiver:(id)arg1 targetUUID:(id)arg2 name:(id)arg3 policies:(id)arg4;	// IMP=0x000000000003fefb
- (_Bool)invokeWithMessage:(id)arg1;	// IMP=0x000000000003fbcd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end

