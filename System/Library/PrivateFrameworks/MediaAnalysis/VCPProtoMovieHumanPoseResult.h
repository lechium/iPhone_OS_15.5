//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaAnalysis/NSCopying-Protocol.h>
#import <MediaAnalysis/VCPProtoResultLegacyConversionProtocol-Protocol.h>

@class VCPProtoBounds, VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieHumanPoseResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>
{
    VCPProtoBounds *_bounds;	// 8 = 0x8
    float _confidence;	// 16 = 0x10
    int _flags;	// 20 = 0x14
    VCPProtoTimeRange *_timeRange;	// 24 = 0x18
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x000000000003d725
- (void).cxx_destruct;	// IMP=0x000000000008a230
@property(nonatomic) int flags; // @synthesize flags=_flags;
@property(retain, nonatomic) VCPProtoBounds *bounds; // @synthesize bounds=_bounds;
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000008a0f1
- (unsigned long long)hash;	// IMP=0x0000000000089f9a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000089ea9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000089deb
- (void)copyTo:(id)arg1;	// IMP=0x0000000000089d5a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000089cc9
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000089cbc
- (id)dictionaryRepresentation;	// IMP=0x0000000000089843
- (id)description;	// IMP=0x0000000000089794
- (id)exportToLegacyDictionary;	// IMP=0x000000000003d9ff

@end

