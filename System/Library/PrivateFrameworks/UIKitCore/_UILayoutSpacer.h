//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UILayoutSupport-Protocol.h>

@class NSArray, NSLayoutDimension, NSLayoutYAxisAnchor, NSString;

@interface _UILayoutSpacer <UILayoutSupport>
{
    _Bool _compatibilityGuideAllowsArchivingAsSubview;	// 64 = 0x40
    _Bool _horizontal;	// 65 = 0x41
    NSArray *_constraintsToRemoveAtRuntime;	// 72 = 0x48
}

+ (id)_horizontalLayoutSpacer;	// IMP=0x00000000011aad84
+ (id)_verticalLayoutSpacer;	// IMP=0x00000000011aad50
@property(nonatomic, getter=_isHorizontal, setter=_setHorizontal:) _Bool _horizontal; // @synthesize _horizontal;
@property(nonatomic, setter=_setCompatibilityGuideAllowsArchivingAsSubview:) _Bool _compatibilityGuideAllowsArchivingAsSubview; // @synthesize _compatibilityGuideAllowsArchivingAsSubview;
@property(copy, nonatomic, setter=_setConstraintsToRemoveAtRuntime:) NSArray *_constraintsToRemoveAtRuntime; // @synthesize _constraintsToRemoveAtRuntime;
- (id)_layoutVariablesWithAmbiguousValue;	// IMP=0x00000000011aafea
- (void)dealloc;	// IMP=0x00000000011aafa8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000011aaeef
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000011aae29
@property(readonly, nonatomic) double length;
- (void)_setUpCounterDimensionConstraint;	// IMP=0x00000000011aacb7
@property(copy, nonatomic, setter=_setArchivedIdentifier:) NSString *_archivedIdentifier;

// Remaining properties
@property(readonly) NSLayoutYAxisAnchor *bottomAnchor;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSLayoutDimension *heightAnchor;
@property(readonly) Class superclass;
@property(readonly) NSLayoutYAxisAnchor *topAnchor;

@end

