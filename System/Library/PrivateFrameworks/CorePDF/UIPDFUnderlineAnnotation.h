//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface UIPDFUnderlineAnnotation
{
}

- (_Bool)recognizeGestures;	// IMP=0x000000000008631f
- (void)drawInContext:(struct CGContext *)arg1;	// IMP=0x000000000008622d
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;	// IMP=0x0000000000086134
- (void)drawLayerRotated:(id)arg1 inContext:(struct CGContext *)arg2 selection:(id)arg3 rectangles:(unsigned long long)arg4;	// IMP=0x0000000000085e04
- (void)drawLayerUpright:(id)arg1 inContext:(struct CGContext *)arg2 selection:(id)arg3 rectangles:(unsigned long long)arg4;	// IMP=0x00000000000859b2
- (Class)viewClass;	// IMP=0x00000000000859a1
- (int)annotationType;	// IMP=0x0000000000085996

@end
