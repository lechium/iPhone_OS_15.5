//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProactiveSuggestionClientModel/NSSecureCoding-Protocol.h>

@class ATXInfoTimelineEntryRelevance, NSDate;

@interface ATXInfoTimelineEntry : NSObject <NSSecureCoding>
{
    _Bool _isImportantRelativeToTimeline;	// 8 = 0x8
    NSDate *_date;	// 16 = 0x10
    ATXInfoTimelineEntryRelevance *_relevance;	// 24 = 0x18
}

+ (id)entryWithDate:(id)arg1 importantRelativeToTimeline:(_Bool)arg2;	// IMP=0x0000000000021bb0
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000021840
+ (id)entryWithDate:(id)arg1 relevance:(id)arg2;	// IMP=0x0000000000021735
- (void).cxx_destruct;	// IMP=0x0000000000021c2c
@property(readonly, nonatomic) _Bool isImportantRelativeToTimeline; // @synthesize isImportantRelativeToTimeline=_isImportantRelativeToTimeline;
@property(readonly, nonatomic) ATXInfoTimelineEntryRelevance *relevance; // @synthesize relevance=_relevance;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
- (id)initWithDate:(id)arg1 importantRelativeToTimeline:(_Bool)arg2;	// IMP=0x0000000000021bfb
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000021a6e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000021a00
- (_Bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;	// IMP=0x0000000000021848
- (id)initWithDate:(id)arg1 relevance:(id)arg2;	// IMP=0x00000000000217a7
- (id)init;	// IMP=0x00000000000217a1

@end

