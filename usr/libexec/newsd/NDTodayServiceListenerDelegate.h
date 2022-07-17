//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FCAsyncSerialQueue, NSString;
@protocol FCContentContext;

@interface NDTodayServiceListenerDelegate : NSObject
{
    id <FCContentContext> _contentContext;	// 8 = 0x8
    FCAsyncSerialQueue *_fetchQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000000c2ab
@property(readonly, nonatomic) FCAsyncSerialQueue *fetchQueue; // @synthesize fetchQueue=_fetchQueue;
@property(readonly, nonatomic) id <FCContentContext> contentContext; // @synthesize contentContext=_contentContext;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000000bfa9
- (id)initWithContentContext:(id)arg1 fetchQueue:(id)arg2;	// IMP=0x001000000000bec2
- (id)init;	// IMP=0x001000000000bd7d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
