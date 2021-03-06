//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFRecordStorage-Protocol.h>

@class NSData, NSString;

@interface WFConfiguredTriggerRealmObject <WFRecordStorage>
{
    _Bool _shouldPrompt;	// 24 = 0x18
    _Bool _enabled;	// 25 = 0x19
    NSString *_triggerID;	// 32 = 0x20
    NSString *_workflowID;	// 40 = 0x28
    NSData *_triggerData;	// 48 = 0x30
}

+ (id)defaultPropertyValues;	// IMP=0x0000000000320a38
+ (id)requiredProperties;	// IMP=0x00000000003209d1
+ (id)primaryKey;	// IMP=0x00000000003209c4
- (void).cxx_destruct;	// IMP=0x0000000000320cc4
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool shouldPrompt; // @synthesize shouldPrompt=_shouldPrompt;
@property(copy, nonatomic) NSData *triggerData; // @synthesize triggerData=_triggerData;
@property(copy, nonatomic) NSString *workflowID; // @synthesize workflowID=_workflowID;
@property(copy, nonatomic) NSString *triggerID; // @synthesize triggerID=_triggerID;
- (id)trigger;	// IMP=0x0000000000320bbb
- (id)descriptor;	// IMP=0x0000000000320acf
- (id)identifier;	// IMP=0x0000000000320abd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

