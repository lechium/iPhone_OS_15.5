//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SchoolTime/NSCopying-Protocol.h>
#import <SchoolTime/NSMutableCopying-Protocol.h>
#import <SchoolTime/NSSecureCoding-Protocol.h>

@class NSString;

@interface SCLContact : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSString *_contactIdentifier;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
    NSString *_value;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000029dc0
- (void).cxx_destruct;	// IMP=0x0000000000029f4f
@property(readonly, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000029eaa
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000029dc8
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000029d89
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000029d7e
- (id)description;	// IMP=0x0000000000029c5e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000029af6
- (unsigned long long)hash;	// IMP=0x0000000000029a5b
- (id)_initWithContactIdentifier:(id)arg1 type:(unsigned long long)arg2 value:(id)arg3;	// IMP=0x000000000002999c
- (id)init;	// IMP=0x0000000000029983

@end
