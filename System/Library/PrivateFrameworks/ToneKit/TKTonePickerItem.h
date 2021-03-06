//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ToneKit/TKPickerContainerItem-Protocol.h>

@class NSArray, NSString, TKTonePickerSectionItem;

@interface TKTonePickerItem <TKPickerContainerItem>
{
    _Bool _needsRoomForCheckmark;	// 8 = 0x8
    _Bool _needsActivityIndicator;	// 9 = 0x9
    _Bool _needsDownloadProgress;	// 10 = 0xa
    float _downloadProgress;	// 12 = 0xc
    unsigned long long _itemKind;	// 16 = 0x10
    TKTonePickerSectionItem *_parentSectionItem;	// 24 = 0x18
    NSArray *_childrenToneClassicsPickerItems;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001ba2a
@property(copy, nonatomic, setter=_setChildrenToneClassicsPickerItems:) NSArray *childrenToneClassicsPickerItems; // @synthesize childrenToneClassicsPickerItems=_childrenToneClassicsPickerItems;
@property(nonatomic, setter=_setDownloadProgress:) float downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(nonatomic, setter=_setNeedsDownloadProgress:) _Bool needsDownloadProgress; // @synthesize needsDownloadProgress=_needsDownloadProgress;
@property(nonatomic, setter=_setNeedsActivityIndicator:) _Bool needsActivityIndicator; // @synthesize needsActivityIndicator=_needsActivityIndicator;
@property(nonatomic, setter=_setNeedsRoomForCheckmark:) _Bool needsRoomForCheckmark; // @synthesize needsRoomForCheckmark=_needsRoomForCheckmark;
@property(nonatomic, setter=_setParentSectionItem:) __weak TKTonePickerSectionItem *parentSectionItem; // @synthesize parentSectionItem=_parentSectionItem;
@property(nonatomic, setter=_setItemKind:) unsigned long long itemKind; // @synthesize itemKind=_itemKind;
- (void)_appendDescriptionOfAttributesToString:(id)arg1;	// IMP=0x000000000001b893
- (id)childItemAtIndex:(long long)arg1;	// IMP=0x000000000001b834
@property(readonly, nonatomic) long long numberOfChildren;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

