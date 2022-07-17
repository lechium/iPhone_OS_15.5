//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/BookmarksTableViewControllerDelegate-Protocol.h>
#import <MobileSafariUI/_SFBookmarkInfoViewControllerDelegate-Protocol.h>
#import <MobileSafariUI/_SFNavigationIntentHandling-Protocol.h>

@class BookmarksTableViewController, NSObject, NSString, UIBarButtonItem, WebBookmark, WebBookmarkCollection;
@protocol LinkPreviewProvider, OS_dispatch_queue, TabGroupProvider, WBBookmarkProvider, _SFNavigationIntentHandling;

__attribute__((visibility("hidden")))
@interface BookmarkFolderLibraryItemController <BookmarksTableViewControllerDelegate, _SFNavigationIntentHandling, _SFBookmarkInfoViewControllerDelegate>
{
    BookmarksTableViewController *_viewController;	// 8 = 0x8
    UIBarButtonItem *_createFolderButtonItem;	// 16 = 0x10
    UIBarButtonItem *_editButtonItem;	// 24 = 0x18
    UIBarButtonItem *_editingDoneButtonItem;	// 32 = 0x20
    UIBarButtonItem *_flexibleSpaceItem;	// 40 = 0x28
    _Bool _allowsEditing;	// 48 = 0x30
    _Bool _isEditing;	// 49 = 0x31
    WebBookmark *_folder;	// 56 = 0x38
    WebBookmarkCollection *_collection;	// 64 = 0x40
    id <WBBookmarkProvider> _bookmarkProvider;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_bookmarkProviderQueue;	// 80 = 0x50
    id <_SFNavigationIntentHandling> _navigationIntentHandler;	// 88 = 0x58
    id <LinkPreviewProvider> _linkPreviewProvider;	// 96 = 0x60
    id <TabGroupProvider> _tabGroupProvider;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000001c9190
@property(nonatomic) __weak id <TabGroupProvider> tabGroupProvider; // @synthesize tabGroupProvider=_tabGroupProvider;
@property(nonatomic) __weak id <LinkPreviewProvider> linkPreviewProvider; // @synthesize linkPreviewProvider=_linkPreviewProvider;
@property(nonatomic) __weak id <_SFNavigationIntentHandling> navigationIntentHandler; // @synthesize navigationIntentHandler=_navigationIntentHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *bookmarkProviderQueue; // @synthesize bookmarkProviderQueue=_bookmarkProviderQueue;
@property(retain, nonatomic) id <WBBookmarkProvider> bookmarkProvider; // @synthesize bookmarkProvider=_bookmarkProvider;
@property(retain, nonatomic) WebBookmarkCollection *collection; // @synthesize collection=_collection;
@property(readonly, nonatomic) WebBookmark *folder; // @synthesize folder=_folder;
- (void)performDropWithProposal:(id)arg1 session:(id)arg2;	// IMP=0x00000000001c8d9b
- (long long)dropIntentForSession:(id)arg1;	// IMP=0x00000000001c8d90
- (unsigned long long)dropOperationForSession:(id)arg1;	// IMP=0x00000000001c8d77
- (_Bool)isSpringLoaded;	// IMP=0x00000000001c8d6f
- (void)dispatchNavigationIntent:(id)arg1;	// IMP=0x00000000001c8cfa
- (void)handleNavigationIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001c8c85
- (void)bookmarksTableViewControllerWillDisappear:(id)arg1;	// IMP=0x00000000001c8c03
- (void)bookmarksTableViewControllerDidEndEditing:(id)arg1;	// IMP=0x00000000001c8bb2
- (void)bookmarksTableViewControllerDidBeginEditing:(id)arg1;	// IMP=0x00000000001c8b61
- (struct UIEdgeInsets)contentInsetForBookmarksTableViewController:(id)arg1;	// IMP=0x00000000001c8b43
- (struct UIEdgeInsets)separatorInsetForBookmarksTableViewController:(id)arg1;	// IMP=0x00000000001c8b25
- (_Bool)bookmarkInfoViewControllerShouldUseTranslucentAppearance:(id)arg1;	// IMP=0x00000000001c8b1d
- (void)_setEditingFromToolbarButton:(_Bool)arg1;	// IMP=0x00000000001c8967
- (void)_updateToolbarItemsForViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001c88cf
- (id)_toolbarItemsForViewController:(id)arg1;	// IMP=0x00000000001c8753
- (void)_createToolbarItemsIfNecessary;	// IMP=0x00000000001c85c2
- (void)reloadBookmarksForFolder:(id)arg1;	// IMP=0x00000000001c8390
- (void)_didPressNewFolderButton;	// IMP=0x00000000001c8278
- (void)toggleEditBookmarks;	// IMP=0x00000000001c8256
- (void)_didPressEditButton;	// IMP=0x00000000001c8242
- (void)_didPressEditingDoneButton;	// IMP=0x00000000001c822b
- (void)_folderContentsDidChange:(id)arg1;	// IMP=0x00000000001c816c
- (id)topViewController;	// IMP=0x00000000001c80d5
- (void)updateToolbarIfNeeded;	// IMP=0x00000000001c801c
- (_Bool)selectionFollowsFocus;	// IMP=0x00000000001c8014
- (id)viewController;	// IMP=0x00000000001c7ec8
- (void)updateListContentConfiguration:(id)arg1;	// IMP=0x00000000001c7d87
- (void)dealloc;	// IMP=0x00000000001c7d12
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001c7c80
@property(readonly) unsigned long long hash;
- (id)initWithConfiguration:(id)arg1 sectionController:(id)arg2 folder:(id)arg3;	// IMP=0x00000000001c7bc3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
