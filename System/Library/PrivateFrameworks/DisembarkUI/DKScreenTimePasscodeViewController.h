//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OnBoardingKit/OBPasscodeViewController.h>

#import <DisembarkUI/OBPasscodeViewControllerDelegate-Protocol.h>

@class NSString;

@interface DKScreenTimePasscodeViewController : OBPasscodeViewController <OBPasscodeViewControllerDelegate>
{
    CDUnknownBlockType _verifyPasscode;	// 8 = 0x8
    CDUnknownBlockType _passcodeVerified;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000101b2
@property(copy, nonatomic) CDUnknownBlockType passcodeVerified; // @synthesize passcodeVerified=_passcodeVerified;
@property(copy, nonatomic) CDUnknownBlockType verifyPasscode; // @synthesize verifyPasscode=_verifyPasscode;
- (_Bool)passcodeViewController:(id)arg1 shouldEnableCompletionButtonForPasscode:(id)arg2;	// IMP=0x0000000000010132
- (void)passcodeViewController:(id)arg1 didEnterPasscode:(id)arg2;	// IMP=0x000000000001006b
- (id)completionButtonTitleForPasscodeViewController:(id)arg1;	// IMP=0x000000000001003f
- (id)initWithDeviceName:(id)arg1;	// IMP=0x000000000000fe69

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

