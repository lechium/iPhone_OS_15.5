//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface FCFeedItemsWithIDLookupResult : NSObject
{
    NSDictionary *_sectionIDsByFeedID;	// 8 = 0x8
    NSArray *_feedItems;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000027b154
@property(retain, nonatomic) NSArray *feedItems; // @synthesize feedItems=_feedItems;
@property(retain, nonatomic) NSDictionary *sectionIDsByFeedID; // @synthesize sectionIDsByFeedID=_sectionIDsByFeedID;
- (id)initWithSectionIDByFeedID:(id)arg1 feedItems:(id)arg2;	// IMP=0x000000000027b065
- (id)init;	// IMP=0x000000000027af20

@end

