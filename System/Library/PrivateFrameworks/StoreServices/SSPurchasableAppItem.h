//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SSPurchasableAppItem
{
}

+ (id)allPropertyKeys;	// IMP=0x000000000014fafe
+ (id)sortByNameKey;	// IMP=0x000000000014faee
+ (id)databaseTable;	// IMP=0x000000000014fae1
+ (id)itemsFromDatabase:(id)arg1 forAccount:(long long)arg2 matching:(id)arg3 sortedBy:(id)arg4 sortAscending:(_Bool)arg5;	// IMP=0x000000000014f0ea
+ (id)allItemsFromDatabase:(id)arg1 forAccount:(long long)arg2 sortedBy:(id)arg3 sortAscending:(_Bool)arg4;	// IMP=0x000000000014f0bb
- (id)description;	// IMP=0x000000000014fa61
- (id)requiredCapabilitiesString;	// IMP=0x000000000014fa2c
- (_Bool)isPreorder;	// IMP=0x000000000014f9eb
- (long long)iTunesVersion;	// IMP=0x000000000014f9aa
- (id)humanReadableVersion;	// IMP=0x000000000014f975
- (id)redownloadParams;	// IMP=0x000000000014f940
- (_Bool)supportsIPhone;	// IMP=0x000000000014f8ff
- (_Bool)supportsIPad;	// IMP=0x000000000014f8be
- (_Bool)is32BitOnly;	// IMP=0x000000000014f87d
- (id)ovalIconURLString;	// IMP=0x000000000014f848
- (unsigned int)minimumOS;	// IMP=0x000000000014f807
- (id)longTitle;	// IMP=0x000000000014f7d2
- (_Bool)isNewsstand;	// IMP=0x000000000014f791
- (_Bool)isHiddenFromSpringBoard;	// IMP=0x000000000014f750
- (_Bool)isFamilyShareable;	// IMP=0x000000000014f70f
- (id)iconURL;	// IMP=0x000000000014f6c5
- (id)iconTitle;	// IMP=0x000000000014f690
- (_Bool)hasMessagesExtension;	// IMP=0x000000000014f64f
- (id)bundleID;	// IMP=0x000000000014f61a
- (long long)contentRatingFlags;	// IMP=0x000000000014f5d9
- (id)companyName;	// IMP=0x000000000014f5a4
- (id)category;	// IMP=0x000000000014f56f
- (id)accountIdentifier;	// IMP=0x000000000014f53a

@end

