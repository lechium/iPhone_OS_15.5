//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaToolbox/CALayerDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FigSubtitleWebVTTCueCALayer <CALayerDelegate>
{
    struct OpaqueFigSubtitleWebVTTCueCALayerInternal *layerInternal;	// 24 = 0x18
}

- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;	// IMP=0x00000000003d8801
- (void)layoutSublayersOfLayer:(id)arg1;	// IMP=0x00000000003d83eb
- (void)setDefaultFontSize:(double)arg1;	// IMP=0x00000000003d833d
- (void)setViewport:(struct CGRect)arg1;	// IMP=0x00000000003d82c7
- (void)setRenderer:(struct OpaqueFigSubtitleRenderer *)arg1;	// IMP=0x00000000003d8254
- (void)setContent:(struct __CFAttributedString *)arg1;	// IMP=0x00000000003d81e4
- (struct __CFString *)getContentID;	// IMP=0x00000000003d8148
- (unsigned char)isDirty;	// IMP=0x00000000003d8087
- (struct CGRect)getSuggestedBounds:(unsigned char)arg1;	// IMP=0x00000000003d7e0e
- (void)setCuePosition:(struct CGPoint)arg1;	// IMP=0x00000000003d7be1
- (void)dealloc;	// IMP=0x00000000003d7b4b
- (id)init;	// IMP=0x00000000003d7a28

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
