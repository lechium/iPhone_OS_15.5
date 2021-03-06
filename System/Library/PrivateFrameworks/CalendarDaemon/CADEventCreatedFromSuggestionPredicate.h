//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CalendarDaemon/EKDefaultPropertiesLoading-Protocol.h>

@class NSString;

@interface CADEventCreatedFromSuggestionPredicate <EKDefaultPropertiesLoading>
{
    NSString *_opaqueKey;	// 32 = 0x20
    NSString *_extractionGroupIdentifier;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000317d3
+ (id)predicateForAllSuggestedEvents;	// IMP=0x0000000000031417
- (void).cxx_destruct;	// IMP=0x0000000000031919
@property(readonly, nonatomic) NSString *extractionGroupIdentifier; // @synthesize extractionGroupIdentifier=_extractionGroupIdentifier;
@property(readonly, nonatomic) NSString *opaqueKey; // @synthesize opaqueKey=_opaqueKey;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000317db
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000316ff
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000031610
- (id)defaultPropertiesToLoad;	// IMP=0x0000000000031545
- (_Bool)shouldLoadDefaultProperties;	// IMP=0x000000000003153d
- (id)predicateFormat;	// IMP=0x000000000003143d
- (id)initWithOpaqueKey:(id)arg1 extractionGroupIdentifier:(id)arg2;	// IMP=0x0000000000031350
- (id)initWithOpaqueKey:(id)arg1;	// IMP=0x000000000003133c
- (id)initWithExtractionGroupIdentifier:(id)arg1;	// IMP=0x0000000000031325
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg1;	// IMP=0x000000000003194a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

