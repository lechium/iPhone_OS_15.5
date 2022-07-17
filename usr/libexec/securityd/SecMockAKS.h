//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SecMockAKS : NSObject
{
}

+ (void)updateOperationsUntilUnlock;	// IMP=0x002000000000e185
+ (void)setOperationsUntilUnlock:(int)arg1;	// IMP=0x001000000000e179
+ (id)popDecryptRefKeyFailure;	// IMP=0x001000000000e0cd
+ (void)failNextDecryptRefKey:(id)arg1;	// IMP=0x001000000000e012
+ (void)unlockAllClasses;	// IMP=0x001000000000dfa2
+ (void)lockClassA_C;	// IMP=0x001000000000df32
+ (void)lockClassA;	// IMP=0x001000000000dec2
+ (_Bool)useGenerationCount;	// IMP=0x001000000000deba
+ (_Bool)isSEPDown;	// IMP=0x001000000000deb2
+ (_Bool)forceUnwrapKeyDecodeFailure;	// IMP=0x001000000000deaa
+ (_Bool)forceInvalidPersona;	// IMP=0x001000000000dea2
+ (_Bool)isLocked:(int)arg1;	// IMP=0x001000000000ddcd
+ (void)reset;	// IMP=0x001000000000dd5d
+ (void)setKeybag_state:(unsigned int)arg1;	// IMP=0x001000000000dd51
+ (unsigned int)keybag_state;	// IMP=0x001000000000dd45
+ (id)mutabilityQueue;	// IMP=0x001000000000dd15
+ (id)lockedStates;	// IMP=0x001000000000dcc8
+ (void)trapdoor;	// IMP=0x001000000000dca4

@end
