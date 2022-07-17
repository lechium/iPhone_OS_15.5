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
@interface VCPProtoMovieMusicResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>
{
    float _confidence;	// 8 = 0x8
    VCPProtoTimeRange *_timeRange;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00000000001fc4a8
- (void).cxx_destruct;	// IMP=0x00000000001fc495
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001fc3e0
- (unsigned long long)hash;	// IMP=0x00000000001fc2c9
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001fc21a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001fc190
- (void)copyTo:(id)arg1;	// IMP=0x00000000001fc132
- (void)writeTo:(id)arg1;	// IMP=0x00000000001fc0d1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001fc0c4
- (id)dictionaryRepresentation;	// IMP=0x00000000001fbdc0
- (id)description;	// IMP=0x00000000001fbd11
- (id)exportToLegacyDictionary;	// IMP=0x00000000001fc619

@end
