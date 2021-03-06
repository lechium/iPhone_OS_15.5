//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SGRealtimeSuggestionsTuple : NSObject
{
    NSArray *_contacts;	// 8 = 0x8
    NSArray *_events;	// 16 = 0x10
    NSArray *_reminders;	// 24 = 0x18
    NSArray *_deliveries;	// 32 = 0x20
    NSArray *_invalidatedIdentifiers;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000059eca
@property(retain) NSArray *invalidatedIdentifiers; // @synthesize invalidatedIdentifiers=_invalidatedIdentifiers;
@property(retain) NSArray *deliveries; // @synthesize deliveries=_deliveries;
@property(retain) NSArray *reminders; // @synthesize reminders=_reminders;
@property(retain) NSArray *events; // @synthesize events=_events;
@property(retain) NSArray *contacts; // @synthesize contacts=_contacts;
- (id)description;	// IMP=0x0000000000059d67
- (id)combinedSuggestions;	// IMP=0x0000000000059cde
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000059c57
- (unsigned long long)suggestionsCount;	// IMP=0x0000000000059b66

@end

