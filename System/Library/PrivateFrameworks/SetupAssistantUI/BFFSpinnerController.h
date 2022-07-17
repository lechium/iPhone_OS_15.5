//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OnBoardingKit/OBSetupAssistantSpinnerController.h>

#import <SetupAssistantUI/BFFFlowItem-Protocol.h>

@class NSString;
@protocol BFFFlowItemDelegate;

@interface BFFSpinnerController : OBSetupAssistantSpinnerController <BFFFlowItem>
{
    id <BFFFlowItemDelegate> _delegate;	// 8 = 0x8
}

+ (id)cloudConfigSkipKey;	// IMP=0x000000000000cd1a
- (void).cxx_destruct;	// IMP=0x000000000000cd67
@property(nonatomic) __weak id <BFFFlowItemDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)shouldAllowStartOver;	// IMP=0x000000000000cd32
- (_Bool)isEphemeral;	// IMP=0x000000000000cd2a
- (_Bool)shouldSuppressExtendedInitializationActivityIndicator;	// IMP=0x000000000000cd22

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
