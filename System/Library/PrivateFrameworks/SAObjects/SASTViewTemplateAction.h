//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SASTTemplateAction-Protocol.h>

@class NSArray, NSString, SASTItemGroup;

@interface SASTViewTemplateAction <SASTTemplateAction>
{
}

+ (id)viewTemplateActionWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x00000000000350b6
+ (id)viewTemplateAction;	// IMP=0x00000000000350a4
@property(copy, nonatomic) NSString *viewTitle;
@property(retain, nonatomic) SASTItemGroup *itemGroupView;
@property(copy, nonatomic) NSArray *commands;
- (id)encodedClassName;	// IMP=0x0000000000035097
- (id)groupIdentifier;	// IMP=0x0000000000035083

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

