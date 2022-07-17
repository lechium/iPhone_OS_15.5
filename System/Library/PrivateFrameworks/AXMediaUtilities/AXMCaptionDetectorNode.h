//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AXImageCaptionModel, AXMSceneDetectorNode, NSURL;

@interface AXMCaptionDetectorNode
{
    AXMSceneDetectorNode *_sceneDetector;	// 8 = 0x8
}

+ (id)title;	// IMP=0x00000000000ab0d8
+ (_Bool)isSupported;	// IMP=0x00000000000ab0c8
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000aae59
+ (struct CGSize)preferredModelInputSize;	// IMP=0x00000000000aadea
- (void).cxx_destruct;	// IMP=0x00000000000ab1cc
@property(nonatomic) __weak AXMSceneDetectorNode *sceneDetector; // @synthesize sceneDetector=_sceneDetector;
@property(readonly, nonatomic) AXImageCaptionModel *effectiveCaptionModelInfo;
@property(readonly, nonatomic) NSURL *effectiveModelURL;
@property(nonatomic) unsigned long long genderStrategy;
@property(nonatomic) unsigned long long overrideScaleMethod;
@property(retain, nonatomic) NSURL *overrideModelURL;
- (void)evaluate:(id)arg1 metrics:(id)arg2;	// IMP=0x00000000000ab0e5
- (_Bool)requiresVisionFramework;	// IMP=0x00000000000ab0d0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000aafa7
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000aae61
- (void)dealloc;	// IMP=0x00000000000aae2a
- (void)nodeInitialize;	// IMP=0x00000000000aadfb

@end
