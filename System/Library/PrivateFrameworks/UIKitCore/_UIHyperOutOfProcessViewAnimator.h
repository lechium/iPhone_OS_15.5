//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>
#import <UIKitCore/_UIHyperAnimator-Protocol.h>
#import <UIKitCore/_UIHyperAnimator_Internal-Protocol.h>

@class NSMutableSet, NSString, _UIHyperInteractor, _UISpringParameters;
@protocol _UIHyperOutOfProcessViewAnimatorDelegate;

@interface _UIHyperOutOfProcessViewAnimator : NSObject <_UIHyperAnimator_Internal, _UIHyperAnimator, NSSecureCoding, NSCopying>
{
    unsigned int __updateReason;	// 8 = 0x8
    unsigned long long __dimensions;	// 16 = 0x10
    _UIHyperInteractor *__interactor;	// 24 = 0x18
    _UISpringParameters *__boundaryCrossedSpringParameters;	// 32 = 0x20
    _UISpringParameters *__interactionEndedSpringParameters;	// 40 = 0x28
    NSMutableSet *__propertyAnimators;	// 48 = 0x30
    id <_UIHyperOutOfProcessViewAnimatorDelegate> __delegate;	// 56 = 0x38
    struct CAFrameRateRange __preferredFrameRateRange;	// 64 = 0x40
}

+ (id)keyPathsForValuesAffectingSelf;	// IMP=0x000000000009ba22
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000009b565
- (void).cxx_destruct;	// IMP=0x000000000009bae1
@property(nonatomic, setter=_setDelegate:) __weak id <_UIHyperOutOfProcessViewAnimatorDelegate> _delegate; // @synthesize _delegate=__delegate;
@property(nonatomic, setter=_setUpdateReason:) unsigned int _updateReason; // @synthesize _updateReason=__updateReason;
@property(nonatomic, setter=_setPreferredFrameRateRange:) struct CAFrameRateRange _preferredFrameRateRange; // @synthesize _preferredFrameRateRange=__preferredFrameRateRange;
@property(readonly, nonatomic) NSMutableSet *_propertyAnimators; // @synthesize _propertyAnimators=__propertyAnimators;
@property(nonatomic, setter=_setInteractor:) __weak _UIHyperInteractor *_interactor; // @synthesize _interactor=__interactor;
@property(readonly, nonatomic) unsigned long long _dimensions; // @synthesize _dimensions=__dimensions;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000009b7f0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009b734
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000009b662
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000009b56d
@property(readonly, nonatomic, getter=_isAnimating) _Bool _animating;
- (void)_animateWithParameters:(id)arg1 velocity:(double)arg2 animations:(CDUnknownBlockType)arg3;	// IMP=0x000000000009b1ae
- (void)_animateWithParameters:(id)arg1 animations:(CDUnknownBlockType)arg2;	// IMP=0x000000000009b199
- (void)_interactionEndedMutatingState:(CDUnknownBlockType)arg1;	// IMP=0x000000000009ab4b
- (void)_interactionChanged;	// IMP=0x000000000009a71b
- (void)_interactionBegan;	// IMP=0x000000000009a36b
@property(copy, nonatomic, setter=_setInteractionEndedSpringParameters:) _UISpringParameters *_interactionEndedSpringParameters; // @synthesize _interactionEndedSpringParameters=__interactionEndedSpringParameters;
@property(copy, nonatomic, setter=_setBoundaryCrossedSpringParameters:) _UISpringParameters *_boundaryCrossedSpringParameters; // @synthesize _boundaryCrossedSpringParameters=__boundaryCrossedSpringParameters;
@property(readonly, copy) NSString *description;
- (id)initWithDimensions:(unsigned long long)arg1;	// IMP=0x0000000000099f59

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

