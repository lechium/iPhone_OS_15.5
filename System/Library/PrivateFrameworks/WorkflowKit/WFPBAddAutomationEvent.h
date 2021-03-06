//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <WorkflowKit/NSCopying-Protocol.h>

@class NSString;

@interface WFPBAddAutomationEvent : PBCodable <NSCopying>
{
    unsigned int _actionCount;	// 8 = 0x8
    NSString *_activityType;	// 16 = 0x10
    NSString *_appBundleIdentifier;	// 24 = 0x18
    NSString *_automationSuggestionsTrialIdentifier;	// 32 = 0x20
    NSString *_intentType;	// 40 = 0x28
    NSString *_key;	// 48 = 0x30
    NSString *_shortcutIdentifier;	// 56 = 0x38
    NSString *_source;	// 64 = 0x40
    NSString *_triggerType;	// 72 = 0x48
    CDStruct_810980b6 _has;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000002755c5
@property(retain, nonatomic) NSString *automationSuggestionsTrialIdentifier; // @synthesize automationSuggestionsTrialIdentifier=_automationSuggestionsTrialIdentifier;
@property(retain, nonatomic) NSString *activityType; // @synthesize activityType=_activityType;
@property(retain, nonatomic) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
@property(retain, nonatomic) NSString *shortcutIdentifier; // @synthesize shortcutIdentifier=_shortcutIdentifier;
@property(nonatomic) unsigned int actionCount; // @synthesize actionCount=_actionCount;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *intentType; // @synthesize intentType=_intentType;
@property(retain, nonatomic) NSString *triggerType; // @synthesize triggerType=_triggerType;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000027535b
- (unsigned long long)hash;	// IMP=0x000000000027523d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000275009
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000274e5d
- (void)copyTo:(id)arg1;	// IMP=0x0000000000274d1a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000274beb
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000274bde
- (id)dictionaryRepresentation;	// IMP=0x0000000000274a0f
- (id)description;	// IMP=0x0000000000274960
@property(readonly, nonatomic) _Bool hasAutomationSuggestionsTrialIdentifier;
@property(readonly, nonatomic) _Bool hasActivityType;
@property(readonly, nonatomic) _Bool hasAppBundleIdentifier;
@property(readonly, nonatomic) _Bool hasShortcutIdentifier;
@property(nonatomic) _Bool hasActionCount;
@property(readonly, nonatomic) _Bool hasSource;
@property(readonly, nonatomic) _Bool hasIntentType;
@property(readonly, nonatomic) _Bool hasTriggerType;
@property(readonly, nonatomic) _Bool hasKey;

@end

