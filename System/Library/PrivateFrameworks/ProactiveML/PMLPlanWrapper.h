//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLPlistAndChunksSerializableProtocol-Protocol.h>

@class NSString;
@protocol PMLPlanProtocol;

@interface PMLPlanWrapper : NSObject <PMLPlistAndChunksSerializableProtocol>
{
    id <PMLPlanProtocol> _plan;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000030f4e
@property(readonly, nonatomic) id <PMLPlanProtocol> plan; // @synthesize plan=_plan;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;	// IMP=0x0000000000030d98
- (id)toPlistWithChunks:(id)arg1;	// IMP=0x0000000000030c8d
- (id)initWithPlan:(id)arg1;	// IMP=0x0000000000030c22
- (id)init;	// IMP=0x0000000000030c1c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

