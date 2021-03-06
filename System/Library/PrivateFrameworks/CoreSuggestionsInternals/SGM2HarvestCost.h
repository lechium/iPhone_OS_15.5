//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreSuggestionsInternals/NSCopying-Protocol.h>

@interface SGM2HarvestCost : PBCodable <NSCopying>
{
    int _documentSource;	// 8 = 0x8
    int _harvestSource;	// 12 = 0xc
    _Bool _harvestedOnBattery;	// 16 = 0x10
    _Bool _highPriority;	// 17 = 0x11
    _Bool _receivedOnBattery;	// 18 = 0x12
    struct {
        unsigned int documentSource:1;
        unsigned int harvestSource:1;
        unsigned int harvestedOnBattery:1;
        unsigned int highPriority:1;
        unsigned int receivedOnBattery:1;
    } _has;	// 20 = 0x14
}

@property(nonatomic) _Bool harvestedOnBattery; // @synthesize harvestedOnBattery=_harvestedOnBattery;
@property(nonatomic) _Bool receivedOnBattery; // @synthesize receivedOnBattery=_receivedOnBattery;
@property(nonatomic) _Bool highPriority; // @synthesize highPriority=_highPriority;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000005f8b8
- (unsigned long long)hash;	// IMP=0x000000000005f81d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005f6d3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005f60b
- (void)copyTo:(id)arg1;	// IMP=0x000000000005f566
- (void)writeTo:(id)arg1;	// IMP=0x000000000005f495
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000005f488
- (id)dictionaryRepresentation;	// IMP=0x000000000005f16a
- (id)description;	// IMP=0x000000000005f0bb
- (int)StringAsHarvestSource:(id)arg1;	// IMP=0x000000000005ef68
- (id)harvestSourceAsString:(int)arg1;	// IMP=0x000000000005eea9
@property(nonatomic) _Bool hasHarvestSource;
@property(nonatomic) int harvestSource; // @synthesize harvestSource=_harvestSource;
@property(nonatomic) _Bool hasHarvestedOnBattery;
@property(nonatomic) _Bool hasReceivedOnBattery;
@property(nonatomic) _Bool hasHighPriority;
- (int)StringAsDocumentSource:(id)arg1;	// IMP=0x000000000005ec28
- (id)documentSourceAsString:(int)arg1;	// IMP=0x000000000005eb77
@property(nonatomic) _Bool hasDocumentSource;
@property(nonatomic) int documentSource; // @synthesize documentSource=_documentSource;

@end

