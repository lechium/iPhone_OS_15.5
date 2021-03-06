//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBGetVisualCodeIntent-Protocol.h>

@class NSString, _INPBIntentMetadata;

@interface _INPBGetVisualCodeIntent : PBCodable <_INPBGetVisualCodeIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int visualCodeType:1;
    } _has;	// 8 = 0x8
    int _visualCodeType;	// 12 = 0xc
    _INPBIntentMetadata *_intentMetadata;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000008b5a2
- (void).cxx_destruct;	// IMP=0x000000000008b341
@property(nonatomic) int visualCodeType; // @synthesize visualCodeType=_visualCodeType;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
- (id)dictionaryRepresentation;	// IMP=0x000000000008b194
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008af3a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008ae94
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000008ae02
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000008ad03
- (void)writeTo:(id)arg1;	// IMP=0x000000000008ac50
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000008ac43
- (int)StringAsVisualCodeType:(id)arg1;	// IMP=0x000000000008ab2c
- (id)visualCodeTypeAsString:(int)arg1;	// IMP=0x000000000008aa87
@property(nonatomic) _Bool hasVisualCodeType;
@property(readonly, nonatomic) _Bool hasIntentMetadata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

