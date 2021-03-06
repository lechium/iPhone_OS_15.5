//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UITextPreviewRenderer-Protocol.h>

@class NSLayoutManager, NSString, UIImage;

@interface UITextDragPreviewRenderer : NSObject <_UITextPreviewRenderer>
{
    struct _NSRange _range;	// 8 = 0x8
    struct CGRect _firstRect;	// 24 = 0x18
    struct CGRect _lastRect;	// 56 = 0x38
    struct CGRect _middleRect;	// 88 = 0x58
    struct CGPoint _origin;	// 120 = 0x78
    UIImage *_image;	// 136 = 0x88
    _Bool _calculated;	// 144 = 0x90
    _Bool _unifyRects;	// 145 = 0x91
    NSLayoutManager *_layoutManager;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x0000000000fbb9ab
@property(readonly, nonatomic) NSLayoutManager *layoutManager; // @synthesize layoutManager=_layoutManager;
- (void)removeRenderingAttributes:(id)arg1;	// IMP=0x0000000000fbb80d
- (void)addRenderingAttributes:(id)arg1;	// IMP=0x0000000000fbb79d
- (void)adjustFirstLineRect:(inout struct CGRect *)arg1 bodyRect:(inout struct CGRect *)arg2 lastLineRect:(inout struct CGRect *)arg3 textOrigin:(struct CGPoint)arg4;	// IMP=0x0000000000fbb797
- (struct CGRect)_rawBoundingRect;	// IMP=0x0000000000fbb63f
- (struct CGRect)_correctlyOffsetBoundingRect;	// IMP=0x0000000000fbb491
- (void)_calculateRectsUsingLayoutManager:(id)arg1;	// IMP=0x0000000000fbaacf
- (void)_calculate;	// IMP=0x0000000000fba77c
@property(readonly, nonatomic) struct CGRect lastLineRect;
@property(readonly, nonatomic) struct CGRect bodyRect;
@property(readonly, nonatomic) struct CGRect firstLineRect;
@property(readonly, nonatomic) UIImage *image;
- (id)initWithLayoutManager:(id)arg1 range:(struct _NSRange)arg2 unifyRects:(_Bool)arg3;	// IMP=0x0000000000fba613
- (id)initWithLayoutManager:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000fba5fb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

