//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface NPKGreenTeaDataUsageResolver : NSObject
{
    _Bool _currentlyResolving;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_internalQueue;	// 16 = 0x10
}

+ (void)resolveGreenTeaDataUsageIfNecessary;	// IMP=0x000000000004f81f
- (void).cxx_destruct;	// IMP=0x000000000004fb42
@property(nonatomic) _Bool currentlyResolving; // @synthesize currentlyResolving=_currentlyResolving;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
- (void)_resolveGreenTeaDataUsageIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000004fb0a
- (void)resolveGreenTeaDataUsageIfNecessary;	// IMP=0x000000000004f8d4
- (id)init;	// IMP=0x000000000004f87c

@end

