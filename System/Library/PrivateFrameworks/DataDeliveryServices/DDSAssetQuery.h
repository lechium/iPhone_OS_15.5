//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DataDeliveryServices/NSSecureCoding-Protocol.h>

@class DDSAttributeFilter, NSString;
@protocol OS_dispatch_queue;

@interface DDSAssetQuery : NSObject <NSSecureCoding>
{
    _Bool _localOnly;	// 8 = 0x8
    _Bool _installedOnly;	// 9 = 0x9
    _Bool _latestOnly;	// 10 = 0xa
    _Bool _cachedOnly;	// 11 = 0xb
    NSString *_description;	// 16 = 0x10
    NSString *_assetType;	// 24 = 0x18
    DDSAttributeFilter *_filter;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000a7ff
- (void).cxx_destruct;	// IMP=0x000000000000b081
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) _Bool cachedOnly; // @synthesize cachedOnly=_cachedOnly;
@property(nonatomic) _Bool latestOnly; // @synthesize latestOnly=_latestOnly;
@property(nonatomic) _Bool installedOnly; // @synthesize installedOnly=_installedOnly;
@property(nonatomic) _Bool localOnly; // @synthesize localOnly=_localOnly;
@property(readonly, nonatomic) DDSAttributeFilter *filter; // @synthesize filter=_filter;
@property(readonly, nonatomic) NSString *assetType; // @synthesize assetType=_assetType;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000af31
- (unsigned long long)hash;	// IMP=0x000000000000ae1c
- (_Bool)isEqualToAssetQuery:(id)arg1;	// IMP=0x000000000000ac91
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000ac38
@property(readonly, nonatomic) NSString *cacheKey;
- (void)invalidateDescription;	// IMP=0x000000000000aaa7
- (id)dumpDescription;	// IMP=0x000000000000a98b
- (id)description;	// IMP=0x000000000000a807
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000a53d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000a292
- (id)init;	// IMP=0x000000000000a0b0
- (id)initWithAssetType:(id)arg1 filter:(id)arg2 localOnly:(_Bool)arg3 installedOnly:(_Bool)arg4 latestOnly:(_Bool)arg5 cachedOnly:(_Bool)arg6;	// IMP=0x0000000000009fdc
- (id)initWithAssetType:(id)arg1 filter:(id)arg2;	// IMP=0x0000000000009fb5
- (id)assetType:(id)arg1;	// IMP=0x0000000000009f83

@end

