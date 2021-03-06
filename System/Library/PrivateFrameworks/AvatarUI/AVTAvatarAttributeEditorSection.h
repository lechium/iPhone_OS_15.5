//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTAvatarAttributeEditorSection-Protocol.h>

@class AVTAvatarAttributeEditorSectionOptions, NSArray, NSString;
@protocol AVTAvatarAttributeEditorSectionSupplementalPicker;

@interface AVTAvatarAttributeEditorSection : NSObject <AVTAvatarAttributeEditorSection>
{
    _Bool _shouldDisplayInsetSeparatorAfterSection;	// 8 = 0x8
    NSArray *_sectionItems;	// 16 = 0x10
    NSString *_localizedName;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
    id <AVTAvatarAttributeEditorSectionSupplementalPicker> _supplementalPicker;	// 40 = 0x28
    AVTAvatarAttributeEditorSectionOptions *_options;	// 48 = 0x30
    unsigned long long _intendedDestination;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000006e140
@property(nonatomic) _Bool shouldDisplayInsetSeparatorAfterSection; // @synthesize shouldDisplayInsetSeparatorAfterSection=_shouldDisplayInsetSeparatorAfterSection;
@property(nonatomic) unsigned long long intendedDestination; // @synthesize intendedDestination=_intendedDestination;
@property(readonly, nonatomic) AVTAvatarAttributeEditorSectionOptions *options; // @synthesize options=_options;
@property(retain, nonatomic) id <AVTAvatarAttributeEditorSectionSupplementalPicker> supplementalPicker; // @synthesize supplementalPicker=_supplementalPicker;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(readonly, copy, nonatomic) NSArray *sectionItems; // @synthesize sectionItems=_sectionItems;
@property(readonly, copy, nonatomic) NSArray *sections;
@property(readonly, nonatomic) struct UIEdgeInsets separatorInsets;
- (_Bool)shouldDisplaySeparatorBeforeSection:(id)arg1;	// IMP=0x000000000006dfaf
- (_Bool)shouldDisplayTitle;	// IMP=0x000000000006df2f
@property(readonly, copy) NSString *description;
- (id)initWithSectionItems:(id)arg1 localizedName:(id)arg2 identifier:(id)arg3 intendedDestination:(unsigned long long)arg4 options:(id)arg5;	// IMP=0x000000000006dbed

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

