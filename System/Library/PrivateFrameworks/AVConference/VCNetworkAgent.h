//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCNetworkAgent : NSObject
{
    int _assertionRefCount;	// 8 = 0x8
}

+ (id)agentFromData:(id)arg1;	// IMP=0x00000000002c019d
+ (id)agentType;	// IMP=0x00000000002c0190
+ (id)agentDomain;	// IMP=0x00000000002c0183
+ (id)sharedInstance;	// IMP=0x00000000002c00cb
- (id)copyAgentData;	// IMP=0x00000000002c01a5
- (void)removeAssertion;	// IMP=0x00000000002c017d
- (void)addAssertion;	// IMP=0x00000000002c0177
- (void)dealloc;	// IMP=0x00000000002c0125
- (id)init;	// IMP=0x00000000002c00d3

@end

