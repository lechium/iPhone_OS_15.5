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
@interface VCPProtoMovieFineSubjectMotionResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>
{
    float _actionScore;	// 8 = 0x8
    VCPProtoTimeRange *_timeRange;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00000000001e6d99
- (void).cxx_destruct;	// IMP=0x00000000001e6d86
@property(nonatomic) float actionScore; // @synthesize actionScore=_actionScore;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001e6cd1
- (unsigned long long)hash;	// IMP=0x00000000001e6bba
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001e6b0b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001e6a81
- (void)copyTo:(id)arg1;	// IMP=0x00000000001e6a23
- (void)writeTo:(id)arg1;	// IMP=0x00000000001e69c2
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001e69b5
- (id)dictionaryRepresentation;	// IMP=0x00000000001e66b1
- (id)description;	// IMP=0x00000000001e6602
- (id)exportToLegacyDictionary;	// IMP=0x00000000001e6f0a

@end

