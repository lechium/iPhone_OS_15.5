//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SASTTemplateItem-Protocol.h>

@class NSString, NSURL, SAUIDecoratedText;

@interface SASTMessageItem <SASTTemplateItem>
{
}

+ (id)messageItemWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000000be24
+ (id)messageItem;	// IMP=0x000000000000be12
@property(copy, nonatomic) NSString *serviceType;
@property(retain, nonatomic) SAUIDecoratedText *recipient;
@property(retain, nonatomic) SAUIDecoratedText *content;
@property(copy, nonatomic) NSString *bundleId;
@property(copy, nonatomic) NSURL *audioMessageURL;
- (id)encodedClassName;	// IMP=0x000000000000be05
- (id)groupIdentifier;	// IMP=0x000000000000bdf1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
