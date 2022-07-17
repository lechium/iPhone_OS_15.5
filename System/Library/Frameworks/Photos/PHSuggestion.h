//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSDate, NSDictionary, NSString;

@interface PHSuggestion
{
    NSData *_actionData;	// 112 = 0x70
    NSData *_featuresData;	// 120 = 0x78
    NSDate *_creationDate;	// 128 = 0x80
    unsigned long long _approximateCount;	// 136 = 0x88
    unsigned long long _approximatePhotosCount;	// 144 = 0x90
    unsigned long long _approximateVideosCount;	// 152 = 0x98
    NSArray *_assets;	// 160 = 0xa0
    unsigned short _type;	// 168 = 0xa8
    unsigned short _subtype;	// 170 = 0xaa
    unsigned short _state;	// 172 = 0xac
    unsigned short _notificationState;	// 174 = 0xae
    unsigned short _featuredState;	// 176 = 0xb0
    NSDictionary *_actionProperties;	// 184 = 0xb8
    NSDictionary *_featuresProperties;	// 192 = 0xc0
    long long _version;	// 200 = 0xc8
    NSDate *_activationDate;	// 208 = 0xd0
    NSDate *_relevantUntilDate;	// 216 = 0xd8
    NSDate *_expungeDate;	// 224 = 0xe0
    NSString *_subtitle;	// 232 = 0xe8
}

+ (id)suggestionInfosWithOptions:(id)arg1 photoLibrary:(id)arg2;	// IMP=0x00000000001bd8e6
+ (id)availableSuggestionTypeInfosWithOptions:(id)arg1 photoLibrary:(id)arg2;	// IMP=0x00000000001bd7bc
+ (id)transientSuggestionWithInfo:(id)arg1 photoLibrary:(id)arg2;	// IMP=0x00000000001bd36a
+ (id)fetchSuggestionsWithState:(unsigned short)arg1 ofType:(unsigned short)arg2 withOptions:(id)arg3;	// IMP=0x00000000001bd2fe
+ (id)fetchSuggestionsWithState:(unsigned short)arg1 withOptions:(id)arg2;	// IMP=0x00000000001bd296
+ (id)fetchSuggestionsWithOptions:(id)arg1;	// IMP=0x00000000001bd276
+ (id)predicateForAllFeaturedStateEnabledSuggestionTypes;	// IMP=0x00000000001bd23f
+ (double)lifetimeAfterBecomingActive;	// IMP=0x00000000001bd231
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x00000000001bd168
+ (id)entityKeyMap;	// IMP=0x00000000001bd112
+ (id)identifierCode;	// IMP=0x00000000001bd105
+ (_Bool)managedObjectSupportsTrashedState;	// IMP=0x00000000001bd0fd
+ (id)fetchType;	// IMP=0x00000000001bd0de
+ (id)localIdentifierWithUUID:(id)arg1;	// IMP=0x00000000001bd048
+ (id)managedEntityName;	// IMP=0x00000000001bd03b
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;	// IMP=0x00000000001bcfd8
- (void).cxx_destruct;	// IMP=0x00000000001bccf6
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSDate *expungeDate; // @synthesize expungeDate=_expungeDate;
@property(readonly, nonatomic) NSDate *relevantUntilDate; // @synthesize relevantUntilDate=_relevantUntilDate;
@property(readonly, nonatomic) NSDate *activationDate; // @synthesize activationDate=_activationDate;
@property(readonly, nonatomic) long long version; // @synthesize version=_version;
@property(readonly, nonatomic) unsigned short featuredState; // @synthesize featuredState=_featuredState;
@property(readonly, nonatomic) unsigned short notificationState; // @synthesize notificationState=_notificationState;
@property(readonly, nonatomic) unsigned short state; // @synthesize state=_state;
@property(readonly, nonatomic) unsigned short subtype; // @synthesize subtype=_subtype;
@property(readonly, nonatomic) unsigned short type; // @synthesize type=_type;
- (id)assets;	// IMP=0x00000000001bcbf3
@property(readonly, nonatomic) _Bool containsUnverifiedPersons;
- (id)description;	// IMP=0x00000000001bc8e2
@property(readonly, nonatomic) NSDictionary *featuresProperties; // @synthesize featuresProperties=_featuresProperties;
@property(readonly, nonatomic) NSDictionary *actionProperties; // @synthesize actionProperties=_actionProperties;
- (id)predicateForAllMomentsFromRepresentativeAssets;	// IMP=0x00000000001bc450
- (id)predicateForAllAssets;	// IMP=0x00000000001bc39f
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;	// IMP=0x00000000001bbf1a
- (unsigned long long)estimatedVideosCount;	// IMP=0x00000000001bbf09
- (unsigned long long)estimatedPhotosCount;	// IMP=0x00000000001bbef8
- (unsigned long long)estimatedAssetCount;	// IMP=0x00000000001bbee7
- (id)creationDate;	// IMP=0x00000000001bbed2
- (id)localizedSubtitle;	// IMP=0x00000000001bbebd

@end
