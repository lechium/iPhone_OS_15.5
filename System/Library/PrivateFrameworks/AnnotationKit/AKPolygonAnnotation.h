//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AnnotationKit/AKFlippableAnnotationProtocol-Protocol.h>

@class NSString;

@interface AKPolygonAnnotation <AKFlippableAnnotationProtocol>
{
    _Bool _verticallyFlipped;	// 8 = 0x8
    unsigned long long _pointCount;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000ce55
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;	// IMP=0x000000000000c9f9
+ (id)keyPathsForValuesAffectingDrawingBounds;	// IMP=0x000000000000c968
+ (id)keyPathsForValuesAffectingHitTestBounds;	// IMP=0x000000000000c8d7
@property _Bool verticallyFlipped; // @synthesize verticallyFlipped=_verticallyFlipped;
@property unsigned long long pointCount; // @synthesize pointCount=_pointCount;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000cf07
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000ce5d
- (struct CGRect)hitTestBounds;	// IMP=0x000000000000cd42
- (id)keysForValuesToObserveForAdornments;	// IMP=0x000000000000ccb1
- (id)keysForValuesToObserveForRedrawing;	// IMP=0x000000000000cc20
- (id)keysForValuesToObserveForUndo;	// IMP=0x000000000000cb8f
- (id)displayName;	// IMP=0x000000000000cb23

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property _Bool horizontallyFlipped;
@property(readonly) Class superclass;

@end

