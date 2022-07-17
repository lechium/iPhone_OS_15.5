//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface PMLSpotlightReference : NSObject
{
    NSArray *_itemIdentifiers;	// 8 = 0x8
    NSString *_domainIdentifier;	// 16 = 0x10
    NSString *_bundleIdentifier;	// 24 = 0x18
}

+ (id)referenceWithBundleId:(id)arg1 domainId:(id)arg2 itemIds:(id)arg3;	// IMP=0x0000000000038702
- (void).cxx_destruct;	// IMP=0x00000000000386cf
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) NSString *domainIdentifier; // @synthesize domainIdentifier=_domainIdentifier;
@property(readonly, nonatomic) NSArray *itemIdentifiers; // @synthesize itemIdentifiers=_itemIdentifiers;
- (id)initWithBundleId:(id)arg1 domainId:(id)arg2 itemIds:(id)arg3;	// IMP=0x0000000000038502

@end
