//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface COSSiriOptinViewController
{
    _Bool _languageSupported;	// 8 = 0x8
}

+ (_Bool)controllerNeedsToRun;	// IMP=0x002000000004b0bb
+ (_Bool)wantsUnifiedFYI;	// IMP=0x001000000004b073
@property(nonatomic) _Bool languageSupported; // @synthesize languageSupported=_languageSupported;
- (id)detailTitleString;	// IMP=0x001000000004b842
- (id)learnMoreButtonTitle;	// IMP=0x001000000004b7d6
- (id)alternateButtonTitle;	// IMP=0x001000000004b75b
- (id)okayButtonTitle;	// IMP=0x001000000004b6ef
- (id)suggestedButtonTitle;	// IMP=0x001000000004b674
- (void)applyConfirmedOptin:(_Bool)arg1;	// IMP=0x001000000004b61e
- (void)learnMoreButtonPressed:(id)arg1;	// IMP=0x001000000004b5b4
- (void)okayButtonPressed:(id)arg1;	// IMP=0x001000000004b568
- (void)alternateButtonPressed:(id)arg1;	// IMP=0x001000000004b554
- (void)suggestedButtonPressed:(id)arg1;	// IMP=0x001000000004b482
- (id)imageResource;	// IMP=0x001000000004b431
- (id)detailString;	// IMP=0x001000000004b3a3
- (id)titleString;	// IMP=0x001000000004b337
- (id)init;	// IMP=0x001000000004b1a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
