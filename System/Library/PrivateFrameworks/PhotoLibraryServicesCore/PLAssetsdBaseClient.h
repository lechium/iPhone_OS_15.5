//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol PLXPCProxyCreating><PLXPCAsyncProxyCreating;

@interface PLAssetsdBaseClient : NSObject
{
    id <PLXPCProxyCreating><PLXPCAsyncProxyCreating> _proxyFactory;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000087fb9
@property(readonly) id <PLXPCProxyCreating><PLXPCAsyncProxyCreating> proxyFactory; // @synthesize proxyFactory=_proxyFactory;
- (id)initWithQueue:(id)arg1 proxyCreating:(id)arg2 proxyGetter:(SEL)arg3;	// IMP=0x0000000000087ef4

@end

