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
@interface VCPProtoLivePhotoRecommendationResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>
{
    float _qualityScore;	// 8 = 0x8
    VCPProtoTimeRange *_timeRange;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00000000001d6ce4
- (void).cxx_destruct;	// IMP=0x00000000001d6a1b
@property(nonatomic) float qualityScore; // @synthesize qualityScore=_qualityScore;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001d6966
- (unsigned long long)hash;	// IMP=0x00000000001d684f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001d67a0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001d6716
- (void)copyTo:(id)arg1;	// IMP=0x00000000001d66b8
- (void)writeTo:(id)arg1;	// IMP=0x00000000001d6657
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001d664a
- (id)dictionaryRepresentation;	// IMP=0x00000000001d6346
- (id)description;	// IMP=0x00000000001d6297
- (id)exportToLegacyDictionary;	// IMP=0x00000000001d6e55

@end
