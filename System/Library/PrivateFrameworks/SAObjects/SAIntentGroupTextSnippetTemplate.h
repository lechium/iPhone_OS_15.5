//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface SAIntentGroupTextSnippetTemplate
{
}

+ (id)textSnippetTemplateWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000002e36a
+ (id)textSnippetTemplate;	// IMP=0x000000000002e358
@property(nonatomic) _Bool showsDisclosureIndicator;
@property(copy, nonatomic) NSArray *labelComponents;
@property(copy, nonatomic) NSString *detailText;
@property(copy, nonatomic) NSString *alignment;
- (id)encodedClassName;	// IMP=0x000000000002e34b
- (id)groupIdentifier;	// IMP=0x000000000002e337

@end
