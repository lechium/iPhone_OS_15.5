//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface GKContentPropertyList : NSObject
{
    NSDictionary *_root;	// 8 = 0x8
    NSString *_bundleID;	// 16 = 0x10
    NSDictionary *_achievementsByIdentifier;	// 24 = 0x18
    NSDictionary *_leaderboardsByIdentifier;	// 32 = 0x20
    NSDictionary *_leaderboardSetsByIdentifier;	// 40 = 0x28
}

+ (id)localPropertyListForGameDescriptor:(id)arg1;	// IMP=0x00000000000c4f53
- (void).cxx_destruct;	// IMP=0x00000000000c5aee
@property(retain) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain) NSDictionary *root; // @synthesize root=_root;
- (id)achievementDescriptions;	// IMP=0x00000000000c5a51
- (id)leaderboardSetDescriptionForIdentifier:(id)arg1;	// IMP=0x00000000000c598a
- (id)leaderboardDescriptionForIdentifier:(id)arg1;	// IMP=0x00000000000c58c3
- (id)achievementDescriptionForIdentifier:(id)arg1;	// IMP=0x00000000000c57fc
- (id)leaderboardSetDescriptions;	// IMP=0x00000000000c57a5
- (id)leaderboardDescriptions;	// IMP=0x00000000000c574e
- (id)_rootDictionary;	// IMP=0x00000000000c5228
- (id)imageNameForDashboardLogo;	// IMP=0x00000000000c51a1
- (id)localizedStringForKey:(id)arg1;	// IMP=0x00000000000c518d
- (id)localizedStringForKey:(id)arg1 forLocalization:(id)arg2;	// IMP=0x00000000000c50e9
- (id)_mainBundle;	// IMP=0x00000000000c5061

@end
