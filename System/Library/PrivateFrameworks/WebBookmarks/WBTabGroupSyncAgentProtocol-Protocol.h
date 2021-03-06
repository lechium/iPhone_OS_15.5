//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebBookmarks/NSObject-Protocol.h>

@class NSArray, WBBrowserState, WBTab, WBTabGroup, WBWindowState, WebBookmarkChangeSet;

@protocol WBTabGroupSyncAgentProtocol <NSObject>
- (void)saveWindowState:(WBWindowState *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)deleteWindowStates:(NSArray *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)deleteWindowState:(WBWindowState *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)closeWindowState:(WBWindowState *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)updateTabs:(NSArray *)arg1 inTabGroup:(WBTabGroup *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)saveTab:(WBTab *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)replaceTab:(WBTab *)arg1 withTab:(WBTab *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)reorderTab:(WBTab *)arg1 afterTab:(WBTab *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)insertTabs:(NSArray *)arg1 inTabGroup:(WBTabGroup *)arg2 afterTab:(WBTab *)arg3 completionHandler:(void (^)(_Bool, NSError *))arg4;
- (void)deleteTabs:(NSArray *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)saveTabGroup:(WBTabGroup *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)moveTabGroup:(WBTabGroup *)arg1 afterTabGroup:(WBTabGroup *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)insertTabGroup:(WBTabGroup *)arg1 afterTabGroup:(WBTabGroup *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)deleteTabGroup:(WBTabGroup *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)saveBrowserState:(WBBrowserState *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)scheduleSyncIfNeeded;
- (void)applyChangeSet:(WebBookmarkChangeSet *)arg1 completionHandler:(void (^)(_Bool, NSArray *, NSError *))arg2;
@end

