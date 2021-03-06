//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol HFIconDescriptor;

@interface HFTriggerUISummary : NSObject
{
    _Bool _triggerNameIsConfigured;	// 8 = 0x8
    NSString *_triggerDisplayTitle;	// 16 = 0x10
    NSString *_triggerName;	// 24 = 0x18
    NSString *_triggerNaturalLanguageTitle;	// 32 = 0x20
    NSString *_triggerTitle;	// 40 = 0x28
    NSString *_triggerDescription;	// 48 = 0x30
    unsigned long long _triggerType;	// 56 = 0x38
    id <HFIconDescriptor> _triggerIconDescriptor;	// 64 = 0x40
    NSArray *_triggerSummaryIconDescriptors;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000025c349
@property(readonly, nonatomic) NSArray *triggerSummaryIconDescriptors; // @synthesize triggerSummaryIconDescriptors=_triggerSummaryIconDescriptors;
@property(readonly, nonatomic) id <HFIconDescriptor> triggerIconDescriptor; // @synthesize triggerIconDescriptor=_triggerIconDescriptor;
@property(readonly, nonatomic) unsigned long long triggerType; // @synthesize triggerType=_triggerType;
@property(readonly, nonatomic) NSString *triggerDescription; // @synthesize triggerDescription=_triggerDescription;
@property(readonly, nonatomic) NSString *triggerTitle; // @synthesize triggerTitle=_triggerTitle;
@property(readonly, nonatomic) _Bool triggerNameIsConfigured; // @synthesize triggerNameIsConfigured=_triggerNameIsConfigured;
@property(readonly, nonatomic) NSString *triggerNaturalLanguageTitle; // @synthesize triggerNaturalLanguageTitle=_triggerNaturalLanguageTitle;
@property(readonly, nonatomic) NSString *triggerName; // @synthesize triggerName=_triggerName;
@property(readonly, nonatomic) NSString *triggerDisplayTitle; // @synthesize triggerDisplayTitle=_triggerDisplayTitle;
- (void)_getTriggerName:(id)arg1 home:(id)arg2;	// IMP=0x000000000025c1a0
- (void)_updateWithTrigger:(id)arg1 inHome:(id)arg2 forceDisabled:(_Bool)arg3 ignoringDisabled:(_Bool)arg4;	// IMP=0x000000000025bf77
- (id)initWithTrigger:(id)arg1 inHome:(id)arg2 forceDisabled:(_Bool)arg3 ignoringDisabled:(_Bool)arg4;	// IMP=0x000000000025bed6
- (id)initWithTrigger:(id)arg1 inHome:(id)arg2 forceDisabled:(_Bool)arg3;	// IMP=0x000000000025be3b

@end

