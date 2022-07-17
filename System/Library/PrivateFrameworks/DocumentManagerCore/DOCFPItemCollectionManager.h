//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSCountedSet;

@interface DOCFPItemCollectionManager : NSObject
{
    NSCountedSet *_activeCollections;	// 8 = 0x8
}

+ (id)sharedManager;	// IMP=0x000000000001745a
- (void).cxx_destruct;	// IMP=0x000000000001821e
@property(readonly, copy, nonatomic) NSArray *observingCollections;
- (void)collectionDidStopObserving:(id)arg1;	// IMP=0x000000000001813e
- (void)collectionDidStartObserving:(id)arg1;	// IMP=0x00000000000180c2
- (void)applicationWillEnterForegroundNotification;	// IMP=0x0000000000017e8c
- (void)applicationDidEnterBackground;	// IMP=0x00000000000176c0
- (id)init;	// IMP=0x00000000000174df

@end
