//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (PrintDebugging)
+ (id)_gkDictionaryWithServerData:(id)arg1 error:(out id *)arg2;	// IMP=0x00200000000b7324
+ (id)_gkDictionaryWithServerData:(id)arg1 serverStatus:(out long long *)arg2 error:(out id *)arg3;	// IMP=0x00100000000b6d4d
+ (id)_gkDictionaryWithXMLPlistData:(id)arg1;	// IMP=0x00100000000b6d0c
+ (id)_gkClientImageDictionaryForServerImageURLs:(id)arg1;	// IMP=0x00100000000b7ce9
+ (id)_gkImageCacheKeyPathsByKey;	// IMP=0x00100000000b7c99
+ (id)_gkDictionaryWithFormEncodedString:(id)arg1;	// IMP=0x00100000000f52c1
- (id)_gkDescriptionWithChildren:(long long)arg1;	// IMP=0x002000000008c343
- (id)_gkPlistXMLDataForClient:(id)arg1 player:(id)arg2;	// IMP=0x00100000000b6c2b
- (id)_gkImageURLForSize:(long long)arg1 scale:(double)arg2;	// IMP=0x00100000000b7e68
- (id)_gkImageURLForSize:(long long)arg1 scale:(double)arg2 foundSize:(out unsigned long long *)arg3;	// IMP=0x00100000000b78b8
- (id)_gkValuesForKeys:(id)arg1;	// IMP=0x00100000000f5364
- (id)_gkSubDictionaryWithKeys:(id)arg1 mappedToNewKeys:(id)arg2;	// IMP=0x00100000000f4ff2
- (id)_gkSubDictionaryWithKeys:(id)arg1;	// IMP=0x00100000000f4e0b
- (id)_gkDictionaryByRemovingObjectForKey:(id)arg1;	// IMP=0x00100000000f4da5
- (id)_gkDictionaryByRemovingObjectsForKeys:(id)arg1;	// IMP=0x00100000000f4d3f
@end
