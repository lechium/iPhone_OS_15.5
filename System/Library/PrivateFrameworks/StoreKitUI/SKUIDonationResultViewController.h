//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/SKUIDonationConfigurationObserver-Protocol.h>

@class NSString, SKUIDonationResultView, SKUIGiftAmount;

__attribute__((visibility("hidden")))
@interface SKUIDonationResultViewController <SKUIDonationConfigurationObserver>
{
    SKUIGiftAmount *_donationAmount;	// 8 = 0x8
    SKUIDonationResultView *_resultView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003440ab
@property(copy, nonatomic) SKUIGiftAmount *donationAmount; // @synthesize donationAmount=_donationAmount;
- (void)_doneButtonAction:(id)arg1;	// IMP=0x000000000034402a
- (void)donationConfigurationController:(id)arg1 didLoadLogoForCharity:(id)arg2;	// IMP=0x0000000000343f6c
- (void)loadView;	// IMP=0x0000000000343b9b
- (id)initWithCharity:(id)arg1 configuration:(id)arg2;	// IMP=0x0000000000343a8e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

