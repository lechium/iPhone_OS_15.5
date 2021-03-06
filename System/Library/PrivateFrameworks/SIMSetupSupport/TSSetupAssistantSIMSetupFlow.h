//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SIMSetupSupport/TSCellularPlanManagerCacheDelegate-Protocol.h>
#import <SIMSetupSupport/TSSIMSetupFlowDelegate-Protocol.h>

@class NSMutableArray, NSString, UIBarButtonItem;

@interface TSSetupAssistantSIMSetupFlow <TSSIMSetupFlowDelegate, TSCellularPlanManagerCacheDelegate>
{
    _Bool _showAddPlan;	// 8 = 0x8
    NSMutableArray *_danglingPlanItems;	// 16 = 0x10
    NSString *_iccid;	// 24 = 0x18
    UIBarButtonItem *_cancelButton;	// 32 = 0x20
    _Bool _inBuddy;	// 40 = 0x28
    NSMutableArray *_currentItemsForIMessage;	// 48 = 0x30
}

+ (void)needsToRun:(CDUnknownBlockType)arg1;	// IMP=0x000000000000b8ed
- (void).cxx_destruct;	// IMP=0x000000000000c305
@property _Bool inBuddy; // @synthesize inBuddy=_inBuddy;
@property(retain) NSMutableArray *currentItemsForIMessage; // @synthesize currentItemsForIMessage=_currentItemsForIMessage;
- (void)setDefaultNavigationItems:(id)arg1;	// IMP=0x000000000000c189
- (void)viewControllerDidComplete:(id)arg1;	// IMP=0x000000000000c11d
- (id)nextViewControllerFrom:(id)arg1;	// IMP=0x000000000000bd67
- (id)firstViewController;	// IMP=0x000000000000bc2b
- (id)initWithIccid:(id)arg1 showAddPlan:(_Bool)arg2 allowDismiss:(_Bool)arg3;	// IMP=0x000000000000bade
- (id)init;	// IMP=0x000000000000b9fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

