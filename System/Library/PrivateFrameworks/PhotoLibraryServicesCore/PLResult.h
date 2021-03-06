//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError;

@interface PLResult : NSObject
{
    id _result;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
}

+ (id)failureWithError:(id)arg1;	// IMP=0x0000000000061e1c
+ (id)successWithResult:(id)arg1;	// IMP=0x0000000000061dd1
- (void).cxx_destruct;	// IMP=0x0000000000061da9
@property(readonly, copy) NSError *error; // @synthesize error=_error;
@property(readonly) id result; // @synthesize result=_result;
- (id)description;	// IMP=0x0000000000061ccb
- (id)resultWithError:(id *)arg1;	// IMP=0x0000000000061c97
@property(readonly) _Bool isFailure;
@property(readonly) _Bool isSuccess;
- (id)initWithResult:(id)arg1 error:(id)arg2;	// IMP=0x0000000000061b35

@end

