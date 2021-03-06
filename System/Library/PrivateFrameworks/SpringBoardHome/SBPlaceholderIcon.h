//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, SBIcon;

@interface SBPlaceholderIcon
{
    id _nodeIdentifier;	// 8 = 0x8
    SBIcon *_icon;	// 16 = 0x10
    NSArray *_icons;	// 24 = 0x18
}

+ (_Bool)hasIconImage;	// IMP=0x000000000028b25e
+ (id)clusteredIconPlaceholderForIcons:(id)arg1;	// IMP=0x000000000028afac
+ (id)grabbedIconPlaceholderForIcons:(id)arg1;	// IMP=0x000000000028ad3f
+ (id)grabbedIconPlaceholderForIcon:(id)arg1;	// IMP=0x000000000028ac68
+ (id)placeholderForIcon:(id)arg1;	// IMP=0x000000000028ab78
+ (id)placeholderNodeIdentifierForIconNodeIdentifier:(id)arg1;	// IMP=0x000000000028ab27
+ (id)placeholderNodeIdentifierForIcon:(id)arg1;	// IMP=0x000000000028aa5a
- (void).cxx_destruct;	// IMP=0x000000000028b560
- (id)folder;	// IMP=0x000000000028b510
- (_Bool)canReceiveGrabbedIcon;	// IMP=0x000000000028b508
- (_Bool)isUninstallSupported;	// IMP=0x000000000028b500
- (id)gridCellImage;	// IMP=0x000000000028b4f8
- (void)updateReferencedIcons:(id)arg1;	// IMP=0x000000000028b4c4
- (_Bool)referencesIconWithIdentifier:(id)arg1;	// IMP=0x000000000028b378
- (_Bool)referencesIcon:(id)arg1;	// IMP=0x000000000028b34a
@property(readonly, copy, nonatomic) NSArray *referencedIcons;
@property(readonly, nonatomic) SBIcon *referencedIcon;
- (_Bool)isPlaceholder;	// IMP=0x000000000028b266
- (id)genericIconImageWithInfo:(struct SBIconImageInfo)arg1;	// IMP=0x000000000028b256
- (id)generateIconImageWithInfo:(struct SBIconImageInfo)arg1;	// IMP=0x000000000028b24e
- (id)automationID;	// IMP=0x000000000028b22e
- (id)nodeIdentifier;	// IMP=0x000000000028b219
- (id)_initWithNodeIdentifier:(id)arg1 icons:(id)arg2;	// IMP=0x000000000028a849
- (id)_initWithNodeIdentifier:(id)arg1 icon:(id)arg2;	// IMP=0x000000000028a783

@end

