//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

@class NSDictionary;

@interface RMPasscodeViewController : PSListController
{
    NSDictionary *_passcodeSettings;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x00000000000050fe
@property(copy, nonatomic) NSDictionary *passcodeSettings; // @synthesize passcodeSettings=_passcodeSettings;
- (id)uniquePasscodes:(id)arg1;	// IMP=0x000000000000505b
- (id)maxInactivity:(id)arg1;	// IMP=0x0000000000004f6c
- (id)maxGracePeriod:(id)arg1;	// IMP=0x0000000000004e7d
- (id)maxAttempts:(id)arg1;	// IMP=0x0000000000004dfc
- (id)minLength:(id)arg1;	// IMP=0x0000000000004d7b
- (id)simplePasscodes:(id)arg1;	// IMP=0x0000000000004ce1
- (id)_specifiersForPasscodeSettings;	// IMP=0x00000000000049a9
- (void)_processUserInfoDictionary;	// IMP=0x000000000000492c
- (id)specifiers;	// IMP=0x00000000000048dc
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000004887
- (void)viewDidLoad;	// IMP=0x00000000000047d5

@end
