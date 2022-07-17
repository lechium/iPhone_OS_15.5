//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/ReadingListViewControllerDelegate-Protocol.h>

@class NSString, ReadingListViewController;

__attribute__((visibility("hidden")))
@interface ReadingListLibraryItemController <ReadingListViewControllerDelegate>
{
    ReadingListViewController *_viewController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000b5e07
- (void)performDropWithProposal:(id)arg1 session:(id)arg2;	// IMP=0x00000000000b5d42
- (long long)dropIntentForSession:(id)arg1;	// IMP=0x00000000000b5d37
- (unsigned long long)dropOperationForSession:(id)arg1;	// IMP=0x00000000000b5cce
- (_Bool)isSpringLoaded;	// IMP=0x00000000000b5cc6
- (void)readingListViewController:(id)arg1 updateUnreadFilterShowingAllBookmarks:(_Bool)arg2;	// IMP=0x00000000000b5c66
- (void)readingListViewController:(id)arg1 setBookmark:(id)arg2 asRead:(_Bool)arg3;	// IMP=0x00000000000b5be6
- (id)readingListViewControllerCurrentReadingListItem:(id)arg1;	// IMP=0x00000000000b5b7e
- (id)_bookmarksNavigationControllerDelegate;	// IMP=0x00000000000b5b2e
- (_Bool)selectionFollowsFocus;	// IMP=0x00000000000b5b26
- (id)viewController;	// IMP=0x00000000000b5984
- (void)updateListContentConfiguration:(id)arg1;	// IMP=0x00000000000b58cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
