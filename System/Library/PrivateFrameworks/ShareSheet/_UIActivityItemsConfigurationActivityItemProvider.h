//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LPLinkMetadata;
@protocol UIActivityItemsConfigurationReading;

@interface _UIActivityItemsConfigurationActivityItemProvider
{
    id <UIActivityItemsConfigurationReading> _activityItemsConfiguration;	// 8 = 0x8
    id _item;	// 16 = 0x10
    LPLinkMetadata *_linkMetadata;	// 24 = 0x18
    long long _sourceIndex;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000003aece
- (id)activityViewControllerLinkMetadata:(id)arg1;	// IMP=0x000000000003ad6b
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;	// IMP=0x000000000003ad59
- (id)_title;	// IMP=0x000000000003ac3a
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;	// IMP=0x000000000003ac25
- (id)item;	// IMP=0x000000000003ac10
- (id)initWithActivityItemsConfiguration:(id)arg1 itemAtSourceIndex:(long long)arg2;	// IMP=0x000000000003aaca

@end

