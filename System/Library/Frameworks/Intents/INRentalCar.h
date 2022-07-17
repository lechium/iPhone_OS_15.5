//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INJSONSerializable-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSString;

@interface INRentalCar : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>
{
    NSString *_rentalCompanyName;	// 8 = 0x8
    NSString *_type;	// 16 = 0x10
    NSString *_make;	// 24 = 0x18
    NSString *_model;	// 32 = 0x20
    NSString *_rentalCarDescription;	// 40 = 0x28
}

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;	// IMP=0x00000000003f1226
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003f121e
- (void).cxx_destruct;	// IMP=0x00000000003f11d5
@property(readonly, copy, nonatomic) NSString *rentalCarDescription; // @synthesize rentalCarDescription=_rentalCarDescription;
@property(readonly, copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(readonly, copy, nonatomic) NSString *make; // @synthesize make=_make;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *rentalCompanyName; // @synthesize rentalCompanyName=_rentalCompanyName;
- (id)_dictionaryRepresentation;	// IMP=0x00000000003f0f83
- (id)descriptionAtIndent:(unsigned long long)arg1;	// IMP=0x00000000003f0ea7
@property(readonly, copy) NSString *description;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;	// IMP=0x00000000003f0cf6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003f0c4d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003f0977
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003f096c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003f0858
@property(readonly) unsigned long long hash;
- (id)initWithRentalCompanyName:(id)arg1 type:(id)arg2 make:(id)arg3 model:(id)arg4 rentalCarDescription:(id)arg5;	// IMP=0x00000000003f06ad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
