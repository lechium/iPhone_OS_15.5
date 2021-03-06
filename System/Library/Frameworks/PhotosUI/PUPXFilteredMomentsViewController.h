//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/PXChangeObserver-Protocol.h>

@class NSString, UIViewController;
@protocol PXGridPresentationBarsUpdateDelegate;

__attribute__((visibility("hidden")))
@interface PUPXFilteredMomentsViewController <PXChangeObserver>
{
    UIViewController *_containerViewController;	// 8 = 0x8
    id <PXGridPresentationBarsUpdateDelegate> _barsUpdateDelegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000287dfa
@property(nonatomic) __weak id <PXGridPresentationBarsUpdateDelegate> barsUpdateDelegate; // @synthesize barsUpdateDelegate=_barsUpdateDelegate;
@property(nonatomic) __weak UIViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x0000000000287d3e
- (_Bool)isInPlaces:(id)arg1;	// IMP=0x0000000000287cb1
- (void)pu_performBarsVisibilityUpdatesWithAnimationSettings:(struct PUBarAnimationSettings)arg1;	// IMP=0x0000000000287b8c
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000287a85
- (void)updateNavigationBarAnimated:(_Bool)arg1;	// IMP=0x00000000002879b9
- (void)getEmptyPlaceholderViewTitle:(id *)arg1 message:(id *)arg2 buttonTitle:(id *)arg3 buttonAction:(CDUnknownBlockType *)arg4;	// IMP=0x000000000028793f
- (id)oneUpPresentationHelperViewController:(id)arg1;	// IMP=0x00000000002878cc
- (void)viewDidLoad;	// IMP=0x0000000000287859
- (void)loadView;	// IMP=0x0000000000287818

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

