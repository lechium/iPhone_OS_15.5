//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@interface _ICQDetailFollowupSpecification
{
    NSDictionary *_lockScreenInfo;	// 8 = 0x8
    NSDictionary *_followUpInfo;	// 16 = 0x10
    NSDictionary *_mesgTemplates;	// 24 = 0x18
    NSDictionary *_titleTemplates;	// 32 = 0x20
    NSDictionary *_subTitleTemplates;	// 40 = 0x28
    NSDictionary *_followupMesgTemplates;	// 48 = 0x30
    NSDictionary *_followupTitleTemplates;	// 56 = 0x38
    NSString *_bundleId;	// 64 = 0x40
}

+ (id)replaceWordsIn:(id)arg1 with:(id)arg2;	// IMP=0x0000000000033549
- (void).cxx_destruct;	// IMP=0x0000000000034315
@property(retain, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(retain, nonatomic) NSDictionary *followupTitleTemplates; // @synthesize followupTitleTemplates=_followupTitleTemplates;
@property(retain, nonatomic) NSDictionary *followupMesgTemplates; // @synthesize followupMesgTemplates=_followupMesgTemplates;
@property(retain, nonatomic) NSDictionary *subTitleTemplates; // @synthesize subTitleTemplates=_subTitleTemplates;
@property(retain, nonatomic) NSDictionary *titleTemplates; // @synthesize titleTemplates=_titleTemplates;
@property(retain, nonatomic) NSDictionary *mesgTemplates; // @synthesize mesgTemplates=_mesgTemplates;
@property(retain, nonatomic) NSDictionary *followUpInfo; // @synthesize followUpInfo=_followUpInfo;
@property(retain, nonatomic) NSDictionary *lockScreenInfo; // @synthesize lockScreenInfo=_lockScreenInfo;
- (void)postFollowupWithController:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003398d
- (id)mesgWithKey:(id)arg1;	// IMP=0x00000000000338b7
- (id)subTitleWithKey:(id)arg1;	// IMP=0x00000000000337e1
- (id)titleWithKey:(id)arg1;	// IMP=0x000000000003370b
- (id)initWithServerDictionary:(id)arg1;	// IMP=0x00000000000327eb

@end

