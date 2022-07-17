//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PromotedContentSupport/APStatusConditions_XPC-Protocol.h>

@interface PCStatusConditionsImpl : NSObject <APStatusConditions_XPC>
{
}

- (id)setupXPCConnection;	// IMP=0x00000000000044fc
- (void)cleanupExpiredConditionsInBuffer;	// IMP=0x00000000000042d5
- (_Bool)operationWithCondition:(id)arg1 forType:(long long)arg2;	// IMP=0x0000000000003e67
- (_Bool)isConditionRateLimited:(id)arg1 onOperation:(long long)arg2;	// IMP=0x0000000000003db0
- (void)isStatusConditionRegistered:(id)arg1 bundleIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000003966
- (void)clearStatusCondition:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000352c
- (void)setStatusCondition:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002ee5

@end
