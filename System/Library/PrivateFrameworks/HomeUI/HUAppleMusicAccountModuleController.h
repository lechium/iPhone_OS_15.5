//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HUAppleMusicAccountModule, HUButtonCell, NAFuture, NSMapTable;
@protocol HUAppleMusicAccountModuleControllerDelegate;

@interface HUAppleMusicAccountModuleController
{
    id <HUAppleMusicAccountModuleControllerDelegate> _delegate;	// 8 = 0x8
    HUButtonCell *_logoutButton;	// 16 = 0x10
    NAFuture *_logoutFuture;	// 24 = 0x18
    HUButtonCell *_loginButton;	// 32 = 0x20
    NAFuture *_loginFuture;	// 40 = 0x28
    HUButtonCell *_activeAuthCell;	// 48 = 0x30
    NSMapTable *_itemToCellMap;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000024f936
@property(retain, nonatomic) NSMapTable *itemToCellMap; // @synthesize itemToCellMap=_itemToCellMap;
@property(nonatomic) __weak HUButtonCell *activeAuthCell; // @synthesize activeAuthCell=_activeAuthCell;
@property(retain, nonatomic) NAFuture *loginFuture; // @synthesize loginFuture=_loginFuture;
@property(nonatomic) __weak HUButtonCell *loginButton; // @synthesize loginButton=_loginButton;
@property(retain, nonatomic) NAFuture *logoutFuture; // @synthesize logoutFuture=_logoutFuture;
@property(nonatomic) __weak HUButtonCell *logoutButton; // @synthesize logoutButton=_logoutButton;
@property(nonatomic) __weak id <HUAppleMusicAccountModuleControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_authenticationContextForAccessory:(id)arg1 account:(id)arg2;	// IMP=0x000000000024f5f4
- (void)_reloadForAuthEvent;	// IMP=0x000000000024f484
- (void)_updateModuleState:(unsigned long long)arg1 notifyDelegate:(_Bool)arg2;	// IMP=0x000000000024f3a7
- (id)_authCells;	// IMP=0x000000000024f28a
- (void)_enableCells;	// IMP=0x000000000024f150
- (void)_disableCells;	// IMP=0x000000000024f019
- (_Bool)_canExecuteAccountAction;	// IMP=0x000000000024eea7
- (void)logout;	// IMP=0x000000000024ec49
- (id)_companionLoginWithAccount:(id)arg1 cell:(id)arg2;	// IMP=0x000000000024ea01
- (id)_proxyLoginWithAccount:(id)arg1 cell:(id)arg2;	// IMP=0x000000000024e7b6
- (void)_setupCompanionAuthenticationForAccount:(id)arg1 cell:(id)arg2;	// IMP=0x000000000024e6e3
- (void)_setupProxyAuthenticationForAccount:(id)arg1 cell:(id)arg2;	// IMP=0x000000000024e4ae
- (id)kickOffManualLogin;	// IMP=0x000000000024e451
- (void)clearLogoutFuture;	// IMP=0x000000000024e430
- (unsigned long long)didSelectItem:(id)arg1;	// IMP=0x000000000024d9c4
- (_Bool)canSelectItem:(id)arg1;	// IMP=0x000000000024d93d
- (void)_setupButtonCell:(id)arg1 enabled:(_Bool)arg2;	// IMP=0x000000000024d786
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000024d25b
- (void)setupCell:(id)arg1 forItem:(id)arg2;	// IMP=0x000000000024d041
- (Class)cellClassForItem:(id)arg1;	// IMP=0x000000000024cde6
- (void)dealloc;	// IMP=0x000000000024cd45
@property(readonly, nonatomic) HUAppleMusicAccountModule *module; // @dynamic module;
- (id)initWithModule:(id)arg1;	// IMP=0x000000000024cc7e

@end

