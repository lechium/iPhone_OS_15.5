//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface TVPlaylist : NSObject
{
    NSArray *_mediaItems;	// 8 = 0x8
    long long _endAction;	// 16 = 0x10
    long long _repeatMode;	// 24 = 0x18
    NSDictionary *_userInfo;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000040789
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) long long repeatMode; // @synthesize repeatMode=_repeatMode;
@property(nonatomic) long long endAction; // @synthesize endAction=_endAction;
@property(readonly, copy, nonatomic) NSArray *mediaItems; // @synthesize mediaItems=_mediaItems;
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;	// IMP=0x00000000000405f7
- (void)removeObjectsAtIndexes:(id)arg1;	// IMP=0x0000000000040528
- (void)addObject:(id)arg1;	// IMP=0x0000000000040422

@end

