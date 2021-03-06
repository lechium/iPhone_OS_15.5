//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, PPLocalLocationStore, PPLocation;

@interface PPLocationCache : NSObject
{
    PPLocalLocationStore *_locationStore;	// 8 = 0x8
    _Bool _valid;	// 16 = 0x10
    PPLocation *_home;	// 24 = 0x18
    PPLocation *_work;	// 32 = 0x20
    NSMutableSet *_homeOrWorkAddresses;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001956a5
- (void)invalidate;	// IMP=0x000000000019569b
- (void)_refresh;	// IMP=0x00000000001953b7
- (id)homeOrWorkAddresses;	// IMP=0x0000000000195389
- (id)locationForWork;	// IMP=0x000000000019535b
- (id)locationForHome;	// IMP=0x000000000019532d
- (id)initWithLocationStore:(id)arg1;	// IMP=0x00000000001952a4
- (id)init;	// IMP=0x000000000019529e

@end

