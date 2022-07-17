//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBLanguageTag-Protocol.h>

@class NSString;

@interface _INPBLanguageTag : PBCodable <_INPBLanguageTag, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    NSString *_tag;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001cd4c1
- (void).cxx_destruct;	// IMP=0x00000000001cd33d
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
- (id)dictionaryRepresentation;	// IMP=0x00000000001cd288
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001cd0e9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001cd067
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001ccfd5
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001cced6
- (void)writeTo:(id)arg1;	// IMP=0x00000000001cce69
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001cce5c
@property(readonly, nonatomic) _Bool hasTag;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
