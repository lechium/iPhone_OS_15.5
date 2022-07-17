//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaAnalysis/NSCopying-Protocol.h>
#import <MediaAnalysis/VCPProtoResultLegacyConversionProtocol-Protocol.h>

@class NSData, VCPProtoTime;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieFeatureResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>
{
    NSData *_featureBlob;	// 8 = 0x8
    VCPProtoTime *_timestamp;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00000000001e628b
- (void).cxx_destruct;	// IMP=0x00000000001e6248
@property(retain, nonatomic) NSData *featureBlob; // @synthesize featureBlob=_featureBlob;
@property(retain, nonatomic) VCPProtoTime *timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001e6184
- (unsigned long long)hash;	// IMP=0x00000000001e6137
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001e606f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001e5fd1
- (void)copyTo:(id)arg1;	// IMP=0x00000000001e5f60
- (void)writeTo:(id)arg1;	// IMP=0x00000000001e5f01
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001e5ef4
- (id)dictionaryRepresentation;	// IMP=0x00000000001e5c50
- (id)description;	// IMP=0x00000000001e5ba1
- (id)exportToLegacyDictionary;	// IMP=0x00000000001e6450

@end
