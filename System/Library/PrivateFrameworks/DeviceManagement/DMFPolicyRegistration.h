//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DeviceManagement/NSCopying-Protocol.h>
#import <DeviceManagement/NSSecureCoding-Protocol.h>

@class NSSet, NSString;

@interface DMFPolicyRegistration : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_identifier;	// 8 = 0x8
    NSSet *_policyTypes;	// 16 = 0x10
    CDUnknownBlockType _callback;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000031a7d
- (void).cxx_destruct;	// IMP=0x0000000000031d94
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(readonly, copy, nonatomic) NSSet *policyTypes; // @synthesize policyTypes=_policyTypes;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (unsigned long long)hash;	// IMP=0x0000000000031d23
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000031c51
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000031af3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000031a85
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000031a2c
- (id)initWithIdentifier:(id)arg1 policyTypes:(id)arg2 callback:(CDUnknownBlockType)arg3;	// IMP=0x00000000000318ce

@end
