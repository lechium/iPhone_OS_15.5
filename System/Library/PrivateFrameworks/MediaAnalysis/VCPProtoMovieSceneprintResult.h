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
@interface VCPProtoMovieSceneprintResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>
{
    NSData *_sceneprintBlob;	// 8 = 0x8
    VCPProtoTime *_timestamp;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00000000000ceb2b
- (void).cxx_destruct;	// IMP=0x00000000001862ba
@property(retain, nonatomic) NSData *sceneprintBlob; // @synthesize sceneprintBlob=_sceneprintBlob;
@property(retain, nonatomic) VCPProtoTime *timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001861f6
- (unsigned long long)hash;	// IMP=0x00000000001861a9
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001860e1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000186043
- (void)copyTo:(id)arg1;	// IMP=0x0000000000185fd2
- (void)writeTo:(id)arg1;	// IMP=0x0000000000185f73
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000185f66
- (id)dictionaryRepresentation;	// IMP=0x0000000000185cc2
- (id)description;	// IMP=0x0000000000185c13
- (id)exportToLegacyDictionary;	// IMP=0x00000000000cecf0

@end

