//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

@interface SHClusterQuery : NSObject
{
    NSURL *_sourceURL;	// 8 = 0x8
    NSURL *_destinationURL;	// 16 = 0x10
    long long _type;	// 24 = 0x18
}

+ (id)tracksCluster;	// IMP=0x0000000000007259
+ (id)artistsCluster;	// IMP=0x00000000000071ea
+ (id)clusterForType:(long long)arg1;	// IMP=0x00000000000071b0
- (void).cxx_destruct;	// IMP=0x0000000000007bea
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(readonly, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
- (void)statusWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000078b8
- (void)mediaItemsMatchingValuesInCollection:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000077b4
- (void)mediaItemsWithHighCohesionToValue:(id)arg1 forProperty:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000007680
- (void)filterMediaItemQueryCollection:(id)arg1 bySeedCollection:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000754c
- (void)controllerForType:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000073b4
- (id)initWithType:(long long)arg1 sourceURL:(id)arg2 destinationURL:(id)arg3;	// IMP=0x00000000000072c8

@end

