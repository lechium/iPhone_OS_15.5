//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface PBContextMenuPasteButtonTag
{
    unsigned long long _variantIndex;	// 8 = 0x8
    struct CGSize _size;	// 16 = 0x10
    struct CGPoint _titleOrigin;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000037a2
@property(readonly) struct CGPoint titleOrigin; // @synthesize titleOrigin=_titleOrigin;
@property(readonly) struct CGSize size; // @synthesize size=_size;
@property(readonly) unsigned long long variantIndex; // @synthesize variantIndex=_variantIndex;
- (id)_acceptCalloutBarPasteButtonTagVisit:(CDUnknownBlockType)arg1 systemInputAssistantPasteButtonTagVisit:(CDUnknownBlockType)arg2 undoInteractionHUDIconPasteButtonTagVisit:(CDUnknownBlockType)arg3 undoInteractionHUDTextPasteButtonTagVisit:(CDUnknownBlockType)arg4 contextMenuPasteButtonTagVisit:(CDUnknownBlockType)arg5;	// IMP=0x00000000000037aa
- (id)resolvedStyleForStyle:(id)arg1;	// IMP=0x00000000000036f0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000003622
- (unsigned long long)hash;	// IMP=0x000000000000354f
- (unsigned long long)grade;	// IMP=0x000000000000343f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000003372
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000329c
- (id)initWithVariantIndex:(unsigned long long)arg1 size:(struct CGSize)arg2 titleOrigin:(struct CGPoint)arg3;	// IMP=0x000000000000320c

@end

