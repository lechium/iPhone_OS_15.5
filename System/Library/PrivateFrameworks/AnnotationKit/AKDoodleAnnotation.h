//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AnnotationKit/AKRectangularAnnotationProtocol-Protocol.h>
#import <AnnotationKit/AKRotatableAnnotationProtocol-Protocol.h>
#import <AnnotationKit/AKStrokedAnnotationProtocol-Protocol.h>

@class NSString, UIBezierPath, UIColor;

@interface AKDoodleAnnotation <AKRectangularAnnotationProtocol, AKRotatableAnnotationProtocol, AKStrokedAnnotationProtocol>
{
    _Bool _dashed;	// 8 = 0x8
    _Bool _hasShadow;	// 9 = 0x9
    _Bool _pathIsPrestroked;	// 10 = 0xa
    _Bool _pathIsDot;	// 11 = 0xb
    double _rotationAngle;	// 16 = 0x10
    double _strokeWidth;	// 24 = 0x18
    UIColor *_strokeColor;	// 32 = 0x20
    long long _brushStyle;	// 40 = 0x28
    UIBezierPath *_path;	// 48 = 0x30
    struct CGRect _rectangle;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000095c23
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;	// IMP=0x000000000009535b
+ (id)keyPathsForValuesAffectingDrawingBounds;	// IMP=0x00000000000952ca
+ (id)keyPathsForValuesAffectingHitTestBounds;	// IMP=0x0000000000095239
- (void).cxx_destruct;	// IMP=0x00000000000963a0
@property _Bool pathIsDot; // @synthesize pathIsDot=_pathIsDot;
@property _Bool pathIsPrestroked; // @synthesize pathIsPrestroked=_pathIsPrestroked;
@property(retain) UIBezierPath *path; // @synthesize path=_path;
@property _Bool hasShadow; // @synthesize hasShadow=_hasShadow;
@property(getter=brushStyle) long long brushStyle; // @synthesize brushStyle=_brushStyle;
@property(getter=isDashed) _Bool dashed; // @synthesize dashed=_dashed;
@property(retain) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property double rotationAngle; // @synthesize rotationAngle=_rotationAngle;
@property struct CGRect rectangle; // @synthesize rectangle=_rectangle;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000095e65
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000095c2b
- (void)translateBy:(struct CGPoint)arg1;	// IMP=0x0000000000095b73
- (void)flattenModelExifOrientation:(long long)arg1 withModelSize:(struct CGSize)arg2;	// IMP=0x0000000000095a56
- (void)adjustModelToCompensateForOriginalExif;	// IMP=0x0000000000095933
- (struct CGRect)hitTestBounds;	// IMP=0x0000000000095820
- (id)keysForValuesToObserveForAdornments;	// IMP=0x000000000009578f
- (id)keysForValuesToObserveForRedrawing;	// IMP=0x00000000000956fe
- (id)keysForValuesToObserveForUndo;	// IMP=0x000000000009566d
- (id)displayName;	// IMP=0x0000000000095601

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
