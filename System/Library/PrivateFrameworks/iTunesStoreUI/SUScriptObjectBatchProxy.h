//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SUScriptObjectInvocationBatch;

@interface SUScriptObjectBatchProxy : NSObject
{
    SUScriptObjectInvocationBatch *_invocationBatch;	// 8 = 0x8
    id _target;	// 16 = 0x10
}

@property id target; // @synthesize target=_target;
@property SUScriptObjectInvocationBatch *invocationBatch; // @synthesize invocationBatch=_invocationBatch;
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x000000000009a592
- (void)forwardInvocation:(id)arg1;	// IMP=0x000000000009a4ce

@end
