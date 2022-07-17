//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DirectionsStepsListDataSource, NSLayoutConstraint, NSString, NavigationDebugViewsController, Route, UIBarButtonItem, UICollectionView, UIScrollView, UITableView;
@protocol RouteStepListDelegate, UIScrollViewDelegate;

__attribute__((visibility("hidden")))
@interface DirectionsStepsTableViewController
{
    UIBarButtonItem *_doneButtonItem;	// 8 = 0x8
    NSLayoutConstraint *_tableTopEdgeConstraint;	// 16 = 0x10
    _Bool _debugViewControllerEnabled;	// 24 = 0x18
    _Bool _showsHeaderView;	// 25 = 0x19
    UICollectionView *_collectionView;	// 32 = 0x20
    DirectionsStepsListDataSource *_dataSource;	// 40 = 0x28
    UITableView *_tableView;	// 48 = 0x30
    NavigationDebugViewsController *_debugViewsController;	// 56 = 0x38
}

+ (Class)dataSourceClass;	// IMP=0x002000000074964f
- (void).cxx_destruct;	// IMP=0x002000000074ac8e
@property(nonatomic) _Bool showsHeaderView; // @synthesize showsHeaderView=_showsHeaderView;
@property(nonatomic) _Bool debugViewControllerEnabled; // @synthesize debugViewControllerEnabled=_debugViewControllerEnabled;
@property(retain, nonatomic) NavigationDebugViewsController *debugViewsController; // @synthesize debugViewsController=_debugViewsController;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) DirectionsStepsListDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000074abaa
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000074aadc
- (void)updateTheme;	// IMP=0x001000000074aa72
- (_Bool)shouldShowDebugViewController;	// IMP=0x001000000074a282
@property(nonatomic) __weak id <UIScrollViewDelegate> scrollViewDelegate;
- (id)routeStepForIndexPath:(id)arg1;	// IMP=0x0010000000749fdc
@property(nonatomic) __weak id <RouteStepListDelegate> delegate;
@property(nonatomic) unsigned long long options;
@property(retain, nonatomic) Route *route;
- (void)viewLayoutMarginsDidChange;	// IMP=0x0010000000749d5e
- (void)viewDidLayoutSubviews;	// IMP=0x0010000000749ce1
- (void)viewDidLoad;	// IMP=0x0010000000749722
@property(readonly, nonatomic) long long tableViewStyle;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (id)init;	// IMP=0x0010000000749660
- (_Bool)_canShowWhileLocked;	// IMP=0x0010000000749647

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
