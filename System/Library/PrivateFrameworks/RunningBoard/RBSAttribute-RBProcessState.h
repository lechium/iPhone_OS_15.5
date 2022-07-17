//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RunningBoardServices/RBSAttribute.h>

@interface RBSAttribute (RBProcessState)
- (_Bool)preventsSuspension;	// IMP=0x0000000000046460
- (_Bool)hasMandatoryAttributes:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000046458
- (_Bool)conflictsWithAttribute:(id)arg1;	// IMP=0x0000000000046450
- (_Bool)isValidForContext:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000000046448
- (id)effectiveAttributesWithContext:(id)arg1;	// IMP=0x000000000004642c
- (void)applyToAcquisitionContext:(id)arg1;	// IMP=0x0000000000046426
- (void)applyToSystemState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;	// IMP=0x0000000000046420
- (void)applyToAssertionIntransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;	// IMP=0x000000000004641a
- (void)applyToAssertionTransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;	// IMP=0x0000000000046414
- (void)applyToProcessState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;	// IMP=0x000000000004640e
@end
