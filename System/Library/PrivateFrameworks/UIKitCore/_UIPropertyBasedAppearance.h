//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _UIPropertyBasedAppearance
{
    NSDictionary *_propertiesToMatch;	// 40 = 0x28
}

+ (id)_appearanceMatchingProperties:(id)arg1 forClass:(Class)arg2 withContainerList:(id)arg3;	// IMP=0x00000000007ed38f
+ (id)_appearanceObjectKeyForProperties:(id)arg1;	// IMP=0x00000000007ed1db
@property(retain, nonatomic, setter=_setPropertiesToMatch:) NSDictionary *_propertiesToMatch; // @synthesize _propertiesToMatch;
- (_Bool)_isRecordingInvocations;	// IMP=0x00000000007ed678
- (_Bool)_isValidAppearanceForCustomizableObject:(id)arg1;	// IMP=0x00000000007ed4c6
- (void)dealloc;	// IMP=0x00000000007ed484

@end

