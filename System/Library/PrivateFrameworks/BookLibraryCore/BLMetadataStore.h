//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BLServiceProxy;

@interface BLMetadataStore : NSObject
{
    BLServiceProxy *_serviceProxy;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000029d39
@property(readonly, nonatomic) BLServiceProxy *serviceProxy; // @synthesize serviceProxy=_serviceProxy;
- (_Bool)removeRacGUIDForStoreID:(long long)arg1 error:(out id *)arg2;	// IMP=0x0000000000029c31
- (void)racGUIDForStoreID:(long long)arg1 result:(CDUnknownBlockType)arg2;	// IMP=0x0000000000029a54
- (_Bool)setRacGUID:(id)arg1 forStoreID:(long long)arg2 error:(out id *)arg3;	// IMP=0x0000000000029907
- (id)init;	// IMP=0x00000000000297d7

@end
