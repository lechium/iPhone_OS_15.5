//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SAUIConfirmationOptions, SAUISash;

@interface SAUISnippet
{
}

+ (id)snippetWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x00000000000086a2
+ (id)snippet;	// IMP=0x0000000000008690
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *summaryTitle;
@property(copy, nonatomic) NSString *subtitle;
@property(retain, nonatomic) SAUISash *sash;
@property(retain, nonatomic) SAUIConfirmationOptions *confirmationOptions;
@property(nonatomic) long long category;
- (id)encodedClassName;	// IMP=0x0000000000008683
- (id)groupIdentifier;	// IMP=0x000000000000866f

@end

