//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AnnotationKit/AKRectangularAnnotationProtocol-Protocol.h>

@class NSString, PKDrawing;

@interface AKInkAnnotation <AKRectangularAnnotationProtocol>
{
    PKDrawing *_drawing;	// 8 = 0x8
    struct CGSize _drawingSize;	// 16 = 0x10
    struct CGRect _rectangle;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000a4861
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;	// IMP=0x00000000000a4222
+ (id)keyPathsForValuesAffectingDrawingBounds;	// IMP=0x00000000000a4191
+ (id)keyPathsForValuesAffectingHitTestBounds;	// IMP=0x00000000000a4100
- (void).cxx_destruct;	// IMP=0x00000000000a4db0
@property struct CGSize drawingSize; // @synthesize drawingSize=_drawingSize;
@property(retain) PKDrawing *drawing; // @synthesize drawing=_drawing;
@property struct CGRect rectangle; // @synthesize rectangle=_rectangle;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a49ad
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a4869
- (void)translateBy:(struct CGPoint)arg1;	// IMP=0x00000000000a47b1
- (void)flattenModelExifOrientation:(long long)arg1 withModelSize:(struct CGSize)arg2;	// IMP=0x00000000000a4694
- (void)adjustModelToCompensateForOriginalExif;	// IMP=0x00000000000a4571
- (struct CGRect)hitTestBounds;	// IMP=0x00000000000a44fb
- (id)keysForValuesToObserveForAdornments;	// IMP=0x00000000000a44e2
- (id)keysForValuesToObserveForRedrawing;	// IMP=0x00000000000a4451
- (id)keysForValuesToObserveForUndo;	// IMP=0x00000000000a43c0
- (_Bool)shouldBurnIn;	// IMP=0x00000000000a43b8
- (id)displayName;	// IMP=0x00000000000a434c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
