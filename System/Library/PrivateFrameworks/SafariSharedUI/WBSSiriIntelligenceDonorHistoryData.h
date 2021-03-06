//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString, NSURL;

@interface WBSSiriIntelligenceDonorHistoryData : NSObject
{
    NSURL *_pageURL;	// 8 = 0x8
    NSString *_userVisibleURLString;	// 16 = 0x10
    NSString *_pageTitle;	// 24 = 0x18
    NSString *_fullPageText;	// 32 = 0x20
    NSString *_readerText;	// 40 = 0x28
    NSDate *_lastVisitedDate;	// 48 = 0x30
    unsigned long long _visitCount;	// 56 = 0x38
    NSArray *_autocompleteTriggers;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000dc8d7
@property(copy, nonatomic) NSArray *autocompleteTriggers; // @synthesize autocompleteTriggers=_autocompleteTriggers;
@property(nonatomic) unsigned long long visitCount; // @synthesize visitCount=_visitCount;
@property(copy, nonatomic) NSDate *lastVisitedDate; // @synthesize lastVisitedDate=_lastVisitedDate;
@property(copy, nonatomic) NSString *readerText; // @synthesize readerText=_readerText;
@property(copy, nonatomic) NSString *fullPageText; // @synthesize fullPageText=_fullPageText;
@property(copy, nonatomic) NSString *pageTitle; // @synthesize pageTitle=_pageTitle;
@property(copy, nonatomic) NSString *userVisibleURLString; // @synthesize userVisibleURLString=_userVisibleURLString;
@property(copy, nonatomic) NSURL *pageURL; // @synthesize pageURL=_pageURL;

@end

