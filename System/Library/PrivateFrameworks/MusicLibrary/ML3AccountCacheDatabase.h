//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ML3MusicLibrary, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ML3AccountCacheDatabase : NSObject
{
    NSMutableDictionary *_propertiesCache;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *accessQueue;	// 16 = 0x10
    ML3MusicLibrary *_library;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000182649
- (void)_setCacheEntry:(id)arg1 forDSID:(unsigned long long)arg2;	// IMP=0x00000000001825b0
- (id)_cacheEntryForDSID:(unsigned long long)arg1;	// IMP=0x0000000000182119
- (_Bool)getPropertiesForDSID:(unsigned long long)arg1 appleID:(id *)arg2 altDSID:(id *)arg3;	// IMP=0x000000000018207e
- (id)appleIDForDSID:(unsigned long long)arg1;	// IMP=0x000000000018204c
- (_Bool)setAppleID:(id)arg1 altDSID:(id)arg2 forDSID:(unsigned long long)arg3;	// IMP=0x0000000000181be7
- (_Bool)setAppleID:(id)arg1 forDSID:(unsigned long long)arg2;	// IMP=0x0000000000181bd0
- (id)initWithLibrary:(id)arg1;	// IMP=0x0000000000181afa

@end

