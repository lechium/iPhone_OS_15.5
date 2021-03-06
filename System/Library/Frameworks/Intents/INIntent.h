//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INEnumerable-Protocol.h>
#import <Intents/INGenericIntent-Protocol.h>
#import <Intents/INImageProxyInjecting-Protocol.h>
#import <Intents/INIntentExport-Protocol.h>
#import <Intents/INIntentSlotComposing-Protocol.h>
#import <Intents/INKeyImageProducing-Protocol.h>
#import <Intents/INRuntimeObject-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INImage, INIntentCodableDescription, INIntentDonationMetadata, INIntentKeyParameter, INParameterContexts, NSArray, NSDictionary, NSMutableDictionary, NSNumber, NSOrderedSet, NSString, NSUUID, PBCodable, _INPBIntentMetadata;

@interface INIntent : NSObject <INImageProxyInjecting, INIntentSlotComposing, INKeyImageProducing, INEnumerable, INIntentExport, INGenericIntent, INRuntimeObject, NSCopying, NSSecureCoding>
{
    NSMutableDictionary *_intentInstanceDescriptionMapping;	// 8 = 0x8
    NSArray *_parameterImages;	// 16 = 0x10
    _Bool _hasLoadedKeyParameter;	// 24 = 0x18
    struct os_unfair_lock_s _keyParameterLock;	// 28 = 0x1c
    _Bool _shouldForwardToAppOnSucccess;	// 32 = 0x20
    unsigned int _audioSessionID;	// 36 = 0x24
    NSDictionary *_parameterCombinations;	// 40 = 0x28
    NSDictionary *_configurableParameterCombinations;	// 48 = 0x30
    INParameterContexts *_parameterContexts;	// 56 = 0x38
    long long _indexingHash;	// 64 = 0x40
    INIntentKeyParameter *_keyParameter;	// 72 = 0x48
    NSString *_identifier;	// 80 = 0x50
    INIntentDonationMetadata *_donationMetadata;	// 88 = 0x58
    PBCodable *_backingStore;	// 96 = 0x60
    NSString *_recordRoute;	// 104 = 0x68
    NSUUID *_recordDeviceUID;	// 112 = 0x70
    NSString *_recordDeviceIdentifier;	// 120 = 0x78
    long long __preferredInteractionDirection;	// 128 = 0x80
}

