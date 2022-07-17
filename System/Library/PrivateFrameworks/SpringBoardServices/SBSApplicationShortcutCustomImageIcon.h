//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface SBSApplicationShortcutCustomImageIcon
{
    _Bool _isTemplate;	// 8 = 0x8
    NSData *_imageData;	// 16 = 0x10
    long long _dataType;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000030cdd
@property(readonly, nonatomic) _Bool isTemplate; // @synthesize isTemplate=_isTemplate;
@property(readonly, nonatomic) long long dataType; // @synthesize dataType=_dataType;
@property(readonly, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(readonly, nonatomic) NSData *imagePNGData;
- (void)encodeWithXPCDictionary:(id)arg1;	// IMP=0x0000000000030bb4
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x0000000000030a74
- (unsigned long long)hash;	// IMP=0x0000000000030991
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003071f
- (id)_initForSubclass;	// IMP=0x000000000003068e
- (id)initWithImagePNGData:(id)arg1;	// IMP=0x0000000000030677
- (id)initWithImageData:(id)arg1 dataType:(long long)arg2;	// IMP=0x0000000000030662
- (id)initWithImageData:(id)arg1 dataType:(long long)arg2 isTemplate:(_Bool)arg3;	// IMP=0x00000000000305d0

@end
