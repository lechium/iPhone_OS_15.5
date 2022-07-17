//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOStyleAttributes, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOPDAutocompleteEntryQuery : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_completion;	// 24 = 0x18
    NSMutableArray *_resultRefinements;	// 32 = 0x20
    GEOStyleAttributes *_styleAttributes;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    int _tapBehavior;	// 60 = 0x3c
    _Bool _queryHasAttributeIntentsInRefinements;	// 64 = 0x40
    _Bool _showIntermediateStateTapBehaviorListView;	// 65 = 0x41
    struct {
        unsigned int has_tapBehavior:1;
        unsigned int has_queryHasAttributeIntentsInRefinements:1;
        unsigned int has_showIntermediateStateTapBehaviorListView:1;
        unsigned int read_unknownFields:1;
        unsigned int read_completion:1;
        unsigned int read_resultRefinements:1;
        unsigned int read_styleAttributes:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 68 = 0x44
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000064235f
+ (Class)resultRefinementType;	// IMP=0x0000000000641353
- (void).cxx_destruct;	// IMP=0x00000000006434e5
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000643358
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000643043
- (unsigned long long)hash;	// IMP=0x0000000000642f46
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000642d75
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006429bd
- (void)copyTo:(id)arg1;	// IMP=0x00000000006427f5
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x00000000006426c3
- (void)writeTo:(id)arg1;	// IMP=0x000000000064237b
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000064236c
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000642253
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000642241
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000641cb5
- (id)jsonRepresentation;	// IMP=0x0000000000641ba3
- (id)dictionaryRepresentation;	// IMP=0x00000000006415ae
- (id)description;	// IMP=0x00000000006414ff
@property(nonatomic) _Bool hasQueryHasAttributeIntentsInRefinements;
@property(nonatomic) _Bool queryHasAttributeIntentsInRefinements;
@property(retain, nonatomic) GEOStyleAttributes *styleAttributes;
@property(readonly, nonatomic) _Bool hasStyleAttributes;
- (id)resultRefinementAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000641322
- (unsigned long long)resultRefinementsCount;	// IMP=0x00000000006412f6
- (void)addResultRefinement:(id)arg1;	// IMP=0x0000000000641242
- (void)clearResultRefinements;	// IMP=0x000000000064121a
@property(retain, nonatomic) NSMutableArray *resultRefinements;
@property(nonatomic) _Bool hasShowIntermediateStateTapBehaviorListView;
@property(nonatomic) _Bool showIntermediateStateTapBehaviorListView;
- (int)StringAsTapBehavior:(id)arg1;	// IMP=0x000000000064103f
- (id)tapBehaviorAsString:(int)arg1;	// IMP=0x0000000000640fea
@property(nonatomic) _Bool hasTapBehavior;
@property(nonatomic) int tapBehavior;
@property(retain, nonatomic) NSString *completion;
@property(readonly, nonatomic) _Bool hasCompletion;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000640248
- (id)init;	// IMP=0x00000000006401ec

@end
