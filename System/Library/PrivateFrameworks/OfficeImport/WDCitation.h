//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, WDDocument;

__attribute__((visibility("hidden")))
@interface WDCitation : NSObject
{
    NSString *mSourceType;	// 8 = 0x8
    NSMutableArray *mAuthors;	// 16 = 0x10
    NSString *mYear;	// 24 = 0x18
    NSMutableArray *mTitles;	// 32 = 0x20
    NSMutableArray *mUrls;	// 40 = 0x28
    NSString *mPeriodicalTitle;	// 48 = 0x30
    NSString *mVolume;	// 56 = 0x38
    NSString *mNumber;	// 64 = 0x40
    NSString *mSection;	// 72 = 0x48
    NSString *mPubDate;	// 80 = 0x50
    NSString *mPages;	// 88 = 0x58
    WDDocument *mDocument;	// 96 = 0x60
}

+ (id)stringValuesForNodesAtPath:(id)arg1 nodePtr:(struct _xmlNode *)arg2 trimStyle:(_Bool)arg3;	// IMP=0x000000000041dca8
+ (id)stringValueForNodeAtPath:(id)arg1 nodePtr:(struct _xmlNode *)arg2 trimStyle:(_Bool)arg3;	// IMP=0x000000000041dbec
+ (id)subStringOf:(struct _xmlNode *)arg1 forPath:(id)arg2;	// IMP=0x000000000041db2f
+ (struct _xmlNode *)trimStyle:(struct _xmlNode *)arg1;	// IMP=0x000000000041dafd
+ (struct _xmlNode *)nodeAtPath:(id)arg1 nodePtr:(struct _xmlNode *)arg2;	// IMP=0x000000000041d964
+ (id)wordStringForRefType:(int)arg1;	// IMP=0x000000000041d72e
+ (int)refTypeForWordString:(id)arg1;	// IMP=0x000000000041d6a2
+ (id)endNoteStringForRefType:(int)arg1;	// IMP=0x000000000041d62f
+ (id)refTypeEnumMap;	// IMP=0x000000000041d485
+ (id)wordRefTypeEnumMap;	// IMP=0x000000000041d3d1
- (void).cxx_destruct;	// IMP=0x000000000041e016
@property(readonly) __weak WDDocument *document; // @synthesize document=mDocument;
@property(retain, nonatomic) NSString *pages; // @synthesize pages=mPages;
@property(retain, nonatomic) NSMutableArray *urls; // @synthesize urls=mUrls;
@property(retain, nonatomic) NSString *pubDate; // @synthesize pubDate=mPubDate;
@property(retain, nonatomic) NSString *section; // @synthesize section=mSection;
@property(retain, nonatomic) NSString *number; // @synthesize number=mNumber;
@property(retain, nonatomic) NSString *volume; // @synthesize volume=mVolume;
@property(retain, nonatomic) NSString *periodicalTitle; // @synthesize periodicalTitle=mPeriodicalTitle;
@property(retain, nonatomic) NSMutableArray *titles; // @synthesize titles=mTitles;
@property(retain, nonatomic) NSString *sourceType; // @synthesize sourceType=mSourceType;
@property(retain, nonatomic) NSMutableArray *authors; // @synthesize authors=mAuthors;
@property(retain, nonatomic) NSString *year; // @synthesize year=mYear;
- (id)description;	// IMP=0x000000000041de99
- (id)initWithDocument:(id)arg1;	// IMP=0x000000000041d539

@end

