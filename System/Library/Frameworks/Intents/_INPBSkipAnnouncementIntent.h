//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSkipAnnouncementIntent-Protocol.h>

@class NSString, _INPBIntentMetadata;

@interface _INPBSkipAnnouncementIntent : PBCodable <_INPBSkipAnnouncementIntent, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    _INPBIntentMetadata *_intentMetadata;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000004bc616
- (void).cxx_destruct;	// IMP=0x00000000004bc44f
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
- (id)dictionaryRepresentation;	// IMP=0x00000000004bc3a3
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004bc204
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004bc182
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004bc0f0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004bbff1
- (void)writeTo:(id)arg1;	// IMP=0x00000000004bbf6a
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004bbf5d
@property(readonly, nonatomic) _Bool hasIntentMetadata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

