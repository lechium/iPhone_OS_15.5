//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@class PDFPageLayerEffectPrivate;

__attribute__((visibility("hidden")))
@interface PDFPageLayerEffect : CALayer
{
    PDFPageLayerEffectPrivate *_private;	// 8 = 0x8
}

+ (id)createFlashEffectForPDFLinkAnnotation:(id)arg1 withLayer:(id)arg2 forType:(long long)arg3;	// IMP=0x00000000000809c1
+ (id)createPDFNoteLayerEffectForAnnotation:(id)arg1 withLayer:(id)arg2;	// IMP=0x00000000000808da
+ (id)createPDFMarkupLayerEffectsForAnnotation:(id)arg1 withLayer:(id)arg2;	// IMP=0x000000000008070d
+ (id)createPDFAnnotationLayerEffectForAnnotation:(id)arg1 withLayer:(id)arg2;	// IMP=0x0000000000080379
+ (id)createPDFCoachmarkLayerEffectsWithFrame:(struct CGRect)arg1 withLayer:(id)arg2;	// IMP=0x000000000007ff65
+ (id)createPDFSelectionLayerEffectsForSelections:(id)arg1 withLayer:(id)arg2;	// IMP=0x000000000007fde6
- (void).cxx_destruct;	// IMP=0x0000000000080e57
- (id)pdfResult;	// IMP=0x000000000007fdde
- (void)updateColor:(unsigned long long)arg1;	// IMP=0x000000000007fdd8
- (void)addSelection:(id)arg1;	// IMP=0x000000000007fdd2
- (void)setSelections:(id)arg1;	// IMP=0x000000000007fdcc
- (id)annotation;	// IMP=0x000000000007fdc4
- (_Bool)shouldRotateContent;	// IMP=0x000000000007fdb0
- (void)update;	// IMP=0x000000000007fdaa
- (void)setPageFrame:(struct CGRect)arg1;	// IMP=0x000000000007fd89
- (struct CGRect)pageFrame;	// IMP=0x000000000007fd66
- (id)UUID;	// IMP=0x000000000007fd4d
- (id)initWithPDFPageLayer:(id)arg1;	// IMP=0x000000000007fae6

@end
