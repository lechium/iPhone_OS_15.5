//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface AVPlayerMediaSelectionCriteria : NSObject
{
    void *_criteriaInternal;	// 8 = 0x8
}

- (id)description;	// IMP=0x0000000000123cd6
- (_Bool)precludeMultichannelAudio;	// IMP=0x0000000000123c9a
- (_Bool)preferMultichannelAudio;	// IMP=0x0000000000123c5e
- (id)precludedMediaSubTypes;	// IMP=0x0000000000123c20
- (id)preferredMediaSubTypes;	// IMP=0x0000000000123be2
@property(readonly, nonatomic) NSArray *principalMediaCharacteristics;
@property(readonly, nonatomic) NSArray *preferredMediaCharacteristics;
@property(readonly, nonatomic) NSArray *preferredLanguages;
- (void)dealloc;	// IMP=0x0000000000123ace
- (id)initWithPreferredLanguages:(id)arg1 preferredMediaCharacteristics:(id)arg2 fallbackPreferredLanguages:(id)arg3 fallbackPreferredMediaCharacteristics:(id)arg4 captionDisplayType:(long long)arg5;	// IMP=0x00000000001239c9
- (id)initWithPreferredLanguages:(id)arg1 preferredMediaCharacteristics:(id)arg2 preferredMediaSubTypes:(id)arg3 precludedMediaSubTypes:(id)arg4 preferMultichannelAudio:(_Bool)arg5 precludeMultichannelAudio:(_Bool)arg6;	// IMP=0x00000000001238ed
- (id)initWithPreferredLanguages:(id)arg1 preferredMediaCharacteristics:(id)arg2 preferredMediaSubTypes:(id)arg3 precludedMediaSubTypes:(id)arg4;	// IMP=0x00000000001235d5
- (id)initWithPrincipalMediaCharacteristics:(id)arg1 preferredLanguages:(id)arg2 preferredMediaCharacteristics:(id)arg3;	// IMP=0x00000000001234c6
- (id)initWithPreferredLanguages:(id)arg1 preferredMediaCharacteristics:(id)arg2;	// IMP=0x0000000000123098
- (id)init;	// IMP=0x0000000000122f98
- (id)initWithFigDictionary:(id)arg1;	// IMP=0x0000000000124005
- (id)figDictionary;	// IMP=0x0000000000123fca

@end

