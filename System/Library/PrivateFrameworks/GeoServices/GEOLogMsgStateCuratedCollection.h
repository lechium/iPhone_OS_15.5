//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOCollectionDetails, GEOPublisherDetails, PBDataReader;

@interface GEOLogMsgStateCuratedCollection : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    CDStruct_95bda58d _impossibleActions;	// 16 = 0x10
    CDStruct_95bda58d _possibleActions;	// 40 = 0x28
    GEOCollectionDetails *_collectionDetails;	// 64 = 0x40
    GEOPublisherDetails *_publisherDetails;	// 72 = 0x48
    unsigned int _readerMarkPos;	// 80 = 0x50
    unsigned int _readerMarkLength;	// 84 = 0x54
    struct os_unfair_lock_s _readerLock;	// 88 = 0x58
    unsigned int _horizontalIndex;	// 92 = 0x5c
    int _localSearchProviderID;	// 96 = 0x60
    int _placecardType;	// 100 = 0x64
    int _repeatableSectionIndex;	// 104 = 0x68
    unsigned int _verticalIndex;	// 108 = 0x6c
    struct {
        unsigned int has_horizontalIndex:1;
        unsigned int has_localSearchProviderID:1;
        unsigned int has_placecardType:1;
        unsigned int has_repeatableSectionIndex:1;
        unsigned int has_verticalIndex:1;
        unsigned int read_impossibleActions:1;
        unsigned int read_possibleActions:1;
        unsigned int read_collectionDetails:1;
        unsigned int read_publisherDetails:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 112 = 0x70
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000001497d4a
- (void).cxx_destruct;	// IMP=0x0000000001498d6d
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000001498b5c
- (unsigned long long)hash;	// IMP=0x0000000001498a24
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000149882e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001498599
- (void)copyTo:(id)arg1;	// IMP=0x0000000001498335
- (void)writeTo:(id)arg1;	// IMP=0x000000000149807b
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000149806c
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000001497850
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000149783e
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000014851d7
- (id)jsonRepresentation;	// IMP=0x00000000014851c8
- (id)dictionaryRepresentation;	// IMP=0x000000000147b64f
- (id)description;	// IMP=0x000000000147b5a0
@property(nonatomic) _Bool hasRepeatableSectionIndex;
@property(nonatomic) int repeatableSectionIndex;
@property(nonatomic) _Bool hasLocalSearchProviderID;
@property(nonatomic) int localSearchProviderID;
@property(nonatomic) _Bool hasHorizontalIndex;
@property(nonatomic) unsigned int horizontalIndex;
@property(nonatomic) _Bool hasVerticalIndex;
@property(nonatomic) unsigned int verticalIndex;
- (int)StringAsImpossibleActions:(id)arg1;	// IMP=0x0000000001472170
- (id)impossibleActionsAsString:(int)arg1;	// IMP=0x000000000146d693
- (void)setImpossibleActions:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000146d66f
- (int)impossibleActionAtIndex:(unsigned long long)arg1;	// IMP=0x000000000146d599
- (void)addImpossibleAction:(int)arg1;	// IMP=0x000000000146d55e
- (void)clearImpossibleActions;	// IMP=0x000000000146d540
@property(readonly, nonatomic) int *impossibleActions;
@property(readonly, nonatomic) unsigned long long impossibleActionsCount;
- (int)StringAsPossibleActions:(id)arg1;	// IMP=0x0000000001464184
- (id)possibleActionsAsString:(int)arg1;	// IMP=0x000000000145f6a7
- (void)setPossibleActions:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000145f683
- (int)possibleActionAtIndex:(unsigned long long)arg1;	// IMP=0x000000000145f5ad
- (void)addPossibleAction:(int)arg1;	// IMP=0x000000000145f572
- (void)clearPossibleActions;	// IMP=0x000000000145f554
@property(readonly, nonatomic) int *possibleActions;
@property(readonly, nonatomic) unsigned long long possibleActionsCount;
- (int)StringAsPlacecardType:(id)arg1;	// IMP=0x000000000145f21c
- (id)placecardTypeAsString:(int)arg1;	// IMP=0x000000000145f10c
@property(nonatomic) _Bool hasPlacecardType;
@property(nonatomic) int placecardType;
@property(retain, nonatomic) GEOCollectionDetails *collectionDetails;
@property(readonly, nonatomic) _Bool hasCollectionDetails;
@property(retain, nonatomic) GEOPublisherDetails *publisherDetails;
@property(readonly, nonatomic) _Bool hasPublisherDetails;
- (void)dealloc;	// IMP=0x000000000145e065
- (id)initWithData:(id)arg1;	// IMP=0x000000000145e009
- (id)init;	// IMP=0x000000000145dfad

@end
