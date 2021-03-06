//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ChronoServices/BSDescriptionProviding-Protocol.h>
#import <ChronoServices/CHSWidgetConfigurationReference-Protocol.h>
#import <ChronoServices/CHSWidgetPersonality-Protocol.h>
#import <ChronoServices/NSCopying-Protocol.h>
#import <ChronoServices/NSSecureCoding-Protocol.h>

@class CHSConfiguredWidgetContainerDescriptor, CHSWidget, CHSWidgetMetrics, NSString;

@interface CHSConfiguredWidgetDescriptor : NSObject <BSDescriptionProviding, CHSWidgetConfigurationReference, NSCopying, NSSecureCoding, CHSWidgetPersonality>
{
    CHSConfiguredWidgetContainerDescriptor *_weak_container;	// 8 = 0x8
    _Bool _suggestion;	// 16 = 0x10
    _Bool _systemConfigured;	// 17 = 0x11
    NSString *_uniqueIdentifier;	// 24 = 0x18
    CHSWidget *_widget;	// 32 = 0x20
    CHSWidgetMetrics *_metrics;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000014db0
+ (id)new;	// IMP=0x000000000001434e
- (void).cxx_destruct;	// IMP=0x000000000001505c
@property(readonly, nonatomic, getter=isSystemConfigured) _Bool systemConfigured; // @synthesize systemConfigured=_systemConfigured;
@property(readonly, nonatomic, getter=isSuggestion) _Bool suggestion; // @synthesize suggestion=_suggestion;
@property(readonly, copy, nonatomic) CHSWidgetMetrics *metrics; // @synthesize metrics=_metrics;
@property(readonly, copy, nonatomic) CHSWidget *widget; // @synthesize widget=_widget;
@property(readonly, copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000014e7b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000014db8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000014da5
- (_Bool)matchesPersonality:(id)arg1;	// IMP=0x0000000000014d8e
@property(readonly, copy, nonatomic) NSString *kind;
@property(readonly, copy, nonatomic) NSString *extensionBundleIdentifier;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000014ba5
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000014b41
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000014b25
- (id)succinctDescription;	// IMP=0x0000000000014ac1
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000145d1
- (void)_setContainer:(id)arg1;	// IMP=0x00000000000145c0
@property(readonly, nonatomic) __weak CHSConfiguredWidgetContainerDescriptor *container;
- (id)initWithUniqueIdentifier:(id)arg1 widget:(id)arg2 metrics:(id)arg3 isSuggestion:(_Bool)arg4 isSystemConfigured:(_Bool)arg5;	// IMP=0x0000000000014480
- (id)init;	// IMP=0x00000000000143df

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

