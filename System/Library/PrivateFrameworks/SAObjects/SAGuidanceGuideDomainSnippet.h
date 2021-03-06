//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, NSURL;

@interface SAGuidanceGuideDomainSnippet
{
}

+ (id)guideDomainSnippetWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000036922
+ (id)guideDomainSnippet;	// IMP=0x0000000000036910
@property(copy, nonatomic) NSString *tagPhrase;
@property(nonatomic) _Bool performIntentEnabledAppAuthorizationCheck;
@property(nonatomic) _Bool isAppIcon;
@property(copy, nonatomic) NSString *iconResourceName;
@property(nonatomic) _Bool iconNeedsProcessing;
@property(copy, nonatomic) NSString *iconDisplayIdentifier;
@property(copy, nonatomic) NSArray *guideSections;
@property(nonatomic) _Bool enabledInOnlineMode;
@property(nonatomic) _Bool enabledInOfflineMode;
@property(copy, nonatomic) NSString *domainName;
@property(copy, nonatomic) NSURL *domainIconURI;
@property(copy, nonatomic) NSString *domainDisplayName;
@property(copy, nonatomic) NSString *domainAlternateDisplayName;
- (id)encodedClassName;	// IMP=0x0000000000036903
- (id)groupIdentifier;	// IMP=0x00000000000368ef

@end

