//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBAddMediaIntent-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata, _INPBMediaDestination, _INPBMediaSearch, _INPBPrivateAddMediaIntentData;

@interface _INPBAddMediaIntent : PBCodable <_INPBAddMediaIntent, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    _INPBIntentMetadata *_intentMetadata;	// 8 = 0x8
    _INPBMediaDestination *_mediaDestination;	// 16 = 0x10
    NSArray *_mediaItems;	// 24 = 0x18
    _INPBMediaSearch *_mediaSearch;	// 32 = 0x20
    _INPBPrivateAddMediaIntentData *_privateAddMediaIntentData;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003a7dad
+ (Class)mediaItemsType;	// IMP=0x00000000003a7d9c
- (void).cxx_destruct;	// IMP=0x00000000003a79cb
@property(retain, nonatomic) _INPBPrivateAddMediaIntentData *privateAddMediaIntentData; // @synthesize privateAddMediaIntentData=_privateAddMediaIntentData;
@property(retain, nonatomic) _INPBMediaSearch *mediaSearch; // @synthesize mediaSearch=_mediaSearch;
@property(copy, nonatomic) NSArray *mediaItems; // @synthesize mediaItems=_mediaItems;
@property(retain, nonatomic) _INPBMediaDestination *mediaDestination; // @synthesize mediaDestination=_mediaDestination;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
- (id)dictionaryRepresentation;	// IMP=0x00000000003a75fa
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003a6f99
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003a6e3d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003a6dab
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003a6cac
- (void)writeTo:(id)arg1;	// IMP=0x00000000003a69f9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003a69ec
@property(readonly, nonatomic) _Bool hasPrivateAddMediaIntentData;
@property(readonly, nonatomic) _Bool hasMediaSearch;
- (id)mediaItemsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000003a697d
@property(readonly, nonatomic) unsigned long long mediaItemsCount;
- (void)addMediaItems:(id)arg1;	// IMP=0x00000000003a68e6
- (void)clearMediaItems;	// IMP=0x00000000003a68c9
@property(readonly, nonatomic) _Bool hasMediaDestination;
@property(readonly, nonatomic) _Bool hasIntentMetadata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
