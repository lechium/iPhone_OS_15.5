//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, NSURL, SADecoratedString, SAMicroblogTwitterPostAuthor, SAUIAppPunchOut;

@interface SAMicroblogAceMicroblogSearchResult
{
}

+ (id)aceMicroblogSearchResultWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000000e598
+ (id)aceMicroblogSearchResult;	// IMP=0x000000000000e586
@property(copy, nonatomic) NSURL *webAddress;
@property(retain, nonatomic) SADecoratedString *summary;
@property(copy, nonatomic) NSArray *resultUsers;
@property(copy, nonatomic) NSArray *resultPosts;
@property(copy, nonatomic) NSArray *resultNews;
@property(copy, nonatomic) NSString *query;
@property(retain, nonatomic) SAUIAppPunchOut *punchOut;
@property(retain, nonatomic) SAMicroblogTwitterPostAuthor *globalAuthor;
- (id)encodedClassName;	// IMP=0x000000000000e579
- (id)groupIdentifier;	// IMP=0x000000000000e565

@end