+ (_Bool)resolveInstanceMethod:(SEL)arg1;	// IMP=0x00000000002daa61
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002daa59
+ (id)intentDescription;	// IMP=0x00000000002daa47
+ (id)typeName;	// IMP=0x00000000002da9f5
+ (void)initialize;	// IMP=0x00000000002da9b1
+ (id)_ignoredParameters;	// IMP=0x0000000000118209
+ (void)_setSharedExtensionContextUUID:(id)arg1 forIntentClassName:(id)arg2;	// IMP=0x000000000029a52e
+ (id)_sharedExtensionContextUUIDForIntentClassName:(id)arg1;	// IMP=0x000000000029a4bb
- (void).cxx_destruct;	// IMP=0x00000000002d9ea6
@property(readonly, nonatomic) long long _preferredInteractionDirection; // @synthesize _preferredInteractionDirection=__preferredInteractionDirection;
@property(nonatomic, setter=_setAudioSessionID:) unsigned int audioSessionID; // @synthesize audioSessionID=_audioSessionID;
@property(retain, nonatomic, setter=_setRecordDeviceIdentifier:) NSString *recordDeviceIdentifier; // @synthesize recordDeviceIdentifier=_recordDeviceIdentifier;
@property(retain, nonatomic, setter=_setRecordDeviceUID:) NSUUID *recordDeviceUID; // @synthesize recordDeviceUID=_recordDeviceUID;
@property(copy, nonatomic, setter=_setRecordRoute:) NSString *recordRoute; // @synthesize recordRoute=_recordRoute;
@property(copy, nonatomic) PBCodable *backingStore; // @synthesize backingStore=_backingStore;
@property(copy, nonatomic) INIntentDonationMetadata *donationMetadata; // @synthesize donationMetadata=_donationMetadata;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic, setter=_setShouldForwardToAppOnSuccess:) _Bool _shouldForwardToAppOnSucccess; // @synthesize _shouldForwardToAppOnSucccess;
@property(retain, nonatomic, setter=_setParameterContexts:) INParameterContexts *_parameterContexts; // @synthesize _parameterContexts;
@property(retain, nonatomic, setter=_setConfigurableParameterCombinations:) NSDictionary *_configurableParameterCombinations; // @synthesize _configurableParameterCombinations;
@property(retain, nonatomic, setter=_setParameterCombinations:) NSDictionary *_parameterCombinations; // @synthesize _parameterCombinations;
- (id)_spotlightContentType;	// IMP=0x00000000002d9d8e
- (_Bool)configureAttributeSet:(id)arg1 includingData:(_Bool)arg2;	// IMP=0x00000000002d9642
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;	// IMP=0x00000000002d962d
- (id)valueForProperty:(id)arg1;	// IMP=0x00000000002d961b
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;	// IMP=0x00000000002d9395
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x00000000002d915d
- (id)valueForKey:(id)arg1;	// IMP=0x00000000002d9098
- (id)_inCodable;	// IMP=0x00000000002d901e
- (_Bool)_isValueValidForKey:(id)arg1 unsupportedReason:(id *)arg2;	// IMP=0x00000000002d8c78
- (_Bool)_isValidKey:(id)arg1;	// IMP=0x00000000002d8be3
@property(readonly, nonatomic) INIntentKeyParameter *_keyParameter; // @synthesize _keyParameter;
- (id)_className;	// IMP=0x00000000002d8870
- (id)_intentInstanceDescription;	// IMP=0x00000000002d8523
@property(readonly, nonatomic) INIntentCodableDescription *_codableDescription;
- (void)_updateWithJSONDictionary:(id)arg1;	// IMP=0x00000000002d80ae
@property(readonly, nonatomic) NSDictionary *_JSONDictionaryRepresentation;
- (id)_JSONDictionaryRepresentationWithConfiguration:(id)arg1;	// IMP=0x00000000002d7e8a
- (_Bool)isGenericIntent;	// IMP=0x00000000002d7e3f
@property(copy, nonatomic) NSDictionary *parametersByName;
@property(copy, nonatomic, setter=_setParametersForcedToNeedsValue:) NSArray *_parametersForcedToNeedsValue;
@property(copy, nonatomic) NSString *verb;
@property(copy, nonatomic) NSString *domain;
- (id)initWithDomain:(id)arg1 verb:(id)arg2 parametersByName:(id)arg3;	// IMP=0x00000000002d75e3
- (id)_typedBackingStore;	// IMP=0x00000000002d758c
@property(readonly, nonatomic) NSOrderedSet *_displayOrderedAttributes;
@property(readonly, nonatomic) NSArray *_codableAttributes;
- (id)_dictionaryRepresentation;	// IMP=0x00000000002d744f
@property(readonly, copy) NSString *debugDescription;
- (id)_redactedDictionaryRepresentation;	// IMP=0x00000000002d73eb
- (id)descriptionAtIndent:(unsigned long long)arg1;	// IMP=0x00000000002d730f
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002d6e3e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002d6c84
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002d6b55
- (id)_emptyCopy;	// IMP=0x00000000002d6992
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002d68ee
@property(readonly) unsigned long long hash;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x00000000002d68a9
- (void)trimDataAgainstTCCForAuditToken:(CDStruct_4c969caf)arg1 bundle:(id)arg2;	// IMP=0x00000000002d672a
@property(nonatomic, getter=_isUserConfirmationRequired, setter=_setUserConfirmationRequired:) _Bool _userConfirmationRequired;
@property(readonly, nonatomic) long long _indexingHash; // @synthesize _indexingHash;
@property(readonly, nonatomic) long long _type;
- (id)_displayOrderedNonNilParameters;	// IMP=0x00000000002d62c3
- (id)_nonNilParameters;	// IMP=0x00000000002d5f9d
@property(readonly, nonatomic, getter=_isEligibleForSuggestions) _Bool _eligibleForSuggestions;
@property(readonly, nonatomic, getter=_isConfigurable) _Bool _configurable;
- (_Bool)_hasMatchingIntentHandlerIncludingRemoteExecution:(_Bool)arg1;	// IMP=0x00000000002d5d2c
- (_Bool)_supportsBackgroundExecutionWithOptions:(unsigned long long)arg1;	// IMP=0x00000000002d5cc1
@property(readonly, nonatomic) _Bool _supportsBackgroundExecution;
- (id)_validParameterCombinationsWithSchema:(id)arg1;	// IMP=0x00000000002d5a1c
@property(readonly, nonatomic) NSDictionary *_validParameterCombinations;
@property(readonly, nonatomic) NSDictionary *_resolvableParameterCombinations;
- (id)_currentParameterCombination;	// IMP=0x00000000002d5845
- (id)_querySchemaWithBlock:(CDUnknownBlockType)arg1 contentOptions:(unsigned long long)arg2;	// IMP=0x00000000002d530a
@property(copy, nonatomic, getter=_parameterImages, setter=_setParameterImages:) NSArray *parameterImages;
@property(readonly, copy, nonatomic, getter=_sortedParameterImages) NSArray *sortedParameterImages;
- (id)_imageForParameter:(id)arg1;	// IMP=0x00000000002d4b8d
- (void)_setImage:(id)arg1 forParameter:(id)arg2;	// IMP=0x00000000002d4992
- (id)_keyCodableAttributes;	// IMP=0x00000000002d490e
- (id)keyImage;	// IMP=0x00000000002d48fc
- (id)imageForParameterNamed:(id)arg1;	// IMP=0x00000000002d4865
- (void)setImage:(id)arg1 forParameterNamed:(id)arg2;	// IMP=0x00000000002d47c8
@property(readonly, copy, nonatomic) NSString *intentDescription;
@property(readonly, nonatomic) NSString *_preferredAudioOutputRouteId;
@property(readonly, nonatomic) NSString *_mediaRouteId;
@property(readonly, nonatomic) NSString *_endpointId;
@property(retain, nonatomic, setter=_setAirPlayRouteIds:) NSArray *airPlayRouteIds;
@property(nonatomic) unsigned long long shortcutAvailability;
@property(copy, nonatomic) NSString *suggestedInvocationPhrase;
@property(retain, nonatomic, setter=_setEndpointMediaPlaybackEnabled:) NSNumber *_endpointMediaPlaybackEnabled;
@property(retain, nonatomic, setter=_setMSLimitReached:) NSNumber *_msLimitReached;
@property(retain, nonatomic, setter=_setIsOwnedByCurrentUser:) NSNumber *_isOwnedByCurrentUser;
@property(retain, nonatomic, setter=_setOriginatingDeviceRapportEffectiveIdentifier:) NSString *_originatingDeviceRapportEffectiveIdentifier;
@property(retain, nonatomic, setter=_setOriginatingDeviceRapportMediaSystemIdentifier:) NSString *_originatingDeviceRapportMediaSystemIdentifier;
@property(retain, nonatomic, setter=_setOriginatingDeviceIdsIdentifier:) NSString *_originatingDeviceIDSIdentifier;
@property(nonatomic, getter=_isPrimaryDisplayDisabled, setter=_setPrimaryDisplayDisabled:) _Bool _primaryDisplayDisabled;
@property(nonatomic, setter=_setIdiom:) long long _idiom;
@property(readonly, nonatomic) long long triggerMethod;
@property(nonatomic, setter=_setExecutionContext:) long long _executionContext;
@property(retain, nonatomic, setter=_setNanoLaunchId:) NSString *_nanoLaunchId;
@property(retain, nonatomic, setter=_setUiExtensionBundleId:) NSString *_uiExtensionBundleId;
@property(retain, nonatomic, setter=_setExtensionBundleId:) NSString *extensionBundleId;
@property(retain, nonatomic, setter=_setLaunchId:) NSString *launchId;
@property(retain, nonatomic, setter=_setDefaultImage:) INImage *_defaultImage;
- (void)_setCategoryVerb:(id)arg1;	// IMP=0x00000000002d3440
@property(readonly, nonatomic) NSString *_categoryVerb;
- (void)_setIntentCategory:(long long)arg1;	// IMP=0x00000000002d32c4
@property(readonly, nonatomic) long long _intentCategory;
- (id)_defaultImageName;	// IMP=0x00000000002d30e4
@property(readonly, nonatomic) NSString *intentId;
@property(readonly, nonatomic) NSString *utteranceString;
@property(retain, nonatomic, setter=_setMetadata:) _INPBIntentMetadata *_metadata;
@property(readonly, nonatomic) NSString *typeName;
- (id)_initWithIdentifier:(id)arg1 schema:(id)arg2 name:(id)arg3 data:(id)arg4;	// IMP=0x00000000002d29e7
- (id)_initWithIdentifier:(id)arg1 backingStore:(id)arg2 schema:(id)arg3 error:(id *)arg4;	// IMP=0x00000000002d24cb
- (id)initWithIdentifier:(id)arg1 backingStore:(id)arg2;	// IMP=0x00000000002d2363
- (id)_init;	// IMP=0x00000000002d2334
- (id)init;	// IMP=0x00000000002d2052
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006520
- (void)_injectProxiesForImagesUsingIntentSlotDescriptionStrategy:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006510
- (void)_injectProxiesForParameterImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000063de
- (void)_injectProxyForDefaultImage:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000062e8
- (void)_injectProxiesForImagesUsingCustomCodableStrategy:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005cea
- (void)_intents_allowAppToInitiatePlaybackForBundleIdentifier:(id)arg1 context:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000092975
- (id)_intents_backgroundHandlingAssertionForBundleIdentifier:(id)arg1 context:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000000928dd
@property(readonly) long long _intents_toggleState;
- (id)localizeValueOfSlotDescription:(id)arg1 withLocalizer:(id)arg2;	// IMP=0x00000000001072bb
- (id)intentSlotDescriptions;	// IMP=0x000000000010726c
- (id)_localizedCombinationStringForKey:(id)arg1 value:(id)arg2 localizationTable:(id)arg3 bundleURL:(id)arg4 localizer:(id)arg5;	// IMP=0x0000000000117703
@property(readonly, copy, nonatomic) NSString *_localizedVerb;
- (id)_subtitleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2;	// IMP=0x0000000000117001
- (id)_subtitleForLanguage:(id)arg1;	// IMP=0x0000000000116ea6
@property(readonly, copy, nonatomic) NSString *_subtitle;
- (id)_titleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2;	// IMP=0x0000000000116485
- (id)_titleForLanguage:(id)arg1;	// IMP=0x000000000011632a
@property(readonly, copy, nonatomic) NSString *_title;
@property(readonly, nonatomic) _Bool _hasTitle;
- (id)_intents_bundleIdForDisplay;	// IMP=0x000000000014980a
- (id)_intents_bundleIdForLaunching;	// IMP=0x000000000014963f
- (id)_intents_bestBundleIdentifier;	// IMP=0x000000000014954e
- (id)_intents_launchIdForCurrentPlatform;	// IMP=0x000000000014953c
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;	// IMP=0x00000000001d48ad
@property(readonly) INImage *_keyImage;
- (id)_keyImageWithIntentDescriptionStrategy;	// IMP=0x00000000001d4556
@property(readonly, nonatomic) _Bool _intents_hasSystemIntentHandler;
@property(readonly, nonatomic, getter=_intents_isExemptFromMulitWindowRequirementForInAppHandling) _Bool _intents_exemptFromMulitWindowRequirementForInAppHandling;
- (_Bool)_enumerateWithValueProcessingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000039a648
- (_Bool)_intents_enumerateObjectsOfClass:(Class)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000039a601
@property(readonly, nonatomic) CDStruct_8caa76fc _intents_preferredScaledImageSize;

// Remaining properties
@property(readonly) Class superclass;

@end

