//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSearchForMediaIntent-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata, _INPBMediaSearch, _INPBPrivateSearchForMediaIntentData;

@interface _INPBSearchForMediaIntent : PBCodable <_INPBSearchForMediaIntent, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    _INPBIntentMetadata *_intentMetadata;	// 8 = 0x8
    NSArray *_mediaItems;	// 16 = 0x10
    _INPBMediaSearch *_mediaSearch;	// 24 = 0x18
    _INPBPrivateSearchForMediaIntentData *_privateSearchForMediaIntentData;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003ab0c1
+ (Class)mediaItemsType;	// IMP=0x00000000003ab0b0
- (void).cxx_destruct;	// IMP=0x00000000003aad5f
@property(retain, nonatomic) _INPBPrivateSearchForMediaIntentData *privateSearchForMediaIntentData; // @synthesize privateSearchForMediaIntentData=_privateSearchForMediaIntentData;
@property(retain, nonatomic) _INPBMediaSearch *mediaSearch; // @synthesize mediaSearch=_mediaSearch;
@property(copy, nonatomic) NSArray *mediaItems; // @synthesize mediaItems=_mediaItems;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
- (id)dictionaryRepresentation;	// IMP=0x00000000003aa9f3
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003aa4b3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003aa388
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003aa2f6
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003aa1f7
- (void)writeTo:(id)arg1;	// IMP=0x00000000003a9fa0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003a9f93
@property(readonly, nonatomic) _Bool hasPrivateSearchForMediaIntentData;
@property(readonly, nonatomic) _Bool hasMediaSearch;
- (id)mediaItemsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000003a9f24
@property(readonly, nonatomic) unsigned long long mediaItemsCount;
- (void)addMediaItems:(id)arg1;	// IMP=0x00000000003a9e8d
- (void)clearMediaItems;	// IMP=0x00000000003a9e70
@property(readonly, nonatomic) _Bool hasIntentMetadata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
