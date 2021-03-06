//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFWorkflowNoInputBehavior-Protocol.h>

@class NSDictionary, NSString;

@interface WFWorkflowNoInputBehaviorAskForInput : NSObject <WFWorkflowNoInputBehavior>
{
    NSDictionary *_serializedParameters;	// 8 = 0x8
    Class _contentItemClass;	// 16 = 0x10
}

+ (_Bool)resolvesInput;	// IMP=0x0000000000298b99
+ (id)behaviorName;	// IMP=0x0000000000298b87
- (void).cxx_destruct;	// IMP=0x0000000000298b5f
@property(readonly, nonatomic) Class contentItemClass; // @synthesize contentItemClass=_contentItemClass;
- (id)serializedRepresentation;	// IMP=0x00000000002989c0
- (id)initWithSerializedRepresentation:(id)arg1;	// IMP=0x000000000029880b
- (void)resolveWithUserInterface:(id)arg1 runningDelegate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000298571
@property(readonly, nonatomic) NSDictionary *serializedParameters; // @synthesize serializedParameters=_serializedParameters;
- (id)initWithContentItemClass:(Class)arg1 serializedParameters:(id)arg2;	// IMP=0x00000000002983cf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

