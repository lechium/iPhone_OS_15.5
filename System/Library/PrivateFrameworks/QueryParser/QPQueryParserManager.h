//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSLocale, NSURL, QPDataDetectorsParser;
@protocol OS_dispatch_queue;

@interface QPQueryParserManager : NSObject
{
    void *_parser;	// 8 = 0x8
    QPDataDetectorsParser *_dateParser;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSDate *_originalDate;	// 32 = 0x20
    NSLocale *_originalLocale;	// 40 = 0x28
    NSArray *_originalPreferredLocales;	// 48 = 0x30
    NSURL *_originalCustomResourceDirectory;	// 56 = 0x38
}

+ (id)availableLanguages;	// IMP=0x0000000000042b99
+ (id)notesManager;	// IMP=0x0000000000042af4
+ (id)photosParserManager;	// IMP=0x0000000000042a4f
+ (id)remindersParserManager;	// IMP=0x00000000000429aa
+ (id)spotlightManager;	// IMP=0x0000000000042905
+ (id)defaultManager;	// IMP=0x0000000000042860
- (void).cxx_destruct;	// IMP=0x0000000000045907
- (void)enumerateParseResultsForStartDateString:(id)arg1 startDateContext:(id)arg2 endDateString:(id)arg3 endDateContext:(id)arg4 options:(id)arg5 withBlock:(CDUnknownBlockType)arg6;	// IMP=0x0000000000044ec7
- (void)enumerateSpotlightResultsForString:(id)arg1 options:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000044abc
- (void)enumerateParseResultsForString:(id)arg1 options:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000044088
- (void)enumerateDateParseResultsForString:(id)arg1 options:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000043cef
- (id)dateFromParseAttributes:(id)arg1;	// IMP=0x00000000000433e7
- (void)reset;	// IMP=0x000000000004334e
- (void)updateWithOptions:(id)arg1;	// IMP=0x0000000000043050
- (_Bool)available;	// IMP=0x0000000000042e9b
- (void)dealloc;	// IMP=0x0000000000042d9c
- (id)initWithOptions:(id)arg1;	// IMP=0x0000000000042ba6

@end

