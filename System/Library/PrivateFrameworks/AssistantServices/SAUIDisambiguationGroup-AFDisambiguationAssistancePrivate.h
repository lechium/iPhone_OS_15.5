//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAUIDisambiguationGroup.h>

#import <AssistantServices/AFDisambiguationAssistancePrivate-Protocol.h>

@class AFDisambiguationInfo, NSData;

@interface SAUIDisambiguationGroup (AFDisambiguationAssistancePrivate) <AFDisambiguationAssistancePrivate>
- (void)af_saveItemSelection:(id)arg1 forType:(long long)arg2;	// IMP=0x00000000000b4ea5
- (id)af_assistedSelectionItem;	// IMP=0x00000000000b4e2d
@property(retain, nonatomic, setter=af_setDisambiguationInfo:) AFDisambiguationInfo *af_disambiguationInfo;
- (id)af_itemForIndexIdentifier:(id)arg1;	// IMP=0x00000000000b4bc5
- (id)af_indexIdentifierForItem:(id)arg1;	// IMP=0x00000000000b49bc
@property(readonly, nonatomic) NSData *af_disambiguationIdentifier;
@end

