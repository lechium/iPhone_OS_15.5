//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString;
@protocol FCCardStyleProviding;

@interface FCSpotlightGroupConfig
{
    NSString *_spotlightArticleID;	// 80 = 0x50
    NSDate *_publishDate;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000010306c
@property(readonly, copy, nonatomic) NSDate *publishDate; // @synthesize publishDate=_publishDate;
@property(readonly, copy, nonatomic) NSString *spotlightArticleID; // @synthesize spotlightArticleID=_spotlightArticleID;
@property(readonly, copy, nonatomic) id <FCCardStyleProviding> spotlightItemDarkStyle;
@property(readonly, copy, nonatomic) id <FCCardStyleProviding> spotlightItemStyle;
@property(readonly, copy, nonatomic) NSString *spotlightEyebrowTitle;
@property(readonly, copy, nonatomic) NSString *spotlightCallToActionTitle;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000102d3e

@end
