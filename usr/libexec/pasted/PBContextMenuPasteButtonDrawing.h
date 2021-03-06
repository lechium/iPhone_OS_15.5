//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UISTextParagraphDrawing, UISVectorGlyphDrawing;

@interface PBContextMenuPasteButtonDrawing : NSObject
{
    UISTextParagraphDrawing *_titleDrawing;	// 8 = 0x8
    UISVectorGlyphDrawing *_glyph;	// 16 = 0x10
    struct CGPoint _glyphOffset;	// 24 = 0x18
    struct CGSize _size;	// 40 = 0x28
    struct CGPoint _titleOffset;	// 56 = 0x38
}

+ (unsigned long long)_authenticationMessageContextForStyle:(id)arg1 tag:(id)arg2;	// IMP=0x002000000001a854
+ (id)_drawingWithStyle:(id)arg1 tag:(id)arg2;	// IMP=0x001000000001a7e8
- (void).cxx_destruct;	// IMP=0x002000000001b279
- (void)drawInContext:(struct CGContext *)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x001000000001b1de
@property(readonly, nonatomic) struct CGSize drawingSize;
- (void)dealloc;	// IMP=0x001000000001b177
- (id)initWithStyle:(id)arg1 tag:(id)arg2;	// IMP=0x001000000001a885

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

