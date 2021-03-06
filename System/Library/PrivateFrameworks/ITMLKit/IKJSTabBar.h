//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKJSTabBar-Protocol.h>
#import <ITMLKit/NSObject-Protocol.h>
#import <ITMLKit/_IKJSTabBar-Protocol.h>
#import <ITMLKit/_IKJSTabBarProxy-Protocol.h>

@class IKAppTabBar, IKJSTabBarItem, NSArray, NSString;

@interface IKJSTabBar <NSObject, IKJSTabBar, _IKJSTabBarProxy, _IKJSTabBar>
{
    IKAppTabBar *_appTabBar;	// 8 = 0x8
    NSArray *_tabItems;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000e1c13
@property(retain) NSArray *tabItems; // @synthesize tabItems=_tabItems;
@property(readonly, nonatomic) __weak IKAppTabBar *appTabBar; // @synthesize appTabBar=_appTabBar;
- (void)_setSelectedTabNavigationDocumentOnJSContext:(id)arg1;	// IMP=0x00000000000e1ab6
- (void)_onSelectSync;	// IMP=0x00000000000e1a21
- (void)onSelect;	// IMP=0x00000000000e195b
- (id)transientTab;	// IMP=0x00000000000e15b4
@property(retain, nonatomic) IKJSTabBarItem *selectedTab;
@property(readonly, nonatomic) NSArray *tabs;
- (void)setTabs:(id)arg1;	// IMP=0x00000000000e0737
- (id)initWithAppContext:(id)arg1 appTabBar:(id)arg2;	// IMP=0x00000000000e06a2
- (id)asPrivateIKJSTabBar;	// IMP=0x00000000000e066f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

