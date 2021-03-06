//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface STDeviceID : NSObject
{
    NSString *_identifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000002a923
- (void).cxx_destruct;	// IMP=0x002000000002aa83
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
- (unsigned long long)hash;	// IMP=0x001000000002aa2b
- (_Bool)isEqualToDeviceID:(id)arg1;	// IMP=0x001000000002a98e
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000002a92b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000002a8aa
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000002a81d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000002a7d4
- (id)description;	// IMP=0x001000000002a758
- (id)initWithIdentifier:(id)arg1;	// IMP=0x001000000002a6db

@end

