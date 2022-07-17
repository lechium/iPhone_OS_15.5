//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, PSPointerPortalSourceCollection, _UILumaTrackingBackdropView, _UIPortalView;

@interface PUIDSystemPointerRootViewController : UIViewController
{
    CDUnknownBlockType _lumaChangedHandlerBlock;	// 8 = 0x8
    _Bool _sampling;	// 16 = 0x10
    _UILumaTrackingBackdropView *_pointerLumaMeasurementView;	// 24 = 0x18
    _UIPortalView *_systemPointerPortalView;	// 32 = 0x20
    PSPointerPortalSourceCollection *_systemPointerPortalSourceCollection;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000001ee9a
@property(retain, nonatomic) PSPointerPortalSourceCollection *systemPointerPortalSourceCollection; // @synthesize systemPointerPortalSourceCollection=_systemPointerPortalSourceCollection;
- (void)_addMatchMoveAnimationFromSource:(id)arg1 toView:(id)arg2;	// IMP=0x001000000001ebde
- (void)backgroundLumaView:(id)arg1 didTransitionToLevel:(unsigned long long)arg2;	// IMP=0x001000000001ebbe
- (void)setLumaChangedHandlerBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000001eb8a
- (void)setSamplingLuma:(_Bool)arg1 seedingWithLumaLevel:(unsigned long long)arg2;	// IMP=0x001000000001ead8
- (void)viewDidLoad;	// IMP=0x001000000001e6b3
- (_Bool)_canShowWhileLocked;	// IMP=0x001000000001e6ab

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
// Error: Property attributes should begin with the type ('T') attribute, property name: superclass
// Property attributes: (null)


@end
