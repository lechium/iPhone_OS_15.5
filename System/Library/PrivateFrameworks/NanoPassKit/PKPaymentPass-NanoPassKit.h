//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/PKPaymentPass.h>

@interface PKPaymentPass (NanoPassKit)
- (_Bool)npkIsInLostMode;	// IMP=0x0000000000024f48
- (void)npkSetPreferredPaymentApplication:(id)arg1;	// IMP=0x0000000000024e84
- (id)npkPreferredContactlessPaymentApplication;	// IMP=0x0000000000024d7b
- (id)npkDevicePaymentApplicationForAID:(id)arg1;	// IMP=0x0000000000024b85
- (id)npkSortedDeviceContactlessPaymentApplications;	// IMP=0x0000000000024b00
- (_Bool)npkHasMultiplePaymentApplications;	// IMP=0x0000000000024ab7
- (_Bool)npkHasUserSelectableContactlessPaymentApplications;	// IMP=0x0000000000024a4c
@end

