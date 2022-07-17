//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SBAppLayout, SBDisplayItem, UIImage, XBApplicationSnapshot;

@interface SBAppSwitcherSnapshotCacheEntry : NSObject
{
    _Bool _fromFullSizeSnapshotRequest;	// 8 = 0x8
    _Bool _needsUpdate;	// 9 = 0x9
    SBAppLayout *_appLayout;	// 16 = 0x10
    SBDisplayItem *_displayItem;	// 24 = 0x18
    XBApplicationSnapshot *_snapshot;	// 32 = 0x20
    UIImage *_snapshotImage;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000031a31
@property(nonatomic) _Bool needsUpdate; // @synthesize needsUpdate=_needsUpdate;
@property(nonatomic) _Bool fromFullSizeSnapshotRequest; // @synthesize fromFullSizeSnapshotRequest=_fromFullSizeSnapshotRequest;
@property(retain, nonatomic) UIImage *snapshotImage; // @synthesize snapshotImage=_snapshotImage;
@property(retain, nonatomic) XBApplicationSnapshot *snapshot; // @synthesize snapshot=_snapshot;
@property(retain, nonatomic) SBDisplayItem *displayItem; // @synthesize displayItem=_displayItem;
@property(retain, nonatomic) SBAppLayout *appLayout; // @synthesize appLayout=_appLayout;
- (_Bool)_matchesAppLayout:(id)arg1 displayItem:(id)arg2;	// IMP=0x000000000050e87d
@property(readonly, nonatomic) long long role;
- (id)description;	// IMP=0x000000000050e754

@end
