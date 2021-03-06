//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <CloudDocsUI/UISearchControllerDelegate-Protocol.h>

@class NSArray, NSString, _UIDocumentPickerContainerModel, _UIDocumentPickerSearchPaletteView, _UIDocumentPickerSortOrderView, _UIDocumentSearchListController;
@protocol _UIDocumentPickerContainedViewController, _UIDocumentPickerServiceViewController;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerContainerViewController : UIViewController <UISearchControllerDelegate>
{
    long long _explicitDisplayMode;	// 8 = 0x8
    id <_UIDocumentPickerServiceViewController> _serviceViewController;	// 16 = 0x10
    _UIDocumentPickerContainerModel *_model;	// 24 = 0x18
    _UIDocumentSearchListController *_resultsController;	// 32 = 0x20
    UIViewController<_UIDocumentPickerContainedViewController> *_childViewController;	// 40 = 0x28
    _UIDocumentPickerSortOrderView *_sortView;	// 48 = 0x30
    _UIDocumentPickerSearchPaletteView *_searchView;	// 56 = 0x38
}

+ (id)userDefaults;	// IMP=0x00000000000326cd
- (void).cxx_destruct;	// IMP=0x0000000000032ccc
@property(retain, nonatomic) _UIDocumentPickerSearchPaletteView *searchView; // @synthesize searchView=_searchView;
@property(retain, nonatomic) _UIDocumentPickerSortOrderView *sortView; // @synthesize sortView=_sortView;
@property(retain, nonatomic) UIViewController<_UIDocumentPickerContainedViewController> *childViewController; // @synthesize childViewController=_childViewController;
@property(retain, nonatomic) _UIDocumentSearchListController *resultsController; // @synthesize resultsController=_resultsController;
@property(nonatomic) long long explicitDisplayMode; // @synthesize explicitDisplayMode=_explicitDisplayMode;
@property(retain, nonatomic) _UIDocumentPickerContainerModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <_UIDocumentPickerServiceViewController> serviceViewController; // @synthesize serviceViewController=_serviceViewController;
- (long long)displayMode;	// IMP=0x0000000000032bd9
- (long long)defaultDisplayMode;	// IMP=0x0000000000032a70
- (void)setDefaultDisplayMode:(long long)arg1;	// IMP=0x000000000003291c
- (int)sortOrder;	// IMP=0x0000000000032822
- (void)setSortOrder:(int)arg1;	// IMP=0x00000000000326fd
@property(nonatomic) struct CGPoint contentOffset;
@property(retain, nonatomic) NSArray *indexPathsForSelectedItems;
- (_Bool)isEditing;	// IMP=0x00000000000325ad
- (void)setEditing:(_Bool)arg1;	// IMP=0x0000000000032590
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000324d9
- (void)_sortOrderViewChanged:(id)arg1;	// IMP=0x000000000003237e
- (void)viewDidLayoutSubviews;	// IMP=0x000000000003233d
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000322fa
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000032278
- (void)setChildViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000031f33
- (void)_startSearchWithQueryString:(id)arg1 becomeFirstResponder:(_Bool)arg2;	// IMP=0x0000000000031d5f
- (void)setupSearchController;	// IMP=0x0000000000031b60
- (void)_updateTraitCollection;	// IMP=0x00000000000317d6
- (void)ensureChildViewController;	// IMP=0x000000000003155d
- (void)displayModeChanged;	// IMP=0x000000000003152f
- (void)dealloc;	// IMP=0x00000000000314e5
- (void)invalidate;	// IMP=0x00000000000314a8
- (id)initWithModel:(id)arg1;	// IMP=0x000000000003129d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

