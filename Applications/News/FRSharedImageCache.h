//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface FRSharedImageCache : NSObject
{
    _Bool _persistenceEnabled;	// 8 = 0x8
    NSString *_rootPath;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000e061a
@property(nonatomic) _Bool persistenceEnabled; // @synthesize persistenceEnabled=_persistenceEnabled;
@property(readonly, nonatomic) NSString *rootPath; // @synthesize rootPath=_rootPath;
- (void)cache:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000000e05e9
- (void)cache:(id)arg1 forKey:(id)arg2 immediately:(_Bool)arg3;	// IMP=0x00100000000e0244
- (id)fetchImageForKey:(id)arg1;	// IMP=0x00100000000e019a
- (void)pruneImagesOlderThan:(double)arg1;	// IMP=0x00100000000dfde8
- (id)_imageAtPath:(id)arg1;	// IMP=0x00100000000dfc3f
- (id)init;	// IMP=0x00100000000dfbd1
- (id)initWithPersistenceEnabled:(_Bool)arg1;	// IMP=0x00100000000dfa8b

@end
