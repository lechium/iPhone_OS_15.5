//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AnnotationKit/AKChildAnnotationProtocol-Protocol.h>
#import <AnnotationKit/AKRectangularAnnotationProtocol-Protocol.h>

@class AKAnnotation, NSString;

@interface AKPopupAnnotation <AKRectangularAnnotationProtocol, AKChildAnnotationProtocol>
{
    long long _visualStyle;	// 8 = 0x8
    AKAnnotation *_parentAnnotation;	// 16 = 0x10
    NSString *_contents;	// 24 = 0x18
    struct CGRect _rectangle;	// 32 = 0x20
    struct CGRect _openRectangle;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000dc0f8
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;	// IMP=0x00000000000dbc68
+ (id)keyPathsForValuesAffectingHitTestBounds;	// IMP=0x00000000000dbb46
- (void).cxx_destruct;	// IMP=0x00000000000dc59c
@property(copy) NSString *contents; // @synthesize contents=_contents;
@property __weak AKAnnotation *parentAnnotation; // @synthesize parentAnnotation=_parentAnnotation;
@property struct CGRect openRectangle; // @synthesize openRectangle=_openRectangle;
@property struct CGRect rectangle; // @synthesize rectangle=_rectangle;
@property long long visualStyle; // @synthesize visualStyle=_visualStyle;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000dc264
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000dc100
- (void)translateBy:(struct CGPoint)arg1;	// IMP=0x00000000000dbfe4
- (void)flattenModelExifOrientation:(long long)arg1 withModelSize:(struct CGSize)arg2;	// IMP=0x00000000000dbec7
- (struct CGRect)hitTestBounds;	// IMP=0x00000000000dbea8
- (id)displayName;	// IMP=0x00000000000dbe3c
- (id)keysForValuesToObserveForUndo;	// IMP=0x00000000000dbdab
- (id)keysForValuesToObserveForAdornments;	// IMP=0x00000000000dbbd7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
