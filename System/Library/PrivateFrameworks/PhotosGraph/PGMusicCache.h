//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface PGMusicCache : NSObject
{
    MISSING_TYPE *cacheURL;	// 0 = 0x0
    MISSING_TYPE *persistentStoreCoordinator;	// 0 = 0x0
    MISSING_TYPE *managedObjectContext;	// 0 = 0x0
}

+ (id)cacheAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003f380
+ (id)cacheWithPhotoLibrary:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003ec90
- (void).cxx_destruct;	// IMP=0x0000000000041490
- (id)init;	// IMP=0x0000000000041430
- (_Bool)removeAllWithProgressReporter:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000040040

@end
