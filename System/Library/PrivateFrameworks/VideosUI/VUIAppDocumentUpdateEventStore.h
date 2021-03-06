//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface VUIAppDocumentUpdateEventStore : NSObject
{
    NSMutableDictionary *_eventByEventDescriptor;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001377fd
@property(retain, nonatomic) NSMutableDictionary *eventByEventDescriptor; // @synthesize eventByEventDescriptor=_eventByEventDescriptor;
- (id)description;	// IMP=0x000000000013769c
- (void)removeAllEvents;	// IMP=0x000000000013765f
- (void)removeEvent:(id)arg1;	// IMP=0x00000000001375cf
- (void)addEvents:(id)arg1;	// IMP=0x000000000013737d
- (void)addEvent:(id)arg1;	// IMP=0x00000000001372d3
@property(readonly, copy, nonatomic) NSArray *events;
- (id)init;	// IMP=0x000000000013722d

@end

