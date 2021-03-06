//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItemModule.h>

@class HFItem, NSSet, NSString;
@protocol HFMediaProfileContainer, HUHomeTheaterAudioItemModuleDelegate;

@interface HUHomeTheaterAudioItemModule : HFItemModule
{
    _Bool _includeLocalDestinations;	// 8 = 0x8
    _Bool _disableAutomaticCommit;	// 9 = 0x9
    NSSet *_itemProviders;	// 16 = 0x10
    id <HFMediaProfileContainer> _mediaProfileContainer;	// 24 = 0x18
    id <HUHomeTheaterAudioItemModuleDelegate> _delegate;	// 32 = 0x20
    NSString *_tappedDestinationIdentifier;	// 40 = 0x28
    HFItem *_selectedUncommittedItem;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000020b75c
@property(nonatomic) _Bool disableAutomaticCommit; // @synthesize disableAutomaticCommit=_disableAutomaticCommit;
@property(readonly, nonatomic) _Bool includeLocalDestinations; // @synthesize includeLocalDestinations=_includeLocalDestinations;
@property(readonly, nonatomic) __weak HFItem *selectedUncommittedItem; // @synthesize selectedUncommittedItem=_selectedUncommittedItem;
@property(retain, nonatomic) NSString *tappedDestinationIdentifier; // @synthesize tappedDestinationIdentifier=_tappedDestinationIdentifier;
@property(nonatomic) __weak id <HUHomeTheaterAudioItemModuleDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <HFMediaProfileContainer> mediaProfileContainer; // @synthesize mediaProfileContainer=_mediaProfileContainer;
- (id)itemProviders;	// IMP=0x000000000020b69f
- (id)_updateDestinationToIdentifier:(id)arg1;	// IMP=0x000000000020b1b6
- (void)selectItem:(id)arg1;	// IMP=0x000000000020ae34
- (id)commitConfiguration;	// IMP=0x000000000020ad7d
- (id)buildSectionsWithDisplayedItems:(id)arg1;	// IMP=0x000000000020aa11
- (void)_createItemProviders;	// IMP=0x000000000020a750
- (id)initWithItemUpdater:(id)arg1 mediaProfileContainer:(id)arg2 includeLocalDestinations:(_Bool)arg3;	// IMP=0x000000000020a60c

@end

