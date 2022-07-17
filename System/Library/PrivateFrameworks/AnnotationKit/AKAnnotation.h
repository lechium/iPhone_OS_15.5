//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AnnotationKit/NSCopying-Protocol.h>
#import <AnnotationKit/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface AKAnnotation : NSObject <NSSecureCoding, NSCopying>
{
    CDUnknownBlockType _appearanceOverride;	// 8 = 0x8
    _Bool _shouldUseAppearanceOverride;	// 16 = 0x10
    _Bool _isObservingForAppearance;	// 17 = 0x11
    struct CGPDFDocument *_appearanceOverridePDF;	// 24 = 0x18
    _Bool _isObservingForIsEdited;	// 32 = 0x20
    _Bool _isReallyObservingForIsEdited;	// 33 = 0x21
    _Bool _conformsToAKStrokedAnnotationProtocol;	// 34 = 0x22
    _Bool _conformsToAKFilledAnnotationProtocol;	// 35 = 0x23
    _Bool _conformsToAKRectangularAnnotationProtocol;	// 36 = 0x24
    _Bool _conformsToAKFlippableAnnotationProtocol;	// 37 = 0x25
    _Bool _conformsToAKRotatableAnnotationProtocol;	// 38 = 0x26
    _Bool _conformsToAKTextAnnotationProtocol;	// 39 = 0x27
    _Bool _conformsToAKParentAnnotationProtocol;	// 40 = 0x28
    _Bool _editsDisableAppearanceOverride;	// 41 = 0x29
    _Bool _isEdited;	// 42 = 0x2a
    _Bool _isTranslating;	// 43 = 0x2b
    _Bool _isDraggingHandle;	// 44 = 0x2c
    _Bool _isEditingText;	// 45 = 0x2d
    _Bool _textIsFixedWidth;	// 46 = 0x2e
    _Bool _textIsFixedHeight;	// 47 = 0x2f
    _Bool _textIsClipped;	// 48 = 0x30
    _Bool _shouldUsePlaceholderText;	// 49 = 0x31
    _Bool _isBeingCopied;	// 50 = 0x32
    NSString *_UUID;	// 56 = 0x38
    NSString *_customPlaceholderText;	// 64 = 0x40
    double _originalModelBaseScaleFactor;	// 72 = 0x48
    long long _originalExifOrientation;	// 80 = 0x50
    NSDate *_modificationDate;	// 88 = 0x58
    NSString *_author;	// 96 = 0x60
    long long _akSerializationVersion;	// 104 = 0x68
    long long _akSerializationPlatform;	// 112 = 0x70
    AKAnnotation *_parentAnnotation;	// 120 = 0x78
    AKAnnotation *_childAnnotation;	// 128 = 0x80
    struct CGRect _initialDrawingBoundsForAppearanceOverride;	// 136 = 0x88
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000b3682
+ (id)annotationWithData:(id)arg1;	// IMP=0x00000000000b22c2
+ (id)defaultPlaceholderText;	// IMP=0x00000000000b22ba
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;	// IMP=0x00000000000b2107
+ (id)keyPathsForValuesAffectingDrawingBounds;	// IMP=0x00000000000b20e7
+ (id)keyPathsForValuesAffectingHitTestBounds;	// IMP=0x00000000000b20ce
- (void).cxx_destruct;	// IMP=0x00000000000b4566
@property _Bool isBeingCopied; // @synthesize isBeingCopied=_isBeingCopied;
@property struct CGRect initialDrawingBoundsForAppearanceOverride; // @synthesize initialDrawingBoundsForAppearanceOverride=_initialDrawingBoundsForAppearanceOverride;
@property __weak AKAnnotation *childAnnotation; // @synthesize childAnnotation=_childAnnotation;
@property __weak AKAnnotation *parentAnnotation; // @synthesize parentAnnotation=_parentAnnotation;
@property _Bool shouldUsePlaceholderText; // @synthesize shouldUsePlaceholderText=_shouldUsePlaceholderText;
@property _Bool textIsClipped; // @synthesize textIsClipped=_textIsClipped;
@property _Bool textIsFixedHeight; // @synthesize textIsFixedHeight=_textIsFixedHeight;
@property _Bool textIsFixedWidth; // @synthesize textIsFixedWidth=_textIsFixedWidth;
@property _Bool isEditingText; // @synthesize isEditingText=_isEditingText;
@property long long akSerializationPlatform; // @synthesize akSerializationPlatform=_akSerializationPlatform;
@property long long akSerializationVersion; // @synthesize akSerializationVersion=_akSerializationVersion;
@property _Bool isDraggingHandle; // @synthesize isDraggingHandle=_isDraggingHandle;
@property _Bool isTranslating; // @synthesize isTranslating=_isTranslating;
@property(copy) NSString *author; // @synthesize author=_author;
@property(retain) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property _Bool isEdited; // @synthesize isEdited=_isEdited;
@property _Bool editsDisableAppearanceOverride; // @synthesize editsDisableAppearanceOverride=_editsDisableAppearanceOverride;
@property(nonatomic) long long originalExifOrientation; // @synthesize originalExifOrientation=_originalExifOrientation;
@property(nonatomic) double originalModelBaseScaleFactor; // @synthesize originalModelBaseScaleFactor=_originalModelBaseScaleFactor;
@property(copy) NSString *customPlaceholderText; // @synthesize customPlaceholderText=_customPlaceholderText;
@property(readonly) NSString *UUID; // @synthesize UUID=_UUID;
- (_Bool)conformsToAKParentAnnotationProtocol;	// IMP=0x00000000000b433e
- (_Bool)conformsToAKTextAnnotationProtocol;	// IMP=0x00000000000b4335
- (_Bool)conformsToAKRotatableAnnotationProtocol;	// IMP=0x00000000000b432c
- (_Bool)conformsToAKFlippableAnnotationProtocol;	// IMP=0x00000000000b4323
- (_Bool)conformsToAKRectangularAnnotationProtocol;	// IMP=0x00000000000b431a
- (_Bool)conformsToAKFilledAnnotationProtocol;	// IMP=0x00000000000b4311
- (_Bool)conformsToAKStrokedAnnotationProtocol;	// IMP=0x00000000000b4308
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b3c0f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000b368a
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000b3376
@property _Bool shouldUseAppearanceOverride;
@property(readonly) _Bool isUsingAppearanceOverride;
@property(copy) CDUnknownBlockType appearanceOverride;
@property _Bool shouldObserveEdits;
- (void)translateBy:(struct CGPoint)arg1;	// IMP=0x00000000000b2876
- (void)flattenModelExifOrientation:(long long)arg1 withModelSize:(struct CGSize)arg2;	// IMP=0x00000000000b2843
@property(readonly) struct CGRect integralDrawingBounds;
@property(readonly) struct CGRect drawingBounds;
@property(readonly) struct CGRect hitTestBounds;
- (void)adjustModelToCompensateForOriginalExif;	// IMP=0x00000000000b2734
- (id)keysForValuesToObserveForAdornments;	// IMP=0x00000000000b26f3
- (id)keysForValuesToObserveForRedrawing;	// IMP=0x00000000000b26c7
- (id)keysForValuesToObserveForUndo;	// IMP=0x00000000000b25e4
@property(readonly) _Bool shouldBurnIn;
@property(readonly) NSString *displayName;
- (id)dataRepresentation;	// IMP=0x00000000000b24b9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b2072
- (void)dealloc;	// IMP=0x00000000000b1fda
- (id)init;	// IMP=0x00000000000b1eaa

@end
