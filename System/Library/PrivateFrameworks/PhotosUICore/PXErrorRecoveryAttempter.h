//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface PXErrorRecoveryAttempter : NSObject
{
    NSArray *_recoveryOptions;	// 8 = 0x8
    long long _preferredRecoveryOptionIndex;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003b2d35
@property(nonatomic) long long preferredRecoveryOptionIndex; // @synthesize preferredRecoveryOptionIndex=_preferredRecoveryOptionIndex;
@property(copy, nonatomic) NSArray *recoveryOptions; // @synthesize recoveryOptions=_recoveryOptions;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void *)arg5;	// IMP=0x00000000003b2c00
- (long long)alertActionStyleForRecoveryOptionAtIndex:(unsigned long long)arg1;	// IMP=0x00000000003b2b7b
- (id)init;	// IMP=0x00000000003b2b39

@end

