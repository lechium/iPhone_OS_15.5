//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AVTAvatarAttributeEditorState : NSObject
{
    NSMutableDictionary *_pairedStates;	// 8 = 0x8
    NSMutableDictionary *_multicolorEnabledStates;	// 16 = 0x10
    NSMutableDictionary *_multicolorSelectedStates;	// 24 = 0x18
}

+ (id)buildStateFromCoreModel:(id)arg1 avatarConfiguration:(id)arg2;	// IMP=0x00000000000b567a
- (void).cxx_destruct;	// IMP=0x00000000000b66bc
@property(retain, nonatomic) NSMutableDictionary *multicolorSelectedStates; // @synthesize multicolorSelectedStates=_multicolorSelectedStates;
@property(retain, nonatomic) NSMutableDictionary *multicolorEnabledStates; // @synthesize multicolorEnabledStates=_multicolorEnabledStates;
@property(retain, nonatomic) NSMutableDictionary *pairedStates; // @synthesize pairedStates=_pairedStates;
- (void)setSelectedMulticolorSubpickersIndex:(long long)arg1 forMulticolorPickerIdentifier:(id)arg2;	// IMP=0x00000000000b65ce
- (long long)selectedMulticolorSubpickersIndexForMulticolorPickerIdentifier:(id)arg1;	// IMP=0x00000000000b6538
- (void)setEnabledMulticolorSubpickersIndex:(long long)arg1 forMulticolorPickerIdentifier:(id)arg2;	// IMP=0x00000000000b649b
- (long long)enabledMulticolorSubpickersIndexForMulticolorPickerIdentifier:(id)arg1;	// IMP=0x00000000000b6405
- (void)setCategory:(long long)arg1 inPairedState:(_Bool)arg2;	// IMP=0x00000000000b6359
- (_Bool)isCategoryPaired:(long long)arg1;	// IMP=0x00000000000b62b7
- (id)initWithPairedStates:(id)arg1 multicolorEnabledStates:(id)arg2 multicolorSelectedStates:(id)arg3;	// IMP=0x00000000000b61d1
- (id)init;	// IMP=0x00000000000b61b2

@end

