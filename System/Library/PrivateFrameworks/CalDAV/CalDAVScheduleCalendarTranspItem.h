//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren;

@interface CalDAVScheduleCalendarTranspItem : CoreDAVItem
{
    CoreDAVItemWithNoChildren *_transparent;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000008a77
@property(retain, nonatomic) CoreDAVItemWithNoChildren *transparent; // @synthesize transparent=_transparent;
- (id)copyParseRules;	// IMP=0x000000000000896a
@property(readonly, nonatomic) _Bool isScheduleTransparent;
- (id)init;	// IMP=0x00000000000088f4

@end

