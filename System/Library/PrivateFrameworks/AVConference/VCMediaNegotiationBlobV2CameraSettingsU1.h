//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AVConference/NSCopying-Protocol.h>

@class NSMutableArray, VCVideoRuleCollections;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobV2CameraSettingsU1 : PBCodable <NSCopying>
{
    unsigned int _landscapeAspectRatioX;	// 8 = 0x8
    unsigned int _landscapeAspectRatioY;	// 12 = 0xc
    unsigned int _mismatchedDisplayAspectRatioX;	// 16 = 0x10
    unsigned int _mismatchedDisplayAspectRatioY;	// 20 = 0x14
    NSMutableArray *_payloads;	// 24 = 0x18
    unsigned int _portraitAspectRatioX;	// 32 = 0x20
    unsigned int _portraitAspectRatioY;	// 36 = 0x24
    unsigned int _rtpSSRC;	// 40 = 0x28
    struct {
        unsigned int landscapeAspectRatioX:1;
        unsigned int landscapeAspectRatioY:1;
        unsigned int mismatchedDisplayAspectRatioX:1;
        unsigned int mismatchedDisplayAspectRatioY:1;
        unsigned int portraitAspectRatioX:1;
        unsigned int portraitAspectRatioY:1;
        unsigned int rtpSSRC:1;
    } _has;	// 44 = 0x2c
}

+ (Class)payloadsType;	// IMP=0x00000000002631c2
@property(nonatomic) unsigned int mismatchedDisplayAspectRatioY; // @synthesize mismatchedDisplayAspectRatioY=_mismatchedDisplayAspectRatioY;
@property(nonatomic) unsigned int mismatchedDisplayAspectRatioX; // @synthesize mismatchedDisplayAspectRatioX=_mismatchedDisplayAspectRatioX;
@property(nonatomic) unsigned int portraitAspectRatioY; // @synthesize portraitAspectRatioY=_portraitAspectRatioY;
@property(nonatomic) unsigned int portraitAspectRatioX; // @synthesize portraitAspectRatioX=_portraitAspectRatioX;
@property(nonatomic) unsigned int landscapeAspectRatioY; // @synthesize landscapeAspectRatioY=_landscapeAspectRatioY;
@property(nonatomic) unsigned int landscapeAspectRatioX; // @synthesize landscapeAspectRatioX=_landscapeAspectRatioX;
@property(retain, nonatomic) NSMutableArray *payloads; // @synthesize payloads=_payloads;
@property(nonatomic) unsigned int rtpSSRC; // @synthesize rtpSSRC=_rtpSSRC;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000026463c
- (unsigned long long)hash;	// IMP=0x000000000026453e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002643af
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000264125
- (void)copyTo:(id)arg1;	// IMP=0x0000000000263fbe
- (void)writeTo:(id)arg1;	// IMP=0x0000000000263dd1
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000263dc4
- (id)dictionaryRepresentation;	// IMP=0x0000000000263427
- (id)description;	// IMP=0x000000000026338d
@property(nonatomic) _Bool hasMismatchedDisplayAspectRatioY;
@property(nonatomic) _Bool hasMismatchedDisplayAspectRatioX;
@property(nonatomic) _Bool hasPortraitAspectRatioY;
@property(nonatomic) _Bool hasPortraitAspectRatioX;
@property(nonatomic) _Bool hasLandscapeAspectRatioY;
@property(nonatomic) _Bool hasLandscapeAspectRatioX;
- (id)payloadsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002631a5
- (unsigned long long)payloadsCount;	// IMP=0x0000000000263188
- (void)addPayloads:(id)arg1;	// IMP=0x000000000026313b
- (void)clearPayloads;	// IMP=0x000000000026311e
@property(nonatomic) _Bool hasRtpSSRC;
- (void)dealloc;	// IMP=0x0000000000263070
- (_Bool)setupVideoRuleCollection:(id)arg1;	// IMP=0x00000000002a4e1e
- (id)rulesForEncodeType:(unsigned char)arg1 paylaod:(int)arg2 videoRuleCollection:(id)arg3;	// IMP=0x00000000002a4d89
- (void)printWithLogFile:(void *)arg1 prefix:(id)arg2 screenSize:(struct CGSize)arg3;	// IMP=0x00000000002a4a6d
@property(readonly, nonatomic) VCVideoRuleCollections *videoRuleCollections;
- (_Bool)addVideoRules:(id)arg1 encodingType:(unsigned char)arg2 payload:(int)arg3 videoRuleCollections:(id)arg4;	// IMP=0x00000000002a45c9
@property(readonly, nonatomic) struct CGSize orientationMismatchDisplayRatio;
- (void)aspectRatioPortrait:(struct CGSize *)arg1 aspectRatioLandscape:(struct CGSize *)arg2 orientationMismatchAspectRatioLandscape:(struct CGSize *)arg3 orientationMismatchAspectRatioPortrait:(struct CGSize *)arg4 screenSize:(struct CGSize)arg5;	// IMP=0x00000000002a4352
- (id)initWithSSRC:(unsigned int)arg1 videoRuleCollections:(id)arg2 screenSize:(struct CGSize)arg3 aspectRatioPortrait:(struct CGSize)arg4 aspectRatioLandscape:(struct CGSize)arg5 orientationMismatchAspectRatioLandscape:(struct CGSize)arg6;	// IMP=0x00000000002a4148

@end

