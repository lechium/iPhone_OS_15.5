//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SASTTemplateItem-Protocol.h>

@class NSString, SADecoratedString;

@interface SASTBodyTextItem <SASTTemplateItem>
{
}

+ (id)bodyTextItemWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000039ab5
+ (id)bodyTextItem;	// IMP=0x0000000000039aa3
@property(copy, nonatomic) NSString *position;
@property(retain, nonatomic) SADecoratedString *decoratedBodyText;
@property(copy, nonatomic) NSString *bodyText;
@property(copy, nonatomic) NSString *alignment;
- (id)encodedClassName;	// IMP=0x0000000000039a96
- (id)groupIdentifier;	// IMP=0x0000000000039a82

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

