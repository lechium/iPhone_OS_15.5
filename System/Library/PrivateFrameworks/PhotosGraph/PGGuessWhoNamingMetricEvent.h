//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, PGManager;

@interface PGGuessWhoNamingMetricEvent
{
    PGManager *_manager;	// 8 = 0x8
    _Bool _hasMeNodeAndMeContact;	// 16 = 0x10
    NSDictionary *_payload;	// 24 = 0x18
    unsigned long long _numberOfPeople;	// 32 = 0x20
    unsigned long long _numberOfPeopleToName;	// 40 = 0x28
    unsigned long long _numberOfPeopleFavorited;	// 48 = 0x30
    unsigned long long _librarySize;	// 56 = 0x38
    double _proportionOfNamedPeople;	// 64 = 0x40
    unsigned long long _numberOfNamedPeople;	// 72 = 0x48
    double _recallContactSuggestion;	// 80 = 0x50
    double _numberOfPeopleWithAContactSuggestion;	// 88 = 0x58
    double _recallHighConfidenceContactSuggestion;	// 96 = 0x60
    double _numberOfPeopleWithAHighConfidenceContactSuggestion;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000047edcc
@property(nonatomic) double numberOfPeopleWithAHighConfidenceContactSuggestion; // @synthesize numberOfPeopleWithAHighConfidenceContactSuggestion=_numberOfPeopleWithAHighConfidenceContactSuggestion;
@property(nonatomic) double recallHighConfidenceContactSuggestion; // @synthesize recallHighConfidenceContactSuggestion=_recallHighConfidenceContactSuggestion;
@property(nonatomic) double numberOfPeopleWithAContactSuggestion; // @synthesize numberOfPeopleWithAContactSuggestion=_numberOfPeopleWithAContactSuggestion;
@property(nonatomic) double recallContactSuggestion; // @synthesize recallContactSuggestion=_recallContactSuggestion;
@property(nonatomic) unsigned long long numberOfNamedPeople; // @synthesize numberOfNamedPeople=_numberOfNamedPeople;
@property(nonatomic) double proportionOfNamedPeople; // @synthesize proportionOfNamedPeople=_proportionOfNamedPeople;
@property(nonatomic) unsigned long long librarySize; // @synthesize librarySize=_librarySize;
@property(nonatomic) unsigned long long numberOfPeopleFavorited; // @synthesize numberOfPeopleFavorited=_numberOfPeopleFavorited;
@property(nonatomic) unsigned long long numberOfPeopleToName; // @synthesize numberOfPeopleToName=_numberOfPeopleToName;
@property(nonatomic) _Bool hasMeNodeAndMeContact; // @synthesize hasMeNodeAndMeContact=_hasMeNodeAndMeContact;
@property(nonatomic) unsigned long long numberOfPeople; // @synthesize numberOfPeople=_numberOfPeople;
- (void)gatherMetricsWithProgressBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000047ebaf
- (id)payload;	// IMP=0x000000000047e856
- (id)identifier;	// IMP=0x000000000047e849
- (id)initWithGraphManager:(id)arg1;	// IMP=0x000000000047e7b0

@end
