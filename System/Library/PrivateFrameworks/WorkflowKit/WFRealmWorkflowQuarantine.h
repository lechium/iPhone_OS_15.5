//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString, RLMLinkingObjects;

@interface WFRealmWorkflowQuarantine
{
    NSString *_sourceAppIdentifier;	// 24 = 0x18
    NSDate *_importDate;	// 32 = 0x20
    RLMLinkingObjects *_workflows;	// 40 = 0x28
}

+ (id)linkingObjectsProperties;	// IMP=0x00000000003418b7
+ (id)defaultPropertyValues;	// IMP=0x00000000003417f2
+ (id)requiredProperties;	// IMP=0x0000000000341780
+ (id)className;	// IMP=0x0000000000341773
- (void).cxx_destruct;	// IMP=0x0000000000341731
@property(readonly) RLMLinkingObjects *workflows; // @synthesize workflows=_workflows;
@property(retain) NSDate *importDate; // @synthesize importDate=_importDate;
@property(copy) NSString *sourceAppIdentifier; // @synthesize sourceAppIdentifier=_sourceAppIdentifier;

@end
