//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NearbyInteraction/NSCopying-Protocol.h>
#import <NearbyInteraction/NSSecureCoding-Protocol.h>

@interface NIConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _suspensionPolicy;	// 8 = 0x8
    unsigned long long _enabledGestures;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000a391
+ (id)new;	// IMP=0x000000000000a18f
@property unsigned long long enabledGestures; // @synthesize enabledGestures=_enabledGestures;
@property unsigned long long suspensionPolicy; // @synthesize suspensionPolicy=_suspensionPolicy;
- (id)descriptionInternal;	// IMP=0x000000000000a5f5
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000a456
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000a3e1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000a399
- (_Bool)hasEqualEnabledGestures:(id)arg1;	// IMP=0x000000000000a31a
- (id)initWithConfiguration:(id)arg1;	// IMP=0x000000000000a1f1
- (id)initInternal;	// IMP=0x000000000000a1b2
- (id)init;	// IMP=0x000000000000a150

@end

