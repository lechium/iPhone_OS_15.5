//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SettingsCellularUI/PSSpecifierGroup-Protocol.h>
#import <SettingsCellularUI/TSSIMSetupDelegate-Protocol.h>

@class CTCellularPlanManager, Logger, NSMutableArray, NSString, PSListController, PSSpecifier, PSUICellularPlanManagerCache, TSSIMSetupFlow;

__attribute__((visibility("hidden")))
@interface PSUIAddOnPlanGroup : NSObject <TSSIMSetupDelegate, PSSpecifierGroup>
{
    PSUICellularPlanManagerCache *_cellularPlanManager;	// 8 = 0x8
    CTCellularPlanManager *_ctCellularPlanManager;	// 16 = 0x10
    PSSpecifier *_groupSpecifier;	// 24 = 0x18
    NSString *_carrierName;	// 32 = 0x20
    NSMutableArray *_remotePlansSpecifiers;	// 40 = 0x28
    Logger *_logger;	// 48 = 0x30
    PSListController *_listController;	// 56 = 0x38
    TSSIMSetupFlow *_flow;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000005593c
@property(retain) TSSIMSetupFlow *flow; // @synthesize flow=_flow;
@property(nonatomic) __weak PSListController *listController; // @synthesize listController=_listController;
- (id)getLogger;	// IMP=0x0000000000055898
- (void)simSetupFlowCompleted:(unsigned long long)arg1;	// IMP=0x0000000000055769
- (void)remoteItemPressed:(id)arg1;	// IMP=0x00000000000545e7
- (id)specifiersForRemotePlans;	// IMP=0x000000000005421f
- (id)specifiers;	// IMP=0x0000000000054039
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 planManager:(id)arg3 ctPlanManager:(id)arg4;	// IMP=0x0000000000053f39
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;	// IMP=0x0000000000053e79
- (id)init;	// IMP=0x0000000000053e3c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

