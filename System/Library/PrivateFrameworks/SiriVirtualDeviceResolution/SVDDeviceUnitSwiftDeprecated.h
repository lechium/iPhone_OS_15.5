//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriVirtualDeviceResolution/NSSecureCoding-Protocol.h>

@class MISSING_TYPE;

@interface SVDDeviceUnitSwiftDeprecated : NSObject <NSSecureCoding>
{
    MISSING_TYPE *identifier;	// 8 = 0x8
    MISSING_TYPE *assistantId;	// 24 = 0x18
    MISSING_TYPE *name;	// 40 = 0x28
    MISSING_TYPE *roomName;	// 56 = 0x38
    MISSING_TYPE *proximity;	// 72 = 0x48
}

+ (void)setSupportsSecureCoding:(_Bool)arg1;	// IMP=0x000000000001a680
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001a610
- (void).cxx_destruct;	// IMP=0x000000000001b850
- (id)init;	// IMP=0x000000000001b6a0
@property(nonatomic, readonly) long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001b4d0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001b0f0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001aee0

@end

