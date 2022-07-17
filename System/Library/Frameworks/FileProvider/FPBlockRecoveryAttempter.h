//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError;
@protocol FPXOperationService;

__attribute__((visibility("hidden")))
@interface FPBlockRecoveryAttempter : NSObject
{
    CDUnknownBlockType _recoveryBlock;	// 8 = 0x8
    id <FPXOperationService> _fpxOperationService;	// 16 = 0x10
    NSError *_expectedError;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000010246f
@property(nonatomic) __weak NSError *expectedError; // @synthesize expectedError=_expectedError;
- (_Bool)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2;	// IMP=0x0000000000101f3d
- (id)initWithBlock:(CDUnknownBlockType)arg1 operationService:(id)arg2;	// IMP=0x0000000000101ea1

@end
