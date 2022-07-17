//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SettingsCellularUI/PSSpecifierGroup-Protocol.h>

@class NSMutableArray, NSString, PSListController, PSSpecifier;

__attribute__((visibility("hidden")))
@interface PSUINetworkSettingsSubgroup : NSObject <PSSpecifierGroup>
{
    PSListController *_listController;	// 8 = 0x8
    PSSpecifier *_parentSpecifier;	// 16 = 0x10
    NSMutableArray *_bundleControllers;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000048ba3
@property(retain, nonatomic) NSMutableArray *bundleControllers; // @synthesize bundleControllers=_bundleControllers;
@property(nonatomic) __weak PSSpecifier *parentSpecifier; // @synthesize parentSpecifier=_parentSpecifier;
@property(nonatomic) __weak PSListController *listController; // @synthesize listController=_listController;
- (id)specifiers;	// IMP=0x0000000000048649
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;	// IMP=0x00000000000485f3
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 parentSpecifier:(id)arg3;	// IMP=0x0000000000048561

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
