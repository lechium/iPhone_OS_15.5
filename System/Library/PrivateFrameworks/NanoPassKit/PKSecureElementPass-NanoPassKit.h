//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/PKSecureElementPass.h>

@class NSSet;

@interface PKSecureElementPass (NanoPassKit)
@property(readonly, nonatomic) NSSet *npkSubcredentials;
- (_Bool)npkExclusivelyTransactsOverNFC;	// IMP=0x0000000000024969
- (_Bool)npkExclusivelyTransactsOverBluetooth;	// IMP=0x00000000000248d6
- (_Bool)npkSupportsNFC;	// IMP=0x0000000000024843
- (_Bool)npkSupportsBluetooth;	// IMP=0x00000000000247b0
@end
