//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKHighlightOverlayLayer, CKTextComponentLayer;

@interface CKTextComponentLayerHighlighter : NSObject
{
    CKTextComponentLayer *_textComponentLayer;	// 8 = 0x8
    CKHighlightOverlayLayer *_highlightOverlayLayer;	// 16 = 0x10
    struct _NSRange _highlightedRange;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000034285d
@property(nonatomic) struct _NSRange highlightedRange; // @synthesize highlightedRange=_highlightedRange;
- (void)layoutHighlight;	// IMP=0x000000000034276e
- (id)initWithTextComponentLayer:(id)arg1;	// IMP=0x0000000000342346

@end

