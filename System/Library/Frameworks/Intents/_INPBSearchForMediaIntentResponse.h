//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSearchForMediaIntentResponse-Protocol.h>

@class NSArray, NSString;

@interface _INPBSearchForMediaIntentResponse : PBCodable <_INPBSearchForMediaIntentResponse, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    NSArray *_mediaItems;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003ac27b
+ (Class)mediaItemsType;	// IMP=0x00000000003ac26a
- (void).cxx_destruct;	// IMP=0x00000000003ac0a1
@property(copy, nonatomic) NSArray *mediaItems; // @synthesize mediaItems=_mediaItems;
- (id)dictionaryRepresentation;	// IMP=0x00000000003abe74
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003abcd5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003abc53
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003abbc1
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003abac2
- (void)writeTo:(id)arg1;	// IMP=0x00000000003ab992
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003ab985
- (id)mediaItemsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000003ab968
@property(readonly, nonatomic) unsigned long long mediaItemsCount;
- (void)addMediaItems:(id)arg1;	// IMP=0x00000000003ab8d1
- (void)clearMediaItems;	// IMP=0x00000000003ab8b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
