//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ChronoServices/NSCopying-Protocol.h>
#import <ChronoServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface CHSTimelineReloadRequest : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _allowCostOverride;	// 8 = 0x8
    NSString *_kind;	// 16 = 0x10
    NSString *_extensionBundleIdentifier;	// 24 = 0x18
    NSString *_reason;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000152f7
+ (id)new;	// IMP=0x0000000000015098
- (void).cxx_destruct;	// IMP=0x0000000000015590
@property(readonly, nonatomic) _Bool allowCostOverride; // @synthesize allowCostOverride=_allowCostOverride;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, copy, nonatomic) NSString *extensionBundleIdentifier; // @synthesize extensionBundleIdentifier=_extensionBundleIdentifier;
@property(readonly, copy, nonatomic) NSString *kind; // @synthesize kind=_kind;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000153a7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000152ff
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000152ec
- (id)initWithKind:(id)arg1 extensionBundleIdentifier:(id)arg2 reason:(id)arg3 allowCostOverride:(_Bool)arg4;	// IMP=0x00000000000151ca
- (id)init;	// IMP=0x0000000000015129

@end

