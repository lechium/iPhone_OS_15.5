//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITextSelectionRect.h>

__attribute__((visibility("hidden")))
@interface WKTextSelectionRect : UITextSelectionRect
{
    struct SelectionGeometry _selectionGeometry;	// 8 = 0x8
    double _scaleFactor;	// 96 = 0x60
}

- (id).cxx_construct;	// IMP=0x00000000003fd475
- (_Bool)isVertical;	// IMP=0x00000000003fd460
- (_Bool)containsEnd;	// IMP=0x00000000003fd44f
- (_Bool)containsStart;	// IMP=0x00000000003fd43e
- (id)range;	// IMP=0x00000000003fd436
- (long long)writingDirection;	// IMP=0x00000000003fd424
- (struct CGRect)rect;	// IMP=0x00000000003fd3ec
- (id)_customHandleInfo;	// IMP=0x00000000003fd362
- (id)_path;	// IMP=0x00000000003fd225
- (id)initWithSelectionGeometry:(const void *)arg1 scaleFactor:(double)arg2;	// IMP=0x00000000003fd19d
- (id)initWithCGRect:(struct CGRect)arg1;	// IMP=0x00000000003fd11f

@end

