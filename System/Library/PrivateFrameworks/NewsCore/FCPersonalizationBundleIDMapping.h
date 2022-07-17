//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCJSONEncodableObjectProviding-Protocol.h>
#import <NewsCore/NSCopying-Protocol.h>
#import <NewsCore/NSSecureCoding-Protocol.h>

@class NSDictionary, NTPBBundleIDMapping;

@interface FCPersonalizationBundleIDMapping : NSObject <NSSecureCoding, NSCopying, FCJSONEncodableObjectProviding>
{
    NTPBBundleIDMapping *_pbBundleIDMapping;	// 8 = 0x8
    NSDictionary *_bundleIDMapping;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000017edbf
+ (id)decendingSpecificityBundleIDsForBundleID:(id)arg1;	// IMP=0x000000000017dcbe
- (void).cxx_destruct;	// IMP=0x000000000017eef4
@property(retain, nonatomic) NSDictionary *bundleIDMapping; // @synthesize bundleIDMapping=_bundleIDMapping;
- (id)jsonEncodableObject;	// IMP=0x000000000017ee89
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000017ee7e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000017ee54
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000017edc7
- (id)tagScoresForBundleID:(id)arg1;	// IMP=0x000000000017e913
@property(readonly, nonatomic) unsigned long long count;
- (id)init;	// IMP=0x000000000017e8bb
- (id)initWithPBBundleIDMapping:(id)arg1;	// IMP=0x000000000017df57

@end
