//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TPSBlockValidation
{
    CDUnknownBlockType _validationBlock;	// 8 = 0x8
}

+ (id)blockValidationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000010424
- (void).cxx_destruct;	// IMP=0x0000000000010596
@property(copy, nonatomic) CDUnknownBlockType validationBlock; // @synthesize validationBlock=_validationBlock;
- (void)validateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000104e7
- (id)initWithValidationBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000010475

@end
