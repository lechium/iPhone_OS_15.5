//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AnnotationKit/AKRectangularAnnotationProtocol-Protocol.h>

@class NSString;

@interface AKCropAnnotation <AKRectangularAnnotationProtocol>
{
    _Bool _hidden;	// 8 = 0x8
    _Bool _cropApplied;	// 9 = 0x9
    _Bool _showHandles;	// 10 = 0xa
    struct CGColor *_color;	// 16 = 0x10
    struct CGRect _rectangle;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000007ec6e
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;	// IMP=0x000000000007e4f7
+ (id)keyPathsForValuesAffectingDrawingBounds;	// IMP=0x000000000007e466
+ (id)keyPathsForValuesAffectingHitTestBounds;	// IMP=0x000000000007e3d5
@property(nonatomic) struct CGColor *color; // @synthesize color=_color;
@property _Bool showHandles; // @synthesize showHandles=_showHandles;
@property _Bool cropApplied; // @synthesize cropApplied=_cropApplied;
@property _Bool hidden; // @synthesize hidden=_hidden;
@property struct CGRect rectangle; // @synthesize rectangle=_rectangle;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007ed29
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007ec76
- (void)translateBy:(struct CGPoint)arg1;	// IMP=0x000000000007ebfd
- (void)flattenModelExifOrientation:(long long)arg1 withModelSize:(struct CGSize)arg2;	// IMP=0x000000000007eae0
- (void)adjustModelToCompensateForOriginalExif;	// IMP=0x000000000007e9a1
- (struct CGRect)hitTestBounds;	// IMP=0x000000000007e983
- (id)keysForValuesToObserveForAdornments;	// IMP=0x000000000007e8f2
- (id)keysForValuesToObserveForRedrawing;	// IMP=0x000000000007e861
- (id)keysForValuesToObserveForUndo;	// IMP=0x000000000007e7d0
- (id)displayName;	// IMP=0x000000000007e764
- (void)dealloc;	// IMP=0x000000000007e6e2
- (id)init;	// IMP=0x000000000007e621

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
