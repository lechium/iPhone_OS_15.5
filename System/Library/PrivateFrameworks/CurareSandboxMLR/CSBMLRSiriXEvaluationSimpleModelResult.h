//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CurareSandboxMLR/CSBMLRSiriXEvaluationResultProtocol-Protocol.h>

@class NSNumber;

@interface CSBMLRSiriXEvaluationSimpleModelResult : NSObject <CSBMLRSiriXEvaluationResultProtocol>
{
    _Bool classified;	// 8 = 0x8
    _Bool classifyResult;	// 9 = 0x9
    NSNumber *probablity;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000000c50
@property(retain, nonatomic) NSNumber *probablity; // @synthesize probablity;
@property(nonatomic) _Bool classifyResult; // @synthesize classifyResult;
@property(nonatomic) _Bool classified; // @synthesize classified;
- (id)initWithResult:(_Bool)arg1 classifyResult:(_Bool)arg2;	// IMP=0x0000000000000b8f

@end

