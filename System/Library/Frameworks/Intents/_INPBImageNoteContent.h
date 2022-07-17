//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBImageNoteContent-Protocol.h>

@class NSString, _INPBImageValue;

@interface _INPBImageNoteContent : PBCodable <_INPBImageNoteContent, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    _INPBImageValue *_image;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000113cbb
- (void).cxx_destruct;	// IMP=0x0000000000113af4
@property(retain, nonatomic) _INPBImageValue *image; // @synthesize image=_image;
- (id)dictionaryRepresentation;	// IMP=0x0000000000113a48
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001138a9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000113827
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000113795
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000113696
- (void)writeTo:(id)arg1;	// IMP=0x000000000011360f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000113602
@property(readonly, nonatomic) _Bool hasImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
