//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@class NSArray;

@interface CKHighlightOverlayLayer : CALayer
{
    NSArray *_rects;	// 8 = 0x8
    CALayer *_targetLayer;	// 16 = 0x10
}

+ (_Bool)needsDisplayForKey:(id)arg1;	// IMP=0x000000000034d4ad
+ (id)defaultValueForKey:(id)arg1;	// IMP=0x000000000034d354
- (void).cxx_destruct;	// IMP=0x000000000034db7d
@property __weak CALayer *targetLayer; // @synthesize targetLayer=_targetLayer;
- (id)hitTest:(struct CGPoint)arg1;	// IMP=0x000000000034db48
- (void)drawInContext:(struct CGContext *)arg1;	// IMP=0x000000000034d620
- (id)initWithRects:(id)arg1 targetLayer:(id)arg2;	// IMP=0x000000000034d547
- (id)initWithRects:(id)arg1;	// IMP=0x000000000034d533

// Remaining properties
@property(retain) struct CGColor *highlightColor; // @dynamic highlightColor;

@end

