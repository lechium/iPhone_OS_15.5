//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CalDAVItemWithRecurrenceChildren : CoreDAVItem
{
    NSMutableSet *_recurrences;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000003f3a4
@property(retain, nonatomic) NSMutableSet *recurrences; // @synthesize recurrences=_recurrences;
- (id)copyParseRules;	// IMP=0x000000000003f296
- (void)addRecurrence:(id)arg1;	// IMP=0x000000000003f1be

@end

