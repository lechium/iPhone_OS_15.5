//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/FIAPPlugin-Protocol.h>
#import <CoreSuggestionsInternals/HVInteractionConsumer-Protocol.h>
#import <CoreSuggestionsInternals/HVNewsConsumer-Protocol.h>
#import <CoreSuggestionsInternals/HVNotesConsumer-Protocol.h>
#import <CoreSuggestionsInternals/HVRemindersConsumer-Protocol.h>
#import <CoreSuggestionsInternals/HVSafariConsumer-Protocol.h>
#import <CoreSuggestionsInternals/HVThirdPartyAppConsumer-Protocol.h>

@class NSString, SGTopicDissector;

@interface SGTopicExtractionPlugin : NSObject <FIAPPlugin, HVNewsConsumer, HVNotesConsumer, HVRemindersConsumer, HVSafariConsumer, HVThirdPartyAppConsumer, HVInteractionConsumer>
{
    SGTopicDissector *_dissector;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000000028af6a
- (void).cxx_destruct;	// IMP=0x000000000028ac4b
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1;	// IMP=0x000000000028aace
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 domainIdentifiers:(id)arg2;	// IMP=0x000000000028a834
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2;	// IMP=0x000000000028a611
- (void)purgeSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2;	// IMP=0x000000000028a5ff
- (_Bool)_harvestPodcastsIntent:(id)arg1 identifier:(id)arg2 groupIdentifier:(id)arg3 ignored:(_Bool *)arg4 numberOfExtractons:(unsigned long long *)arg5 error:(id *)arg6;	// IMP=0x0000000000289f1f
- (id)extractionsFromText:(id)arg1 bundleId:(id)arg2;	// IMP=0x000000000028989d
- (id)_topicContainersForText:(id)arg1 isPlainText:(_Bool)arg2 bundleId:(id)arg3 groupId:(id)arg4 documentId:(id)arg5 contactHandles:(id)arg6 weight:(double)arg7 isOutgoing:(_Bool)arg8;	// IMP=0x00000000002894a5
- (_Bool)_shouldDeferProcessingSearchableItem:(id)arg1;	// IMP=0x00000000002892b0
- (_Bool)_interestedInTitle:(id)arg1 content:(id)arg2 isReaderText:(_Bool)arg3 uniqueIdentifier:(id)arg4 bundleIdentifier:(id)arg5;	// IMP=0x00000000002890c6
- (_Bool)interestedInSearchableItem:(id)arg1;	// IMP=0x0000000000288d28
- (void)extractAndDonateTopicsForText:(id)arg1 isPlainText:(_Bool)arg2 bundleId:(id)arg3 groupId:(id)arg4 documentId:(id)arg5 contactHandles:(id)arg6 weight:(double)arg7 isOutgoing:(_Bool)arg8;	// IMP=0x0000000000288cc9
- (void)_writeAndFlushContainers:(id)arg1;	// IMP=0x0000000000288ac1
- (id)extractionsFromSearchableItem:(id)arg1;	// IMP=0x000000000028821e
- (id)processInteraction:(id)arg1 bundleIdentifier:(id)arg2 protectionClass:(id)arg3;	// IMP=0x0000000000287f5a
- (id)processSearchableItem:(id)arg1;	// IMP=0x00000000002879b3
- (id)setup;	// IMP=0x000000000028792c
@property(readonly, nonatomic) NSString *identifier;
- (id)deleteDataDerivedFromContentMatchingRequest:(id)arg1;	// IMP=0x000000000028786c
- (id)consumeInteractionWithContext:(id)arg1;	// IMP=0x000000000028742d
- (id)_consumeContentParts:(id)arg1 contentDataSource:(id)arg2 uniqueIdentifier:(id)arg3 domainIdentifier:(id)arg4 bundleIdentifier:(id)arg5 context:(id)arg6;	// IMP=0x0000000000287100
- (id)consumeThirdPartyAppContentWithContext:(id)arg1;	// IMP=0x0000000000286cad
- (id)consumeSafariContentWithContext:(id)arg1;	// IMP=0x0000000000286930
- (id)consumeRemindersContentWithContext:(id)arg1;	// IMP=0x00000000002865ed
- (id)consumeNotesContentWithContext:(id)arg1;	// IMP=0x00000000002862a0
- (id)consumeNewsArticleViewsWithContext:(id)arg1;	// IMP=0x0000000000285ef1
- (id)consumerName;	// IMP=0x0000000000285edf
- (id)init;	// IMP=0x0000000000285e85
- (id)initWithTopicDissector:(id)arg1;	// IMP=0x0000000000285d54

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

