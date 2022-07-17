//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClockKitUI/CLKUIQuad.h>

@class NUNIRenderer, NUNIResources, NUNIScene;

@interface NUNIMetalQuad : CLKUIQuad
{
    double _baseTime;	// 8 = 0x8
    NUNIRenderer *_renderer;	// 16 = 0x10
    NUNIResources *_resources;	// 24 = 0x18
    struct CGSize _viewport;	// 32 = 0x20
    unsigned int _isPrepared:1;	// 48 = 0x30
    NUNIScene *_scene;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000004e9f
@property(retain, nonatomic) NUNIScene *scene; // @synthesize scene=_scene;
- (_Bool)prepareForTime:(double)arg1;	// IMP=0x0000000000004dfb
- (void)renderForDisplayWithEncoder:(id)arg1;	// IMP=0x0000000000004d5e
- (void)performOffscreenPassesWithCommandBuffer:(id)arg1;	// IMP=0x0000000000004cc1
- (void)setupForQuadView:(id)arg1;	// IMP=0x0000000000004be5
- (id)initWithResources:(id)arg1;	// IMP=0x0000000000004b77

@end
