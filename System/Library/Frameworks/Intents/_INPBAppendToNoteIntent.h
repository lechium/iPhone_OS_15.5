//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBAppendToNoteIntent-Protocol.h>

@class NSString, _INPBIntentMetadata, _INPBNote, _INPBNoteContent;

@interface _INPBAppendToNoteIntent : PBCodable <_INPBAppendToNoteIntent, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    _INPBNoteContent *_content;	// 8 = 0x8
    _INPBIntentMetadata *_intentMetadata;	// 16 = 0x10
    _INPBNote *_targetNote;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002b258e
- (void).cxx_destruct;	// IMP=0x00000000002b22c6
@property(retain, nonatomic) _INPBNote *targetNote; // @synthesize targetNote=_targetNote;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(retain, nonatomic) _INPBNoteContent *content; // @synthesize content=_content;
- (id)dictionaryRepresentation;	// IMP=0x00000000002b213b
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002b1cdf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002b1bf5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002b1b63
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002b1a64
- (void)writeTo:(id)arg1;	// IMP=0x00000000002b1925
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002b1918
@property(readonly, nonatomic) _Bool hasTargetNote;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(readonly, nonatomic) _Bool hasContent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
