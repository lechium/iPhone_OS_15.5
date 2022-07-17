//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOTrafficCameraInformation;

@interface GEOSpokenGuidanceFeedback : PBCodable <NSCopying>
{
    GEOTrafficCameraInformation *_trafficCameraGuidanceFeedback;	// 8 = 0x8
    int _spokenGuidanceIndex;	// 16 = 0x10
    _Bool _shortPrompt;	// 20 = 0x14
    struct {
        unsigned int has_spokenGuidanceIndex:1;
        unsigned int has_shortPrompt:1;
    } _flags;	// 24 = 0x18
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000c759b7
- (void).cxx_destruct;	// IMP=0x0000000000c75ded
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000c75d44
- (unsigned long long)hash;	// IMP=0x0000000000c75cba
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c75ba1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c75af4
- (void)copyTo:(id)arg1;	// IMP=0x0000000000c75a62
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c759d3
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c759c4
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000c75957
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000c75945
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000c75735
- (id)jsonRepresentation;	// IMP=0x0000000000c75726
- (id)dictionaryRepresentation;	// IMP=0x0000000000c7556b
- (id)description;	// IMP=0x0000000000c754bc
@property(retain, nonatomic) GEOTrafficCameraInformation *trafficCameraGuidanceFeedback;
@property(readonly, nonatomic) _Bool hasTrafficCameraGuidanceFeedback;
@property(nonatomic) _Bool hasShortPrompt;
@property(nonatomic) _Bool shortPrompt;
@property(nonatomic) _Bool hasSpokenGuidanceIndex;
@property(nonatomic) int spokenGuidanceIndex;

@end
