//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface PKDeviceVersionRange : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_minimum;	// 8 = 0x8
    NSString *_maximum;	// 16 = 0x10
    NSArray *_models;	// 24 = 0x18
    PKDeviceVersionRange *_companion;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000158178
- (void).cxx_destruct;	// IMP=0x0000000000158a8f
@property(readonly, nonatomic) PKDeviceVersionRange *companion; // @synthesize companion=_companion;
@property(readonly, nonatomic) NSArray *models; // @synthesize models=_models;
@property(readonly, nonatomic) NSString *maximum; // @synthesize maximum=_maximum;
@property(readonly, nonatomic) NSString *minimum; // @synthesize minimum=_minimum;
- (id)description;	// IMP=0x0000000000158985
- (_Bool)_matchesDeviceVersion:(id)arg1;	// IMP=0x000000000015869d
- (unsigned long long)hash;	// IMP=0x000000000015860c
- (_Bool)isEqualToDeviceVersionRange:(id)arg1;	// IMP=0x00000000001584b7
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000015844f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000015838a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001582f9
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000158180
- (id)asDictionary;	// IMP=0x00000000001580a9
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000157e8d

@end

