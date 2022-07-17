//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, SUScriptFunction;

@interface SUNativeScriptMenuViewController
{
    SUScriptFunction *_action;	// 32 = 0x20
    NSArray *_menuItems;	// 40 = 0x28
}

@property(retain, nonatomic) NSArray *menuItems; // @synthesize menuItems=_menuItems;
@property(retain, nonatomic) SUScriptFunction *action; // @synthesize action=_action;
- (id)titleOfMenuItemAtIndex:(long long)arg1;	// IMP=0x00000000000a66eb
- (void)performActionForMenuItemAtIndex:(long long)arg1;	// IMP=0x00000000000a665d
- (long long)numberOfMenuItems;	// IMP=0x00000000000a6640
- (_Bool)isMenuItemEnabledAtIndex:(long long)arg1;	// IMP=0x00000000000a660a
- (id)copyScriptViewController;	// IMP=0x00000000000a65d6
- (void)dealloc;	// IMP=0x00000000000a6526

@end
