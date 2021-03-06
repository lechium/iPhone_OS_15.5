//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSData;

@interface IMDCoreSpotlightContactCache : NSObject
{
    NSData *_currentHistoryToken;	// 8 = 0x8
    NSCache *_cache;	// 16 = 0x10
}

+ (void)vCardCoordinateForMapURL:(id)arg1 outLatitude:(float *)arg2 outLongitude:(float *)arg3;	// IMP=0x0000000000040c6b
+ (id)vCardMapURLForContact:(id)arg1;	// IMP=0x0000000000040a35
+ (void)updateAttributes:(id)arg1 withAddressFromContact:(id)arg2;	// IMP=0x000000000004095a
+ (id)vCardNameForContact:(id)arg1;	// IMP=0x0000000000040919
+ (id)contactsForVCardAtPath:(id)arg1;	// IMP=0x000000000004085c
+ (id)sharedInstance;	// IMP=0x000000000003fdae
@property(retain, nonatomic) NSCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) NSData *currentHistoryToken; // @synthesize currentHistoryToken=_currentHistoryToken;
- (void)dealloc;	// IMP=0x00000000000410d7
- (void)contactStoreDidChange:(id)arg1;	// IMP=0x00000000000405ea
- (id)_handlesMatchingContactIdentifier:(id)arg1;	// IMP=0x00000000000403eb
- (id)cachedContactForKey:(id)arg1;	// IMP=0x00000000000403a0
- (void)cacheContact:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000402fa
- (void)updateCacheForAliases:(id)arg1;	// IMP=0x0000000000040237
- (void)cacheContactsFromFetchResults:(id)arg1 forAliases:(id)arg2;	// IMP=0x000000000003ff48
- (void)removeCachedContactForKey:(id)arg1;	// IMP=0x000000000003fec9
- (void)resetCache;	// IMP=0x000000000003fe9e
- (id)init;	// IMP=0x000000000003fdf3

@end

