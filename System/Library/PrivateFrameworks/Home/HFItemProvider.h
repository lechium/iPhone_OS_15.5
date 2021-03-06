//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/NSCopying-Protocol.h>

@class NSSet;

@interface HFItemProvider : NSObject <NSCopying>
{
    NSSet *_clientInvalidationReasons;	// 8 = 0x8
}

+ (_Bool)prefersNonBlockingReloads;	// IMP=0x000000000014ce9c
- (void).cxx_destruct;	// IMP=0x000000000014ce8c
@property(retain, nonatomic) NSSet *clientInvalidationReasons; // @synthesize clientInvalidationReasons=_clientInvalidationReasons;
- (id)invalidationReasons;	// IMP=0x000000000014ce10
@property(readonly, nonatomic) NSSet *items;
- (id)reloadItems;	// IMP=0x000000000014cc8a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000014cc78
- (id)init;	// IMP=0x000000000014cc22
- (id)reloadItemsWithHomeKitObjects:(id)arg1 filter:(CDUnknownBlockType)arg2 itemMap:(CDUnknownBlockType)arg3;	// IMP=0x000000000014da1f
- (id)reloadItemsWithObjects:(id)arg1 keyAdaptor:(CDUnknownBlockType)arg2 itemAdaptor:(CDUnknownBlockType)arg3 filter:(CDUnknownBlockType)arg4 itemMap:(CDUnknownBlockType)arg5;	// IMP=0x000000000014cea4

@end

