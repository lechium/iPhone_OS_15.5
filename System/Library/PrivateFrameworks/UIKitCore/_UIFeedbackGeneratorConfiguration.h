//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSArray, NSSet, NSString;

@interface _UIFeedbackGeneratorConfiguration : NSObject <NSCopying>
{
    _Bool _settingsEnabled;	// 8 = 0x8
    _Bool _setup;	// 9 = 0x9
    _Bool _enabled;	// 10 = 0xa
    NSSet *_usedFeedbacks;	// 16 = 0x10
    CDUnknownBlockType _preparationBlock;	// 24 = 0x18
    Class _clientClass;	// 32 = 0x20
    NSString *_usage;	// 40 = 0x28
    long long _requiredSupportLevel;	// 48 = 0x30
    long long _activationStyle;	// 56 = 0x38
    long long _outputMode;	// 64 = 0x40
    NSString *__stats_key;	// 72 = 0x48
}

+ (id)_configurationWithKey:(id)arg1 preparationBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000647ad0
+ (id)_configurationWithKey:(id)arg1 requiredSupportLevel:(long long)arg2 preparationBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000647a0f
+ (id)_disabledConfiguration;	// IMP=0x00000000006479e1
+ (id)defaultConfiguration;	// IMP=0x0000000000646527
- (void).cxx_destruct;	// IMP=0x0000000000647baa
@property(copy, nonatomic) NSString *_stats_key; // @synthesize _stats_key=__stats_key;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic, getter=isSetup) _Bool setup; // @synthesize setup=_setup;
@property(nonatomic) _Bool settingsEnabled; // @synthesize settingsEnabled=_settingsEnabled;
@property(nonatomic) long long outputMode; // @synthesize outputMode=_outputMode;
@property(nonatomic) long long activationStyle; // @synthesize activationStyle=_activationStyle;
@property(nonatomic) long long requiredSupportLevel; // @synthesize requiredSupportLevel=_requiredSupportLevel;
@property(copy, nonatomic) NSString *usage; // @synthesize usage=_usage;
@property(copy, nonatomic) Class clientClass; // @synthesize clientClass=_clientClass;
@property(copy, nonatomic) CDUnknownBlockType preparationBlock; // @synthesize preparationBlock=_preparationBlock;
- (void)_preferencesUpdated:(id)arg1;	// IMP=0x000000000064794f
- (void)_updateEnabled;	// IMP=0x000000000064791e
- (_Bool)_setupIfNecessary;	// IMP=0x00000000006477b6
- (_Bool)_shouldEnable;	// IMP=0x00000000006475a2
@property(readonly, nonatomic) _Bool defaultEnabled;
@property(readonly, nonatomic) NSSet *usedFeedbacks; // @synthesize usedFeedbacks=_usedFeedbacks;
- (id)_updateFeedbacksForOutputMode:(id)arg1;	// IMP=0x0000000000647084
- (id)_updateFeedbackForOutputMode:(id)arg1;	// IMP=0x0000000000646df4
@property(readonly, nonatomic) NSArray *feedbackKeyPaths;
- (id)tweakedConfigurationForClass:(Class)arg1 usage:(id)arg2;	// IMP=0x0000000000646dde
- (id)tweakedConfigurationForCaller:(id)arg1 usage:(id)arg2;	// IMP=0x0000000000646d7e
@property(readonly, nonatomic) NSString *descriptionKey;
- (id)description;	// IMP=0x0000000000646bbf
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006468ec
- (void)dealloc;	// IMP=0x0000000000646836
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006465d4
- (id)init;	// IMP=0x0000000000646539

@end

