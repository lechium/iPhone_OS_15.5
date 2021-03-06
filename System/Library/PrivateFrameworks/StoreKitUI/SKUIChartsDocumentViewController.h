//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/SKUIDocumentViewController-Protocol.h>
#import <StoreKitUI/SKUIResourceLoaderDelegate-Protocol.h>

@class NSMutableArray, NSString, SKUIChartColumnsView, SKUIChartsTemplateViewElement, SKUIResourceLoader;

__attribute__((visibility("hidden")))
@interface SKUIChartsDocumentViewController <SKUIResourceLoaderDelegate, SKUIDocumentViewController>
{
    SKUIChartColumnsView *_chartsView;	// 8 = 0x8
    NSMutableArray *_columnViewControllers;	// 16 = 0x10
    SKUIChartsTemplateViewElement *_templateElement;	// 24 = 0x18
    SKUIResourceLoader *_resourceLoader;	// 32 = 0x20
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;	// IMP=0x00000000001ea981
- (void).cxx_destruct;	// IMP=0x00000000001ebcc3
- (id)_resourceLoader;	// IMP=0x00000000001ebbec
- (long long)_visibleColumnCountForWidth:(double)arg1;	// IMP=0x00000000001ebbc0
- (id)_newColumnViewControllersWithReusableViewControllers:(id)arg1;	// IMP=0x00000000001eb461
- (id)_columnViewControllers;	// IMP=0x00000000001eb41a
- (struct UIEdgeInsets)_chartInsets;	// IMP=0x00000000001eb374
- (void)resourceLoader:(id)arg1 didLoadAllForReason:(long long)arg2;	// IMP=0x00000000001eb28e
- (void)resourceLoaderDidBeginLoading:(id)arg1;	// IMP=0x00000000001eb1fa
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000001eaeae
- (void)viewWillLayoutSubviews;	// IMP=0x00000000001eaba8
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000001eaabb
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;	// IMP=0x00000000001eaa70
- (void)loadView;	// IMP=0x00000000001ea9d9
- (id)contentScrollView;	// IMP=0x00000000001ea989
- (void)skui_viewWillAppear:(_Bool)arg1;	// IMP=0x00000000001ea811
- (void)documentMediaQueriesDidUpdate:(id)arg1;	// IMP=0x00000000001ea6e1
- (void)documentDidUpdate:(id)arg1;	// IMP=0x00000000001ea49e
- (id)initWithTemplateElement:(id)arg1;	// IMP=0x00000000001ea430

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

