//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue;

@interface VCPClientManager : NSObject
{
    NSObject<OS_dispatch_queue> *_managementQueue;	// 8 = 0x8
    NSMutableSet *_clientHandlers;	// 16 = 0x10
}

+ (id)sharedManager;	// IMP=0x0040000000008e78
- (void).cxx_destruct;	// IMP=0x0020000000009281
- (void)removeClientHandler:(id)arg1;	// IMP=0x0010000000009077
- (void)addClientHandler:(id)arg1;	// IMP=0x0010000000008ecd
- (id)init;	// IMP=0x0010000000008df1

@end

