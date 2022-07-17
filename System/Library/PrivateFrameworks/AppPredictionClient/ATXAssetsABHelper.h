//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface ATXAssetsABHelper : NSObject
{
    NSString *_groupIdentifier;	// 8 = 0x8
    NSDictionary *_abGroupContents;	// 16 = 0x10
}

+ (void)setIndexProviderForDevice:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e384f
+ (void)setDefaultDeviceIndexPolicy;	// IMP=0x00000000000e377e
+ (_Bool)isDefaultGroupIdentifier:(id)arg1;	// IMP=0x00000000000e3728
+ (id)decDeviceId;	// IMP=0x00000000000e355f
+ (void)setStaticIndexForDevice:(unsigned char)arg1;	// IMP=0x00000000000e3500
+ (unsigned long long)saltedIndex:(unsigned long long)arg1;	// IMP=0x00000000000e3409
+ (unsigned long long)cachedSaltedIndex:(unsigned long long)arg1;	// IMP=0x00000000000e3375
+ (unsigned char)indexForDevice;	// IMP=0x00000000000e26b9
+ (void)initialize;	// IMP=0x00000000000e267e
- (void).cxx_destruct;	// IMP=0x00000000000e38c2
@property(readonly, nonatomic) NSDictionary *abGroupContents; // @synthesize abGroupContents=_abGroupContents;
@property(readonly, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
- (id)initWithAssetsForResource:(id)arg1 ofType:(id)arg2 specifiedABGroup:(id)arg3;	// IMP=0x00000000000e32bd
- (id)initWithAssetsForResource:(id)arg1 ofType:(id)arg2;	// IMP=0x00000000000e32a8
- (id)initWithAssetContents:(id)arg1 specifiedABGroup:(id)arg2 indexForDevice:(unsigned char)arg3;	// IMP=0x00000000000e277f
- (id)initWithAssetContents:(id)arg1 indexForDevice:(unsigned char)arg2;	// IMP=0x00000000000e2768
- (id)initWithAssetContents:(id)arg1;	// IMP=0x00000000000e26fc
- (id)init;	// IMP=0x00000000000e26f6

@end
