//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIImageCGSVGDocumentContent
{
    struct CGSVGDocument *_svgDocumentRef;	// 40 = 0x28
}

- (void)_drawWithoutEffectInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;	// IMP=0x00000000006340b7
- (id)description;	// IMP=0x0000000000634087
- (unsigned long long)hash;	// IMP=0x0000000000634076
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000063400a
- (struct CGSize)sizeInPixels;	// IMP=0x0000000000633ff5
- (struct CGSVGDocument *)CGSVGDocument;	// IMP=0x0000000000633fe4
- (_Bool)isCGSVGDocument;	// IMP=0x0000000000633fdc
- (_Bool)canScaleImageToTargetResolution;	// IMP=0x0000000000633fd4
- (void)dealloc;	// IMP=0x0000000000633f93
- (id)initWithScale:(double)arg1;	// IMP=0x0000000000633f0c
- (id)initWithCGSVGDocument:(struct CGSVGDocument *)arg1 scale:(double)arg2;	// IMP=0x0000000000633dc3

@end

