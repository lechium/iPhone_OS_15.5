//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PETDistributionEventTracker, PETScalarEventTracker, TIAutocorrectionList, TIKeyboardCandidate;

@interface _TIStatisticsProactiveTracker : NSObject
{
    PETScalarEventTracker *_failureEventDescriptionTracker;	// 8 = 0x8
    PETScalarEventTracker *_triggeredEventTracker;	// 16 = 0x10
    PETScalarEventTracker *_triggeredCategoryEventTracker;	// 24 = 0x18
    PETScalarEventTracker *_suggestedEventTracker;	// 32 = 0x20
    PETScalarEventTracker *_suggestedCategoryEventTracker;	// 40 = 0x28
    PETScalarEventTracker *_failureEventTracker;	// 48 = 0x30
    PETScalarEventTracker *_failureCategoryEventTracker;	// 56 = 0x38
    PETScalarEventTracker *_failureCategoryEventDescriptionTracker;	// 64 = 0x40
    PETScalarEventTracker *_selectedEventTracker;	// 72 = 0x48
    PETScalarEventTracker *_selectedCategoryEventTracker;	// 80 = 0x50
    PETDistributionEventTracker *_timeInPredictionBarEventTracker;	// 88 = 0x58
    PETDistributionEventTracker *_timeInPredictionBarCategoryEventTracker;	// 96 = 0x60
    PETScalarEventTracker *_engagementEventDescriptionTracker;	// 104 = 0x68
    PETScalarEventTracker *_engagementCategoryEventDescriptionTracker;	// 112 = 0x70
    PETScalarEventTracker *_personalizationWordAcceptanceTracker;	// 120 = 0x78
    PETScalarEventTracker *_personalizationOfferTracker;	// 128 = 0x80
    PETScalarEventTracker *_personalizationEngagementTracker;	// 136 = 0x88
    TIAutocorrectionList *_lastAutocorrectionList;	// 144 = 0x90
    TIKeyboardCandidate *_responseKitEntryOffered;	// 152 = 0x98
}

+ (id)sharedInstance;	// IMP=0x000000000005b08c
- (void).cxx_destruct;	// IMP=0x000000000005a7e1
@property(retain, nonatomic) TIKeyboardCandidate *responseKitEntryOffered; // @synthesize responseKitEntryOffered=_responseKitEntryOffered;
@property(retain, nonatomic) TIAutocorrectionList *lastAutocorrectionList; // @synthesize lastAutocorrectionList=_lastAutocorrectionList;
@property(retain, nonatomic) PETScalarEventTracker *personalizationEngagementTracker; // @synthesize personalizationEngagementTracker=_personalizationEngagementTracker;
@property(retain, nonatomic) PETScalarEventTracker *personalizationOfferTracker; // @synthesize personalizationOfferTracker=_personalizationOfferTracker;
@property(retain, nonatomic) PETScalarEventTracker *personalizationWordAcceptanceTracker; // @synthesize personalizationWordAcceptanceTracker=_personalizationWordAcceptanceTracker;
@property(retain, nonatomic) PETScalarEventTracker *engagementCategoryEventDescriptionTracker; // @synthesize engagementCategoryEventDescriptionTracker=_engagementCategoryEventDescriptionTracker;
@property(retain, nonatomic) PETScalarEventTracker *engagementEventDescriptionTracker; // @synthesize engagementEventDescriptionTracker=_engagementEventDescriptionTracker;
@property(retain, nonatomic) PETDistributionEventTracker *timeInPredictionBarCategoryEventTracker; // @synthesize timeInPredictionBarCategoryEventTracker=_timeInPredictionBarCategoryEventTracker;
@property(retain, nonatomic) PETDistributionEventTracker *timeInPredictionBarEventTracker; // @synthesize timeInPredictionBarEventTracker=_timeInPredictionBarEventTracker;
@property(retain, nonatomic) PETScalarEventTracker *selectedCategoryEventTracker; // @synthesize selectedCategoryEventTracker=_selectedCategoryEventTracker;
@property(retain, nonatomic) PETScalarEventTracker *selectedEventTracker; // @synthesize selectedEventTracker=_selectedEventTracker;
@property(retain, nonatomic) PETScalarEventTracker *failureCategoryEventDescriptionTracker; // @synthesize failureCategoryEventDescriptionTracker=_failureCategoryEventDescriptionTracker;
@property(retain, nonatomic) PETScalarEventTracker *failureCategoryEventTracker; // @synthesize failureCategoryEventTracker=_failureCategoryEventTracker;
@property(retain, nonatomic) PETScalarEventTracker *failureEventTracker; // @synthesize failureEventTracker=_failureEventTracker;
@property(retain, nonatomic) PETScalarEventTracker *suggestedCategoryEventTracker; // @synthesize suggestedCategoryEventTracker=_suggestedCategoryEventTracker;
@property(retain, nonatomic) PETScalarEventTracker *suggestedEventTracker; // @synthesize suggestedEventTracker=_suggestedEventTracker;
@property(retain, nonatomic) PETScalarEventTracker *triggeredCategoryEventTracker; // @synthesize triggeredCategoryEventTracker=_triggeredCategoryEventTracker;
@property(retain, nonatomic) PETScalarEventTracker *triggeredEventTracker; // @synthesize triggeredEventTracker=_triggeredEventTracker;
@property(retain, nonatomic) PETScalarEventTracker *failureEventDescriptionTracker; // @synthesize failureEventDescriptionTracker=_failureEventDescriptionTracker;
- (void)trackEngagementFailureWithDescription:(unsigned char)arg1 description:(id)arg2 categories:(id)arg3 locale:(id)arg4 fieldType:(id)arg5;	// IMP=0x000000000005a2be
- (void)trackPredictionTimeWithSource:(unsigned char)arg1 time:(double)arg2 selected:(_Bool)arg3 categories:(id)arg4 locale:(id)arg5 fieldType:(id)arg6;	// IMP=0x0000000000059f66
- (void)trackSelectedWithSource:(unsigned char)arg1 position:(unsigned long long)arg2 categories:(id)arg3 locale:(id)arg4 fieldType:(id)arg5;	// IMP=0x0000000000059bd2
- (void)trackFailureWithSource:(unsigned char)arg1 reason:(unsigned char)arg2 categories:(id)arg3 locale:(id)arg4 fieldType:(id)arg5;	// IMP=0x0000000000059883
- (void)trackSuggestedWithSource:(unsigned char)arg1 count:(unsigned long long)arg2 categories:(id)arg3 locale:(id)arg4 fieldType:(id)arg5;	// IMP=0x00000000000594ef
- (void)trackFailureWithDescription:(unsigned char)arg1 description:(id)arg2 categories:(id)arg3 locale:(id)arg4 fieldType:(id)arg5;	// IMP=0x00000000000591e2
- (void)trackTriggeredWithSource:(unsigned char)arg1 categories:(id)arg2 locale:(id)arg3 fieldType:(id)arg4;	// IMP=0x0000000000058f08
- (id)init;	// IMP=0x0000000000058113

@end

