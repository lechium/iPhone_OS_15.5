//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData;

@interface PLUSSchemaPLUSContactSuggesterQueryResponseReceived
{
    NSArray *_results;	// 8 = 0x8
    _Bool _hasMatchingResults;	// 16 = 0x10
    struct {
        unsigned int hasMatchingResults:1;
    } _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x00000000002a2b53
@property(nonatomic) _Bool hasMatchingResults; // @synthesize hasMatchingResults=_hasMatchingResults;
@property(copy, nonatomic) NSArray *results; // @synthesize results=_results;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002a2846
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002a2788
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002a2418
- (unsigned long long)hash;	// IMP=0x00000000002a23c5
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002a21f4
- (void)writeTo:(id)arg1;	// IMP=0x00000000002a208c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002a1d3c
- (void)deleteHasMatchingResults;	// IMP=0x00000000002a1d12
@property(nonatomic) _Bool hasHasMatchingResults;
- (id)resultsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002a1cb0
- (unsigned long long)resultsCount;	// IMP=0x00000000002a1c93
- (void)addResults:(id)arg1;	// IMP=0x00000000002a1c19
- (void)deleteResults;	// IMP=0x00000000002a1c07
- (void)clearResults;	// IMP=0x00000000002a1bea
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000357488
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000357450

@end
