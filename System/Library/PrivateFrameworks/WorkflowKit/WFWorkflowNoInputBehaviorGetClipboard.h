//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFWorkflowNoInputBehavior-Protocol.h>

@class NSString;

@interface WFWorkflowNoInputBehaviorGetClipboard : NSObject <WFWorkflowNoInputBehavior>
{
}

+ (_Bool)resolvesInput;	// IMP=0x0000000000298bb3
+ (id)behaviorName;	// IMP=0x0000000000298ba1
- (id)serializedRepresentation;	// IMP=0x0000000000298e34
- (id)initWithSerializedRepresentation:(id)arg1;	// IMP=0x0000000000298d84
- (void)resolveWithUserInterface:(id)arg1 runningDelegate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000298bbb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
