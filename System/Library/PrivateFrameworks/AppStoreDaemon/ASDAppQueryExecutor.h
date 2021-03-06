//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASDDispatchQueue, ASDServiceBroker, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ASDAppQueryExecutor : NSObject
{
    ASDDispatchQueue *_dispatchQueue;	// 8 = 0x8
    NSMutableDictionary *_queryPromises;	// 16 = 0x10
    ASDServiceBroker *_serviceBroker;	// 24 = 0x18
}

+ (void)_executeQueryWithPredicate:(id)arg1 onPairedDevice:(id)arg2 usingServiceBroker:(id)arg3 withResultHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000031f6d
- (void).cxx_destruct;	// IMP=0x0000000000032a58
- (void)executeQueryWithPredicate:(id)arg1 onPairedDevice:(id)arg2 withResultHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000317b7
- (id)initWithServiceBroker:(id)arg1;	// IMP=0x00000000000316fe
- (id)init;	// IMP=0x00000000000316ea

@end

