//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardHome/SBLeafIcon.h>

@class SFSearchResult;

@interface SearchUITemporaryInternalAppsIcon : SBLeafIcon
{
    unsigned long long _variant;	// 8 = 0x8
    SFSearchResult *_searchResult;	// 16 = 0x10
}

+ (_Bool)canGenerateIconsInBackground;	// IMP=0x00000000000553e4
- (void).cxx_destruct;	// IMP=0x000000000005556a
@property(readonly, nonatomic) SFSearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property(readonly, nonatomic) unsigned long long variant; // @synthesize variant=_variant;
- (id)displayNameForLocation:(id)arg1;	// IMP=0x00000000000554ce
- (id)iconImageWithInfo:(struct SBIconImageInfo)arg1;	// IMP=0x00000000000553ec
- (id)initWithResult:(id)arg1 variant:(unsigned long long)arg2;	// IMP=0x000000000005530c

@end
