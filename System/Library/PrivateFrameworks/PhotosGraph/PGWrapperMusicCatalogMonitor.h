//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PGWrapperMusicCatalogMonitor : NSObject
{
}

+ (_Bool)clearCatalogMusicFromCacheWithPhotoLibrary:(id)arg1 progressReporter:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001101a0
+ (_Bool)checkMusicCatalogEligibilityWithProgressReporter:(id)arg1;	// IMP=0x00000000001100b0
+ (void)checkMusicCatalogEligibilityWithProgressReporter:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000110040
- (id)init;	// IMP=0x0000000000110290

@end
