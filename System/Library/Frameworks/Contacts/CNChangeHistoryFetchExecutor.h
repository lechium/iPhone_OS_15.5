//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNChangeHistoryFetchRequest, CNContactStore;

__attribute__((visibility("hidden")))
@interface CNChangeHistoryFetchExecutor : NSObject
{
    CNChangeHistoryFetchRequest *_request;	// 8 = 0x8
    CNContactStore *_store;	// 16 = 0x10
}

+ (id)os_log;	// IMP=0x000000000005c8ae
- (void).cxx_destruct;	// IMP=0x000000000005e1ae
@property(readonly, nonatomic) CNContactStore *store; // @synthesize store=_store;
@property(readonly, copy, nonatomic) CNChangeHistoryFetchRequest *request; // @synthesize request=_request;
- (id)contactLinkingEventsForContacts:(id)arg1 withFactory:(id)arg2;	// IMP=0x000000000005dac6
- (id)keysToFetch;	// IMP=0x000000000005d8da
- (id)countOfDeltaSync;	// IMP=0x000000000005d758
- (id)deltaSync;	// IMP=0x000000000005d468
- (id)fullSync;	// IMP=0x000000000005cf24
- (_Bool)validateFetchRequest;	// IMP=0x000000000005ce98
- (id)fetchCount:(id *)arg1;	// IMP=0x000000000005cd4c
- (id)fetchEvents:(id *)arg1;	// IMP=0x000000000005cb7b
- (id)run:(id *)arg1;	// IMP=0x000000000005ca9e
- (id)description;	// IMP=0x000000000005c9b2
- (id)initWithRequest:(id)arg1 store:(id)arg2;	// IMP=0x000000000005c90a

@end

