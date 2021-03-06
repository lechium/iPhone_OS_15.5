//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNCacheBoundingStrategy-Protocol.h>

@class CNQueue, NSString;

@interface _CNCacheFixedCapacityBoundingStrategy : NSObject <CNCacheBoundingStrategy>
{
    CNQueue *_keys;	// 8 = 0x8
    unsigned long long _capacity;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003f4cc
@property(readonly, nonatomic) unsigned long long capacity; // @synthesize capacity=_capacity;
@property(readonly, nonatomic) CNQueue *keys; // @synthesize keys=_keys;
- (void)willAccessKey:(id)arg1;	// IMP=0x000000000003f4b2
- (_Bool)shouldEvictKey:(id)arg1;	// IMP=0x000000000003f4aa
- (void)willUpdateCacheBy:(unsigned long long)arg1 forKey:(id)arg2 keysToEvict:(id *)arg3;	// IMP=0x000000000003f2ac
@property(readonly, copy) NSString *description;
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000003f1b3
- (id)init;	// IMP=0x000000000003f19c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

