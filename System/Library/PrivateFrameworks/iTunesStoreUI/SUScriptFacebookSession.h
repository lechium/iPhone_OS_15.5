//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SUScriptAppleAccount;

@interface SUScriptFacebookSession
{
    SUScriptAppleAccount *_account;	// 72 = 0x48
}

+ (void)initialize;	// IMP=0x00000000001293d4
+ (id)webScriptNameForSelector:(SEL)arg1;	// IMP=0x000000000012930b
+ (id)webScriptNameForKeyName:(id)arg1;	// IMP=0x00000000001292b7
- (id)scriptAttributeKeys;	// IMP=0x0000000000129371
- (id)attributeKeys;	// IMP=0x000000000012935f
@property(readonly) unsigned long long likeStatusFlagMe;
@property(readonly) unsigned long long likeStatusFlagGlobalCount;
@property(readonly) unsigned long long likeStatusFlagFriends;
@property(readonly) unsigned long long likeStatusFlagFriendCount;
@property(readonly) id hasAccounts;
- (id)_className;	// IMP=0x0000000000129208
- (void)unlikeURL:(id)arg1 completionFunction:(id)arg2;	// IMP=0x0000000000128fd2
- (void)likeURL:(id)arg1 completionFunction:(id)arg2;	// IMP=0x0000000000128c99
- (void)fetchLikeStatusForURL:(id)arg1 flags:(id)arg2 completionFunction:(id)arg3;	// IMP=0x0000000000128844
- (void)dealloc;	// IMP=0x0000000000128802
- (id)initWithAppleAccount:(id)arg1;	// IMP=0x00000000001287ab

@end
