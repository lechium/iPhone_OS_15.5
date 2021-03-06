//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BridgePreferences/BPSWelcomeOptinViewController.h>

@protocol STSMiniFlowControllerDelegate;

@interface COSScreenTimePasscodeSetViewController : BPSWelcomeOptinViewController
{
    id <STSMiniFlowControllerDelegate> miniFlowDelegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000000d44b
@property(nonatomic) __weak id <STSMiniFlowControllerDelegate> miniFlowDelegate; // @synthesize miniFlowDelegate;
- (void)suggestedButtonPressed:(id)arg1;	// IMP=0x001000000000d3d2
- (id)alternateButtonString;	// IMP=0x001000000000d3ca
- (id)suggestedButtonTitle;	// IMP=0x001000000000d35e
- (id)detailString;	// IMP=0x001000000000d277
- (id)titleString;	// IMP=0x001000000000d20b
- (void)viewDidLoad;	// IMP=0x001000000000ce17
- (id)init;	// IMP=0x001000000000cdc6

@end

