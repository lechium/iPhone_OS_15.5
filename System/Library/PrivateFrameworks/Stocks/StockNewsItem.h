//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSURL;

@interface StockNewsItem : NSObject
{
    NSString *_headline;	// 8 = 0x8
    NSString *_summary;	// 16 = 0x10
    NSString *_source;	// 24 = 0x18
    NSDate *_date;	// 32 = 0x20
    NSURL *_link;	// 40 = 0x28
    NSString *_localizedDateString;	// 48 = 0x30
}

+ (id)localizedStringForDate:(id)arg1;	// IMP=0x0000000000025562
- (void).cxx_destruct;	// IMP=0x0000000000025de1
@property(retain, nonatomic) NSURL *link; // @synthesize link=_link;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) NSString *headline; // @synthesize headline=_headline;
- (id)description;	// IMP=0x0000000000025ccc
@property(readonly, retain, nonatomic) NSString *localizedDateString;
- (long long)chronologicalComparisonWithNewsItem:(id)arg1;	// IMP=0x0000000000025bfe
- (id)archiveDictionary;	// IMP=0x0000000000025aa5
- (id)initWithArchiveDictionary:(id)arg1;	// IMP=0x00000000000257df
- (void)resetLocale;	// IMP=0x0000000000025786

@end

