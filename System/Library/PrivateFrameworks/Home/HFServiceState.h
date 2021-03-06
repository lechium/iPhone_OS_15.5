//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface HFServiceState : NSObject
{
}

+ (id)stateForServiceDescriptor:(id)arg1 withBatchReadResponse:(id)arg2;	// IMP=0x00000000001eab2f
+ (Class)stateClassForServiceDescriptor:(id)arg1;	// IMP=0x00000000001ea700
+ (id)optionalCharacteristicTypes;	// IMP=0x00000000001ea63b
+ (id)requiredCharacteristicTypes;	// IMP=0x00000000001ea622
+ (id)stateClassIdentifier;	// IMP=0x00000000001ea588
@property(readonly, nonatomic, getter=isTransitioning) _Bool transitioning;
- (id)initWithBatchReadResponse:(id)arg1;	// IMP=0x00000000001ea654

// Remaining properties
@property(readonly, nonatomic) long long primaryState; // @dynamic primaryState;
@property(readonly, nonatomic) long long priority; // @dynamic priority;
@property(readonly, copy, nonatomic) NSString *stateTypeIdentifier; // @dynamic stateTypeIdentifier;

@end

