//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/CLLocationManagerDelegate-Protocol.h>
#import <StoreKitUI/SKUIDocumentViewController-Protocol.h>
#import <StoreKitUI/SKUINavigationBarDisplayConfiguring-Protocol.h>
#import <StoreKitUI/SKUIStackedBarDelegate-Protocol.h>
#import <StoreKitUI/UINavigationControllerDelegate-Protocol.h>
#import <StoreKitUI/UISplitViewControllerDelegate-Protocol.h>

@class CLLocationManager, NSArray, NSString, SKUIContentInsetScrollView, SKUIExploreTemplateElement, SKUIMetricsImpressionSession, SKUIStorePageSectionsViewController, UINavigationController, UISplitViewController;

__attribute__((visibility("hidden")))
@interface SKUIExploreDocumentViewController <CLLocationManagerDelegate, SKUINavigationBarDisplayConfiguring, SKUIStackedBarDelegate, UINavigationControllerDelegate, UISplitViewControllerDelegate, SKUIDocumentViewController>
{
    SKUIMetricsImpressionSession *_activeMetricsImpressionSession;	// 8 = 0x8
    NSArray *_contentOffsets;	// 16 = 0x10
    SKUIContentInsetScrollView *_contentScrollView;	// 24 = 0x18
    SKUIExploreTemplateElement *_exploreTemplate;	// 32 = 0x20
    UINavigationController *_leftVC;	// 40 = 0x28
    CLLocationManager *_locationManager;	// 48 = 0x30
    UINavigationController *_navigationController;	// 56 = 0x38
    _Bool _nearMeEnabled;	// 64 = 0x40
    SKUIStorePageSectionsViewController *_rightVC;	// 72 = 0x48
    UISplitViewController *_splitVC;	// 80 = 0x50
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;	// IMP=0x00000000000e6d21
- (void).cxx_destruct;	// IMP=0x00000000000ea0c8
- (void)_endAllPendingActiveImpression;	// IMP=0x00000000000ea0ab
- (void)_beginActiveImpressionsForImpressionableViewElements;	// IMP=0x00000000000e9f63
- (id)_rightVCColorScheme;	// IMP=0x00000000000e9e83
- (id)_rightPageComponents;	// IMP=0x00000000000e9d3d
- (id)_leftPageComponentsAtIndex:(long long)arg1;	// IMP=0x00000000000e9aa5
- (double)_leftColumnWidth;	// IMP=0x00000000000e99e7
- (void)_reloadRightViewController;	// IMP=0x00000000000e98c3
- (void)_reloadSelectionForViewController:(id)arg1;	// IMP=0x00000000000e96df
- (void)_reloadLeftViewControllers;	// IMP=0x00000000000e93a7
- (void)_reloadData;	// IMP=0x00000000000e8f2b
- (id)_pageComponentsAtIndex:(long long)arg1;	// IMP=0x00000000000e8c1b
- (id)_newSectionsViewControllerAtIndex:(long long)arg1;	// IMP=0x00000000000e8a03
- (void)_getPageComponents:(id *)arg1 title:(id *)arg2 forViewControllerAtIndex:(long long)arg3;	// IMP=0x00000000000e88ea
- (id)_rootNavigationTitle;	// IMP=0x00000000000e86f0
- (void)_contentInsetDidChange:(id)arg1;	// IMP=0x00000000000e852e
- (_Bool)splitViewController:(id)arg1 shouldHideViewController:(id)arg2 inOrientation:(long long)arg3;	// IMP=0x00000000000e8526
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000000e8313
- (void)stackedBar:(id)arg1 didSelectItemAtIndex:(long long)arg2;	// IMP=0x00000000000e8218
- (_Bool)prefersNavigationBarHidden;	// IMP=0x00000000000e81f8
- (id)navigationBarTintColor;	// IMP=0x00000000000e81f0
- (_Bool)prefersNavigationBarBackgroundViewHidden;	// IMP=0x00000000000e81e8
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;	// IMP=0x00000000000e7fcd
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000000e7da6
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;	// IMP=0x00000000000e7d42
- (id)impressionableViewElements;	// IMP=0x00000000000e7bd4
- (void)_updateChildViewControllers;	// IMP=0x00000000000e764c
- (void)documentMediaQueriesDidUpdate:(id)arg1;	// IMP=0x00000000000e75c5
- (void)documentDidUpdate:(id)arg1;	// IMP=0x00000000000e70ac
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000e7023
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000e6f84
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000e6efd
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;	// IMP=0x00000000000e6e57
- (void)loadView;	// IMP=0x00000000000e6d3e
- (id)contentScrollView;	// IMP=0x00000000000e6d29
- (void)setClientContext:(id)arg1;	// IMP=0x00000000000e6caf
- (_Bool)managesNavigationBarContents;	// IMP=0x00000000000e6c8f
- (void)selectGenreListComponent:(id)arg1;	// IMP=0x00000000000e6c2c
- (void)dealloc;	// IMP=0x00000000000e6be1
- (id)initWithTemplateElement:(id)arg1;	// IMP=0x00000000000e6b52

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
