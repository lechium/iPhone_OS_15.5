//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTCacheableResource-Protocol.h>

@class AVTPreset, NSString;

@interface AVTPresetResources : NSObject <AVTCacheableResource>
{
    AVTPreset *_preset;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000d1504
@property(readonly, nonatomic) AVTPreset *preset; // @synthesize preset=_preset;
- (_Bool)requiresEncryption;	// IMP=0x00000000000d14f2
- (unsigned long long)costForScope:(id)arg1;	// IMP=0x00000000000d14e7
- (id)volatileIdentifierForScope:(id)arg1;	// IMP=0x00000000000d1419
@property(readonly, nonatomic) id resources;
@property(readonly, copy, nonatomic) NSString *presetIdentifier;
- (id)initWithPreset:(id)arg1;	// IMP=0x00000000000d12f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

