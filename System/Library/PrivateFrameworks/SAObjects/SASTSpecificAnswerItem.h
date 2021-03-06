//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SASTTemplateItem-Protocol.h>

@class NSString, SAUIDecoratedText;

@interface SASTSpecificAnswerItem <SASTTemplateItem>
{
}

+ (id)specificAnswerItemWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000002f261
+ (id)specificAnswerItem;	// IMP=0x000000000002f24f
@property(copy, nonatomic) NSString *value;
@property(copy, nonatomic) NSString *footer;
@property(retain, nonatomic) SAUIDecoratedText *decoratedValue;
@property(retain, nonatomic) SAUIDecoratedText *decoratedFooter;
- (id)encodedClassName;	// IMP=0x000000000002f242
- (id)groupIdentifier;	// IMP=0x000000000002f22e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

