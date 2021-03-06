//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOLogMsgEventProactiveSuggestionInteractionSession : PBCodable <NSCopying>
{
    NSMutableArray *_proactiveItems;	// 8 = 0x8
    int _duration;	// 16 = 0x10
    int _interactedItemIndex;	// 20 = 0x14
    int _listType;	// 24 = 0x18
    struct {
        unsigned int has_duration:1;
        unsigned int has_interactedItemIndex:1;
        unsigned int has_listType:1;
    } _flags;	// 28 = 0x1c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000037aeb0
+ (Class)proactiveItemType;	// IMP=0x00000000003798dd
- (void).cxx_destruct;	// IMP=0x000000000037be96
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000037bcb9
- (unsigned long long)hash;	// IMP=0x000000000037bc13
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000037babf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000037b885
- (void)copyTo:(id)arg1;	// IMP=0x000000000037b752
- (void)writeTo:(id)arg1;	// IMP=0x000000000037b5a3
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000037b594
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000037a3a4
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000037a392
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000379eaf
- (id)jsonRepresentation;	// IMP=0x0000000000379ea0
- (id)dictionaryRepresentation;	// IMP=0x0000000000379a5d
- (id)description;	// IMP=0x00000000003799ae
@property(nonatomic) _Bool hasInteractedItemIndex;
@property(nonatomic) int interactedItemIndex;
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) int duration;
- (id)proactiveItemAtIndex:(unsigned long long)arg1;	// IMP=0x00000000003798c0
- (unsigned long long)proactiveItemsCount;	// IMP=0x00000000003798a3
- (void)addProactiveItem:(id)arg1;	// IMP=0x0000000000379839
- (void)clearProactiveItems;	// IMP=0x000000000037981c
@property(retain, nonatomic) NSMutableArray *proactiveItems;
- (int)StringAsListType:(id)arg1;	// IMP=0x0000000000379728
- (id)listTypeAsString:(int)arg1;	// IMP=0x000000000037969e
@property(nonatomic) _Bool hasListType;
@property(nonatomic) int listType;

@end

