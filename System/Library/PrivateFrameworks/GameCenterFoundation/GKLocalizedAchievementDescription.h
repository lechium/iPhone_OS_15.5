//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKGame, NSString;

@interface GKLocalizedAchievementDescription
{
    GKGame *_game;	// 8 = 0x8
    NSString *_iconImageName;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003d986
@property(copy) NSString *iconImageName; // @synthesize iconImageName=_iconImageName;
@property(retain) GKGame *game; // @synthesize game=_game;
- (id)imageNameForIcon;	// IMP=0x000000000003d926
- (id)unachievedDescription;	// IMP=0x000000000003d8b8
- (id)achievedDescription;	// IMP=0x000000000003d84a
- (id)title;	// IMP=0x000000000003d7dc
- (id)_localizedStringFromKey:(id)arg1;	// IMP=0x000000000003d70d

@end
