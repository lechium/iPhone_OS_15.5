//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSArray, NSMutableArray;
@protocol HMFLocking;

@interface HMDMessageFilterChain : HMFObject
{
    id <HMFLocking> _lock;	// 8 = 0x8
    NSMutableArray *_filters;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000057bb4d
- (void)resetConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000057ba18
- (_Bool)shouldCloudSyncData;	// IMP=0x000000000057b8df
- (_Bool)acceptMessage:(id)arg1 error:(id *)arg2;	// IMP=0x000000000057b59f
- (void)removeMessageFilter:(id)arg1;	// IMP=0x000000000057b4d4
- (void)addMessageFilter:(id)arg1;	// IMP=0x000000000057b409
@property(readonly, copy, nonatomic) NSArray *filters;
- (id)init;	// IMP=0x000000000057b235

@end

