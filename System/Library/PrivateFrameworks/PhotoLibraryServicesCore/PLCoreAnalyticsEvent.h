//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface PLCoreAnalyticsEvent : NSObject
{
    NSString *_event;	// 8 = 0x8
    NSMutableDictionary *_mutablePayload;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000007a66e
- (void)publish;	// IMP=0x000000000007a533
- (void)removeKey:(id)arg1;	// IMP=0x000000000007a516
- (void)mergePayload:(id)arg1;	// IMP=0x000000000007a4b7
- (void)addKey:(id)arg1 value:(id)arg2;	// IMP=0x000000000007a42d
@property(readonly) NSDictionary *payload;
- (id)description;	// IMP=0x000000000007a373
- (id)initWithEvent:(id)arg1 payload:(id)arg2;	// IMP=0x000000000007a2c8

@end
