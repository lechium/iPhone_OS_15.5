//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/NSCopying-Protocol.h>
#import <DoNotDisturbServer/NSMutableCopying-Protocol.h>

@interface DNDSSyncSettings : NSObject <NSMutableCopying, NSCopying>
{
    _Bool _pairSyncEnabled;	// 8 = 0x8
    _Bool _cloudSyncEnabled;	// 9 = 0x9
}

@property(readonly, nonatomic, getter=isCloudSyncEnabled) _Bool cloudSyncEnabled; // @synthesize cloudSyncEnabled=_cloudSyncEnabled;
@property(readonly, nonatomic, getter=isPairSyncEnabled) _Bool pairSyncEnabled; // @synthesize pairSyncEnabled=_pairSyncEnabled;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000079425
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007941a
- (id)description;	// IMP=0x0000000000079380
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000792bd
- (unsigned long long)hash;	// IMP=0x000000000007927c
- (id)initWithPairSyncEnabled:(_Bool)arg1 cloudSyncEnabled:(_Bool)arg2;	// IMP=0x0000000000079236

@end

