//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBIntentType-Protocol.h>

@class NSString;

@interface _INPBIntentType : PBCodable <_INPBIntentType, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    NSString *_type;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002e143c
- (void).cxx_destruct;	// IMP=0x00000000002e12b8
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (id)dictionaryRepresentation;	// IMP=0x00000000002e1203
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002e1064
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002e0fe2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002e0f50
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002e0e51
- (void)writeTo:(id)arg1;	// IMP=0x00000000002e0de4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002e0dd7
@property(readonly, nonatomic) _Bool hasType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

