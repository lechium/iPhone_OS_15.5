//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INPlayMediaIntentExport-Protocol.h>

@class INMediaItem, INMediaSearch, INPrivatePlayMediaIntentData, NSArray, NSDate, NSNumber, NSString;

@interface INPlayMediaIntent <INPlayMediaIntentExport>
{
}

+ (id)_ignoredParameters;	// IMP=0x0000000000118194
- (id)_spotlightContentType;	// IMP=0x000000000037e3e6
- (void)setParametersByName:(id)arg1;	// IMP=0x000000000037e3e0
- (id)parametersByName;	// IMP=0x000000000037e3ce
- (void)setVerb:(id)arg1;	// IMP=0x000000000037e3c8
- (id)verb;	// IMP=0x000000000037e3bb
- (void)setDomain:(id)arg1;	// IMP=0x000000000037e3b5
- (id)domain;	// IMP=0x000000000037e3a8
- (id)_validParameterCombinationsWithSchema:(id)arg1;	// IMP=0x000000000037e065
- (id)_keyCodableAttributes;	// IMP=0x000000000037dfab
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x000000000037df44
- (id)_dictionaryRepresentation;	// IMP=0x000000000037db89
@property(copy, nonatomic) INPrivatePlayMediaIntentData *privatePlayMediaIntentData;
@property(copy, nonatomic) NSString *proxiedBundleIdentifier;
@property(nonatomic) long long parsecCategory;
@property(copy, nonatomic) NSArray *alternativeResults;
@property(copy, nonatomic) NSArray *audioSearchResults;
@property(copy, nonatomic) NSArray *hashedRouteUIDs;
- (void)setMediaSearch:(id)arg1;	// IMP=0x000000000037d529
@property(readonly, copy, nonatomic) INMediaSearch *mediaSearch;
- (void)setPlaybackSpeed:(id)arg1;	// IMP=0x000000000037d42c
@property(readonly, copy, nonatomic) NSNumber *playbackSpeed;
- (void)setPlaybackQueueLocation:(long long)arg1;	// IMP=0x000000000037d31b
@property(readonly, nonatomic) long long playbackQueueLocation;
@property(copy, nonatomic) NSString *recoID;
@property(copy, nonatomic) NSArray *buckets;
@property(copy, nonatomic) NSDate *expirationDate;
- (void)setResumePlayback:(id)arg1;	// IMP=0x000000000037cf13
@property(readonly, copy, nonatomic) NSNumber *resumePlayback;
- (void)setPlaybackRepeatMode:(long long)arg1;	// IMP=0x000000000037cdfc
@property(readonly, nonatomic) long long playbackRepeatMode;
- (void)setPlayShuffled:(id)arg1;	// IMP=0x000000000037ccd9
@property(readonly, copy, nonatomic) NSNumber *playShuffled;
- (void)setMediaContainer:(id)arg1;	// IMP=0x000000000037cb97
@property(readonly, copy, nonatomic) INMediaItem *mediaContainer;
- (void)setMediaItems:(id)arg1;	// IMP=0x000000000037ca99
@property(readonly, copy, nonatomic) NSArray *mediaItems;
- (id)initWithMediaItems:(id)arg1 mediaContainer:(id)arg2 playShuffled:(id)arg3 playbackRepeatMode:(long long)arg4 resumePlayback:(id)arg5 playbackQueueLocation:(long long)arg6 playbackSpeed:(id)arg7 mediaSearch:(id)arg8;	// IMP=0x000000000037c8cf
- (id)_categoryVerb;	// IMP=0x000000000037c8c2
- (long long)_intentCategory;	// IMP=0x000000000037c8b7
- (void)_setMetadata:(id)arg1;	// IMP=0x000000000037c845
- (id)_metadata;	// IMP=0x000000000037c7f5
- (id)_typedBackingStore;	// IMP=0x000000000037c79e
- (id)initWithMediaItems:(id)arg1 mediaContainer:(id)arg2 playShuffled:(id)arg3 playbackRepeatMode:(long long)arg4 resumePlayback:(id)arg5;	// IMP=0x000000000001d20b
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;	// IMP=0x00000000000714eb
- (id)_intents_backgroundHandlingAssertionForBundleIdentifier:(id)arg1 context:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000000928c0
- (id)_titleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2;	// IMP=0x0000000000115de7
- (_Bool)_intents_isExemptFromMulitWindowRequirementForInAppHandling;	// IMP=0x00000000003847d4
- (CDStruct_8caa76fc)_intents_preferredScaledImageSize;	// IMP=0x00000000003fa2ab

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

