//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SGExternalEnrichment-Protocol.h>

@class NSMutableArray;

@interface SGURLContainer : NSObject <SGExternalEnrichment>
{
    NSMutableArray *_urls;	// 8 = 0x8
    _Bool _needsFlushing;	// 16 = 0x10
}

+ (_Bool)deleteAllURLsWithBundleIdentifier:(id)arg1 documentIdentifiers:(id)arg2 entityStore:(id)arg3;	// IMP=0x000000000020228d
+ (_Bool)deleteAllURLsWithBundleIdentifier:(id)arg1 entityStore:(id)arg2;	// IMP=0x00000000002021f3
+ (id)urlsFoundBetweenStartDate:(id)arg1 endDate:(id)arg2 bundleIdentifier:(id)arg3 entityStore:(id)arg4;	// IMP=0x0000000000202114
- (void).cxx_destruct;	// IMP=0x0000000000202104
- (id)numberOfExtractions;	// IMP=0x00000000002020cb
- (void)flushWrites;	// IMP=0x00000000002020ae
- (void)dealloc;	// IMP=0x0000000000202067
- (void)writeWithEntityStore:(id)arg1;	// IMP=0x0000000000201e9f
- (id)init;	// IMP=0x0000000000201e45

@end

