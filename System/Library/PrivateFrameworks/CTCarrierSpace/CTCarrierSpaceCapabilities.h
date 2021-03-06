//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CTCarrierSpace/NSCopying-Protocol.h>
#import <CTCarrierSpace/NSSecureCoding-Protocol.h>

@interface CTCarrierSpaceCapabilities : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _supportsServices;	// 8 = 0x8
    _Bool _supportsUsage;	// 9 = 0x9
    _Bool _supportsPlans;	// 10 = 0xa
    _Bool _supportsApplications;	// 11 = 0xb
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000008520
@property(nonatomic) _Bool supportsApplications; // @synthesize supportsApplications=_supportsApplications;
@property(nonatomic) _Bool supportsPlans; // @synthesize supportsPlans=_supportsPlans;
@property(nonatomic) _Bool supportsUsage; // @synthesize supportsUsage=_supportsUsage;
@property(nonatomic) _Bool supportsServices; // @synthesize supportsServices=_supportsServices;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000008469
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000083d0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000008312
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000008225
- (id)description;	// IMP=0x000000000000812a

@end

