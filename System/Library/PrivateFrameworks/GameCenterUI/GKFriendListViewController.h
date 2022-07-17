//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

#import <GameCenterUI/UISearchBarDelegate-Protocol.h>
#import <GameCenterUI/UISearchControllerDelegate-Protocol.h>
#import <GameCenterUI/UISearchResultsUpdating-Protocol.h>
#import <GameCenterUI/UITableViewDataSource-Protocol.h>
#import <GameCenterUI/UITableViewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, UIActivityIndicatorView, UISearchController;
@protocol GKFriendListViewControllerDelegate;

@interface GKFriendListViewController : UITableViewController <UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating, UITableViewDelegate, UITableViewDataSource>
{
    _Bool _needsShowMoreFooter;	// 8 = 0x8
    id <GKFriendListViewControllerDelegate> _delegate;	// 16 = 0x10
    NSMutableArray *_friendPlayers;	// 24 = 0x18
    NSMutableArray *_recentPlayers;	// 32 = 0x20
    NSMutableArray *_allPlayers;	// 40 = 0x28
    NSArray *_friendsForDisplay;	// 48 = 0x30
    NSArray *_recentsForDisplay;	// 56 = 0x38
    NSArray *_allPlayersForDisplay;	// 64 = 0x40
    UISearchController *_searchController;	// 72 = 0x48
    UIActivityIndicatorView *_activityIndicator;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000027034
@property(nonatomic) _Bool needsShowMoreFooter; // @synthesize needsShowMoreFooter=_needsShowMoreFooter;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) NSArray *allPlayersForDisplay; // @synthesize allPlayersForDisplay=_allPlayersForDisplay;
@property(retain, nonatomic) NSArray *recentsForDisplay; // @synthesize recentsForDisplay=_recentsForDisplay;
@property(retain, nonatomic) NSArray *friendsForDisplay; // @synthesize friendsForDisplay=_friendsForDisplay;
@property(retain, nonatomic) NSMutableArray *allPlayers; // @synthesize allPlayers=_allPlayers;
@property(retain, nonatomic) NSMutableArray *recentPlayers; // @synthesize recentPlayers=_recentPlayers;
@property(retain, nonatomic) NSMutableArray *friendPlayers; // @synthesize friendPlayers=_friendPlayers;
@property(nonatomic) __weak id <GKFriendListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)addFriends:(id)arg1;	// IMP=0x0000000000026e45
- (void)reportPlayerAtIndexPath:(id)arg1;	// IMP=0x00000000000268b2
- (void)deletePlayerAtIndexPath:(id)arg1;	// IMP=0x0000000000026031
- (void)didDismissSearchController:(id)arg1;	// IMP=0x0000000000025f2c
- (void)updateSearchResultsForSearchController:(id)arg1;	// IMP=0x0000000000025c03
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000025bf5
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;	// IMP=0x000000000002587c
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x0000000000025745
- (id)getPlayerAtIndexPath:(id)arg1;	// IMP=0x0000000000025665
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000255b6
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000000000254d3
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000002542b
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000002538f
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00000000000251de
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x0000000000024e41
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x0000000000024de2
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x0000000000024dbb
- (_Bool)tableViewHasFooter:(long long)arg1;	// IMP=0x0000000000024cf8
- (void)showLoadingIndicator;	// IMP=0x00000000000248eb
- (void)loadMoreFriends;	// IMP=0x0000000000024701
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000238e5
- (void)loadData;	// IMP=0x000000000002374c
- (void)setupNavBar;	// IMP=0x000000000002361f
- (void)setupSearchController;	// IMP=0x000000000002340e
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000000233c4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000023383
- (void)viewDidLoad;	// IMP=0x0000000000023248

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
