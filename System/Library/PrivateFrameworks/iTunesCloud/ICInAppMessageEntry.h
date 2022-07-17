//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>
#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class ICIAMApplicationMessage, NSDictionary, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface ICInAppMessageEntry : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    NSMutableDictionary *_metadata;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_accessQueue;	// 24 = 0x18
    NSMutableDictionary *_resourceCache;	// 32 = 0x20
    _Bool _shouldDownloadResources;	// 40 = 0x28
    _Bool _didCacheRequiredResources;	// 41 = 0x29
    _Bool _isBadgingApplication;	// 42 = 0x2a
    ICIAMApplicationMessage *_applicationMessage;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000096c35
- (void).cxx_destruct;	// IMP=0x0000000000096869
@property(nonatomic) _Bool isBadgingApplication; // @synthesize isBadgingApplication=_isBadgingApplication;
@property(nonatomic) _Bool didCacheRequiredResources; // @synthesize didCacheRequiredResources=_didCacheRequiredResources;
@property(nonatomic) _Bool shouldDownloadResources; // @synthesize shouldDownloadResources=_shouldDownloadResources;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) ICIAMApplicationMessage *applicationMessage; // @synthesize applicationMessage=_applicationMessage;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000096742
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000096646
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000963f5
- (id)allCachedResourceLocations;	// IMP=0x000000000009633c
- (void)clearCachedResources;	// IMP=0x00000000000962f1
- (void)setCacheLocation:(id)arg1 forResourceWithIdentifier:(id)arg2;	// IMP=0x0000000000096231
- (id)cachedLocationForResourceWithIdentifier:(id)arg1;	// IMP=0x0000000000096136
- (void)updateMetadataValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000009607d
@property(readonly, nonatomic) NSDictionary *metadata;
- (id)description;	// IMP=0x0000000000095de0
- (id)initWithApplicationMessage:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x0000000000095cc7

@end
