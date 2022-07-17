//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaAnalysis/NSCopying-Protocol.h>
#import <MediaAnalysis/VCPProtoResultLegacyConversionProtocol-Protocol.h>

@class VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieSceneResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>
{
    float _distanceToPreviousScene;	// 8 = 0x8
    float _flickerScore;	// 12 = 0xc
    float _qualityScore;	// 16 = 0x10
    float _sceneprintDistanceToPreviousScene;	// 20 = 0x14
    VCPProtoTimeRange *_timeRange;	// 24 = 0x18
    struct {
        unsigned int distanceToPreviousScene:1;
        unsigned int flickerScore:1;
        unsigned int sceneprintDistanceToPreviousScene:1;
    } _has;	// 32 = 0x20
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x0000000000218cfc
- (void).cxx_destruct;	// IMP=0x0000000000218ce9
@property(nonatomic) float sceneprintDistanceToPreviousScene; // @synthesize sceneprintDistanceToPreviousScene=_sceneprintDistanceToPreviousScene;
@property(nonatomic) float flickerScore; // @synthesize flickerScore=_flickerScore;
@property(nonatomic) float distanceToPreviousScene; // @synthesize distanceToPreviousScene=_distanceToPreviousScene;
@property(nonatomic) float qualityScore; // @synthesize qualityScore=_qualityScore;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000218b9a
- (unsigned long long)hash;	// IMP=0x000000000021878a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000218652
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000218564
- (void)copyTo:(id)arg1;	// IMP=0x00000000002184b0
- (void)writeTo:(id)arg1;	// IMP=0x00000000002183e9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002183dc
- (id)dictionaryRepresentation;	// IMP=0x0000000000217e7e
- (id)description;	// IMP=0x0000000000217dcf
@property(nonatomic) _Bool hasSceneprintDistanceToPreviousScene;
@property(nonatomic) _Bool hasFlickerScore;
@property(nonatomic) _Bool hasDistanceToPreviousScene;
- (id)exportToLegacyDictionary;	// IMP=0x0000000000218fc9

@end
