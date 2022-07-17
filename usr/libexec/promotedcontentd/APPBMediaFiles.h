//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface APPBMediaFiles : PBCodable
{
    double _duration;	// 8 = 0x8
    NSMutableArray *_mediaAssets;	// 16 = 0x10
    struct {
        unsigned int duration:1;
    } _has;	// 24 = 0x18
}

+ (Class)mediaAssetsType;	// IMP=0x002000000003ea0b
+ (id)options;	// IMP=0x001000000003e8b3
- (void).cxx_destruct;	// IMP=0x002000000003f787
@property(retain, nonatomic) NSMutableArray *mediaAssets; // @synthesize mediaAssets=_mediaAssets;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000003f5d9
- (unsigned long long)hash;	// IMP=0x001000000003f4a1
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000003f3d6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000003f1e5
- (void)copyTo:(id)arg1;	// IMP=0x001000000003f0fc
- (void)writeTo:(id)arg1;	// IMP=0x001000000003efa5
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000003ef98
- (id)dictionaryRepresentation;	// IMP=0x001000000003eacb
- (id)description;	// IMP=0x001000000003ea1c
- (id)mediaAssetsAtIndex:(unsigned long long)arg1;	// IMP=0x001000000003e9ee
- (unsigned long long)mediaAssetsCount;	// IMP=0x001000000003e9d1
- (void)addMediaAssets:(id)arg1;	// IMP=0x001000000003e967
- (void)clearMediaAssets;	// IMP=0x001000000003e94a
@property(nonatomic) _Bool hasDuration;

@end
