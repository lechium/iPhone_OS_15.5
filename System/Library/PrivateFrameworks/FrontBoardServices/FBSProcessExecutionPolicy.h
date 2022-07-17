//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>
#import <FrontBoardServices/NSCopying-Protocol.h>

@class FBSProcessExecutionStrategy, NSArray, NSString;

@interface FBSProcessExecutionPolicy : NSObject <NSCopying, BSDescriptionProviding>
{
    FBSProcessExecutionStrategy *_strategy;	// 8 = 0x8
    NSArray *_provisions;	// 16 = 0x10
}

+ (id)policyForStrategy:(id)arg1 withProvisions:(id)arg2;	// IMP=0x0000000000038489
- (void).cxx_destruct;	// IMP=0x00000000000389ff
@property(copy, nonatomic) NSArray *provisions; // @synthesize provisions=_provisions;
@property(copy, nonatomic) FBSProcessExecutionStrategy *strategy; // @synthesize strategy=_strategy;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000038859
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000038809
- (id)succinctDescriptionBuilder;	// IMP=0x00000000000387ed
- (id)succinctDescription;	// IMP=0x000000000003879d
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003875c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
