//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSString;

@interface RDKeychainCache : NSObject
{
    NSCache *_cache;	// 8 = 0x8
}

- (id)keyNamesForSensor:(id)arg1;	// IMP=0x0020000000014ab0
- (_Bool)removeFromKeychain:(id)arg1;	// IMP=0x0010000000014a90
- (id)keyDataFromKeyChainWithName:(id)arg1;	// IMP=0x0010000000014a70
- (_Bool)addToKeychainKey:(id)arg1 withName:(id)arg2 sensor:(id)arg3;	// IMP=0x0010000000014a20
- (id)init;	// IMP=0x00100000000149d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

