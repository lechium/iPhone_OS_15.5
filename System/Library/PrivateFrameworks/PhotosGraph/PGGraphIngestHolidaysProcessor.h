//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGGraphIngestProcessor-Protocol.h>

@class NSMutableDictionary, NSString, PGGraphBuilder, PGGraphMeNodeCollection, PGGraphPersonNodeCollection, PGHolidayClassifier;

@interface PGGraphIngestHolidaysProcessor : NSObject <PGGraphIngestProcessor>
{
    PGGraphBuilder *_graphBuilder;	// 8 = 0x8
    PGHolidayClassifier *_holidayClassifier;	// 16 = 0x10
    PGGraphMeNodeCollection *_meNodeAsCollection;	// 24 = 0x18
    PGGraphPersonNodeCollection *_partnerPersonNodes;	// 32 = 0x20
    PGGraphPersonNodeCollection *_familyPersonNodes;	// 40 = 0x28
    PGGraphPersonNodeCollection *_childPersonNodes;	// 48 = 0x30
    PGGraphPersonNodeCollection *_fatherPersonNodes;	// 56 = 0x38
    PGGraphPersonNodeCollection *_motherPersonNodes;	// 64 = 0x40
    PGGraphPersonNodeCollection *_friendPersonNodes;	// 72 = 0x48
    PGGraphPersonNodeCollection *_coworkerPersonNodes;	// 80 = 0x50
    PGGraphPersonNodeCollection *_nonAcquaintancePersonNodes;	// 88 = 0x58
    unsigned long long _meBiologicalSex;	// 96 = 0x60
    NSMutableDictionary *_biologicalSexByPartnerPersonNodeIdentifier;	// 104 = 0x68
}

+ (id)keyboardLanguageCodesForInfoNode:(id)arg1 holidayService:(id)arg2;	// IMP=0x0000000000416308
- (void).cxx_destruct;	// IMP=0x0000000000415320
- (unsigned long long)_eventRuleLocationTraitForMomentNode:(id)arg1 graph:(id)arg2;	// IMP=0x0000000000415016
- (unsigned long long)_eventRulePeopleTraitForPersonNodes:(id)arg1 graph:(id)arg2;	// IMP=0x0000000000414d64
- (id)holidayCalendarEventRuleTraitsForMomentNode:(id)arg1;	// IMP=0x0000000000414c3b
- (_Bool)momentTraitsMatchesHolidayTraits:(id)arg1 momentNode:(id)arg2 loggingConnection:(id)arg3;	// IMP=0x0000000000414a38
- (double)_dateScoreForEventRule:(id)arg1 localeCode:(id)arg2 holidayDate:(id)arg3 momentDate:(id)arg4;	// IMP=0x000000000041493c
- (double)dateScoreForEventRule:(id)arg1 localeCountryCode:(id)arg2 momentCountryCodes:(id)arg3 keyboardLanguageCodes:(id)arg4 momentDate:(id)arg5;	// IMP=0x00000000004142a7
- (double)_calculateSceneScores:(id)arg1;	// IMP=0x000000000041412d
- (double)sceneScoreForEventRule:(id)arg1 localeCountryCode:(id)arg2 momentCountryCodes:(id)arg3 keyboardLanguageCodes:(id)arg4 momentNode:(id)arg5;	// IMP=0x0000000000413934
- (double)locationScoreForEventRule:(id)arg1 localeCountryCode:(id)arg2 momentCountryCodes:(id)arg3 keyboardLanguageCodes:(id)arg4;	// IMP=0x0000000000413525
- (_Bool)shouldCreateHolidayEdgeForEventRule:(id)arg1 momentNode:(id)arg2 momentLocalDate:(id)arg3 withGraph:(id)arg4 loggingConnection:(id)arg5 localeCountryCode:(id)arg6 keyboardLanguageCodes:(id)arg7;	// IMP=0x0000000000413117
- (void)_prepareIfNeededWithGraph:(id)arg1;	// IMP=0x0000000000412e78
- (id)allDatesForEventRule:(id)arg1 withGraph:(id)arg2;	// IMP=0x0000000000412c22
- (id)_momentsCelebratingRule:(id)arg1 localDates:(id)arg2 userCountryCode:(id)arg3 keyboardLanguageCodes:(id)arg4 graph:(id)arg5 loggingConnection:(id)arg6;	// IMP=0x00000000004127c5
- (void)insertHolidaysBetweenLocalDate:(id)arg1 andLocalDate:(id)arg2 graph:(id)arg3 locale:(id)arg4 loggingConnection:(id)arg5 progressBlock:(CDUnknownBlockType)arg6;	// IMP=0x0000000000412273
- (void)insertHolidaysWithMomentNodes:(id)arg1 graph:(id)arg2 locale:(id)arg3 loggingConnection:(id)arg4 progressBlock:(CDUnknownBlockType)arg5;	// IMP=0x000000000041201d
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000411c04
- (_Bool)shouldRunWithGraphUpdate:(id)arg1;	// IMP=0x0000000000411bb3
- (void)setGraphBuilder:(id)arg1;	// IMP=0x0000000000411ba2
- (id)init;	// IMP=0x0000000000411b4c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

