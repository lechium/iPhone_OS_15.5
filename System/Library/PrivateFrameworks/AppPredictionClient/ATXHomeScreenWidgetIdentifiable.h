//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/ATXMemoryPressureObserver-Protocol.h>
#import <AppPredictionClient/ATXProtoBufWrapper-Protocol.h>
#import <AppPredictionClient/NSSecureCoding-Protocol.h>

@class ATXMemoryPressureMonitor, INIntent, NSData, NSString;

@interface ATXHomeScreenWidgetIdentifiable : NSObject <NSSecureCoding, ATXProtoBufWrapper, ATXMemoryPressureObserver>
{
    NSData *_intentProtoData;	// 8 = 0x8
    INIntent *_intent;	// 16 = 0x10
    ATXMemoryPressureMonitor *_memoryPressureMonitor;	// 24 = 0x18
    _Bool _suggestedWidget;	// 32 = 0x20
    _Bool _onboardingWidget;	// 33 = 0x21
    NSString *_extensionBundleId;	// 40 = 0x28
    NSString *_widgetKind;	// 48 = 0x30
    unsigned long long _size;	// 56 = 0x38
    NSString *_appBundleId;	// 64 = 0x40
    NSString *_widgetUniqueId;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000064189
- (void).cxx_destruct;	// IMP=0x0000000000065105
@property(nonatomic, getter=isOnboardingWidget) _Bool onboardingWidget; // @synthesize onboardingWidget=_onboardingWidget;
@property(nonatomic, getter=isSuggestedWidget) _Bool suggestedWidget; // @synthesize suggestedWidget=_suggestedWidget;
@property(copy, nonatomic) NSString *widgetUniqueId; // @synthesize widgetUniqueId=_widgetUniqueId;
@property(copy, nonatomic) NSString *appBundleId; // @synthesize appBundleId=_appBundleId;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *widgetKind; // @synthesize widgetKind=_widgetKind;
@property(copy, nonatomic) NSString *extensionBundleId; // @synthesize extensionBundleId=_extensionBundleId;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000064dbe
- (unsigned long long)hash;	// IMP=0x0000000000064d12
- (_Bool)isSameWidgetAsWidgetBundleId:(id)arg1 widgetKind:(id)arg2;	// IMP=0x0000000000064b3c
- (id)initWithProto:(id)arg1;	// IMP=0x00000000000648fb
- (id)initWithProtoData:(id)arg1;	// IMP=0x000000000006485f
- (id)proto;	// IMP=0x0000000000064657
- (id)encodeAsProto;	// IMP=0x0000000000064607
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006457a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000064501
- (_Bool)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;	// IMP=0x0000000000064349
- (_Bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;	// IMP=0x0000000000064191
- (void)handleMemoryPressure;	// IMP=0x00000000000640cf
@property(retain, nonatomic) INIntent *intent;
- (id)initFromDictionaryRepresentation:(id)arg1;	// IMP=0x0000000000063d2c
- (id)_dictionaryRepresentationIncludingFullIntent:(_Bool)arg1;	// IMP=0x0000000000063ae9
- (id)dictionaryRepresentation;	// IMP=0x0000000000063ad2
- (id)compactDescription;	// IMP=0x0000000000063a55
- (id)description;	// IMP=0x000000000006393f
- (void)dealloc;	// IMP=0x00000000000638fa
- (id)initWithMemoryPressureMonitor:(id)arg1;	// IMP=0x000000000006387b
- (id)init;	// IMP=0x0000000000063821

@end

