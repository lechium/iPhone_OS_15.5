//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UITextPreviewRenderer-Protocol.h>

@class NSString, NSTextLayoutManager, NSTextRange, UIImage;

@interface _UITextLayoutPreviewRenderer : NSObject <_UITextPreviewRenderer>
{
    _Bool _calculated;	// 8 = 0x8
    _Bool _unifyRects;	// 9 = 0x9
    struct CGRect _firstRect;	// 16 = 0x10
    struct CGRect _lastRect;	// 48 = 0x30
    struct CGRect _middleRect;	// 80 = 0x50
    UIImage *_image;	// 112 = 0x70
    NSTextLayoutManager *_textLayoutManager;	// 120 = 0x78
    NSTextRange *_range;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x000000000094d31c
@property(readonly, nonatomic) NSTextRange *range; // @synthesize range=_range;
@property(readonly, nonatomic) NSTextLayoutManager *textLayoutManager; // @synthesize textLayoutManager=_textLayoutManager;
- (void)removeRenderingAttributes:(id)arg1;	// IMP=0x000000000094d1d3
- (void)addRenderingAttributes:(id)arg1;	// IMP=0x000000000094d15a
- (void)_updateDataIfNeeded;	// IMP=0x000000000094c6ed
@property(readonly, nonatomic) struct CGRect lastLineRect;
@property(readonly, nonatomic) struct CGRect bodyRect;
@property(readonly, nonatomic) struct CGRect firstLineRect;
@property(readonly, nonatomic) UIImage *image;
- (id)initWithTextLayoutManager:(id)arg1 range:(id)arg2 unifyRects:(_Bool)arg3;	// IMP=0x000000000094c57d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
