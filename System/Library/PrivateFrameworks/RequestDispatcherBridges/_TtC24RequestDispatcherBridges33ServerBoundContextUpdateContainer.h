//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RequestDispatcherBridges/AFContextSnapshot-Protocol.h>
#import <RequestDispatcherBridges/NSSecureCoding-Protocol.h>

@class MISSING_TYPE;

@interface _TtC24RequestDispatcherBridges33ServerBoundContextUpdateContainer : NSObject <AFContextSnapshot, NSSecureCoding>
{
    MISSING_TYPE *contextUpdate;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000064070
- (void).cxx_destruct;	// IMP=0x0000000000064ce0
- (id)init;	// IMP=0x0000000000064c80
- (id)serializedBackingStore;	// IMP=0x0000000000064ba0
- (id)initWithSerializedBackingStore:(id)arg1;	// IMP=0x00000000000648e0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000643f0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000064350

@end

