//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerAccessItem : CoreDAVItem
{
    CoreDAVItemWithNoChildren *_accessLevel;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000001a664
@property(retain, nonatomic) CoreDAVItemWithNoChildren *accessLevel; // @synthesize accessLevel=_accessLevel;
- (id)copyParseRules;	// IMP=0x000000000001a428
- (id)initWithAccess:(int)arg1;	// IMP=0x000000000001a3a1
- (id)init;	// IMP=0x000000000001a37b

@end

