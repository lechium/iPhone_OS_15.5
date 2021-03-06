//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/CKVSearcherProvider-Protocol.h>

@protocol CKVSearchServiceProvider, OS_dispatch_queue;

@interface CKVSearcherFactory : NSObject <CKVSearcherProvider>
{
    NSObject<OS_dispatch_queue> *_searcherQueue;	// 8 = 0x8
    NSObject<CKVSearchServiceProvider> *_serviceProvider;	// 16 = 0x10
}

+ (id)sharedSearcherFactory;	// IMP=0x00000000000a2c48
- (void).cxx_destruct;	// IMP=0x00000000000a2c20
- (id)makeSearcherForUserId:(id)arg1 prewarm:(_Bool)arg2;	// IMP=0x00000000000a2b87
- (id)init;	// IMP=0x00000000000a2b3f
- (id)initWithQueue:(id)arg1 serviceProvider:(id)arg2;	// IMP=0x00000000000a29cd

@end

