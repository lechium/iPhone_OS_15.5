//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SASTTemplateItem-Protocol.h>

@class NSString, SAUIDecoratedText;

@interface SASTLineDetailItem <SASTTemplateItem>
{
}

+ (id)lineDetailItemWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000001154b
+ (id)lineDetailItem;	// IMP=0x0000000000011539
@property(retain, nonatomic) SAUIDecoratedText *title;
- (id)encodedClassName;	// IMP=0x000000000001152c
- (id)groupIdentifier;	// IMP=0x0000000000011518

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

