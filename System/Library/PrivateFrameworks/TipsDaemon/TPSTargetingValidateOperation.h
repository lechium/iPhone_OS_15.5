//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TipsCore/TPSAsyncOperation.h>

@class NSString, TPSTargetingValidation;

@interface TPSTargetingValidateOperation : TPSAsyncOperation
{
    TPSTargetingValidation *_validator;	// 8 = 0x8
    NSString *_context;	// 16 = 0x10
    long long _result;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000301ef
@property(nonatomic) long long result; // @synthesize result=_result;
@property(copy, nonatomic) NSString *context; // @synthesize context=_context;
@property(readonly, nonatomic) TPSTargetingValidation *validator; // @synthesize validator=_validator;
- (id)description;	// IMP=0x00000000000300e2
- (void)cancel;	// IMP=0x000000000002ffe7
- (void)main;	// IMP=0x000000000002fd33
- (id)initWithTargetingCondition:(id)arg1;	// IMP=0x000000000002fcb6

@end

