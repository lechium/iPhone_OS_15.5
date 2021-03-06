//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SUScriptAccount;

@interface SUScriptAMSViewController
{
    NSString *_DSID;	// 80 = 0x50
    NSString *_URL;	// 88 = 0x58
    SUScriptAccount *_primaryAccount;	// 96 = 0x60
}

+ (void)initialize;	// IMP=0x000000000012e99a
+ (id)webScriptNameForSelector:(SEL)arg1;	// IMP=0x000000000012e899
+ (id)webScriptNameForKeyName:(id)arg1;	// IMP=0x000000000012e80f
- (void).cxx_destruct;	// IMP=0x000000000012ea34
@property(retain, nonatomic) SUScriptAccount *primaryAccount; // @synthesize primaryAccount=_primaryAccount;
- (id)scriptAttributeKeys;	// IMP=0x000000000012e913
- (id)attributeKeys;	// IMP=0x000000000012e901
@property(copy, nonatomic) NSString *URL; // @synthesize URL=_URL;
@property(copy, nonatomic) NSString *DSID; // @synthesize DSID=_DSID;
- (id)_className;	// IMP=0x000000000012e590
- (id)newNativeViewController;	// IMP=0x000000000012df7c
- (id)initWithPrimaryAccount:(id)arg1;	// IMP=0x000000000012df0e

@end

