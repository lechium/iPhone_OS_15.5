//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaAnalysis/NSCopying-Protocol.h>
#import <MediaAnalysis/VCPProtoResultLegacyConversionProtocol-Protocol.h>

__attribute__((visibility("hidden")))
@interface VCPProtoImageJunkResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>
{
    float _confidence;	// 8 = 0x8
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00000000001c87ec
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001c87b1
- (unsigned long long)hash;	// IMP=0x00000000001c86c1
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001c8654
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001c85ff
- (void)copyTo:(id)arg1;	// IMP=0x00000000001c85e8
- (void)writeTo:(id)arg1;	// IMP=0x00000000001c85ca
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001c85bd
- (id)dictionaryRepresentation;	// IMP=0x00000000001c8398
- (id)description;	// IMP=0x00000000001c82e9
- (id)exportToLegacyDictionary;	// IMP=0x00000000001c88d4

@end

