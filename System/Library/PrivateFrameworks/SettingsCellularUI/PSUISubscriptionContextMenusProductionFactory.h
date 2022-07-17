//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SettingsCellularUI/PSUISubscriptionContextMenusFactory-Protocol.h>

@class PSListController, PSSpecifier;

__attribute__((visibility("hidden")))
@interface PSUISubscriptionContextMenusProductionFactory : NSObject <PSUISubscriptionContextMenusFactory>
{
    _Bool _popViewControllerOnPlanRemoval;	// 8 = 0x8
    PSListController *_hostController;	// 16 = 0x10
    PSSpecifier *_parentSpecifier;	// 24 = 0x18
    PSSpecifier *_groupSpecifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000041f1a
@property(nonatomic) _Bool popViewControllerOnPlanRemoval; // @synthesize popViewControllerOnPlanRemoval=_popViewControllerOnPlanRemoval;
@property(nonatomic) __weak PSSpecifier *groupSpecifier; // @synthesize groupSpecifier=_groupSpecifier;
@property(nonatomic) __weak PSSpecifier *parentSpecifier; // @synthesize parentSpecifier=_parentSpecifier;
@property(nonatomic) __weak PSListController *hostController; // @synthesize hostController=_hostController;
- (id)createRoamingSpecifiersSubgroup;	// IMP=0x0000000000041e82
- (id)createDataModeSubgroupWithContext:(id)arg1;	// IMP=0x0000000000041d72
- (id)createPasscodeStatusCache;	// IMP=0x0000000000041d59
- (id)createCellularPlanManager;	// IMP=0x0000000000041d40
- (id)createCellularPlanManagerCache;	// IMP=0x0000000000041d27
- (id)createDataCache;	// IMP=0x0000000000041d0e
- (id)createCarrierBundleCache;	// IMP=0x0000000000041cf5
- (id)createSimStatusCache;	// IMP=0x0000000000041cdc
- (id)createCallCache;	// IMP=0x0000000000041cc3
- (id)createSimSubgroup;	// IMP=0x0000000000041c31
- (id)createNetworkSettingsSubgroup;	// IMP=0x0000000000041b9f
- (id)createMyNumberSubgroup;	// IMP=0x0000000000041b0d
- (id)createNetworkSelectionSubgroup;	// IMP=0x0000000000041a7b
- (id)createCarrierSpaceSubgroup;	// IMP=0x0000000000041999
- (id)createCallingSubgroup;	// IMP=0x0000000000041907
- (_Bool)shouldPopViewControllerOnPlanRemoval;	// IMP=0x00000000000418fe
- (id)initWithHostController:(id)arg1 parentSpecifier:(id)arg2 groupSpecifier:(id)arg3 popViewControllerOnPlanRemoval:(_Bool)arg4;	// IMP=0x00000000000417fb

@end
