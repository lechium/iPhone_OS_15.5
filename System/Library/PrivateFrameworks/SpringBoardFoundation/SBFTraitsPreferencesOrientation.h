//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/BSDescriptionProviding-Protocol.h>
#import <SpringBoardFoundation/NSCopying-Protocol.h>
#import <SpringBoardFoundation/NSMutableCopying-Protocol.h>

@class NSString;

@interface SBFTraitsPreferencesOrientation : NSObject <NSCopying, NSMutableCopying, BSDescriptionProviding>
{
    unsigned long long _supportedOrientations;	// 8 = 0x8
    long long _preferredOrientation;	// 16 = 0x10
    _Bool _canDetermineActiveOrientation;	// 24 = 0x18
}

@property(nonatomic) long long preferredOrientation; // @synthesize preferredOrientation=_preferredOrientation;
@property(nonatomic) unsigned long long supportedOrientations; // @synthesize supportedOrientations=_supportedOrientations;
@property(nonatomic) _Bool canDetermineActiveOrientation; // @synthesize canDetermineActiveOrientation=_canDetermineActiveOrientation;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000003603e
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000035fee
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000035f0b
- (id)succinctDescription;	// IMP=0x0000000000035ebb
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000035e54
@property(readonly, copy) NSString *description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000035e0a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000035dff
- (_Bool)isEqualToOrientationPreferences:(id)arg1;	// IMP=0x0000000000035d6e
- (id)init;	// IMP=0x0000000000035d5a
- (id)initWithOrientationPreferences:(id)arg1;	// IMP=0x0000000000035cc4
- (id)initWithSupportedMask:(unsigned long long)arg1 preferred:(long long)arg2 determinesActiveOrientation:(_Bool)arg3;	// IMP=0x0000000000035c71
- (id)initWithSupportedMask:(unsigned long long)arg1 determinesActiveOrientation:(_Bool)arg2;	// IMP=0x0000000000035c5a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

