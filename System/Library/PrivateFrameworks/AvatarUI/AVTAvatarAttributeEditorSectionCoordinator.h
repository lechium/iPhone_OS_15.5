//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTAvatarAttributeEditorControllerSubSelectionDelegate-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol AVTAvatarAttributeEditorControllerSubSelectionDelegate;

@interface AVTAvatarAttributeEditorSectionCoordinator : NSObject <AVTAvatarAttributeEditorControllerSubSelectionDelegate>
{
    id <AVTAvatarAttributeEditorControllerSubSelectionDelegate> _delegate;	// 8 = 0x8
    NSMutableDictionary *_sectionControllers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000dadeb
@property(retain, nonatomic) NSMutableDictionary *sectionControllers; // @synthesize sectionControllers=_sectionControllers;
@property(nonatomic) __weak id <AVTAvatarAttributeEditorControllerSubSelectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)attributeEditorSectionControllerNeedsLayoutUpdate:(id)arg1;	// IMP=0x00000000000dad37
- (void)attributeEditorSectionController:(id)arg1 didUpdateSectionItem:(id)arg2;	// IMP=0x00000000000daae4
- (void)attributeEditorSectionController:(id)arg1 didSelectSectionItem:(id)arg2;	// IMP=0x00000000000daa5e
- (void)attributeEditorSectionController:(id)arg1 didDeleteSectionItems:(id)arg2;	// IMP=0x00000000000da9d8
- (void)removeSectionController:(id)arg1;	// IMP=0x00000000000da913
- (void)addSectionController:(id)arg1;	// IMP=0x00000000000da839
- (_Bool)isCoordinatingForSectionController:(id)arg1;	// IMP=0x00000000000da774
- (id)init;	// IMP=0x00000000000da70e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
