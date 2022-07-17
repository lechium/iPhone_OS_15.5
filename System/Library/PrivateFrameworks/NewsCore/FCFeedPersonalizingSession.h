//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FCDateRange, NSString;

@interface FCFeedPersonalizingSession : NSObject
{
    FCDateRange *_dateRange;	// 8 = 0x8
    unsigned long long _fixedArticleCount;	// 16 = 0x10
    long long _feedType;	// 24 = 0x18
    NSString *_sessionID;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001deef2
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) long long feedType; // @synthesize feedType=_feedType;
@property(nonatomic) unsigned long long fixedArticleCount; // @synthesize fixedArticleCount=_fixedArticleCount;
@property(retain, nonatomic) FCDateRange *dateRange; // @synthesize dateRange=_dateRange;

@end
