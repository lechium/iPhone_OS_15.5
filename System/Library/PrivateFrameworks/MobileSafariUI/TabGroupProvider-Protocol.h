//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/NSObject-Protocol.h>

@class BrowserController, NSArray, NSSet, NSString, NSURL, NSUUID, TabDocument, UIContextMenuConfiguration, UIImage, UIMenu, UISwipeActionsConfiguration, WBTabGroup, WebBookmark;

@protocol TabGroupProvider <NSObject>
@property(readonly, nonatomic) NSSet *nonActiveTabGroups;
@property(readonly, nonatomic) NSArray *syncedTabGroups;
@property(readonly, nonatomic) NSArray *localTabGroups;
@property(readonly, nonatomic) NSArray *tabGroups;
@property(readonly, nonatomic) NSString *activeLibraryType;
@property(readonly, nonatomic) NSString *moveLocalTabsToNewGroupTitle;
@property(readonly, nonatomic) _Bool createTabGroupAlertIsPresented;
@property(nonatomic) _Bool tabGroupOverviewIsPresented;
@property(retain, nonatomic) WBTabGroup *activeTabGroup;
- (BrowserController *)browserControllerContainingLocalTabGroupUUID:(NSUUID *)arg1;
- (void)openURL:(NSURL *)arg1 inTabGroup:(WBTabGroup *)arg2;
- (void)openBookmark:(WebBookmark *)arg1 inTabGroup:(WBTabGroup *)arg2;
- (void)removeSingleBlankTabFromActiveTabGroup;
- (void)removeSingleBlankTabFromInactiveTabGroup:(WBTabGroup *)arg1;
- (void)renameTabGroup:(WBTabGroup *)arg1;
- (void)moveTabGroup:(WBTabGroup *)arg1 beforeOrAfterTabGroup:(WBTabGroup *)arg2;
- (void)moveTabDocument:(TabDocument *)arg1 toTabGroup:(WBTabGroup *)arg2;
- (void)createTabGroupFromExistingTabs:(_Bool)arg1 completionHandler:(void (^)(WBTabGroup *))arg2;
- (void)presentAlertToCreateTabGroupFromExistingTabs:(_Bool)arg1 withTitle:(NSString *)arg2 withMessage:(NSString *)arg3 withSuggestedName:(NSString *)arg4 okActionTitle:(NSString *)arg5 completionHandler:(void (^)(WBTabGroup *))arg6;
- (void)createNewTabGroup;
- (void)closeTabGroup:(WBTabGroup *)arg1;
- (_Bool)switchToTabWithUUID:(NSUUID *)arg1 inTabGroupWithUUID:(NSUUID *)arg2;
- (void)switchOutOfSyncedTabGroup;
- (NSArray *)tabGroupsMenuElementsWithOptions:(unsigned long long)arg1 newTabGroupName:(NSString *)arg2 hostTitle:(NSString *)arg3 descendantCount:(long long)arg4 isMoveAction:(_Bool)arg5 actionHandler:(void (^)(WBTabGroup *))arg6;
- (UIContextMenuConfiguration *)contextMenuConfigurationForTabGroup:(WBTabGroup *)arg1 forPickerSheet:(_Bool)arg2;
- (UIMenu *)openInTabGroupMenuWithNewTabGroupName:(NSString *)arg1 URL:(NSURL *)arg2 descendantCount:(long long)arg3 handler:(void (^)(void))arg4;
- (UIMenu *)menuForTabGroup:(WBTabGroup *)arg1 forPickerSheet:(_Bool)arg2 forEditMode:(_Bool)arg3;
- (UISwipeActionsConfiguration *)swipeActionsConfigurationForTabGroup:(WBTabGroup *)arg1 forPickerSheet:(_Bool)arg2;
- (UIImage *)imageForTabGroup:(WBTabGroup *)arg1;
@end
