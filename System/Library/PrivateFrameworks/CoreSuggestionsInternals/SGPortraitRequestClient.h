//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _PASXPCClientHelper;

@interface SGPortraitRequestClient : NSObject
{
    _PASXPCClientHelper *_clientHelper;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00000000001b4924
- (void).cxx_destruct;	// IMP=0x00000000001b47c3
- (id)extractionsFromUserAction:(id)arg1 searchableItem:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001b45b0
- (id)extractionsFromSearchableItems:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001b43c2
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001b43ac
- (id)init;	// IMP=0x00000000001b419d

@end

