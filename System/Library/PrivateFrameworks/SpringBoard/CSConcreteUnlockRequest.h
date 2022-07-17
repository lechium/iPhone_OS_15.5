//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/CSUnlockRequest-Protocol.h>

@class NSString;

@interface CSConcreteUnlockRequest : NSObject <CSUnlockRequest>
{
    _Bool wantsBiometricPresentation;	// 8 = 0x8
    _Bool confirmedNotInPocket;	// 9 = 0x9
    int source;	// 12 = 0xc
    int intent;	// 16 = 0x10
    NSString *name;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000477097
@property(nonatomic) _Bool confirmedNotInPocket; // @synthesize confirmedNotInPocket;
@property(nonatomic) _Bool wantsBiometricPresentation; // @synthesize wantsBiometricPresentation;
@property(nonatomic) int intent; // @synthesize intent;
@property(nonatomic) int source; // @synthesize source;
@property(copy, nonatomic) NSString *name; // @synthesize name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
