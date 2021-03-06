//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSMutableArray, NSURL;
@protocol HDJournalChapterEnumeratorTestsDelegate;

@interface HDJournalChapterEnumerator : NSObject
{
    NSURL *_URL;	// 8 = 0x8
    long long _currentIndex;	// 16 = 0x10
    _Bool _hasLoadedPersistedJournalNames;	// 24 = 0x18
    long long _maxAllowedOpenJournalChapterCount;	// 32 = 0x20
    long long _totalJournalChapterCount;	// 40 = 0x28
    NSError *_cachedError;	// 48 = 0x30
    NSMutableArray *_remainingJournalChapters;	// 56 = 0x38
    NSMutableArray *_openJournalChapters;	// 64 = 0x40
    id <HDJournalChapterEnumeratorTestsDelegate> _unitTestDelegate;	// 72 = 0x48
}

+ (long long)journalChapterCountForURL:(id)arg1;	// IMP=0x00000000002e95a5
+ (id)nextJournalChapterNameForURL:(id)arg1;	// IMP=0x00000000002e9222
+ (id)journalChaptersForURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002e91de
- (void).cxx_destruct;	// IMP=0x00000000002e9934
@property(nonatomic) __weak id <HDJournalChapterEnumeratorTestsDelegate> unitTestDelegate; // @synthesize unitTestDelegate=_unitTestDelegate;
@property(nonatomic) long long maxAllowedOpenJournalChapterCount;
@property(readonly, nonatomic, getter=_totalOpenJournalChapterCount) unsigned long long totalOpenJournalChapterCount;
- (id)_openJournalChapters:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002e8e61
@property(readonly, nonatomic) unsigned long long currentJournalChapterIndex;
@property(readonly, nonatomic) unsigned long long totalJournalChapterCount;
@property(readonly, nonatomic, getter=hasMoreJournalChapters) _Bool moreJournalChapters;
- (id)nextOpenJournalChapterError:(id *)arg1;	// IMP=0x00000000002e88c1
- (_Bool)loadSortedJournalChaptersWithError:(id *)arg1;	// IMP=0x00000000002e823c
- (void)closeJournalChapters;	// IMP=0x00000000002e8084
@property(readonly, nonatomic) _Bool hasJournalChapters;
- (void)dealloc;	// IMP=0x00000000002e7f39
- (id)initWithPath:(id)arg1;	// IMP=0x00000000002e7edf
- (id)initWithURL:(id)arg1;	// IMP=0x00000000002e7e64
- (id)init;	// IMP=0x00000000002e7dea

@end

