//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSMutableArray, NSString, VKImageAnalysis;

__attribute__((visibility("hidden")))
@interface VKAnalyticsSessionAccumulator : NSObject
{
    _Bool _didSelectText;	// 8 = 0x8
    _Bool _didActivateHighlightAll;	// 9 = 0x9
    _Bool _didActivateRegex;	// 10 = 0xa
    _Bool _isPerformingAutomatedTest;	// 11 = 0xb
    VKImageAnalysis *_analysis;	// 16 = 0x10
    NSMutableArray *_interactionEvents;	// 24 = 0x18
    NSMutableArray *_textEvents;	// 32 = 0x20
    NSMutableArray *_mrcEvents;	// 40 = 0x28
    NSMutableArray *_ddEvents;	// 48 = 0x30
    NSMutableArray *_vsEvents;	// 56 = 0x38
    NSDate *_sessionOpenDate;	// 64 = 0x40
    unsigned long long _numberOfEvents;	// 72 = 0x48
    unsigned long long _numberOfTextEvents;	// 80 = 0x50
    unsigned long long _numberOfMRCEvents;	// 88 = 0x58
    unsigned long long _numberOfDDEvents;	// 96 = 0x60
    unsigned long long _numberOfVSEvents;	// 104 = 0x68
    unsigned long long _numberOfMRCElements;	// 112 = 0x70
    unsigned long long _numberOfDDElements;	// 120 = 0x78
    unsigned long long _numberOfVSElements;	// 128 = 0x80
    unsigned long long _textLength;	// 136 = 0x88
    unsigned long long _averageTextSelectionLength;	// 144 = 0x90
    unsigned long long _numberOfSelectionChanges;	// 152 = 0x98
    double _sessionDuration;	// 160 = 0xa0
    NSString *_bundleIdentifier;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x0000000000035397
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic) _Bool isPerformingAutomatedTest; // @synthesize isPerformingAutomatedTest=_isPerformingAutomatedTest;
@property(nonatomic) double sessionDuration; // @synthesize sessionDuration=_sessionDuration;
@property(nonatomic) _Bool didActivateRegex; // @synthesize didActivateRegex=_didActivateRegex;
@property(nonatomic) _Bool didActivateHighlightAll; // @synthesize didActivateHighlightAll=_didActivateHighlightAll;
@property(nonatomic) unsigned long long numberOfSelectionChanges; // @synthesize numberOfSelectionChanges=_numberOfSelectionChanges;
@property(nonatomic) unsigned long long averageTextSelectionLength; // @synthesize averageTextSelectionLength=_averageTextSelectionLength;
@property(nonatomic) unsigned long long textLength; // @synthesize textLength=_textLength;
@property(nonatomic) unsigned long long numberOfVSElements; // @synthesize numberOfVSElements=_numberOfVSElements;
@property(nonatomic) unsigned long long numberOfDDElements; // @synthesize numberOfDDElements=_numberOfDDElements;
@property(nonatomic) unsigned long long numberOfMRCElements; // @synthesize numberOfMRCElements=_numberOfMRCElements;
@property(nonatomic) unsigned long long numberOfVSEvents; // @synthesize numberOfVSEvents=_numberOfVSEvents;
@property(nonatomic) unsigned long long numberOfDDEvents; // @synthesize numberOfDDEvents=_numberOfDDEvents;
@property(nonatomic) unsigned long long numberOfMRCEvents; // @synthesize numberOfMRCEvents=_numberOfMRCEvents;
@property(nonatomic) unsigned long long numberOfTextEvents; // @synthesize numberOfTextEvents=_numberOfTextEvents;
@property(nonatomic) unsigned long long numberOfEvents; // @synthesize numberOfEvents=_numberOfEvents;
@property(nonatomic) _Bool didSelectText; // @synthesize didSelectText=_didSelectText;
@property(retain, nonatomic) NSDate *sessionOpenDate; // @synthesize sessionOpenDate=_sessionOpenDate;
@property(retain, nonatomic) NSMutableArray *vsEvents; // @synthesize vsEvents=_vsEvents;
@property(retain, nonatomic) NSMutableArray *ddEvents; // @synthesize ddEvents=_ddEvents;
@property(retain, nonatomic) NSMutableArray *mrcEvents; // @synthesize mrcEvents=_mrcEvents;
@property(retain, nonatomic) NSMutableArray *textEvents; // @synthesize textEvents=_textEvents;
@property(retain, nonatomic) NSMutableArray *interactionEvents; // @synthesize interactionEvents=_interactionEvents;
@property(retain, nonatomic) VKImageAnalysis *analysis; // @synthesize analysis=_analysis;
- (id)description;	// IMP=0x0000000000034f5d
- (void)send;	// IMP=0x0000000000034f57
@property(readonly, nonatomic) NSDictionary *coreAnalyticsDictionary;
- (void)calculateDidActivateRegex;	// IMP=0x00000000000349e2
- (void)calculateDidHighlightAll;	// IMP=0x0000000000034966
- (void)calculateAverageSelectedLengthFromTextEvents;	// IMP=0x0000000000034737
- (void)close;	// IMP=0x00000000000343c7
- (void)addEvent:(id)arg1;	// IMP=0x000000000003412e
- (id)initWithAnalysis:(id)arg1 customIdentifier:(id)arg2;	// IMP=0x0000000000033ff0

@end

