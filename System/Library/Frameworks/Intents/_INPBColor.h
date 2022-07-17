//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBColor-Protocol.h>

@class NSString;

@interface _INPBColor : PBCodable <_INPBColor, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int blue:1;
        unsigned int green:1;
        unsigned int red:1;
    } _has;	// 8 = 0x8
    double _blue;	// 16 = 0x10
    double _green;	// 24 = 0x18
    double _red;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000004313e3
@property(nonatomic) double red; // @synthesize red=_red;
@property(nonatomic) double green; // @synthesize green=_green;
@property(nonatomic) double blue; // @synthesize blue=_blue;
- (id)dictionaryRepresentation;	// IMP=0x0000000000431005
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000430aee
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000430a24
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000430992
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000430893
- (void)writeTo:(id)arg1;	// IMP=0x00000000004307e9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004307dc
@property(nonatomic) _Bool hasRed;
@property(nonatomic) _Bool hasGreen;
@property(nonatomic) _Bool hasBlue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
