//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol SFMaskGenerationFunction;

@interface SFRSA_PSSSigningOperation
{
    id _pssSigningOperationInternal;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000004b37
@property(copy, nonatomic) id <SFMaskGenerationFunction> maskGenerationFunction;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000004acc
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000004a9d
- (id)initWithKeySpecifier:(id)arg1 digestOperation:(id)arg2 maskGenerationFunction:(id)arg3;	// IMP=0x0000000000004a16
- (id)initWithKeySpecifier:(id)arg1 digestOperation:(id)arg2;	// IMP=0x0000000000004994

@end
