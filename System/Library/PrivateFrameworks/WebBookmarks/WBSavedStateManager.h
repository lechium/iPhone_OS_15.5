//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol WBTabGroupSyncAgentProxyProtocol;

@interface WBSavedStateManager : NSObject
{
    _Bool _isEphemeral;	// 8 = 0x8
    id <WBTabGroupSyncAgentProxyProtocol> _tabGroupSyncAgentProxy;	// 16 = 0x10
}

+ (id)ephemeralManager;	// IMP=0x00000000000558fd
- (void).cxx_destruct;	// IMP=0x0000000000057353
@property(readonly, nonatomic) _Bool isEphemeral; // @synthesize isEphemeral=_isEphemeral;
@property(readonly, nonatomic) id <WBTabGroupSyncAgentProxyProtocol> tabGroupSyncAgentProxy; // @synthesize tabGroupSyncAgentProxy=_tabGroupSyncAgentProxy;
- (void)scheduleSyncIfNeeded;	// IMP=0x000000000005732a
- (void)saveWindowState:(id)arg1;	// IMP=0x0000000000057206
- (void)deleteWindowStates:(id)arg1;	// IMP=0x00000000000570e2
- (void)deleteWindowState:(id)arg1;	// IMP=0x0000000000056fbe
- (void)closeWindowState:(id)arg1;	// IMP=0x0000000000056e9a
- (void)updateTabsInTabGroup:(id)arg1;	// IMP=0x0000000000056ca0
- (void)saveTab:(id)arg1;	// IMP=0x0000000000056b0d
- (void)replaceTab:(id)arg1 withTab:(id)arg2;	// IMP=0x0000000000056922
- (void)reorderTab:(id)arg1 afterTab:(id)arg2;	// IMP=0x0000000000056737
- (void)insertTabs:(id)arg1 inTabGroup:(id)arg2 afterTab:(id)arg3;	// IMP=0x0000000000056526
- (void)deleteTabs:(id)arg1;	// IMP=0x000000000005638c
- (void)saveTabGroup:(id)arg1;	// IMP=0x00000000000561f9
- (void)moveTabGroup:(id)arg1 afterTabGroup:(id)arg2;	// IMP=0x000000000005600e
- (void)insertTabGroup:(id)arg1 afterTabGroup:(id)arg2;	// IMP=0x0000000000055e23
- (void)deleteTabGroup:(id)arg1;	// IMP=0x0000000000055c90
- (void)saveBrowserState:(id)arg1 canSafelyTerminateCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000055baf
- (void)saveBrowserState:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000055a13
- (void)saveBrowserState:(id)arg1;	// IMP=0x00000000000559ff
- (_Bool)_isDatabaseEnabled;	// IMP=0x00000000000559f2
- (id)initWithTabGroupSyncAgentProxy:(id)arg1;	// IMP=0x0000000000055974
- (id)init;	// IMP=0x000000000005591a

@end

