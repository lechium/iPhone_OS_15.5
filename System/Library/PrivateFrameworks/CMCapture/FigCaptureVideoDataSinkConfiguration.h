//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface FigCaptureVideoDataSinkConfiguration
{
    _Bool _discardsLateVideoFrames;	// 16 = 0x10
    _Bool _derivedFromPreview;	// 17 = 0x11
    _Bool _sceneStabilityMetadataEnabled;	// 18 = 0x12
}

@property(nonatomic) _Bool sceneStabilityMetadataEnabled; // @synthesize sceneStabilityMetadataEnabled=_sceneStabilityMetadataEnabled;
@property(nonatomic) _Bool derivedFromPreview; // @synthesize derivedFromPreview=_derivedFromPreview;
@property(nonatomic) _Bool discardsLateVideoFrames; // @synthesize discardsLateVideoFrames=_discardsLateVideoFrames;
- (int)sinkType;	// IMP=0x000000000000b45c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000b391
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000b2f4
- (id)description;	// IMP=0x000000000000b249
- (id)copyXPCEncoding;	// IMP=0x000000000000b1a6
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x000000000000b118

@end

