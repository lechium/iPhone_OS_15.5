//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreSuggestionsInternals/NSCopying-Protocol.h>

@class NSString;

@interface SGM2HarvestCostBreakdown : PBCodable <NSCopying>
{
    NSString *_componentName;	// 8 = 0x8
    int _documentSource;	// 16 = 0x10
    _Bool _significantWork;	// 20 = 0x14
    struct {
        unsigned int documentSource:1;
        unsigned int significantWork:1;
    } _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002a8acf
@property(nonatomic) _Bool significantWork; // @synthesize significantWork=_significantWork;
@property(retain, nonatomic) NSString *componentName; // @synthesize componentName=_componentName;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002a8a13
- (unsigned long long)hash;	// IMP=0x00000000002a899c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002a88a1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002a87ed
- (void)copyTo:(id)arg1;	// IMP=0x00000000002a8766
- (void)writeTo:(id)arg1;	// IMP=0x00000000002a86d9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002a86cc
- (id)dictionaryRepresentation;	// IMP=0x00000000002a852d
- (id)description;	// IMP=0x00000000002a847e
@property(nonatomic) _Bool hasSignificantWork;
@property(readonly, nonatomic) _Bool hasComponentName;
- (int)StringAsDocumentSource:(id)arg1;	// IMP=0x00000000002a82e8
- (id)documentSourceAsString:(int)arg1;	// IMP=0x00000000002a8237
@property(nonatomic) _Bool hasDocumentSource;
@property(nonatomic) int documentSource; // @synthesize documentSource=_documentSource;

@end
