//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaAnalysis/NSCopying-Protocol.h>
#import <MediaAnalysis/VCPProtoResultLegacyConversionProtocol-Protocol.h>

__attribute__((visibility("hidden")))
@interface VCPProtoLivePhotoVariationParams : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>
{
    int _errorCode;	// 8 = 0x8
    int _loopFadeLen;	// 12 = 0xc
    int _loopPeriod;	// 16 = 0x10
    int _loopStart;	// 20 = 0x14
    struct {
        unsigned int loopFadeLen:1;
        unsigned int loopPeriod:1;
        unsigned int loopStart:1;
    } _has;	// 24 = 0x18
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00000000001da3e5
@property(nonatomic) int loopStart; // @synthesize loopStart=_loopStart;
@property(nonatomic) int loopPeriod; // @synthesize loopPeriod=_loopPeriod;
@property(nonatomic) int loopFadeLen; // @synthesize loopFadeLen=_loopFadeLen;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001da315
- (unsigned long long)hash;	// IMP=0x00000000001da29f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001da1b7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001da114
- (void)copyTo:(id)arg1;	// IMP=0x00000000001da094
- (void)writeTo:(id)arg1;	// IMP=0x00000000001d9fed
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001d9fe0
- (id)dictionaryRepresentation;	// IMP=0x00000000001d9aac
- (id)description;	// IMP=0x00000000001d99fd
@property(nonatomic) _Bool hasLoopStart;
@property(nonatomic) _Bool hasLoopPeriod;
@property(nonatomic) _Bool hasLoopFadeLen;
- (id)exportToLegacyDictionary;	// IMP=0x00000000001da604

@end

