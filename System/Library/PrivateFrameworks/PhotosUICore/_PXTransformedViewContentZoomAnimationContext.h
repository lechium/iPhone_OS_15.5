//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXZoomAnimationContext-Protocol.h>

@class NSString, PXNonuniformTransform, PXRegionOfInterest, UIView;
@protocol PXZoomAnimationContext;

@interface _PXTransformedViewContentZoomAnimationContext : NSObject <PXZoomAnimationContext>
{
    double _fromAlpha;	// 8 = 0x8
    PXNonuniformTransform *_fromTransform;	// 16 = 0x10
    double _toAlpha;	// 24 = 0x18
    PXNonuniformTransform *_toTransform;	// 32 = 0x20
    UIView *_transformedView;	// 40 = 0x28
    id <PXZoomAnimationContext> _context;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000036346b
@property(readonly, nonatomic) id <PXZoomAnimationContext> context; // @synthesize context=_context;
@property(readonly, nonatomic) UIView *transformedView; // @synthesize transformedView=_transformedView;
@property(readonly, nonatomic) PXNonuniformTransform *toTransform; // @synthesize toTransform=_toTransform;
@property(readonly, nonatomic) double toAlpha; // @synthesize toAlpha=_toAlpha;
@property(readonly, nonatomic) PXNonuniformTransform *fromTransform; // @synthesize fromTransform=_fromTransform;
@property(readonly, nonatomic) double fromAlpha; // @synthesize fromAlpha=_fromAlpha;
- (void)registerCleanupHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000003633bb
- (void)didEndAnimation:(long long)arg1;	// IMP=0x000000000036336f
- (long long)willBeginAnimation;	// IMP=0x000000000036332b
@property(readonly, nonatomic) _Bool keepsSourceRegionOfInterestContent;
@property(readonly, nonatomic, getter=isMatchingRegionsOfInterest) _Bool matchingRegionsOfInterest;
@property(readonly, nonatomic) PXRegionOfInterest *toRegionOfInterest;
@property(readonly, nonatomic) PXRegionOfInterest *fromRegionOfInterest;
@property(readonly, nonatomic) double animationDuration;
@property(readonly, nonatomic) long long animationType;
- (id)initWithTransformedView:(id)arg1 context:(id)arg2;	// IMP=0x0000000000362ff9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

