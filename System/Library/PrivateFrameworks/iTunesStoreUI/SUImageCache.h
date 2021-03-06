//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPLRUDictionary;

@interface SUImageCache : NSObject
{
    CPLRUDictionary *_dictionary;	// 8 = 0x8
}

- (void)removeAllCachedImages;	// IMP=0x00000000000e2a35
- (id)imageForURL:(id)arg1 dataProvider:(id)arg2;	// IMP=0x00000000000e29c2
- (void)addImage:(id)arg1 forURL:(id)arg2 dataProvider:(id)arg3;	// IMP=0x00000000000e294d
- (void)dealloc;	// IMP=0x00000000000e2912
- (id)initWithMaximumCapacity:(long long)arg1;	// IMP=0x00000000000e28ac
- (id)init;	// IMP=0x00000000000e2895

@end

